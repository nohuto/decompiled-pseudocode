/*
 * XREFs of ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C00207F4
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C00205C8 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 * Callees:
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C001D0E8 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002FEA0 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C005E1C4 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 */

int __fastcall FxPkgPnp::UpdateWmiInstanceForSxWake(FxPkgPnp *this, FxWmiInstanceAction Action)
{
  int v2; // edx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  int result; // eax
  FxWmiInstance **p_WmiInstance; // r9
  FxWmiInstanceInternalCallbacks cb; // [rsp+20h] [rbp-28h] BYREF

  v2 = Action - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      WmiInstance = m_Owner->m_WakeSettings.WmiInstance;
      if ( WmiInstance )
        FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_WakeSettings.WmiInstance);
    }
    return 0;
  }
  p_WmiInstance = &this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.WmiInstance;
  if ( *p_WmiInstance )
  {
    FxWmiProvider::AddInstance((*p_WmiInstance)->m_Provider, *p_WmiInstance, 1u);
    return 0;
  }
  cb.ExecuteMethod = 0LL;
  cb.SetInstance = FxPkgPnp::_SxWakeSetInstance;
  cb.QueryInstance = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, void *, unsigned int *))FxPkgPnp::_SxWakeQueryInstance;
  cb.SetItem = FxPkgPnp::_SxWakeSetItem;
  result = FxPkgPnp::RegisterPowerPolicyWmiInstance(
             this,
             &GUID_POWER_DEVICE_WAKE_ENABLE,
             &cb,
             (FxWmiInstanceInternal **)p_WmiInstance);
  if ( result >= 0 )
    return 0;
  return result;
}
