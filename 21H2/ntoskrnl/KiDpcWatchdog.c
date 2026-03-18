/*
 * XREFs of KiDpcWatchdog @ 0x1402220E0
 * Callers:
 *     <none>
 * Callees:
 *     KiDpcWatchdogCounterReset @ 0x1402221F4 (KiDpcWatchdogCounterReset.c)
 */

void __fastcall KiDpcWatchdog(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  KiDpcWatchdogCounterReset(CurrentPrcb, DeferredContext, SystemArgument1, SystemArgument2);
  _enable();
}
