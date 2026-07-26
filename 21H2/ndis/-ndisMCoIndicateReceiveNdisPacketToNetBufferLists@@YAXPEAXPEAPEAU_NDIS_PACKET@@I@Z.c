/*
 * XREFs of ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BBAC0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMPauseComplete @ 0x1C003C2F0 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C006CE1C (-NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C00756D8 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0075984 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C008E040 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BC080 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 */

void __fastcall ndisMCoIndicateReceiveNdisPacketToNetBufferLists(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rax
  void *v5; // r13
  __int64 v6; // rdi
  bool v7; // al
  struct _NET_BUFFER_LIST *v8; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  int v11; // ecx
  KIRQL v12; // dl
  bool v13; // cc
  KSPIN_LOCK *v14; // rcx
  struct _NET_BUFFER_LIST *v15; // r13
  struct _NDIS_PACKET *v16; // rax
  unsigned int v17; // eax
  bool v18; // zf
  KIRQL v19; // dl
  struct _NET_BUFFER_LIST *Alignment; // rbx
  __int64 v21; // rsi
  struct _NDIS_PACKET **v22; // rbx
  struct _NDIS_PACKET *v23; // rdx
  unsigned int v24; // [rsp+20h] [rbp-48h]
  _QWORD v25[2]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-30h]
  int v27; // [rsp+3Ch] [rbp-2Ch]
  struct _NET_BUFFER_LIST *v28; // [rsp+40h] [rbp-28h]
  unsigned int v29; // [rsp+48h] [rbp-20h]
  unsigned int v30[2]; // [rsp+4Ch] [rbp-1Ch]
  int v31; // [rsp+54h] [rbp-14h]
  KIRQL NewIrql; // [rsp+C0h] [rbp+58h] BYREF
  bool v35; // [rsp+C8h] [rbp+60h]

  v3 = a1[9];
  v24 = 0;
  v5 = a1;
  v27 = 0;
  *(_QWORD *)v30 = 0LL;
  v6 = *(_QWORD *)(v3 + 120);
  v31 = 0;
  NewIrql = 0;
  v25[0] = v6;
  v25[1] = a2;
  v26 = a3;
  v28 = 0LL;
  v29 = 0;
  do
  {
    v7 = ndisXlateRecvPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)v25);
    v8 = v28;
    v9 = v29;
    v35 = v7;
    if ( !v28 )
      break;
    v10 = v29 - v24;
    v24 = v29;
    NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v6, &NewIrql);
    v11 = *(_DWORD *)(v6 + 2008);
    *(_QWORD *)(v6 + 2016) = 0LL;
    v12 = NewIrql;
    v13 = (unsigned int)(v11 - 5) <= 1;
    v14 = (KSPIN_LOCK *)(v6 + 2000);
    if ( v13 )
    {
      KeReleaseSpinLock(v14, NewIrql);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
        v8->Link.Alignment = 0LL;
        ndisXlateReturnNetBufferListToPacket(v8);
        v8 = Alignment;
      }
      while ( Alignment );
      v9 -= v10;
      break;
    }
    *(_DWORD *)(v6 + 2012) += v10;
    KeReleaseSpinLock(v14, v12);
    ndisMCoIndicateReceiveNetBufferListsToNetBufferLists(v5, v8, v30[0], v30[1]);
    if ( (v30[1] & 2) != 0 )
    {
      do
      {
        v15 = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
        v16 = ndisXlateReturnNetBufferListToPacket(v8);
        if ( *(unsigned int *)((char *)&v16->Private.Count + v16->Private.NdisPacketOobOffset) != -1073741670 )
        {
          if ( (v16[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v16[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v16);
          else
            (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v6 + 2160))(*(_QWORD *)(v6 + 24), v16);
        }
        v8 = v15;
      }
      while ( v15 );
      NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v6, &NewIrql);
      v17 = *(_DWORD *)(v6 + 2012) - v10;
      v18 = *(_DWORD *)(v6 + 2008) == 5;
      *(_DWORD *)(v6 + 2012) = v17;
      if ( v18 && !v17 )
      {
        v19 = NewIrql;
        *(_QWORD *)(v6 + 2016) = 0LL;
        *(_DWORD *)(v6 + 2008) = 6;
        KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2000), v19);
        NdisMPauseComplete((NDIS_HANDLE)v6);
        break;
      }
      *(_QWORD *)(v6 + 2016) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2000), NewIrql);
      v5 = a1;
    }
    v28 = 0LL;
  }
  while ( v35 );
  if ( v9 < a3 )
  {
    v21 = a3 - v9;
    v22 = &a2[v9];
    do
    {
      v23 = *v22++;
      if ( *(unsigned int *)((char *)&v23->Private.Count + v23->Private.NdisPacketOobOffset) != -1073741670 )
      {
        if ( (v23[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v23[-1].ProtocolReserved[4] == -1 )
          NDIS_FREE_XFER_DATA_PACKET(v23);
        else
          (*(void (__fastcall **)(_QWORD))(v6 + 2160))(*(_QWORD *)(v6 + 24));
      }
      --v21;
    }
    while ( v21 );
  }
}
