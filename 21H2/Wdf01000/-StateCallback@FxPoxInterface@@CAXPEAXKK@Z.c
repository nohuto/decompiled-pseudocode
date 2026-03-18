/*
 * XREFs of ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C001D040
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C001CD74 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPoxInterface::StateCallback(FxPoxInterface *Context, unsigned int Component, unsigned int State)
{
  FxPkgPnp *m_PkgPnp; // rdx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v8; // rdi
  void (__fastcall *ComponentIdleStateCallback)(void *, unsigned int, unsigned int); // rax
  FxPkgPnp *v10; // r10
  const void *_a1; // rax
  __int64 v12; // rdx
  _FX_DRIVER_GLOBALS *v13; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v15; // r10
  _FX_DRIVER_GLOBALS *v16; // r11

  m_PkgPnp = Context->m_PkgPnp;
  if ( m_PkgPnp->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qq(v13, 5u, 0xCu, 0xAu, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, *(const void **)(v12 + 144));
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v8 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings
    && (ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback) != 0LL )
  {
    v10 = Context->m_PkgPnp;
    if ( v10->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v10->m_DeviceBase);
      WPP_IFR_SF_qq(
        v16,
        5u,
        0xCu,
        0xBu,
        WPP_PoxInterfaceKm_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v15 + 144));
      v8->ComponentIdleStateCallback(v8->PoFxDeviceContext, Component, State);
    }
    else
    {
      ComponentIdleStateCallback(v8->PoFxDeviceContext, Component, State);
    }
  }
  else
  {
    PoFxCompleteIdleState(Context->m_PoHandle, Component);
  }
}
