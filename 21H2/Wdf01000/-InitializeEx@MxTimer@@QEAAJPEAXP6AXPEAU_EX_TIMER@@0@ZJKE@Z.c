/*
 * XREFs of ?InitializeEx@MxTimer@@QEAAJPEAXP6AXPEAU_EX_TIMER@@0@ZJKE@Z @ 0x1C00197B8
 * Callers:
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C001955C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxTimer::InitializeEx(
        MxTimer *this,
        void *TimerContext,
        void (__fastcall *Period)(struct _EX_TIMER *, void *),
        int TolerableDelay)
{
  struct _EX_TIMER *Timer; // rax

  this->m_Timer.m_TimerContext = TimerContext;
  this->m_Timer.m_TimerCallback = (void (__fastcall *)(_KDPC *, void *, void *, void *))FxTimer::_FxTimerExtCallbackThunk;
  this->m_Timer.m_Period = TolerableDelay;
  Timer = (struct _EX_TIMER *)ExAllocateTimer();
  this->m_Timer.m_KernelExTimer = Timer;
  this->m_Timer.m_IsExtTimer = 1;
  return Timer == 0LL ? 0xC000009A : 0;
}
