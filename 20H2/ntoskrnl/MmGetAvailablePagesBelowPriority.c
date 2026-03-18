/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x140332108
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1406E75F0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1403328E8 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD *)(qword_140C4E4C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]),
           a1);
}
