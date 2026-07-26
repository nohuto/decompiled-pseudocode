/*
 * XREFs of ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x1C0075ABC
 * Callers:
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00BC320 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00C3210 (-ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0005400 (NdisFreeNetBufferList.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032C88 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0074040 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C007513C (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 */

void __fastcall ndisXlateSendCompleteNetBufferListToPacket(
        struct _NET_BUFFER_LIST *a1,
        struct _NDIS_PACKET **a2,
        int *a3)
{
  struct _NDIS_PACKET *v4; // rcx
  struct _NDIS_STACK_RESERVED *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v4 = (struct _NDIS_PACKET *)a1->NdisReserved[0];
  *a2 = v4;
  *a3 = a1->Status;
  NDIS_STACK_RESERVED_FROM_PACKET(v4, &v6);
  *(_QWORD *)v6 = 1297040182LL;
  (*a2)->Private.NdisPacketFlags &= 0xC0u;
  ndisCopyNBLInfoToPacket((__int64)a1, (__int64)*a2, 1u);
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(a1, 0LL, 0x16u, (unsigned __int64)a2, 0);
  *(_QWORD *)(a1->Link.Region + 32) = 0LL;
  NdisFreeNetBufferList(a1);
}
