/*
 * XREFs of ?ReleaseThreadpool@CWorkFifo@@AEAAXXZ @ 0x180108C94
 * Callers:
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x180107C90 (-Initialize@CWorkFifo@@AEAAJXZ.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x1801099A0 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CWorkFifo::ReleaseThreadpool(CWorkFifo *this)
{
  struct _TP_TIMER *v2; // rbx
  struct _TP_WORK *v3; // rcx

  if ( *((_QWORD *)this + 1) )
  {
    v2 = (struct _TP_TIMER *)_InterlockedExchange64((volatile __int64 *)this + 1, 0LL);
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v2, 1);
    CloseThreadpoolTimer(v2);
  }
  v3 = (struct _TP_WORK *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    CloseThreadpoolWork(v3);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    CloseThreadpool(*(PTP_POOL *)this);
    *(_QWORD *)this = 0LL;
  }
}
