/*
 * XREFs of ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BFC80
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032928 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F9D0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C00700B4 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C2E84 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C2ED4 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C301C (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 */

void __fastcall ndisMSendPacketsToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned int v7; // ebp
  _LIST_ENTRY *p_PacketList; // r15
  struct _NDIS_PACKET *v9; // rdi
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rdx
  struct _NDIS_STACK_RESERVED *v13; // r12
  __int64 v14; // r13
  _LIST_ENTRY **v15; // rax
  __int64 NdisPacketOobOffset; // rax
  KIRQL v17; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF
  struct _NDIS_STACK_RESERVED *v19; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v20 = a3;
  v19 = 0LL;
  NewIrql = 0;
  v4 = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  v7 = 0;
  if ( a3 )
  {
    p_PacketList = &a1->PacketList;
    while ( 1 )
    {
      v9 = *a2;
      if ( (a1->SendFlags & 8) != 0 )
        v4 = ndisMCheckPacketAndPad(a1, *a2);
      *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
      NDIS_STACK_RESERVED_FROM_PACKET(v9, &v19);
      v10 = (_LIST_ENTRY *)&v9->MacReserved[16];
      *(_QWORD *)&v9->MacReserved[24] = &v9->MacReserved[16];
      *(_QWORD *)&v9->MacReserved[16] = &v9->MacReserved[16];
      Blink = a1->PacketList.Blink;
      if ( Blink->Flink != p_PacketList )
        break;
      v10->Flink = p_PacketList;
      *(_QWORD *)&v9->MacReserved[24] = Blink;
      Blink->Flink = v10;
      a1->PacketList.Blink = v10;
      if ( v4 )
      {
        Flink = v10->Flink;
        v13 = v19;
        v14 = *(_QWORD *)v19;
        if ( v10->Flink->Blink != v10 )
          break;
        v15 = *(_LIST_ENTRY ***)&v9->MacReserved[24];
        if ( *v15 != v10 )
          break;
        *v15 = Flink;
        Flink->Blink = (_LIST_ENTRY *)v15;
        *(_QWORD *)&v9->MacReserved[24] = &v9->MacReserved[16];
        v10->Flink = v10;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v13 = 1297040176LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *((_DWORD *)v13 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&v9[1].Private.Pool + v9->Private.NdisPacketOobOffset) )
          ndisFreePaddedMdl(v9);
        NdisPacketOobOffset = v9->Private.NdisPacketOobOffset;
        v9->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&v9[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists(&a1->Header, v9, v4);
        else
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v14 + 112))(v14, v9, v4);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        v4 = 0;
        a1->MiniportThread = KeGetCurrentThread();
      }
      else if ( !a1->FirstPendingPacket )
      {
        a1->FirstPendingPacket = v9;
      }
      ++v7;
      ++a2;
      if ( v7 >= v20 )
        goto LABEL_19;
    }
    __fastfail(3u);
  }
LABEL_19:
  ndisMQueueWorkItem(a1, NdisWorkItemSend, 0LL);
  if ( !a1->LockAcquired )
  {
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    ndisMProcessDeferred(a1);
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
  }
  v17 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v17);
}
