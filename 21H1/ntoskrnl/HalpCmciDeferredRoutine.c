/*
 * XREFs of HalpCmciDeferredRoutine @ 0x14038A030
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciPollProcessor @ 0x14039D58C (HalpCmciPollProcessor.c)
 *     HalpCmcStartPolling @ 0x1403C1A08 (HalpCmcStartPolling.c)
 */

void __fastcall HalpCmciDeferredRoutine(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(DeferredContext + 164);
  if ( DeferredContext[120] )
    HalpCmcStartPolling(v4, DeferredContext, SystemArgument1, SystemArgument2);
  else
    HalpCmciPollProcessor(v4, DeferredContext, SystemArgument1, SystemArgument2);
}
