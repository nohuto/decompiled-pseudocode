/*
 * XREFs of DestroyAggregateSession @ 0x1C03C20F0
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C01F4AB0 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C01F4D3C (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C03C2338 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C03C2060 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P, __int64 a2, __int64 a3)
{
  void *v4; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P, a2, a3);
    v4 = (void *)P[33];
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    ExFreePoolWithTag(P, 0);
  }
}
