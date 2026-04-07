/*
 * XREFs of ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180041930
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x18004196C (-_OnTimerTick@CTimer@@AEAAXXZ.c)
 */

void __fastcall CTimer::s_TimerTickProc(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer)
{
  if ( Context )
  {
    if ( Timer == (PTP_TIMER)_InterlockedCompareExchange64(
                               (volatile signed __int64 *)Context + 7,
                               (signed __int64)Timer,
                               (signed __int64)Timer) )
    {
      _InterlockedIncrement((volatile signed __int32 *)Context + 2);
      CTimer::_OnTimerTick((CTimer *)Context);
      CBaseObject::Release((CBaseObject *)Context);
    }
  }
}
