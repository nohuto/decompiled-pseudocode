/*
 * XREFs of ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C008CAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C008C0DC (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

void __fastcall FxPoxInterface::StateCallback(FxPoxInterface *Context, unsigned int Component, unsigned int State)
{
  FxPkgPnp *m_PkgPnp; // rdx
  const void *_a1; // rax
  __int64 v8; // rdx
  _FX_DRIVER_GLOBALS *v9; // r10
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v11; // rdi
  void (__fastcall *ComponentIdleStateCallback)(void *, unsigned int, unsigned int); // rax
  FxPkgPnp *v13; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v15; // r10
  _FX_DRIVER_GLOBALS *v16; // r11

  m_PkgPnp = Context->m_PkgPnp;
  if ( m_PkgPnp->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qq(v9, 5u, 0xCu, 0xAu, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, *(const void **)(v8 + 144));
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v11 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings
    && (ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback) != 0LL )
  {
    v13 = Context->m_PkgPnp;
    if ( v13->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v13->m_DeviceBase);
      WPP_IFR_SF_qq(
        v16,
        5u,
        0xCu,
        0xBu,
        WPP_PoxInterfaceKm_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v15 + 144));
      ComponentIdleStateCallback = v11->ComponentIdleStateCallback;
    }
    ComponentIdleStateCallback(v11->PoFxDeviceContext, Component, State);
  }
  else
  {
    PoFxCompleteIdleState(Context->m_PoHandle, Component);
  }
}
