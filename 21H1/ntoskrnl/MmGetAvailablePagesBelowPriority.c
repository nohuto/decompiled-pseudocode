/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x14031EF58
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140651B10 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1402803A4 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD **)(qword_140C4E588 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]),
           a1);
}
