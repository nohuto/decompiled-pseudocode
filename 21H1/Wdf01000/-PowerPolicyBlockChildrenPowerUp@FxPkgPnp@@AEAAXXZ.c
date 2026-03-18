/*
 * XREFs of ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C0017074
 * Callers:
 *     ?PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0017010 (-PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087520 (-PowerPolStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C008895C (-PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::PowerPolicyBlockChildrenPowerUp(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rbx
  FxEnumerationInfo *v3; // rcx

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(m_EnumInfo, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      m_EnumInfo->m_PowerStateLock.m_OwningThread = KeGetCurrentThread();
    this->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp = 0;
    v3 = this->m_EnumInfo;
    v3->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&v3->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
}
