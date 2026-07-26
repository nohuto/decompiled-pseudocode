/*
 * XREFs of ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x1C0075B54
 * Callers:
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00BC270 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C318C (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0074040 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C00751F8 (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z @ 0x1C0075288 (-ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisXlateSendCompletePacketToNetBufferList(struct _NDIS_PACKET *a1, int a2)
{
  __int64 NdisPacketOobOffset; // rcx
  __int64 v5; // rbx
  struct _NET_BUFFER *v6; // r14

  --*(_DWORD *)&a1[-1].ProtocolReserved[4];
  NdisPacketOobOffset = a1->Private.NdisPacketOobOffset;
  v5 = *(__int64 *)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
  if ( (a1->Private.Flags & 0x4000) != 0 )
  {
    *(_DWORD *)(v5 + 140) = a2;
    *(_MDL **)((char *)&a1[1].Private.Head + a1->Private.NdisPacketOobOffset) = 0LL;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v5, 0LL, 0x18u, (unsigned __int64)a1, 0);
  }
  else
  {
    *(_MDL **)((char *)&a1[1].Private.Head + NdisPacketOobOffset) = 0LL;
    v6 = (struct _NET_BUFFER *)v5;
    v5 = *(_QWORD *)(v5 + 128);
    ndisCopyPacketInfoToNBL((__int64)a1, (_QWORD *)v5, 1u);
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v5, 0LL, 0x14u, (unsigned __int64)a1, 0);
    ndisFreeConvertedPacket(a1, v6, 1);
    if ( a2 && !*(_DWORD *)(v5 + 140) )
      *(_DWORD *)(v5 + 140) = a2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 96), 0xFFFFFFFF) != 1 )
      v5 = 0LL;
    if ( v5 )
      *(_QWORD *)v5 = 0LL;
  }
  return (struct _NET_BUFFER_LIST *)v5;
}
