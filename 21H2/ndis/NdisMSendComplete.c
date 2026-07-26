/*
 * XREFs of NdisMSendComplete @ 0x1C00C0200
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032C88 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C0070344 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C2EF4 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C2FF4 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C318C (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 */

void __fastcall NdisMSendComplete(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  unsigned __int8 NdisPacketFlags; // al
  struct _NDIS_STACK_RESERVED *v7; // r14
  unsigned __int8 *WrapperReserved; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int8 **v11; // rcx
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v13);
  if ( (*(_DWORD *)v13 & 0xFFFFFF00) != 0x4D4F4300LL )
  {
    NdisPacketFlags = a2->Private.NdisPacketFlags;
    if ( (NdisPacketFlags & 0x10) != 0 )
    {
      if ( !a3 )
      {
        NDISM_SEND_PACKET_STATS(a1, a2);
        NdisPacketFlags = a2->Private.NdisPacketFlags;
      }
      if ( (NdisPacketFlags & 8) != 0 )
      {
        *(unsigned int *)((char *)&a2->Private.Count + a2->Private.NdisPacketOobOffset) = a3;
        a2->Private.NdisPacketFlags &= ~8u;
      }
      else
      {
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        v7 = v13;
        a1->MiniportThread = KeGetCurrentThread();
        WrapperReserved = a2->WrapperReserved;
        v9 = *(_QWORD *)&a2->MacReserved[16];
        v10 = *(_QWORD *)v7;
        if ( *(struct _NDIS_PACKET **)(v9 + 8) != (struct _NDIS_PACKET *)&a2->MacReserved[16]
          || (v11 = *(unsigned __int8 ***)&a2->MacReserved[24], *v11 != WrapperReserved) )
        {
          __fastfail(3u);
        }
        *v11 = (unsigned __int8 *)v9;
        *(_QWORD *)(v9 + 8) = v11;
        *(_QWORD *)&a2->MacReserved[24] = &a2->MacReserved[16];
        *(_QWORD *)WrapperReserved = WrapperReserved;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v7 = 1297040177LL;
        if ( a1->FirstPendingPacket )
          ndisMQueueWorkItem(a1, NdisWorkItemSend, 0LL);
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *((_DWORD *)v7 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
          ndisFreePaddedMdl(a2);
        NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
        a2->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&a2[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, a3);
        else
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v10 + 112))(v10, a2, a3);
      }
    }
  }
}
