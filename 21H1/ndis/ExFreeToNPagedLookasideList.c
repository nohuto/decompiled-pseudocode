/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C008E214
 * Callers:
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C008D7E0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x1C00A1D74 (ndisCopyPeriodicReceiveNbl.c)
 *     ndisFreePeriodicReceives @ 0x1C00A2780 (ndisFreePeriodicReceives.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00A3968 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ?NdisMTransferDataComplete@@YAXPEAXPEAU_NDIS_PACKET@@HI@Z @ 0x1C00BFD60 (-NdisMTransferDataComplete@@YAXPEAXPEAU_NDIS_PACKET@@HI@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C00C44E0 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
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
