/*
 * XREFs of MiCleanSection @ 0x14037EDDC
 * Callers:
 *     MiAttemptSectionDelete @ 0x1402374A4 (MiAttemptSectionDelete.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 * Callees:
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x1403622B0 (MiInsertUnusedSegment.c)
 *     MiDestroySection @ 0x14037EE7C (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRemoveWakeListEntry @ 0x14052AB1C (MiRemoveWakeListEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiCleanSection(__int64 a1, __int64 a2, char a3)
{
  bool v3; // zf
  BOOL v4; // r12d
  unsigned __int64 v6; // rsi
  volatile LONG *v9; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  int v14; // edi
  __int64 v15; // rax
  int v16; // ecx
  __int64 inserted; // rdi
  __int64 v18; // rbx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  int v21; // eax
  _DWORD *v22; // r9
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  __int128 v24; // [rsp+50h] [rbp-30h] BYREF
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  char *v26; // [rsp+70h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64) == 0LL;
  v26 = 0LL;
  v4 = !v3;
  LOBYTE(v6) = a2;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_3;
    DWORD1(v25) = 0;
    v9 = (volatile LONG *)(a1 + 72);
    v26 = (char *)&v25 + 8;
    *((_QWORD *)&v24 + 1) = 4LL;
    *((_QWORD *)&v25 + 1) = (char *)&v25 + 8;
    *(_QWORD *)&v24 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v24;
    LOWORD(v25) = 263;
    BYTE2(v25) = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v3 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v3 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v6);
    v14 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)(a1 + 128), 0LL, 0LL, 0x80000000, (unsigned int *)&v23);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    MiRemoveWakeListEntry(a1, &v24);
    if ( !HIDWORD(v24) )
      break;
    v15 = *(_QWORD *)(a1 + 40);
    if ( v15 != 1 || *(_QWORD *)(a1 + 24) )
    {
      v16 = 1;
      goto LABEL_17;
    }
  }
  if ( v14 >= 0 )
  {
LABEL_3:
    *(_QWORD *)(a1 + 40) = 0LL;
    LOBYTE(a2) = v6;
    MiDestroySection(a1, a2, 0LL);
    return 1LL;
  }
  v15 = *(_QWORD *)(a1 + 40);
  v16 = 2;
LABEL_17:
  *(_QWORD *)(a1 + 40) = v15 - 1;
  if ( a3 )
    *(_DWORD *)(a1 + 56) |= 0x40000u;
  inserted = 0LL;
  if ( v16 == 2 && (inserted = MiInsertUnusedSegment(a1)) != 0 )
    v18 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v18 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v22 = v20->SchedulerAssist;
        v3 = (v21 & v22[5]) == 0;
        v22[5] &= v21;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(v6);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v18, v4, inserted);
  return 0LL;
}
