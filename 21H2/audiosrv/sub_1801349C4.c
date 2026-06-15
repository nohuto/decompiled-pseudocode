/*
 * XREFs of sub_1801349C4 @ 0x1801349C4
 * Callers:
 *     sub_1800087F4 @ 0x1800087F4 (sub_1800087F4.c)
 *     sub_180136FC0 @ 0x180136FC0 (sub_180136FC0.c)
 *     sub_180137110 @ 0x180137110 (sub_180137110.c)
 *     sub_1801372AC @ 0x1801372AC (sub_1801372AC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1801349C4(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  struct _TP_TIMER *v3; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v3 = *(struct _TP_TIMER **)(a1 + 200);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  if ( v1 )
    LeaveCriticalSection(v1);
  if ( v3 )
  {
    if ( IsThreadpoolTimerSet(v3) )
    {
      SetThreadpoolTimer(v3, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(v3, 1);
    }
    CloseThreadpoolTimer(v3);
  }
}
