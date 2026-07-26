/*
 * XREFs of ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0063B84
 * Callers:
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00635DC (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x1C006DE64 (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00BC1D0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00BC270 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00BFA50 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3520 (-ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3980 (-ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C3BC0 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C3D60 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C0039370 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMFreeSGList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, __int64 a3)
{
  __int64 NdisPacketOobOffset; // rax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rsi
  _SCATTER_GATHER_LIST *v6; // rdx
  unsigned int Flags; // eax
  __int64 v8; // rax
  _SLIST_ENTRY *v9; // rdi
  __int64 SGListLookasideList; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  struct _MDL *v17; // rcx
  char *v18; // rbx

  NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  LOBYTE(a3) = 1;
  v6 = *(_SCATTER_GATHER_LIST **)((char *)a2->Reserved + NdisPacketOobOffset);
  *(unsigned __int64 *)((char *)a2->Reserved + NdisPacketOobOffset) = 0LL;
  MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->PutScatterGatherList(
    MiniportSGDmaBlock->DmaAdapterObject,
    v6,
    a3);
  Flags = a2->Private.Flags;
  if ( (Flags & 0x2000) != 0 )
  {
    a2->Private.Flags = Flags & 0xFFFFDFFF;
    v8 = a2->Private.NdisPacketOobOffset;
    v9 = *(_SLIST_ENTRY **)&a2->MacReserved[v8 + 24];
    *(_QWORD *)&a2->MacReserved[v8 + 24] = 0LL;
    SGListLookasideList = (__int64)MiniportSGDmaBlock->SGListLookasideList;
    v11 = KeGetPcr()->Prcb.Number + 1;
    v12 = *(_DWORD *)SGListLookasideList - 1;
    if ( v11 < *(_DWORD *)SGListLookasideList )
      v12 = v11;
    v13 = v12;
    v14 = *(_QWORD *)(SGListLookasideList + 32);
    v15 = *(_QWORD *)(v14 + 8 * v13);
    if ( !*(_BYTE *)(v15 + 112) )
      PplpLazyInitializeLookasideList(SGListLookasideList, *(_QWORD *)(v14 + 8 * v13));
    ++*(_DWORD *)(v15 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v15) < *(_WORD *)(v15 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v15, v9);
    }
    else
    {
      ++*(_DWORD *)(v15 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v15 + 56))(v9, v15);
    }
  }
  else if ( (Flags & 0x800) != 0 )
  {
    a2->Private.Flags = Flags & 0xFFFFF7FF;
    v16 = a2->Private.NdisPacketOobOffset;
    v17 = *(struct _MDL **)&a2->MacReserved[v16 + 24];
    *(_QWORD *)&a2->MacReserved[v16 + 24] = 0LL;
    v18 = (char *)v17->StartVa + v17->ByteOffset;
    IoFreeMdl(v17);
    ExFreePoolWithTag(v18, 0);
  }
}
