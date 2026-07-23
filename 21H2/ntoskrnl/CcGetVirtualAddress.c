/*
 * XREFs of CcGetVirtualAddress @ 0x14032BC60
 * Callers:
 *     CcPrepareMdlWrite @ 0x14024ACC0 (CcPrepareMdlWrite.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F9EE4 (CcPurgeAndClearCacheSection.c)
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     CcMapDataCommon @ 0x1405F3814 (CcMapDataCommon.c)
 *     CcMdlRead @ 0x1406AAE90 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x140706930 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x140706BF0 (CcMapData.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     CcGetVacbMiss @ 0x14031B710 (CcGetVacbMiss.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     CcInsertVacbArray @ 0x1403796E4 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x14037A98C (CcAllocateInitializeVacbArray.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CcBuildUpHighPriorityMappings @ 0x1404EB1B4 (CcBuildUpHighPriorityMappings.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetVirtualAddress(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        _DWORD *SchedulerAssist,
        int a5,
        int a6)
{
  __int64 v6; // r15
  __int64 v7; // r8
  unsigned int v8; // r13d
  __int64 v10; // rbx
  __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  ULONG_PTR *v17; // rbx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  int v20; // eax
  unsigned int v21; // r12d
  int v22; // esi
  __int64 v23; // r8
  __int64 v24; // r10
  volatile signed __int32 *VacbMiss; // rsi
  __int64 v26; // rax
  __int16 v27; // bp
  __int64 v29; // r11
  int v30; // edx
  int v31; // ecx
  int v32; // r9d
  __int64 v33; // rax
  _DWORD *v34; // rcx
  unsigned int v35; // r8d
  __int64 *v36; // rdx
  __int64 InitializeVacbArray; // rax
  __int64 v38; // r12
  KIRQL v39; // si
  int v40; // eax
  int v41; // eax
  bool v42; // zf
  unsigned __int32 v43; // eax
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  int v49; // [rsp+30h] [rbp-68h]
  int v50; // [rsp+34h] [rbp-64h]
  __int64 v51; // [rsp+38h] [rbp-60h] BYREF
  __int64 v52; // [rsp+40h] [rbp-58h] BYREF
  __int64 v53; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v55; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v56; // [rsp+A8h] [rbp+10h]
  volatile signed __int32 **v57; // [rsp+B0h] [rbp+18h]
  _DWORD *v58; // [rsp+B8h] [rbp+20h]

  v58 = SchedulerAssist;
  v57 = a3;
  v6 = *(_QWORD *)(a1 + 528);
  v7 = 0LL;
  v50 = 0;
  v8 = a2 & 0x3FFFF;
  v10 = a2 - (a2 & 0x3FFFF);
  v51 = v10;
  if ( *(_QWORD *)(a1 + 168) )
  {
    v12 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      v7 = 0LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C9C0, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v55 = 0;
      v15 = CurrentPrcb->SchedulerAssist;
      if ( v15 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v40 = v15[6];
          v15[6] = v40 + 1;
          if ( v40 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v7 = 0LL;
          }
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C9C0, 0x1Fu) )
      {
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v41 = v34[6] - 1;
            v34[6] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v55 = ExpWaitForSpinLockExclusiveAndAcquire(
                (unsigned __int64)&dword_140C4C9C0,
                CurrentIrql,
                v7,
                SchedulerAssist);
        v7 = 0LL;
      }
      v16 = (unsigned int)dword_140C4C9C0;
      if ( (dword_140C4C9C0 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v16 & 0x40000000) == 0 )
          {
            v43 = _InterlockedCompareExchange(&dword_140C4C9C0, v16 | 0x40000000, v16);
            v42 = (_DWORD)v16 == v43;
            v16 = v43;
            if ( !v42 )
              continue;
          }
          KeYieldProcessorEx(&v55, v16, v7, (__int64)SchedulerAssist);
          v16 = (unsigned int)dword_140C4C9C0;
        }
        while ( (v16 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v12 )
      v17 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)v12 + 60LL) & 0x3FF));
    else
      v17 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C9C0, retaddr);
    else
      dword_140C4C9C0 = 0;
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v44 = v19[6] - 1;
        v19[6] = v44;
        if ( !v44 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v42 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v6 != *(_QWORD *)(v17[22] + 8) )
      KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v10 = v51;
  }
  v20 = *(_DWORD *)(a1 + 152) & 0x200;
  v21 = v20 != 0;
  v56 = v21;
  if ( v20 || a5 )
  {
    v22 = 1;
    v49 = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 || *(_DWORD *)(v6 + 920) >= 0x80u )
      goto LABEL_17;
  }
  else
  {
    v22 = 0;
    v49 = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 )
      goto LABEL_17;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v38 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v22 == 1 )
      CcBuildUpHighPriorityMappings(v6, InitializeVacbArray);
    v39 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v6, v38);
    KeReleaseQueuedSpinLock(4uLL, v39);
  }
  v21 = v56;
LABEL_17:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x56CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  if ( a6
    || (*(_DWORD *)(a1 + 152) & 0x800200) == 0x200
    || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0
    || (v10 & 0xFFFFF) != 0
    || v10 < 0x100000
    || v10 == *(_QWORD *)(a1 + 336) )
  {
    v50 = 1;
  }
  v23 = *(_QWORD *)(a1 + 32);
  v24 = *(_QWORD *)(a1 + 88);
  if ( v23 > 0x2000000 )
  {
    v29 = a2;
    v30 = 0;
    v31 = 25;
    do
    {
      v32 = v31;
      v31 += 7;
      ++v30;
    }
    while ( v23 > 1LL << v31 );
    VacbMiss = *(volatile signed __int32 **)(v24 + 8 * (a2 >> v32));
    if ( !VacbMiss )
      goto LABEL_44;
    do
    {
      if ( !v30 )
        break;
      v33 = 1LL << v32;
      v32 -= 7;
      v29 &= v33 - 1;
      --v30;
      VacbMiss = *(volatile signed __int32 **)&VacbMiss[2 * (v29 >> v32)];
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(volatile signed __int32 **)(v24 + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  if ( VacbMiss )
  {
    v26 = *((_QWORD *)VacbMiss + 1);
    v27 = _InterlockedIncrement(VacbMiss + 4);
    if ( !v27 )
      KeBugCheckEx(0x34u, 0x9FFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( v27 == 1 )
      _InterlockedIncrement((volatile signed __int32 *)(v26 + 544));
    ExReleasePushLockEx(a1 + 104, 0LL);
    v10 = v51;
    goto LABEL_31;
  }
LABEL_44:
  ExReleasePushLockEx(a1 + 104, 0LL);
  VacbMiss = (volatile signed __int32 *)CcGetVacbMiss((_QWORD *)a1, a2, v21, v49);
  if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 0x200 && (v10 & 0xFFFFF) == 0 && v10 >= 0x100000 )
  {
    v10 -= 0x100000LL;
    v51 = v10;
    CcUnmapVacbArray(a1, &v51, 0x100000u, 1, 0, 0);
  }
LABEL_31:
  if ( !v50 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v10 >= 8650752 )
      {
        v51 = v10 - 0x800000;
        CcUnmapVacbArray(a1, &v51, 0x800000u, 1, 0, 0);
        goto LABEL_32;
      }
      v53 = 0x40000LL;
      v36 = &v53;
    }
    else
    {
      v35 = CcUnmapBehindLength;
      if ( v10 >= (unsigned int)CcUnmapBehindLength )
      {
        v36 = &v51;
        v51 = v10 - (unsigned int)CcUnmapBehindLength;
LABEL_53:
        CcUnmapVacbArray(a1, v36, v35, 1, 0, 0);
        goto LABEL_32;
      }
      v52 = 0LL;
      v36 = &v52;
    }
    v35 = v10;
    goto LABEL_53;
  }
LABEL_32:
  *v57 = VacbMiss;
  *v58 = 0x40000 - v8;
  return v8 + *(_QWORD *)VacbMiss;
}
