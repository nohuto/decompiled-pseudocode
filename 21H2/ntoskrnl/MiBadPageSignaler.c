/*
 * XREFs of MiBadPageSignaler @ 0x14058E0C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

__int64 MiBadPageSignaler()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  bool v5; // zf

  v0 = ExAcquireSpinLockExclusive(&dword_140C56920);
  byte_140C52B33 = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v5 = (v4 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v4;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v0);
  return ZwUpdateWnfStateData((__int64)&WNF_MM_BAD_MEMORY_QUARANTINED, 0LL);
}
