/*
 * XREFs of ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C01068A0
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002DE90 (NdisRegisterProtocolDriver.c)
 *     NdisIfRegisterProvider @ 0x1C00327A0 (NdisIfRegisterProvider.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036620 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisDriverReinit @ 0x1C0039D30 (ndisDriverReinit.c)
 *     NdisIMRegisterLayeredMiniport @ 0x1C005FFA0 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x1C00611E0 (NdisMRegisterMiniport.c)
 *     NdisRegisterProtocol @ 0x1C00983F0 (NdisRegisterProtocol.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisIfEnsureNsiInitialized(void)
{
  return RtlRunOnceExecuteOnce(&RunOnce, ndisIfInitializePhase2, 0LL, 0LL);
}
