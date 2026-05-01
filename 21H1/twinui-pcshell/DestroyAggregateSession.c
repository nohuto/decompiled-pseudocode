/*
 * XREFs of DestroyAggregateSession @ 0x180119DD8
 * Callers:
 *     CreateTlgAggregateSession @ 0x180119CD4 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x18011A6E4 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x18011A7F4 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x180119878 (CancelTimerCallbacksAndDeleteTimer.c)
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
