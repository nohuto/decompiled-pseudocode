/*
 * XREFs of ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C00865DC
 * Callers:
 *     ?PowerGotoDxNPFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086E20 (-PowerGotoDxNPFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedDerefParentNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087690 (-PowerUpFailedDerefParentNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00876C0 (-PowerUpFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C000D17C (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxPkgPnp::DisconnectInterruptNP(FxPkgPnp *this)
{
  const void *_a2; // rax
  __int64 v3; // rdx

  _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qq(this->m_Globals, 2u, 0xCu, 0x22u, WPP_PowerStateMachine_cpp_Traceguids, *(const void **)(v3 + 144), _a2);
  FxPkgPnp::NotifyResourceObjectsDx(this, 4u);
}
