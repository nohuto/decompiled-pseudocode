/*
 * XREFs of PfSnEnablePrefetcherTimerRoutine @ 0x1403228A0
 * Callers:
 *     <none>
 * Callees:
 *     PfSnUpdatePrefetcherFlags @ 0x1403228D0 (PfSnUpdatePrefetcherFlags.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnEnablePrefetcherTimerRoutine(
        struct _KDPC *Dpc,
        unsigned int *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  PfSnUpdatePrefetcherFlags(DeferredContext[32], 0LL, SystemArgument1, SystemArgument2);
  ExFreePoolWithTag(DeferredContext, 0);
}
