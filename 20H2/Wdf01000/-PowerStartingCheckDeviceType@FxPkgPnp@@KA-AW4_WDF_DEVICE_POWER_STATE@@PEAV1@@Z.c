/*
 * XREFs of ?PowerStartingCheckDeviceType@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DC20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C00019B8 (-IsPdo@FxDevice@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartingCheckDeviceType(FxPkgPnp *This)
{
  return FxDevice::IsPdo(This->m_Device) ? 791 : 783;
}
