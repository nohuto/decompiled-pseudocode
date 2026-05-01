/*
 * XREFs of CancelTimerCallbacksAndDeleteTimer @ 0x18013DD58
 * Callers:
 *     DestroyAggregateSession @ 0x18013E2B8 (DestroyAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x18013ECD4 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     <none>
 */

void __fastcall CancelTimerCallbacksAndDeleteTimer(__int64 a1)
{
  struct _TP_TIMER *v2; // rcx

  v2 = *(struct _TP_TIMER **)(a1 + 344);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 344), 1);
    CloseThreadpoolTimer(*(PTP_TIMER *)(a1 + 344));
    *(_QWORD *)(a1 + 344) = 0LL;
  }
}
