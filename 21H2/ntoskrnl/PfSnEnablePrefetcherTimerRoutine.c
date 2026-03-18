/*
 * XREFs of PfSnEnablePrefetcherTimerRoutine @ 0x14025CEF0
 * Callers:
 *     <none>
 * Callees:
 *     PfSnUpdatePrefetcherFlags @ 0x14025CF20 (PfSnUpdatePrefetcherFlags.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
