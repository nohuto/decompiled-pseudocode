/*
 * XREFs of ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C3F58
 * Callers:
 *     NdisReturnPackets @ 0x1C0071AD0 (NdisReturnPackets.c)
 *     ?ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00C3DD0 (-ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C00326E8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C006F9D4 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C008D7E0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisReturnPacketToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, PNDIS_PACKET Packet)
{
  char v4; // si
  void (__fastcall *MiniportReturnPacketHandler)(void *, _NDIS_PACKET *); // r8
  int v6; // eax
  int v7; // ecx
  struct _NDIS_STACK_RESERVED *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = 0;
  NDIS_STACK_RESERVED_FROM_PACKET(Packet, &v8);
  if ( (a1->Flags & 0x40000) != 0 )
    goto LABEL_7;
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( !a1->LockAcquired )
  {
    a1->LockAcquired = 1;
    v4 = 1;
    a1->LockThread = KeGetCurrentThread();
  }
  if ( (a1->Flags & 0x40000) != 0 || v4 )
  {
LABEL_7:
    MiniportReturnPacketHandler = a1->MiniportReturnPacketHandler;
    *(_QWORD *)v8 = 0LL;
    v6 = Packet[-1].Reserved[1];
    v7 = *(_DWORD *)&Packet[-1].ProtocolReserved[4] - 1;
    *(_DWORD *)&Packet[-1].ProtocolReserved[4] = v7;
    if ( (v6 & 1) != 0 && v7 == -1 )
      NDIS_FREE_XFER_DATA_PACKET(Packet);
    else
      MiniportReturnPacketHandler(a1->MiniportReturnPacketContext, Packet);
    if ( (a1->Flags & 0x8000) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)&a1->IndicatedPacketsCount);
  }
  else
  {
    *(_QWORD *)v8 = a1->ReturnPacketsQueue;
    a1->ReturnPacketsQueue = Packet;
    ndisMQueueWorkItem(a1, NdisWorkItemReturnPackets, 0LL);
  }
  if ( (a1->Flags & 0x40000) == 0 )
  {
    if ( v4 )
    {
      a1->LockThread = 0LL;
      a1->LockAcquired = 0;
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  }
}
