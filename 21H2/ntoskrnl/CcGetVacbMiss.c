/*
 * XREFs of CcGetVacbMiss @ 0x14031B710
 * Callers:
 *     CcGetVirtualAddress @ 0x14032BC60 (CcGetVirtualAddress.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     CcGetVacbLargeOffset @ 0x14022C898 (CcGetVacbLargeOffset.c)
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     CcSetVacbInFreeList @ 0x14031A94C (CcSetVacbInFreeList.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14031BA74 (CcReleaseBcbLockAndVacbLock.c)
 *     CcIncrementVacbActiveCount @ 0x14031BAB4 (CcIncrementVacbActiveCount.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14031BAF4 (CcAcquireBcbLockAndVacbLock.c)
 *     MmMapViewInSystemCache @ 0x14031BB30 (MmMapViewInSystemCache.c)
 *     CcGetVacbFromFreeList @ 0x14031DA40 (CcGetVacbFromFreeList.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     SetVacb @ 0x14031E6D0 (SetVacb.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CcUnmapInactiveViews @ 0x1404EB620 (CcUnmapInactiveViews.c)
 *     CcUnmapVacb @ 0x140701758 (CcUnmapVacb.c)
 */

_QWORD *__fastcall CcGetVacbMiss(_QWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // edi
  unsigned __int8 v5; // r12
  int v6; // r15d
  __int64 v9; // rbx
  __int64 Partition; // r14
  KIRQL v11; // si
  _QWORD *VacbFromFreeList; // rdi
  __int64 v13; // rdx
  NTSTATUS v14; // r14d
  __int64 VacbLargeOffset; // r15
  KIRQL v17; // si
  KIRQL v18; // si
  KIRQL v19; // si
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+10h]

  HIDWORD(v20) = HIDWORD(a2);
  v4 = 0;
  v23 = 0;
  v5 = 0;
  LODWORD(v20) = a2 - (a2 & 0x3FFFF);
  v6 = a4;
  v9 = v20;
  Partition = CcGetPartition(a1, 0, a3);
  v21 = Partition;
  while ( 1 )
  {
    v11 = KeAcquireQueuedSpinLock(4uLL);
    if ( v5 )
      v23 = v4 | 2;
    VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(Partition, v5);
    KeReleaseQueuedSpinLock(4uLL, v11);
    if ( VacbFromFreeList )
      break;
    while ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(Partition + 8), v13, 0LL, 0LL) )
    {
      v18 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(Partition, v5);
      KeReleaseQueuedSpinLock(4uLL, v18);
      if ( VacbFromFreeList )
        goto LABEL_5;
    }
    if ( v6 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v14 = -1073741670;
LABEL_35:
    if ( v5 || v6 != 1 )
      RtlRaiseStatus(v14);
    Partition = v21;
    v5 = 1;
    v4 = v23;
  }
LABEL_5:
  v22[0] = a1[4] - v9;
  if ( v22[0] > 0x40000 )
    LODWORD(v22[0]) = 0x40000;
  v14 = MmMapViewInSystemCache(a1[21], VacbFromFreeList, &v20, v22);
  CcAcquireBcbLockAndVacbLock(a3, a1);
  v9 = v20;
  if ( (__int64)a1[4] > 0x2000000 )
    VacbLargeOffset = CcGetVacbLargeOffset((__int64)a1, v20);
  else
    VacbLargeOffset = *(_QWORD *)(a1[11] + 8 * ((unsigned __int64)(unsigned int)v20 >> 18));
  if ( VacbLargeOffset )
    goto LABEL_12;
  if ( v14 < 0 )
    goto LABEL_29;
  if ( (unsigned __int8)SetVacb(a1, v9, VacbFromFreeList, 0LL) )
  {
LABEL_12:
    if ( v14 >= 0 )
    {
      if ( VacbLargeOffset )
      {
        CcIncrementVacbActiveCount(VacbLargeOffset);
        CcReleaseBcbLockAndVacbLock(a3, a1);
        CcUnmapVacb(VacbFromFreeList, a1, v23);
        v17 = KeAcquireQueuedSpinLock(4uLL);
        CcSetVacbInFreeList(v21, VacbFromFreeList, v5);
        KeReleaseQueuedSpinLock(4uLL, v17);
        VacbFromFreeList = (_QWORD *)VacbLargeOffset;
      }
      else
      {
        if ( VacbFromFreeList[1] != -1LL )
          KeBugCheckEx(0x34u, 0x770uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        VacbFromFreeList[1] = a1;
        VacbFromFreeList[2] = v9;
        CcIncrementVacbActiveCount(VacbFromFreeList);
        if ( v9 >= a1[46] )
          a1[46] = v9 + 0x40000;
        CcReleaseBcbLockAndVacbLock(a3, a1);
      }
      goto LABEL_18;
    }
  }
  else
  {
    v14 = -1073741670;
    CcUnmapVacb(VacbFromFreeList, a1, v23);
  }
LABEL_29:
  CcReleaseBcbLockAndVacbLock(a3, a1);
  if ( v5 )
    ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
  else
    *VacbFromFreeList = 0LL;
  v19 = KeAcquireQueuedSpinLock(4uLL);
  CcSetVacbInFreeList(v21, VacbFromFreeList, v5);
  KeReleaseQueuedSpinLock(4uLL, v19);
  VacbFromFreeList = 0LL;
  if ( !FsRtlIsNtstatusExpected(v14) )
  {
    v14 = -1073741589;
    goto LABEL_34;
  }
LABEL_18:
  if ( v14 < 0 )
  {
LABEL_34:
    v6 = a4;
    goto LABEL_35;
  }
  return VacbFromFreeList;
}
