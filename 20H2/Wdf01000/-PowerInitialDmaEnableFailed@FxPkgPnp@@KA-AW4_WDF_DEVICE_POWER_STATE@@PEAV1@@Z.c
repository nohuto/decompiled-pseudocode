/*
 * XREFs of ?PowerInitialDmaEnableFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007D640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0004BD4 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0069E6C (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerInitialDmaEnableFailed(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int v4; // r8d
  const void *_a2; // rax
  __int64 v6; // rdx
  int v7; // r8d

  FxPkgPnp::PowerDmaPowerDown(This);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  m_Method = This->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( m_Method )
    v4 = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked, WdfPowerDeviceD3Final);
  else
    v4 = 0;
  if ( v4 < 0 )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v6,
      0xCu,
      0x20u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v6 + 144),
      5u,
      v7);
  }
  return 833LL;
}
