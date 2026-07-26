/*
 * XREFs of NdisConvertNtStatusToNdisStatus @ 0x1C002BC30
 * Callers:
 *     NdisOpenConfiguration @ 0x1C0028A80 (NdisOpenConfiguration.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C002B6AC (ndisIfRegisterInterfaceEx.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C0060950 (NdisLWMRegisterMiniportDriver.c)
 *     NdisLWMStartNetworkInterface @ 0x1C0060BA0 (NdisLWMStartNetworkInterface.c)
 *     ?ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086DD0 (-ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087054 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0095700 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetTaskOffloadValidate@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009FA30 (-ndisSetTaskOffloadValidate@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115518 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisConvertNtStatusToNdisStatus(int a1)
{
  __int64 result; // rax

  if ( a1 >= 0 && a1 != 259 && a1 != 1076035585 )
    return 0LL;
  result = 3221291030LL;
  if ( a1 != -1073741789 )
    return (unsigned int)a1;
  return result;
}
