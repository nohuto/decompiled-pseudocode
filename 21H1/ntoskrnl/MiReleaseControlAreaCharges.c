/*
 * XREFs of MiReleaseControlAreaCharges @ 0x1402A42A0
 * Callers:
 *     MiInsertUnusedSegment @ 0x1402A4330 (MiInsertUnusedSegment.c)
 *     MiSegmentDelete @ 0x14063E304 (MiSegmentDelete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAweControlArea @ 0x1402A2718 (MiAweControlArea.c)
 *     MiIncludeSharedCommit @ 0x1402A3680 (MiIncludeSharedCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14054F2F8 (MiComputeCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReleaseControlAreaCharges(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v6; // rsi
  KIRQL v7; // di
  char v8; // al
  int v9; // ecx
  BOOL v10; // r9d
  __int64 v11; // r8
  int v12; // r10d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // edx
  bool v17; // zf

  if ( MiAweControlArea(a1) || !(unsigned int)MiIncludeSharedCommit(v2) )
    return 0LL;
  v6 = 0LL;
  if ( v4 == 1 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v8 = *(_BYTE *)(a1 + 62);
  if ( (v8 & 2) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 62) = v8 & 0xFD;
    v10 = (v9 & 0x20) != 0 || !*(_QWORD *)(a1 + 64);
    v11 = a1 + 128;
    if ( a1 != -128 )
    {
      v12 = 0x3FFFFFFF;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v11 + 34) & 1) != 0 )
          goto LABEL_22;
        if ( (v12 & *(_DWORD *)(v11 + 48)) == v12 || v10 )
          break;
LABEL_23:
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_7;
      }
      v6 += MiComputeCrossPartitionSectionCharges(v11);
LABEL_22:
      if ( v10 )
        goto LABEL_7;
      goto LABEL_23;
    }
  }
LABEL_7:
  if ( v7 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  return v6;
}
