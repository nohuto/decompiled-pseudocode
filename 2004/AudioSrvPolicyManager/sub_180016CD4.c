/*
 * XREFs of sub_180016CD4 @ 0x180016CD4
 * Callers:
 *     sub_180014EDC @ 0x180014EDC (sub_180014EDC.c)
 *     sub_180016BFC @ 0x180016BFC (sub_180016BFC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180016CD4(__int64 a1)
{
  struct _TP_TIMER *v2; // rcx

  v2 = *(struct _TP_TIMER **)(a1 + 616);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 616), 1);
  }
}
