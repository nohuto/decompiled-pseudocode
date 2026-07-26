/*
 * XREFs of ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A6E10
 * Callers:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0004FB0 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0007D60 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C00092F0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1C00A9EF0 (-ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C00ADE80 (ndisDoCancelDirectOidRequest.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C00AEBFC (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 * Callees:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8060 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8654 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 */

__int64 __fastcall ndisSetBusyAsync(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    return ndisWdmSetBusyAsync(a1);
  else
    return ndisWdfSetBusyAsync(a1);
}
