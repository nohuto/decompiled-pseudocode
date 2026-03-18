/*
 * XREFs of DestroyAggregateSession @ 0x27A55C
 * Callers:
 *     _TlgUnregisterAggregateProvider@4 @ 0x27A48A (_TlgUnregisterAggregateProvider@4.c)
 *     _TlgRegisterAggregateProviderEx@16 @ 0x27A62E (_TlgRegisterAggregateProviderEx@16.c)
 *     CreateTlgAggregateSession @ 0x27A73A (CreateTlgAggregateSession.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x27A584 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __thiscall DestroyAggregateSession(_DWORD *P)
{
  void *v2; // eax

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer(P);
    v2 = (void *)P[34];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
