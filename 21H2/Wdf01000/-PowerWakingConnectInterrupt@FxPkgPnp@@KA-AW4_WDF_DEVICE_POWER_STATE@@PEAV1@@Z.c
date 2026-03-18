/*
 * XREFs of ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000DA30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0012BA0 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0077C28 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterrupt(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  const void *_a2; // rax
  __int64 v6; // rdx
  int globals; // r8d

  if ( FxPkgPnp::NotifyResourceObjectsD0(This, 8u) >= 0 )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    m_Method = This->m_DeviceD0EntryPostInterruptsEnabled.m_Method;
    if ( !m_Method || ((int (__fastcall *)(unsigned __int64))m_Method)(ObjectHandleUnchecked) >= 0 )
      return 825LL;
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v6,
      0xCu,
      0x18u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v6 + 144),
      This->m_DevicePowerState,
      globals);
  }
  return 823LL;
}
