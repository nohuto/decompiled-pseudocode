/*
 * XREFs of EnableFlushTimer @ 0x1B6884
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1B6A24 (InsertEventEntryInLookUpTable.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YGXPAU_EX_TIMER@@PAX@Z @ 0x1B6D0D (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YGXPAU_EX_TIMER@@PAX@Z.c)
 *     TlgAggregateFlushTimerCallback @ 0x27B27B (TlgAggregateFlushTimerCallback.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 */

void __fastcall EnableFlushTimer(int a1, unsigned int a2)
{
  _DWORD v2[5]; // [esp+8h] [ebp-18h] BYREF

  if ( a1 )
  {
    v2[2] = -1;
    v2[3] = -1;
    v2[0] = 0;
    v2[1] = 0;
    ExSetTimer(a1, -10000 * a2, (-10000LL * (unsigned __int64)a2) >> 32, 0, 0, v2);
  }
}
