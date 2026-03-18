/*
 * XREFs of DestroyAggregateSession @ 0x1C0278BFC
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C0278804 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C0278998 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C0278B04 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C0278C3C (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer(P);
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
