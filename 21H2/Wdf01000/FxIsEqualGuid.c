/*
 * XREFs of FxIsEqualGuid @ 0x1C001C72C
 * Callers:
 *     FxIFR @ 0x1C000B6B0 (FxIFR.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C001C450 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C0025AA0 (imp_WdfWmiInstanceCreate.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002FF30 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C00320D0 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C00343A8 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C005D7AC (-FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z.c)
 *     imp_WdfWmiProviderCreate @ 0x1C005DDA0 (imp_WdfWmiProviderCreate.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0075AB0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsEqualGuid(const _GUID *Lhs, const _GUID *Rhs)
{
  return RtlCompareMemory(Lhs, Rhs, 0x10uLL) == 16;
}
