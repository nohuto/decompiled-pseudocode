/*
 * XREFs of ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x1C0075A24
 * Callers:
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00BAE4C (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BBD10 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C3ED4 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00C4538 (ndisReturnPacketToNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0074040 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C00751F8 (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z @ 0x1C0075288 (-ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisXlateReturnPacketToNetBufferList(struct _NDIS_PACKET *a1)
{
  __int64 NdisPacketOobOffset; // rax
  struct _NET_BUFFER_LIST *v3; // rdi

  NdisPacketOobOffset = a1->Private.NdisPacketOobOffset;
  v3 = *(struct _NET_BUFFER_LIST **)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
  *(_MDL **)((char *)&a1[1].Private.Head + NdisPacketOobOffset) = 0LL;
  ndisCopyPacketInfoToNBL((__int64)a1, v3, 3u);
  if ( (a1->Private.Flags & 0x4000) != 0 )
  {
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v3, 0LL, 0x1Eu, (unsigned __int64)a1, 0);
  }
  else
  {
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v3, 0LL, 0x1Au, (unsigned __int64)a1, 0);
    ndisFreeConvertedPacket(a1, v3->FirstNetBuffer, 0);
  }
  return v3;
}
