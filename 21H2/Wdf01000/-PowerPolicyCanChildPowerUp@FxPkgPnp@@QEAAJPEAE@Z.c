/*
 * XREFs of ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C0018098
 * Callers:
 *     ?PowerCheckParentOverload@FxPkgPdo@@EEAAJPEAE@Z @ 0x1C0018040 (-PowerCheckParentOverload@FxPkgPdo@@EEAAJPEAE@Z.c)
 * Callees:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000598C (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EA4C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyCanChildPowerUp(FxPkgPnp *this, unsigned __int8 *PowerUp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int64 result; // rax
  _FX_DRIVER_GLOBALS *v6; // rdx
  FxEnumerationInfo *m_EnumInfo; // rcx

  *PowerUp = 0;
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    result = FxPowerIdleMachine::PowerReferenceWorker(
               &m_Owner->m_PowerIdleMachine,
               0,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL);
    if ( (int)result < 0 )
      return result;
    FxWaitLockInternal::AcquireLock(&this->m_EnumInfo->m_PowerStateLock, v6, 0LL);
    ++this->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount;
    *PowerUp = this->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp;
    m_EnumInfo = this->m_EnumInfo;
    m_EnumInfo->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&m_EnumInfo->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
  else
  {
    *PowerUp = 1;
  }
  return 0LL;
}
