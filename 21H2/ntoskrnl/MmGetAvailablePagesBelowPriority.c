/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x1402D4094
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1406C62F0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14027191C (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD **)(qword_140C4E648 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]),
           a1);
}
