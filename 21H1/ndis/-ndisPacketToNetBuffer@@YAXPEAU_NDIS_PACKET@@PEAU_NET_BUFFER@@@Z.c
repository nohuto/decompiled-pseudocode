/*
 * XREFs of ?ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z @ 0x1C0074C84
 * Callers:
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C0074E78 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C00757E4 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPacketToNetBuffer(struct _NDIS_PACKET *a1, struct _NET_BUFFER *a2)
{
  _MDL *Head; // rax
  _MDL *v3; // rax
  _MDL *v4; // rax
  unsigned int ByteCount; // r9d
  struct _MDL *i; // r8

  Head = a1->Private.Head;
  a2->DataOffset = 0;
  a2->MdlChain = Head;
  v3 = a1->Private.Head;
  a2->CurrentMdlOffset = 0;
  a2->Link.Region = (unsigned __int64)v3;
  v4 = a1->Private.Head;
  ByteCount = v4->ByteCount;
  for ( i = v4->Next; i; i = i->Next )
    ByteCount += i->ByteCount;
  a2->DataLength = ByteCount;
  a1->Private.TotalLength = ByteCount;
}
