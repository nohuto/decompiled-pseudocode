/*
 * XREFs of ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x1C006DE64
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C0070A68 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0137C18 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032C88 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0063B84 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x1C006E7F0 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C2FF4 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C318C (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 */

void __fastcall ndisMAbortPackets(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2, void *a3)
{
  _LIST_ENTRY *p_PacketList; // r10
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v6; // rax
  __int64 ***v7; // r9
  _QWORD *v8; // rcx
  __int64 *v9; // rdi
  __int64 *v10; // rax
  struct _NDIS_PACKET *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 NdisPacketOobOffset; // rax
  __int64 *v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v16; // [rsp+48h] [rbp-18h]
  _QWORD v17[2]; // [rsp+50h] [rbp-10h] BYREF
  struct _NDIS_STACK_RESERVED *v18; // [rsp+90h] [rbp+30h] BYREF

  v18 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x44u,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)a1,
      0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemSend, 0LL, 0LL);
  a1->FirstPendingPacket = 0LL;
  v17[1] = v17;
  p_PacketList = &a1->PacketList;
  v17[0] = v17;
  v16 = &v15;
  v15 = (__int64 *)&v15;
  while ( 1 )
  {
    Flink = p_PacketList->Flink;
    if ( p_PacketList->Flink == p_PacketList )
      break;
    if ( Flink->Blink != p_PacketList
      || (v6 = Flink->Flink, Flink->Flink->Blink != Flink)
      || (p_PacketList->Flink = v6,
          v6->Blink = p_PacketList,
          NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)&Flink[-4], &v18),
          v8 = v16,
          *v16 != (__int64 *)&v15) )
    {
LABEL_23:
      __fastfail(3u);
    }
    v7[1] = v16;
    *v7 = &v15;
    *v8 = v7;
    v16 = (__int64 **)v7;
  }
  a1->FirstPendingPacket = 0LL;
  while ( 1 )
  {
    v9 = v15;
    if ( v15 == (__int64 *)&v15 )
      break;
    if ( (__int64 **)v15[1] != &v15 )
      goto LABEL_23;
    v10 = (__int64 *)*v15;
    if ( *(__int64 **)(*v15 + 8) != v15 )
      goto LABEL_23;
    v15 = (__int64 *)*v15;
    v10[1] = (__int64)&v15;
    v11 = (struct _NDIS_PACKET *)(v9 - 8);
    NDIS_STACK_RESERVED_FROM_PACKET(v11, &v18);
    v12 = *(_QWORD *)v18;
    *(_QWORD *)v18 = 1297040183LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( (a1->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)v11->Reserved + v11->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, v11, v13);
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&v11[1].Private.Pool + v11->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(v11);
    NdisPacketOobOffset = v11->Private.NdisPacketOobOffset;
    v11->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&v11[1].Private.Head + NdisPacketOobOffset) )
      ndisMSendCompletePacketToNetBufferLists(&a1->Header, v11, -1073676276);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, __int64))(v12 + 112))(v12, v11, 3221291020LL);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
  }
  a1->Flags |= 0x400000u;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x45u,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)a1,
      0LL);
}
