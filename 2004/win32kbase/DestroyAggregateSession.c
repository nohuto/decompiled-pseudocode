/*
 * XREFs of DestroyAggregateSession @ 0x1C027AA48
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C027A650 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C027A7E4 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C027A950 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C027AA88 (CancelTimerCallbacksAndDeleteTimer.c)
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
