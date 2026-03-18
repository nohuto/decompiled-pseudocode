/*
 * XREFs of DestroyAggregateSession @ 0x14097B748
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x14078C0BC (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x14078C290 (CreateTlgAggregateSession.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14097B6C4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P);
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
