/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x1402633C4
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1407DC0D0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140266B40 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD *)(qword_140C51F48 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]),
           a1);
}
