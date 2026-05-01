/*
 * XREFs of DestroyAggregateSession @ 0x18013E3F8
 * Callers:
 *     CreateTlgAggregateSession @ 0x18013E2F4 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x18013ED04 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x18013EE14 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x18013DE98 (CancelTimerCallbacksAndDeleteTimer.c)
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
