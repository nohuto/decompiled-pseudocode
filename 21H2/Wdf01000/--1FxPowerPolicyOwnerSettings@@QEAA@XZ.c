/*
 * XREFs of ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C008A700
 * Callers:
 *     ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x1C001FCC0 (--1FxPowerPolicyMachine@@QEAA@XZ.c)
 * Callees:
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x1C0089750 (--1FxPowerIdleMachine@@QEAA@XZ.c)
 *     ??1IdleTimeoutManagement@@QEAA@XZ @ 0x1C008A754 (--1IdleTimeoutManagement@@QEAA@XZ.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1C008A79C (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 *     ?CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ @ 0x1C008A810 (-CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ.c)
 *     ??1FxPoxInterface@@QEAA@XZ @ 0x1C008EDE0 (--1FxPoxInterface@@QEAA@XZ.c)
 */

void __fastcall FxPowerPolicyOwnerSettings::~FxPowerPolicyOwnerSettings(FxPowerPolicyOwnerSettings *this)
{
  unsigned int v2; // edx
  FxUsbIdleInfo *m_UsbIdle; // rcx
  __int64 v4; // rdx

  FxPowerPolicyOwnerSettings::CleanupPowerCallback(this);
  m_UsbIdle = this->m_UsbIdle;
  if ( m_UsbIdle )
  {
    FxUsbIdleInfo::`scalar deleting destructor'(m_UsbIdle, v2);
    this->m_UsbIdle = 0LL;
  }
  IdleTimeoutManagement::~IdleTimeoutManagement(&this->m_IdleSettings.m_TimeoutMgmt);
  FxPoxInterface::~FxPoxInterface(&this->m_PoxInterface);
  FxPowerIdleMachine::~FxPowerIdleMachine(&this->m_PowerIdleMachine, v4);
}
