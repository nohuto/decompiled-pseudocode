/*
 * XREFs of sub_1801081D4 @ 0x1801081D4
 * Callers:
 *     sub_1801071D0 @ 0x1801071D0 (sub_1801071D0.c)
 *     sub_180108EE0 @ 0x180108EE0 (sub_180108EE0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1801081D4(__int64 a1)
{
  struct _TP_TIMER *v2; // rbx
  struct _TP_WORK *v3; // rcx

  if ( *(_QWORD *)(a1 + 8) )
  {
    v2 = (struct _TP_TIMER *)_InterlockedExchange64((volatile __int64 *)(a1 + 8), 0LL);
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v2, 1);
    CloseThreadpoolTimer(v2);
  }
  v3 = *(struct _TP_WORK **)(a1 + 16);
  if ( v3 )
  {
    CloseThreadpoolWork(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( *(_QWORD *)a1 )
  {
    CloseThreadpool(*(PTP_POOL *)a1);
    *(_QWORD *)a1 = 0LL;
  }
}
