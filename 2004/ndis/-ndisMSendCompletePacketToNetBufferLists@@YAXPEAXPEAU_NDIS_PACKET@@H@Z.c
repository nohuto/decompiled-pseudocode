/*
 * XREFs of ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C301C
 * Callers:
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C006334C (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x1C006DBD4 (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     ?ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BF240 (-ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BF480 (-ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00BF8E0 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BFC80 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     NdisMSendComplete @ 0x1C00C0090 (NdisMSendComplete.c)
 *     ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C33B0 (-ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3810 (-ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C3A50 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C3BF0 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C0069168 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x1C00759D4 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 */

void __fastcall ndisMSendCompletePacketToNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NDIS_PACKET *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  struct _NET_BUFFER_LIST *v5; // rax

  v3 = a3;
  if ( (a3 & 0xC0010000) == 0xC0010000 )
    v3 = (unsigned __int16)a3 | 0xC0230000;
  v5 = ndisXlateSendCompletePacketToNetBufferList(a2, v3);
  if ( v5 )
  {
    v5->Status = v3;
    ndisInvokeNextSendCompleteHandler(
      v5,
      0,
      a1,
      *(struct _NDIS_OBJECT_HEADER **)&a1[2].PMCurrentParameters.Header.Type,
      a1[2].WOLPatternList.Next,
      (void (*)(void))a1[2].Bind);
  }
}
