/*
 * XREFs of ??1FxPoxInterface@@QEAA@XZ @ 0x1C008EDE0
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C008A700 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 * Callees:
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C008CE30 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

void __fastcall FxPoxInterface::~FxPoxInterface(FxPoxInterface *this)
{
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rcx

  m_DevicePowerRequirementMachine = this->m_DevicePowerRequirementMachine;
  if ( m_DevicePowerRequirementMachine )
    FxWakeInterruptMachine::`scalar deleting destructor'(m_DevicePowerRequirementMachine);
  this->m_DevicePowerRequiredLock.m_DbgFlagIsInitialized = 0;
}
