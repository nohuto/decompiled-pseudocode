/*
 * XREFs of ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008CE40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C008C9DC (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 */

void __fastcall FxPoxInterface::ComponentIdleCallback(FxPoxInterface *Context, unsigned int Component)
{
  FxPkgPnp *m_PkgPnp; // rdx
  const void *_a1; // rax
  __int64 v6; // rdx
  _FX_DRIVER_GLOBALS *v7; // r10
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v9; // rdi
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // rax
  FxPkgPnp *v11; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v13; // r10
  _FX_DRIVER_GLOBALS *v14; // r11

  m_PkgPnp = Context->m_PkgPnp;
  if ( m_PkgPnp->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qq(v7, 5u, 0xCu, 0xEu, WPP_PoxInterfaceKm_cpp_Traceguids, _a1, *(const void **)(v6 + 144));
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v9 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings
    && (ComponentIdleConditionCallback = PowerFrameworkSettings->ComponentIdleConditionCallback) != 0LL )
  {
    v11 = Context->m_PkgPnp;
    if ( v11->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v11->m_DeviceBase);
      WPP_IFR_SF_qq(
        v14,
        5u,
        0xCu,
        0xFu,
        WPP_PoxInterfaceKm_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v13 + 144));
      ComponentIdleConditionCallback = v9->ComponentIdleConditionCallback;
    }
    ComponentIdleConditionCallback(v9->PoFxDeviceContext, Component);
  }
  else
  {
    PoFxCompleteIdleCondition(Context->m_PoHandle, Component);
  }
}
