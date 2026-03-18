/*
 * XREFs of CcGetVirtualAddress @ 0x1402A4660
 * Callers:
 *     CcPinFileData @ 0x1402A2D80 (CcPinFileData.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     CcPurgeAndClearCacheSection @ 0x140316714 (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x14032B1B0 (CcPrepareMdlWrite.c)
 *     CcMapDataCommon @ 0x14064A544 (CcMapDataCommon.c)
 *     CcMdlRead @ 0x140657870 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x1406809D0 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x140680C90 (CcMapData.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CcGetVacbMiss @ 0x140297FA0 (CcGetVacbMiss.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x14029A450 (CcUnmapVacbArray.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     CcInsertVacbArray @ 0x140379994 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x14037ABF4 (CcAllocateInitializeVacbArray.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CcBuildUpHighPriorityMappings @ 0x1404E93E4 (CcBuildUpHighPriorityMappings.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetVirtualAddress(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        _DWORD *a4,
        int a5,
        int a6)
{
  __int64 v6; // r15
  unsigned int v7; // r13d
  __int64 v9; // rbx
  __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v14; // rcx
  signed __int32 v15; // edx
  ULONG_PTR *v16; // rbx
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int v19; // eax
  unsigned int v20; // r12d
  int v21; // esi
  __int64 v22; // r8
  __int64 v23; // r10
  volatile signed __int32 *VacbMiss; // rsi
  __int64 v25; // rax
  __int16 v26; // bp
  __int64 v28; // r11
  int v29; // edx
  int v30; // ecx
  int v31; // r9d
  __int64 v32; // rax
  _DWORD *v33; // rcx
  unsigned int v34; // r8d
  __int64 *v35; // rdx
  __int64 InitializeVacbArray; // rax
  __int64 v37; // r12
  KIRQL v38; // si
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  int v41; // eax
  bool v42; // zf
  signed __int32 v43; // eax
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

  v58 = a4;
  v57 = a3;
  v6 = *(_QWORD *)(a1 + 528);
  v50 = 0;
  v7 = a2 & 0x3FFFF;
  v9 = a2 - (a2 & 0x3FFFF);
  v51 = v9;
  if ( *(_QWORD *)(a1 + 168) )
  {
    v11 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C800, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v55 = 0;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v40 = v14[6];
          v14[6] = v40 + 1;
          if ( v40 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C800, 0x1Fu) )
      {
        v33 = CurrentPrcb->SchedulerAssist;
        if ( v33 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v41 = v33[6] - 1;
            v33[6] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v55 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140C4C800, CurrentIrql);
      }
      v15 = dword_140C4C800;
      while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v15 & 0x40000000) == 0 )
        {
          v43 = _InterlockedCompareExchange(&dword_140C4C800, v15 | 0x40000000, v15);
          v42 = v15 == v43;
          v15 = v43;
          if ( !v42 )
            continue;
        }
        KeYieldProcessorEx(&v55);
        v15 = dword_140C4C800;
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C800, retaddr);
    else
      dword_140C4C800 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v44 = v18[6] - 1;
        v18[6] = v44;
        if ( !v44 )
          KiRemoveSystemWorkPriorityKick(v17);
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
    if ( v6 != *(_QWORD *)(v16[22] + 8) )
      KeBugCheckEx(0x34u, 0x1313uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = v51;
  }
  v19 = *(_DWORD *)(a1 + 152) & 0x200;
  v20 = v19 != 0;
  v56 = v20;
  if ( v19 || a5 )
  {
    v21 = 1;
    v49 = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 || *(_DWORD *)(v6 + 920) >= 0x80u )
      goto LABEL_17;
  }
  else
  {
    v21 = 0;
    v49 = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 )
      goto LABEL_17;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v37 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v21 == 1 )
      CcBuildUpHighPriorityMappings(v6, InitializeVacbArray);
    v38 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v6, v37);
    KeReleaseQueuedSpinLock(4uLL, v38);
  }
  v20 = v56;
LABEL_17:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x56CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  if ( a6
    || (*(_DWORD *)(a1 + 152) & 0x800200) == 0x200
    || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0
    || (v9 & 0xFFFFF) != 0
    || v9 < 0x100000
    || v9 == *(_QWORD *)(a1 + 336) )
  {
    v50 = 1;
  }
  v22 = *(_QWORD *)(a1 + 32);
  v23 = *(_QWORD *)(a1 + 88);
  if ( v22 > 0x2000000 )
  {
    v28 = a2;
    v29 = 0;
    v30 = 25;
    do
    {
      v31 = v30;
      v30 += 7;
      ++v29;
    }
    while ( v22 > 1LL << v30 );
    VacbMiss = *(volatile signed __int32 **)(v23 + 8 * (a2 >> v31));
    if ( !VacbMiss )
      goto LABEL_44;
    do
    {
      if ( !v29 )
        break;
      v32 = 1LL << v31;
      v31 -= 7;
      v28 &= v32 - 1;
      --v29;
      VacbMiss = *(volatile signed __int32 **)&VacbMiss[2 * (v28 >> v31)];
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(volatile signed __int32 **)(v23 + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  if ( VacbMiss )
  {
    v25 = *((_QWORD *)VacbMiss + 1);
    v26 = _InterlockedIncrement(VacbMiss + 4);
    if ( !v26 )
      KeBugCheckEx(0x34u, 0x9FFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( v26 == 1 )
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 544));
    ExReleasePushLockEx(a1 + 104, 0LL);
    v9 = v51;
    goto LABEL_31;
  }
LABEL_44:
  ExReleasePushLockEx(a1 + 104, 0LL);
  VacbMiss = (volatile signed __int32 *)CcGetVacbMiss((_QWORD *)a1, a2, v20, v49);
  if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 0x200 && (v9 & 0xFFFFF) == 0 && v9 >= 0x100000 )
  {
    v9 -= 0x100000LL;
    v51 = v9;
    CcUnmapVacbArray(a1, &v51, 0x100000u, 1, 0, 0);
  }
LABEL_31:
  if ( !v50 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v9 >= 8650752 )
      {
        v51 = v9 - 0x800000;
        CcUnmapVacbArray(a1, &v51, 0x800000u, 1, 0, 0);
        goto LABEL_32;
      }
      v53 = 0x40000LL;
      v35 = &v53;
    }
    else
    {
      v34 = CcUnmapBehindLength;
      if ( v9 >= (unsigned int)CcUnmapBehindLength )
      {
        v35 = &v51;
        v51 = v9 - (unsigned int)CcUnmapBehindLength;
LABEL_53:
        CcUnmapVacbArray(a1, v35, v34, 1, 0, 0);
        goto LABEL_32;
      }
      v52 = 0LL;
      v35 = &v52;
    }
    v34 = v9;
    goto LABEL_53;
  }
LABEL_32:
  *v57 = VacbMiss;
  *v58 = 0x40000 - v7;
  return v7 + *(_QWORD *)VacbMiss;
}
