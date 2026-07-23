/*
 * XREFs of MiOffsetToProtos @ 0x14032B8A0
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiReferenceDataSubsections @ 0x140307E7C (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MmMapViewInSystemCache @ 0x14031BB30 (MmMapViewInSystemCache.c)
 *     MiDereferenceDataSubsections @ 0x140555068 (MiDereferenceDataSubsections.c)
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x1406ACF90 (MiScanRelocationPage.c)
 *     MiLogRelocationRva @ 0x1406C1F24 (MiLogRelocationRva.c)
 *     MiAddMappedPtes @ 0x140700630 (MiAddMappedPtes.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x140706AF0 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     MiLocatePagefileSubsection @ 0x140321A4C (MiLocatePagefileSubsection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5FEC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned int *__fastcall MiOffsetToProtos(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  _QWORD *v4; // rsi
  unsigned __int64 v6; // rcx
  int v8; // eax
  KIRQL v9; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 i; // r12
  unsigned __int64 v13; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 v16; // r14
  struct _KPRCB *v17; // r13
  _DWORD *v18; // rcx
  signed __int32 v19; // ett
  __int64 v20; // r13
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  _QWORD *v28; // r8
  unsigned __int16 v29; // cx
  unsigned __int64 j; // rdx
  _DWORD *v31; // rcx
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdx
  int v34; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  bool v39; // zf
  _DWORD *v40; // r9
  int v41; // eax
  int v42; // eax
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  unsigned __int64 v48; // r10
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  unsigned __int8 v53; // al
  _DWORD *v54; // r8
  int v55; // eax
  _DWORD v56[36]; // [rsp+20h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v4 = 0LL;
  v6 = a2 >> 12;
  *a3 = a2 >> 12;
  v8 = *(_DWORD *)(a1 + 56);
  if ( (v8 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v8 & 0x400) != 0 )
  {
    v13 = *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
  }
  else
  {
    v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
    v10 = *(_QWORD *)(a1 + 272);
    v11 = 0LL;
    for ( i = v9; v10; v10 = *(_QWORD *)(v10 + 8) )
      v11 = v10;
    v13 = (*(unsigned int *)(v11 - 20) | ((unsigned __int64)(*(_WORD *)(v11 - 24) & 0xFFC0) << 26))
        + *(unsigned int *)(v11 - 12)
        - (unsigned __int64)(*(_DWORD *)(v11 - 4) & 0x3FFFFFFF);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 72, retaddr);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 72), 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 72));
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v34 = SchedulerAssist[6] - 1;
        SchedulerAssist[6] = v34;
        if ( !v34 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)i <= 0xFu && CurrentIrql >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
          v39 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
    __writecr8(i);
    v6 = *a3;
  }
  if ( v6 >= v13 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return MiLocatePagefileSubsection((unsigned int *)(a1 + 128), a3);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v4 = (_QWORD *)(a1 + 128);
    for ( j = *(unsigned int *)(a1 + 172); v6 >= j; j = *((unsigned int *)v4 + 11) )
    {
      v6 -= j;
      *a3 = v6;
      v4 = (_QWORD *)v4[2];
    }
    return (unsigned int *)v4;
  }
  memset(v56, 0, sizeof(v56));
  if ( a2 >= 0x3FFFFFFFFFF000LL )
    goto LABEL_30;
  v16 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v16 <= 0xFu )
  {
    v40 = KeGetCurrentPrcb()->SchedulerAssist;
    v40[5] |= (-1 << (v16 + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 72, v16);
  }
  else
  {
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v41 = v18[6];
        v18[6] = v41 + 1;
        if ( v41 == -1 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    _m_prefetchw((const void *)(a1 + 72));
    v19 = *(_DWORD *)(a1 + 72) & 0x7FFFFFFF;
    if ( v19 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v19 + 1, v19) )
    {
      v31 = v17->SchedulerAssist;
      if ( v31 )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v42 = v31[6] - 1;
          v31[6] = v42;
          if ( !v42 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(a1 + 72), v16);
    }
  }
  v20 = *(_QWORD *)(a1 + 288);
  v21 = a2 >> 12;
  v22 = *(unsigned int *)(v20 + 36) | ((unsigned __int64)(*(_WORD *)(v20 + 32) & 0xFFC0) << 26);
  v23 = v22 + *(unsigned int *)(v20 + 40);
  if ( *(_WORD *)(v20 + 34) < 0x10u )
    --v23;
  v24 = HIDWORD(v21);
  if ( v21 >= v22 )
  {
    v24 = HIDWORD(v21);
    if ( v21 <= v23 )
    {
      if ( v16 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 72, retaddr);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)(a1 + 72), 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 72));
        }
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v43 = v26[6] - 1;
            v26[6] = v43;
            if ( !v43 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v44 = KeGetCurrentIrql();
            if ( v44 <= 0xFu && v16 <= 0xFu && v44 >= 2u )
            {
              v45 = KeGetCurrentPrcb();
              v46 = v45->SchedulerAssist;
              v47 = ~(unsigned __int16)(-1LL << (v16 + 1));
              v39 = (v47 & v46[5]) == 0;
              v46[5] &= v47;
              if ( v39 )
                KiRemoveSystemWorkPriorityKick(v45);
            }
          }
        }
        __writecr8(v16);
      }
      v4 = (_QWORD *)v20;
      goto LABEL_30;
    }
  }
  v28 = *(_QWORD **)(a1 + 272);
  v29 = v56[8] & 0x3F | ((_WORD)v24 << 6);
  v56[9] = v21;
  LOWORD(v56[8]) = v29;
  if ( !v28 )
  {
LABEL_90:
    if ( v16 != 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v53 = KeGetCurrentIrql();
          if ( v53 <= 0xFu && v16 <= 0xFu && v53 >= 2u )
          {
            v50 = KeGetCurrentPrcb();
            v54 = v50->SchedulerAssist;
            v55 = ~(unsigned __int16)(-1LL << (v16 + 1));
            v39 = (v55 & v54[5]) == 0;
            v54[5] &= v55;
            if ( v39 )
              goto LABEL_97;
          }
        }
      }
      goto LABEL_52;
    }
    goto LABEL_30;
  }
  v48 = ((unsigned __int64)v29 << 26) ^ (unsigned int)v21 ^ (v29 << 26);
  while ( 1 )
  {
    v32 = *((unsigned int *)v28 - 5) | ((unsigned __int64)(*(_WORD *)(v28 - 3) & 0xFFC0) << 26);
    v33 = v32 + *((unsigned int *)v28 - 4);
    if ( *((_WORD *)v28 - 11) < 0x10u )
      --v33;
    if ( v48 > v33 )
    {
      v28 = (_QWORD *)v28[1];
      goto LABEL_48;
    }
    if ( v48 >= v32 )
      break;
    v28 = (_QWORD *)*v28;
LABEL_48:
    if ( !v28 )
      goto LABEL_90;
  }
  v4 = v28 - 7;
  *(_QWORD *)(a1 + 288) = v28 - 7;
  if ( v16 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v49 = KeGetCurrentIrql();
        if ( v49 <= 0xFu && v16 <= 0xFu && v49 >= 2u )
        {
          v50 = KeGetCurrentPrcb();
          v51 = v50->SchedulerAssist;
          v52 = ~(unsigned __int16)(-1LL << (v16 + 1));
          v39 = (v52 & v51[5]) == 0;
          v51[5] &= v52;
          if ( v39 )
LABEL_97:
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
    }
LABEL_52:
    __writecr8(v16);
  }
LABEL_30:
  *a3 -= *((unsigned int *)v4 + 9) | ((unsigned __int64)((_WORD)v4[4] & 0xFFC0) << 26);
  return (unsigned int *)v4;
}
