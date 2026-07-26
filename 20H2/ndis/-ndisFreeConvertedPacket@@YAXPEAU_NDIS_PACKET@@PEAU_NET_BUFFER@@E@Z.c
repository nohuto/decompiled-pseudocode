/*
 * XREFs of ?ndisFreeConvertedPacket@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@E@Z @ 0x1C0075108
 * Callers:
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x1C00758A4 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x1C00759D4 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 * Callees:
 *     NdisFreePacket @ 0x1C0032610 (NdisFreePacket.c)
 */

void __fastcall ndisFreeConvertedPacket(struct _NDIS_PACKET *a1, struct _NET_BUFFER *a2, char a3)
{
  bool v3; // cf
  _MDL *Head; // r8
  __int64 v6; // r9
  _MDL *Tail; // rdx
  unsigned int Flags; // eax

  v3 = a3 != 0;
  Head = a1->Private.Head;
  v6 = v3 ? 0x30 : 0;
  if ( Head )
  {
    Tail = a1->Private.Tail;
    Tail->ByteCount = *(_DWORD *)&a1->MiniportReserved[v6];
    Tail->Next = *(struct _MDL **)&a1->MacReserved[v6 + 8];
    Head->ByteOffset -= a2->CurrentMdlOffset;
    Head->ByteCount += a2->CurrentMdlOffset;
    if ( (Head->MdlFlags & 5) != 0 )
      Head->MappedSystemVa = (char *)Head->MappedSystemVa - a2->CurrentMdlOffset;
  }
  Flags = a1->Private.Flags;
  if ( (Flags & 0x100) != 0 )
  {
    a1->Private.Flags = Flags & 0xFFFFFEFF;
    *(_QWORD *)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 24] = 0LL;
  }
  NdisFreePacket(a1);
}
