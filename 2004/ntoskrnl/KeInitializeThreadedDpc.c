/*
 * XREFs of KeInitializeThreadedDpc @ 0x1403B1060
 * Callers:
 *     KiInitializeProcessor @ 0x14099B800 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeThreadedDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 282;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
