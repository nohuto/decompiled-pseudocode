/*
 * XREFs of ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0085188
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C000F168 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0081DE4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C0085440 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C000F034 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C001839C (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

void __fastcall FxPkgPnp::ReadRegistryS0Idle(FxPkgPnp *this, _UNICODE_STRING *ValueName, bool *Enabled)
{
  FxDevice *m_Device; // rcx
  unsigned int value; // [rsp+30h] [rbp+8h] BYREF
  FxAutoRegKey hKey; // [rsp+48h] [rbp+20h] BYREF

  m_Device = this->m_Device;
  hKey.m_Key = 0LL;
  if ( (int)FxDevice::OpenSettingsKey(m_Device, &hKey.m_Key, 0x20000u) >= 0 )
  {
    value = 0;
    if ( (int)FxRegKey::_QueryULong(hKey.m_Key, ValueName, &value) >= 0 )
      *Enabled = value != 0;
  }
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
}
