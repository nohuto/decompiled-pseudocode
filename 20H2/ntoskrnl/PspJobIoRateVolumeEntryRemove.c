/*
 * XREFs of PspJobIoRateVolumeEntryRemove @ 0x140580930
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x14090BC74 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockTrackerCompare @ 0x14052F1D0 (MiLockTrackerCompare.c)
 */

signed __int64 __fastcall PspJobIoRateVolumeEntryRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // r12
  __int64 v4; // rdi
  signed __int64 v5; // r15
  KIRQL v6; // al
  signed __int64 v7; // rbx
  unsigned __int64 v8; // r14
  int v9; // esi
  int v10; // eax
  signed __int64 v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v14; // edx
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  v2 = (volatile LONG *)(a1 + 1456);
  v4 = a1 + 1464;
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1456));
  v7 = *(_QWORD *)v4;
  v8 = v6;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v7 )
    v7 ^= v4;
  v9 = *(_BYTE *)(v4 + 8) & 1;
  if ( v7 )
  {
    do
    {
      v10 = MiLockTrackerCompare(a2, v7);
      if ( v10 >= 0 )
      {
        if ( v10 <= 0 )
          break;
        v11 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        v11 = *(_QWORD *)v7;
      }
      if ( v9 && v11 )
        v7 ^= v11;
      else
        v7 = v11;
    }
    while ( v7 );
    if ( v7 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v7);
      v5 = v7;
      *(_QWORD *)(v7 + 16) = -1LL;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return v5;
}
