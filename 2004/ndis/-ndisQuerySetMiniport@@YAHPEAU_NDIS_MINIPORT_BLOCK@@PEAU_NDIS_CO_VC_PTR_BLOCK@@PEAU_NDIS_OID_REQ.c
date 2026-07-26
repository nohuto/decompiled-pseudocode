/*
 * XREFs of ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C000AE64
 * Callers:
 *     ?ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C000F420 (-ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisOidSendToMiniportDirect@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001BE60 (-ndisOidSendToMiniportDirect@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisIfGetMiniportStatistics @ 0x1C00FA4A0 (ndisIfGetMiniportStatistics.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00FE7A4 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010A908 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ndisIovInvalidateBlockCompletion @ 0x1C0117E60 (ndisIovInvalidateBlockCompletion.c)
 *     ndisSriovGetResourceForBar @ 0x1C0117FE0 (ndisSriovGetResourceForBar.c)
 *     ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C0118280 (ndisSriovInterfaceGetVendorAndDeviceIds.c)
 *     ndisSriovInterfaceQueryProbedBars @ 0x1C0118410 (ndisSriovInterfaceQueryProbedBars.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C01185D0 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C01187C0 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceResetVF @ 0x1C01189B0 (ndisSriovInterfaceResetVF.c)
 *     ndisSriovInterfaceSetVfPowerState @ 0x1C0118B10 (ndisSriovInterfaceSetVfPowerState.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C0118C80 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C0118E60 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C011F660 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012067C (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C0120B4C (ndisNdkPcwCollectMiniportStats.c)
 *     ndisIfQuerySetMiniport @ 0x1C0127CC8 (ndisIfQuerySetMiniport.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012AE18 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 */

__int64 __fastcall ndisQuerySetMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CO_VC_PTR_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        unsigned __int8 a4,
        struct _NDIS_FILTER_BLOCK *a5)
{
  return ndisQuerySetMiniportEx(a1, a2, a3, a4, a5, 0LL);
}
