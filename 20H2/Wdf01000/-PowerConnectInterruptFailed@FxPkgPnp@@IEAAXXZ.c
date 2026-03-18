/*
 * XREFs of ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C007CC6C
 * Callers:
 *     ?PowerInitialConnectInterruptFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007D620 (-PowerInitialConnectInterruptFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DEA0 (-PowerWakingConnectInterruptFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DEC0 (-PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C000483C (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0010BF4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C00113B4 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerConnectInterruptFailed(FxPkgPnp *this)
{
  const void *_a1; // rax
  unsigned int _a2; // edx
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v5; // r8

  if ( (int)FxPkgPnp::NotifyResourceObjectsDx(this, 4u) < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x24u, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2);
  }
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v5 + 32) = ObjectHandleUnchecked;
  *(_DWORD *)(v5 + 40) = 5;
  FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v5);
  FxPkgPnp::PowerSetDevicePowerState(this, 5);
}
