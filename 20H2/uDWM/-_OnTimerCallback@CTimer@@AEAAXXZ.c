/*
 * XREFs of ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x1800419B8
 * Callers:
 *     ?Start@CTimer@@QEAAJK@Z @ 0x18002E6D4 (-Start@CTimer@@QEAAJK@Z.c)
 *     ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x18004196C (-_OnTimerTick@CTimer@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTimer::_OnTimerCallback(CTimer *this)
{
  if ( *((_QWORD *)this + 8) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    (***((void (__fastcall ****)(_QWORD))this + 8))(*((_QWORD *)this + 8));
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
