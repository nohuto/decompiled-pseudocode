/*
 * XREFs of ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C40B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000326C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisMPauseComplete @ 0x1C003C2F0 (NdisMPauseComplete.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C003E320 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C006CE1C (-NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C00756D8 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0075984 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C008E040 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C00C6C98 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisMIndicatePacketsToNetBufferLists(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  int v3; // ebx
  bool v6; // al
  struct _NET_BUFFER_LIST *v7; // rsi
  bool v8; // r13
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  _NDIS_MINIPORT_STATE RecvState; // ecx
  KIRQL v12; // dl
  bool v13; // cc
  unsigned __int64 *p_RecvLock; // rcx
  __int64 v15; // r8
  int v16; // ebx
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  unsigned int v18; // r13d
  struct _NET_BUFFER_LIST *Alignment; // rbx
  struct _NDIS_PACKET *v20; // rdx
  __int64 NdisPacketOobOffset; // rax
  unsigned int v22; // eax
  bool v23; // zf
  KIRQL v24; // dl
  KIRQL v25; // dl
  struct _NET_BUFFER_LIST *v26; // rbx
  unsigned int v27; // esi
  __int64 v28; // rax
  __int64 v29; // r14
  struct _NDIS_PACKET **v30; // rbx
  struct _NDIS_PACKET *v31; // rcx
  __int64 v32; // rax
  _QWORD v33[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-28h]
  __int128 v35; // [rsp+54h] [rbp-24h]
  unsigned int v36[2]; // [rsp+64h] [rbp-14h]
  int v37; // [rsp+6Ch] [rbp-Ch]
  bool v38; // [rsp+C0h] [rbp+48h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+58h] BYREF
  int v41; // [rsp+D8h] [rbp+60h]

  v34 = a3;
  v35 = 0uLL;
  v3 = 0;
  *(_QWORD *)v36 = 0LL;
  v37 = 0;
  NewIrql = 0;
  v33[1] = a2;
  v33[0] = a1;
  while ( 1 )
  {
    v6 = ndisXlateRecvPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)v33);
    v7 = *(struct _NET_BUFFER_LIST **)((char *)&v35 + 4);
    v8 = v6;
    v9 = HIDWORD(v35);
    v38 = v6;
    if ( !*(_QWORD *)((char *)&v35 + 4) )
      goto LABEL_28;
    v41 = HIDWORD(v35);
    v10 = HIDWORD(v35) - v3;
    NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK(a1, &NewIrql);
    RecvState = a1->RecvState;
    a1->MiniportRecvLockThread = 0LL;
    v12 = NewIrql;
    v13 = (unsigned int)(RecvState - 5) <= 1;
    p_RecvLock = &a1->RecvLock;
    if ( v13 )
      break;
    a1->OutstandingReceives += v10;
    KeReleaseSpinLock(p_RecvLock, v12);
    v16 = v36[1];
    if ( (a1->Flags & 0x8000) != 0 && (v36[1] & 2) == 0 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&a1->IndicatedPacketsCount, v10);
      v16 = v36[1];
      v9 = HIDWORD(v35);
      v7 = *(struct _NET_BUFFER_LIST **)((char *)&v35 + 4);
    }
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        v7,
        (__int64)a1->NblTracker,
        (unsigned __int64)a1->Next.IndicateNetBufferListsTracker,
        (v16 & 2 | 0x100u) >> 1,
        0);
    if ( byte_1C00E3FD0 )
    {
      CompContext = a1->PktMonEdge.CompContext;
      if ( CompContext )
      {
        if ( (*((_DWORD *)CompContext + 13) & 1) != 0 )
          PktMonClientNblLogNdis(&a1->PktMonEdge, v7, v15, 1LL);
      }
    }
    ndisInvokeNextReceiveHandler(
      v7,
      0,
      v36[0],
      v16,
      (struct _NDIS_FILTER_BLOCK *)a1->Next.IndicateNetBufferListsObject,
      a1->Next.IndicateNetBufferListsContext,
      (void (*)(void))a1->Next.IndicateNetBufferListsHandler);
    if ( (v16 & 2) != 0 )
    {
      v18 = a1->Flags & 0x40000;
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v7,
          (__int64)a1->Next.IndicateNetBufferListsTracker,
          (unsigned __int64)a1->NblTracker,
          0x8Eu,
          0);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v7->Link.Alignment;
        v20 = ndisXlateReturnNetBufferListToPacket(v7);
        NdisPacketOobOffset = v20->Private.NdisPacketOobOffset;
        if ( *(unsigned int *)((char *)&v20->Private.Count + NdisPacketOobOffset) != -1073741670 )
        {
          if ( v18 )
          {
            if ( (v20[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v20[-1].ProtocolReserved[4] == -1 )
              NDIS_FREE_XFER_DATA_PACKET(v20);
            else
              ((void (__fastcall *)(void *))a1->MiniportReturnPacketHandler)(a1->MiniportAdapterContext);
          }
          else
          {
            *(unsigned int *)((char *)&v20->Private.Count + NdisPacketOobOffset) = 0;
          }
        }
        v7 = Alignment;
      }
      while ( Alignment );
      NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK(a1, &NewIrql);
      v22 = a1->OutstandingReceives - v10;
      v23 = a1->RecvState == NdisMiniportPausing;
      a1->OutstandingReceives = v22;
      if ( v23 && !v22 )
      {
        v25 = NewIrql;
        a1->RecvState = NdisMiniportPaused;
        a1->MiniportRecvLockThread = 0LL;
        KeReleaseSpinLock(&a1->RecvLock, v25);
        NdisMPauseComplete(a1);
        goto LABEL_34;
      }
      v24 = NewIrql;
      a1->MiniportRecvLockThread = 0LL;
      KeReleaseSpinLock(&a1->RecvLock, v24);
      v8 = v38;
    }
    v3 = v41;
    *(_QWORD *)((char *)&v35 + 4) = 0LL;
LABEL_28:
    if ( !v8 )
      goto LABEL_34;
  }
  KeReleaseSpinLock(p_RecvLock, NewIrql);
  do
  {
    v26 = (struct _NET_BUFFER_LIST *)v7->Link.Alignment;
    ndisXlateReturnNetBufferListToPacket(v7);
    v7 = v26;
  }
  while ( v26 );
  v9 -= v10;
LABEL_34:
  if ( v9 < a3 )
  {
    v27 = a1->Flags & 0x40000;
    v28 = v9;
    v29 = a3 - v9;
    v30 = &a2[v28];
    do
    {
      v31 = *v30++;
      v32 = v31->Private.NdisPacketOobOffset;
      if ( *(unsigned int *)((char *)&v31->Private.Count + v32) != -1073741670 )
      {
        if ( v27 )
        {
          if ( (v31[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v31[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v31);
          else
            a1->MiniportReturnPacketHandler(a1->MiniportAdapterContext, v31);
        }
        else
        {
          *(unsigned int *)((char *)&v31->Private.Count + v32) = 0;
        }
      }
      --v29;
    }
    while ( v29 );
  }
}
