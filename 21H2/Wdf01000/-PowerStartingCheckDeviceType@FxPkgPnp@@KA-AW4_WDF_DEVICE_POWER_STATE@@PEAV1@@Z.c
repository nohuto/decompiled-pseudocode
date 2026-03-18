/*
 * XREFs of ?PowerStartingCheckDeviceType@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0032F50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001C758 (-IsPdo@FxDevice@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartingCheckDeviceType(FxPkgPnp *This)
{
  return FxDevice::IsPdo(This->m_Device) ? 791 : 783;
}
