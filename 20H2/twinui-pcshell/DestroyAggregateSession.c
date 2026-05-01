/*
 * XREFs of DestroyAggregateSession @ 0x18013E2B8
 * Callers:
 *     CreateTlgAggregateSession @ 0x18013E1B4 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x18013EBC4 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x18013ECD4 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x18013DD58 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(LPVOID lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)lpMem);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
