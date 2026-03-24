/*
 * XREFs of MiOffsetToProtos @ 0x140320B50
 * Callers:
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x1402FADE0 (MiInsertInSystemSpace.c)
 *     MiReferenceDataSubsections @ 0x1402FD12C (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     MmMapViewInSystemCache @ 0x140310DE0 (MmMapViewInSystemCache.c)
 *     MiDereferenceDataSubsections @ 0x140554E28 (MiDereferenceDataSubsections.c)
 *     MiRelocateImage @ 0x1406D54B0 (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x1406D5CB0 (MiScanRelocationPage.c)
 *     MiAddMappedPtes @ 0x1406E9250 (MiAddMappedPtes.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x1406EF710 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 *     MiLogRelocationRva @ 0x1407138D4 (MiLogRelocationRva.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14021CD80 (ExAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLocatePagefileSubsection @ 0x140316CFC (MiLocatePagefileSubsection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5C64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5DBC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
  __int64 v16; // r8
  _DWORD *v17; // r9
  unsigned __int8 v18; // r14
  struct _KPRCB *v19; // r13
  _DWORD *v20; // rcx
  signed __int32 v21; // ett
  __int64 v22; // r13
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  _QWORD *v30; // r8
  unsigned __int16 v31; // cx
  unsigned __int64 j; // rdx
  _DWORD *v33; // rcx
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rdx
  int v36; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  bool v41; // zf
  int v42; // eax
  int v43; // eax
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  unsigned __int64 v49; // r10
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r9
  _DWORD *v52; // r8
  int v53; // eax
  unsigned __int8 v54; // al
  _DWORD *v55; // r8
  int v56; // eax
  _DWORD v57[36]; // [rsp+20h] [rbp-B8h] BYREF
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
        v36 = SchedulerAssist[6] - 1;
        SchedulerAssist[6] = v36;
        if ( !v36 )
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
          v38 = KeGetCurrentPrcb();
          v39 = v38->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
          v41 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v38);
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
  memset(v57, 0, sizeof(v57));
  if ( a2 >= 0x3FFFFFFFFFF000LL )
    goto LABEL_30;
  v18 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
  {
    v17 = KeGetCurrentPrcb()->SchedulerAssist;
    v16 = (-1 << (v18 + 1)) & 4u | v17[5];
    v17[5] = v16;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 72, v18);
  }
  else
  {
    v19 = KeGetCurrentPrcb();
    v20 = v19->SchedulerAssist;
    if ( v20 )
    {
      if ( v19->NestingLevel <= 1u )
      {
        v42 = v20[6];
        v20[6] = v42 + 1;
        if ( v42 == -1 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    _m_prefetchw((const void *)(a1 + 72));
    v21 = *(_DWORD *)(a1 + 72) & 0x7FFFFFFF;
    if ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v21 + 1, v21) )
    {
      v33 = v19->SchedulerAssist;
      if ( v33 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v43 = v33[6] - 1;
          v33[6] = v43;
          if ( !v43 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(a1 + 72, v18, v16, v17);
    }
  }
  v22 = *(_QWORD *)(a1 + 288);
  v23 = a2 >> 12;
  v24 = *(unsigned int *)(v22 + 36) | ((unsigned __int64)(*(_WORD *)(v22 + 32) & 0xFFC0) << 26);
  v25 = v24 + *(unsigned int *)(v22 + 40);
  if ( *(_WORD *)(v22 + 34) < 0x10u )
    --v25;
  v26 = HIDWORD(v23);
  if ( v23 >= v24 )
  {
    v26 = HIDWORD(v23);
    if ( v23 <= v25 )
    {
      if ( v18 != 17 )
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
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        if ( v28 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v44 = v28[6] - 1;
            v28[6] = v44;
            if ( !v44 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v45 = KeGetCurrentIrql();
            if ( v45 <= 0xFu && v18 <= 0xFu && v45 >= 2u )
            {
              v46 = KeGetCurrentPrcb();
              v47 = v46->SchedulerAssist;
              v48 = ~(unsigned __int16)(-1LL << (v18 + 1));
              v41 = (v48 & v47[5]) == 0;
              v47[5] &= v48;
              if ( v41 )
                KiRemoveSystemWorkPriorityKick(v46);
            }
          }
        }
        __writecr8(v18);
      }
      v4 = (_QWORD *)v22;
      goto LABEL_30;
    }
  }
  v30 = *(_QWORD **)(a1 + 272);
  v31 = v57[8] & 0x3F | ((_WORD)v26 << 6);
  v57[9] = v23;
  LOWORD(v57[8]) = v31;
  if ( !v30 )
  {
LABEL_90:
    if ( v18 != 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v54 = KeGetCurrentIrql();
          if ( v54 <= 0xFu && v18 <= 0xFu && v54 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v55 = v51->SchedulerAssist;
            v56 = ~(unsigned __int16)(-1LL << (v18 + 1));
            v41 = (v56 & v55[5]) == 0;
            v55[5] &= v56;
            if ( v41 )
              goto LABEL_97;
          }
        }
      }
      goto LABEL_52;
    }
    goto LABEL_30;
  }
  v49 = ((unsigned __int64)v31 << 26) ^ (unsigned int)v23 ^ (v31 << 26);
  while ( 1 )
  {
    v34 = *((unsigned int *)v30 - 5) | ((unsigned __int64)(*(_WORD *)(v30 - 3) & 0xFFC0) << 26);
    v35 = v34 + *((unsigned int *)v30 - 4);
    if ( *((_WORD *)v30 - 11) < 0x10u )
      --v35;
    if ( v49 > v35 )
    {
      v30 = (_QWORD *)v30[1];
      goto LABEL_48;
    }
    if ( v49 >= v34 )
      break;
    v30 = (_QWORD *)*v30;
LABEL_48:
    if ( !v30 )
      goto LABEL_90;
  }
  v4 = v30 - 7;
  *(_QWORD *)(a1 + 288) = v30 - 7;
  if ( v18 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v50 = KeGetCurrentIrql();
        if ( v50 <= 0xFu && v18 <= 0xFu && v50 >= 2u )
        {
          v51 = KeGetCurrentPrcb();
          v52 = v51->SchedulerAssist;
          v53 = ~(unsigned __int16)(-1LL << (v18 + 1));
          v41 = (v53 & v52[5]) == 0;
          v52[5] &= v53;
          if ( v41 )
LABEL_97:
            KiRemoveSystemWorkPriorityKick(v51);
        }
      }
    }
LABEL_52:
    __writecr8(v18);
  }
LABEL_30:
  *a3 -= *((unsigned int *)v4 + 9) | ((unsigned __int64)((_WORD)v4[4] & 0xFFC0) << 26);
  return (unsigned int *)v4;
}
