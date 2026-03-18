/*
 * XREFs of CcGetVirtualAddress @ 0x14022F3B0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 *     CcPurgeAndClearCacheSection @ 0x1403203EC (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x14035A640 (CcPrepareMdlWrite.c)
 *     CcMapAndCopyFromCache @ 0x1405FCB10 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x1405FCDD0 (CcMapData.c)
 *     CcMdlRead @ 0x14060B620 (CcMdlRead.c)
 *     CcMapDataCommon @ 0x1406E3D14 (CcMapDataCommon.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     CcGetVacbMiss @ 0x1402BE330 (CcGetVacbMiss.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcInsertVacbArray @ 0x140377A04 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x140378EC4 (CcAllocateInitializeVacbArray.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     CcBuildUpHighPriorityMappings @ 0x1404E5E54 (CcBuildUpHighPriorityMappings.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetVirtualAddress(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, int a5, int a6)
{
  __int64 v6; // r15
  unsigned int v7; // r13d
  __int64 v9; // rbx
  __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  ULONG_PTR *v16; // rbx
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int v19; // eax
  BOOL v20; // r12d
  int v21; // esi
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 VacbMiss; // rsi
  __int64 v25; // rax
  __int16 v26; // bp
  int v27; // r9d
  __int64 v29; // r11
  int v30; // edx
  int v31; // ecx
  int v32; // r9d
  __int64 v33; // rax
  _DWORD *v34; // rcx
  int v35; // r8d
  __int64 *v36; // rdx
  __int64 InitializeVacbArray; // rax
  __int64 v38; // r12
  KIRQL v39; // si
  _DWORD *SchedulerAssist; // r9
  int v41; // eax
  int v42; // eax
  bool v43; // zf
  unsigned __int32 v44; // eax
  int v45; // eax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  unsigned int v50; // [rsp+30h] [rbp-68h]
  int v51; // [rsp+34h] [rbp-64h]
  __int64 v52; // [rsp+38h] [rbp-60h] BYREF
  __int64 v53; // [rsp+40h] [rbp-58h] BYREF
  __int64 v54; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v56; // [rsp+A0h] [rbp+8h] BYREF
  BOOL v57; // [rsp+A8h] [rbp+10h]
  __int64 *v58; // [rsp+B0h] [rbp+18h]
  _DWORD *v59; // [rsp+B8h] [rbp+20h]

  v59 = a4;
  v58 = a3;
  v6 = *(_QWORD *)(a1 + 528);
  v51 = 0;
  v7 = a2 & 0x3FFFF;
  v9 = a2 - (a2 & 0x3FFFF);
  v52 = v9;
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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C780, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v56 = 0;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v41 = v14[6];
          v14[6] = v41 + 1;
          if ( v41 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C780, 0x1Fu) )
      {
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v42 = v34[6] - 1;
            v34[6] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v56 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140C4C780, CurrentIrql);
      }
      v15 = (unsigned int)dword_140C4C780;
      if ( (dword_140C4C780 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v15 & 0x40000000) == 0 )
          {
            v44 = _InterlockedCompareExchange(&dword_140C4C780, v15 | 0x40000000, v15);
            v43 = (_DWORD)v15 == v44;
            v15 = v44;
            if ( !v43 )
              continue;
          }
          KeYieldProcessorEx(&v56, v15);
          v15 = (unsigned int)dword_140C4C780;
        }
        while ( (v15 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C780, retaddr);
    else
      dword_140C4C780 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v45 = v18[6] - 1;
        v18[6] = v45;
        if ( !v45 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v46 = KeGetCurrentIrql();
        if ( v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v43 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v6 != *(_QWORD *)(v16[22] + 8) )
      KeBugCheckEx(0x34u, 0x1313uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = v52;
  }
  v19 = *(_DWORD *)(a1 + 152) & 0x200;
  v20 = v19 != 0;
  v57 = v20;
  if ( v19 || a5 )
  {
    v21 = 1;
    v50 = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 || *(_DWORD *)(v6 + 920) >= 0x80u )
      goto LABEL_17;
  }
  else
  {
    v21 = 0;
    v50 = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 )
      goto LABEL_17;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v38 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v21 == 1 )
      CcBuildUpHighPriorityMappings(v6, InitializeVacbArray);
    v39 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v6, v38);
    KeReleaseQueuedSpinLock(4uLL, v39);
  }
  v20 = v57;
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
    v51 = 1;
  }
  v22 = *(_QWORD *)(a1 + 32);
  v23 = *(_QWORD *)(a1 + 88);
  if ( v22 > 0x2000000 )
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
    while ( v22 > 1LL << v31 );
    VacbMiss = *(_QWORD *)(v23 + 8 * (a2 >> v32));
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
      VacbMiss = *(_QWORD *)(VacbMiss + 8 * (v29 >> v32));
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(_QWORD *)(v23 + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  if ( VacbMiss )
  {
    v25 = *(_QWORD *)(VacbMiss + 8);
    v26 = _InterlockedIncrement((volatile signed __int32 *)(VacbMiss + 16));
    if ( !v26 )
      KeBugCheckEx(0x34u, 0x9FFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( v26 == 1 )
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 544));
    ExReleasePushLockEx(a1 + 104, 0LL);
    v9 = v52;
    goto LABEL_31;
  }
LABEL_44:
  ExReleasePushLockEx(a1 + 104, 0LL);
  VacbMiss = CcGetVacbMiss(a1, a2, v20, v50);
  if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 0x200 && (v9 & 0xFFFFF) == 0 && v9 >= 0x100000 )
  {
    v9 -= 0x100000LL;
    v52 = v9;
    CcUnmapVacbArray(a1, (unsigned int)&v52, 0x100000, 1, 0, 0);
  }
LABEL_31:
  if ( !v51 )
  {
    LOBYTE(v27) = 1;
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v9 >= 8650752 )
      {
        v52 = v9 - 0x800000;
        CcUnmapVacbArray(a1, (unsigned int)&v52, 0x800000, v27, 0, 0);
        goto LABEL_32;
      }
      v54 = 0x40000LL;
      v36 = &v54;
    }
    else
    {
      v35 = CcUnmapBehindLength;
      if ( v9 >= (unsigned int)CcUnmapBehindLength )
      {
        v36 = &v52;
        v52 = v9 - (unsigned int)CcUnmapBehindLength;
LABEL_53:
        CcUnmapVacbArray(a1, (_DWORD)v36, v35, v27, 0, 0);
        goto LABEL_32;
      }
      v53 = 0LL;
      v36 = &v53;
    }
    v35 = v9;
    goto LABEL_53;
  }
LABEL_32:
  *v58 = VacbMiss;
  *v59 = 0x40000 - v7;
  return v7 + *(_QWORD *)VacbMiss;
}
