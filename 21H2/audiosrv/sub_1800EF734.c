/*
 * XREFs of sub_1800EF734 @ 0x1800EF734
 * Callers:
 *     sub_1800B7E08 @ 0x1800B7E08 (sub_1800B7E08.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800EF734(__int64 a1)
{
  struct _TP_TIMER *v2; // rcx

  v2 = *(struct _TP_TIMER **)(a1 + 96);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 96), 1);
  }
}
