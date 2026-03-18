/*
 * XREFs of ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00173F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0017454 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqLd @ 0x1C006A74C (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterrupt(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v4; // r8d
  const void *_a2; // rax
  __int64 v7; // rdx
  int globals; // r8d

  if ( FxPkgPnp::NotifyResourceObjectsD0(This, 8u) >= 0 )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    m_Method = This->m_DeviceD0EntryPostInterruptsEnabled.m_Method;
    if ( m_Method )
      v4 = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked, (_WDF_POWER_DEVICE_STATE)This->m_DevicePowerState);
    else
      v4 = 0;
    if ( v4 >= 0 )
      return 825LL;
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v7,
      0xCu,
      0x18u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v7 + 144),
      This->m_DevicePowerState,
      globals);
  }
  return 823LL;
}
