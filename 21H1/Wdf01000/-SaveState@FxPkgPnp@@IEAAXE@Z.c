/*
 * XREFs of ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0010910
 * Callers:
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010770 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x1C0010820 (-_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0079F50 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C00820B0 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C000F034 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 */

void __fastcall FxPkgPnp::SaveState(FxPkgPnp *this, unsigned __int8 UseCanSaveState)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  _IRP *m_PendingDevicePowerIrp; // rax
  FxPowerPolicyOwnerSettings *v5; // rax
  FxPowerPolicyOwnerSettings *v6; // rcx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v8; // r10
  _UNICODE_STRING name; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+50h] [rbp+10h] BYREF
  FxAutoRegKey hKey; // [rsp+60h] [rbp+20h] BYREF

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  hKey.m_Key = 0LL;
  name = 0LL;
  if ( m_Owner )
  {
    if ( UseCanSaveState && !m_Owner->m_CanSaveState )
    {
      if ( !this->m_Globals->FxVerboseOn )
        return;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_q(v8, 5u, 0xCu, 0x50u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1);
    }
    else if ( (m_Owner->m_IdleSettings.Dirty || m_Owner->m_WakeSettings.Dirty)
           && (m_Owner->m_IdleSettings.Overridable || m_Owner->m_WakeSettings.Overridable)
           && (!this->m_SpecialSupport[0]
            || (m_PendingDevicePowerIrp = this->m_PendingDevicePowerIrp) == 0LL
            || m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1)
           && (int)FxDevice::OpenSettingsKey(this->m_Device, &hKey.m_Key, 0x20000u) >= 0 )
    {
      v5 = this->m_PowerPolicyMachine.m_Owner;
      v6 = v5;
      if ( v5->m_IdleSettings.Overridable && v5->m_IdleSettings.Dirty )
      {
        RtlInitUnicodeString(&name, L"IdleInWorkingState");
        Data = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
        ZwSetValueKey(hKey.m_Key, &name, 0, 4u, &Data, 4u);
        this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Dirty = 0;
        v6 = this->m_PowerPolicyMachine.m_Owner;
      }
      if ( v6->m_WakeSettings.Overridable && v6->m_WakeSettings.Dirty )
      {
        RtlInitUnicodeString(&name, L"WakeFromSleepState");
        Data = this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Enabled;
        ZwSetValueKey(hKey.m_Key, &name, 0, 4u, &Data, 4u);
        this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Dirty = 0;
      }
    }
    if ( hKey.m_Key )
      ZwClose(hKey.m_Key);
  }
}
