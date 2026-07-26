/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C008E8F4
 * Callers:
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C008DEC0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x1C00A2234 (ndisCopyPeriodicReceiveNbl.c)
 *     ndisFreePeriodicReceives @ 0x1C00A2C40 (ndisFreePeriodicReceives.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00A3E28 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ?NdisMTransferDataComplete@@YAXPEAXPEAU_NDIS_PACKET@@HI@Z @ 0x1C00C0220 (-NdisMTransferDataComplete@@YAXPEAXPEAU_NDIS_PACKET@@HI@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C00C49A0 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) < Lookaside->L.Depth )
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
}
