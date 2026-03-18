/*
 * XREFs of DestroyAggregateSession @ 0x14097CAE8
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x14078DF8C (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x14078E160 (CreateTlgAggregateSession.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14097CA64 (CancelTimerCallbacksAndDeleteTimer.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
