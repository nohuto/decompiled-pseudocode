/*
 * XREFs of ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C2EF4
 * Callers:
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00BC1D0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00BC270 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BF3B0 (-ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BF5F0 (-ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00BFA50 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     NdisMSendComplete @ 0x1C00C0200 (NdisMSendComplete.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C3BC0 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDISM_SEND_PACKET_STATS(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _MDL *Head; // rdi
  char *MappedSystemVa; // rax
  _NDIS_MINIPORT_STATS *BottomIfStats; // rdx
  ULONG ByteCount; // r8d
  struct _MDL *i; // rcx
  _NDIS_MINIPORT_STATS *v8; // rax
  char v9; // dl

  Head = a2->Private.Head;
  if ( (Head->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)Head->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
  BottomIfStats = a1->BottomIfStats;
  if ( BottomIfStats )
  {
    ByteCount = Head->ByteCount;
    for ( i = Head->Next; i; i = i->Next )
      ByteCount += i->ByteCount;
    BottomIfStats->ifHCOutOctets += ByteCount;
    if ( !MappedSystemVa || a1->MediaType )
    {
      v8 = a1->BottomIfStats;
    }
    else
    {
      v9 = *MappedSystemVa;
      if ( *MappedSystemVa == -1
        && MappedSystemVa[1] == -1
        && MappedSystemVa[2] == -1
        && MappedSystemVa[3] == -1
        && MappedSystemVa[4] == -1
        && MappedSystemVa[5] == -1 )
      {
        ++a1->BottomIfStats->ifHCOutBroadcastPkts;
        a1->BottomIfStats->ifHCOutBroadcastOctets += ByteCount;
        return;
      }
      v8 = a1->BottomIfStats;
      if ( (v9 & 1) != 0 )
      {
        ++v8->ifHCOutMulticastPkts;
        a1->BottomIfStats->ifHCOutMulticastOctets += ByteCount;
        return;
      }
    }
    ++v8->ifHCOutUcastPkts;
    a1->BottomIfStats->ifHCOutUcastOctets += ByteCount;
  }
}
