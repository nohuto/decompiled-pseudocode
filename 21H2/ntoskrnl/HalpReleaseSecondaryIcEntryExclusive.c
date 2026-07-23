/*
 * XREFs of HalpReleaseSecondaryIcEntryExclusive @ 0x1404D1660
 * Callers:
 *     HalpDeleteSecondaryIcEntry @ 0x1404D0D60 (HalpDeleteSecondaryIcEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall HalpReleaseSecondaryIcEntryExclusive(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v6; // eax
  _DWORD *SchedulerAssist; // r8
  bool v8; // zf

  v2 = a2;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF);
  KxReleaseSpinLock(&SecondaryIcListSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return KeSetEvent((PRKEVENT)(a1 + 120), 0, 0);
}
