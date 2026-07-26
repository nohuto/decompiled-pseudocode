/*
 * XREFs of ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008ECD4
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001D70 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisSendNetBufferLists @ 0x1C0002460 (NdisSendNetBufferLists.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0002A00 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002E30 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0002F10 (NdisMSendNetBufferListsComplete.c)
 *     NdisReturnNetBufferLists @ 0x1C00043D0 (NdisReturnNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004990 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C0004C00 (NdisMAllocateNetBufferSGList.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0004FB0 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ndisInterruptDpc @ 0x1C00076F0 (ndisInterruptDpc.c)
 *     ndisMiniportMessageIsr @ 0x1C0007960 (ndisMiniportMessageIsr.c)
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C003E120 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisBuildScatterGatherList @ 0x1C0063550 (NdisBuildScatterGatherList.c)
 *     ndisMiniportDpc @ 0x1C0066648 (ndisMiniportDpc.c)
 *     ndisMiniportIsr @ 0x1C0066810 (ndisMiniportIsr.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099194 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00AA290 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ndisMIsr @ 0x1C00C1C30 (ndisMIsr.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwStartCycleCounter(struct NDIS_PCW_CONTEXT *a1, unsigned int a2)
{
  unsigned int Number; // eax

  Number = *((_DWORD *)a1 + 4);
  if ( Number == -1 )
  {
    Number = KeGetPcr()->Prcb.Number;
    *((_DWORD *)a1 + 4) = Number;
  }
  *(_QWORD *)(*(_QWORD *)a1
            + ndisPcwOffsetToPerCpuData
            + (unsigned __int64)(ndisPcwPerCpuDataStride * Number)
            + 8LL * a2
            + 304) = __rdtsc();
}
