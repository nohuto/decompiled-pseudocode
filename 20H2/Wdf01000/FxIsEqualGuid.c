/*
 * XREFs of FxIsEqualGuid @ 0x1C003927C
 * Callers:
 *     FxIFR @ 0x1C000AA90 (FxIFR.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C001B734 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C003CB2C (-FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C003CF80 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x1C003D3D0 (imp_WdfWmiProviderCreate.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C003F078 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C005CA60 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0067A70 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C007FF44 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsEqualGuid(const _GUID *Lhs, const _GUID *Rhs)
{
  return RtlCompareMemory(Lhs, Rhs, 0x10uLL) == 16;
}
