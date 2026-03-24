/*
 * XREFs of ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0014D64
 * Callers:
 *     ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0012030 (-PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C0012400 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0014BDC (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0053654 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C0086670 (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxTimer::Initialize(
        MxTimer *this,
        void *TimerContext,
        void (__fastcall *TimerCallback)(_KDPC *, void *, void *, void *),
        int Period)
{
  __int64 result; // rax

  this->m_Timer.m_TimerContext = TimerContext;
  this->m_Timer.m_TimerCallback = TimerCallback;
  this->m_Timer.m_Period = Period;
  KeInitializeTimerEx(&this->m_Timer.KernelTimer, NotificationTimer);
  KeInitializeDpc(&this->m_Timer.TimerDpc, this->m_Timer.m_TimerCallback, this->m_Timer.m_TimerContext);
  result = 0LL;
  this->m_Timer.m_IsExtTimer = 0;
  return result;
}
