/*
 * XREFs of DestroyAggregateSession @ 0x1409828B8
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x14079A6CC (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x14079A8A0 (CreateTlgAggregateSession.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140982834 (CancelTimerCallbacksAndDeleteTimer.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
