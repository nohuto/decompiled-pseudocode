/*
 * XREFs of ?DirectedPowerUpCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0039AD2 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::DirectedPowerUpCallback(FxPoxInterface *Context, unsigned int Flags)
{
  const void *_a1; // rax
  __int64 v4; // rdx
  __int64 v5; // r10

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Context->m_PkgPnp->m_DeviceBase);
  WPP_IFR_SF_qq(
    *(_FX_DRIVER_GLOBALS **)(v5 + 16),
    4u,
    0xCu,
    0x14u,
    WPP_PoxInterfaceKm_cpp_Traceguids,
    _a1,
    *(const void **)(v4 + 144));
  _InterlockedExchange(&Context->m_DirectedTransitionActive, 1);
  FxPoxInterface::DprProcessEventFromPoxCallback(Context, DprEventPoxDirectedPowerUp);
}
