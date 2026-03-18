/*
 * XREFs of KiDpcWatchdog @ 0x1402F8190
 * Callers:
 *     <none>
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402F81B8 (KiResetGlobalDpcWatchdogProfiler.c)
 */

void __fastcall KiDpcWatchdog(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  CurrentPrcb->DpcWatchdogCount = 0;
  KiResetGlobalDpcWatchdogProfiler(CurrentPrcb);
  _enable();
}
