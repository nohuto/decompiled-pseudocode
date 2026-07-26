/*
 * XREFs of ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3520
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032C88 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0063B84 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C2FF4 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C318C (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C52C0 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendPacketsSG(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MaxSendPackets; // r12d
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // r14
  unsigned int Flags; // eax
  unsigned int v6; // esi
  _NDIS_PACKET **v7; // rbp
  _NDIS_PACKET *FirstPendingPacket; // rdi
  unsigned __int8 *WrapperReserved; // r14
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rcx
  struct _NDIS_STACK_RESERVED *v14; // r15
  __int64 v15; // r13
  unsigned __int8 **v16; // rax
  __int64 v17; // r8
  __int64 NdisPacketOobOffset; // rax
  _QWORD *v19; // r12
  __int64 v20; // rbp
  __int64 v21; // rdi
  unsigned int v22; // r14d
  struct _NDIS_STACK_RESERVED *v23; // r15
  __int64 v24; // r13
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  struct _NDIS_STACK_RESERVED *v33; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v34; // [rsp+28h] [rbp-D0h]
  void (__fastcall *v35)(void *, _NDIS_PACKET **, unsigned int); // [rsp+30h] [rbp-C8h]
  _QWORD v36[16]; // [rsp+40h] [rbp-B8h] BYREF

  v33 = 0LL;
  memset(v36, 0, sizeof(v36));
  MaxSendPackets = a1->MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  Flags = a1->Flags;
  v34 = MaxSendPackets;
  v35 = WSendPacketsHandler;
  if ( (Flags & 0x400000) == 0 && !a1->FirstPendingPacket )
    a1->Flags = Flags | 0x400000;
  if ( a1->PacketList.Flink != &a1->PacketList )
  {
    if ( !a1->FirstPendingPacket )
      return 0;
LABEL_8:
    if ( (a1->Flags & 0x400000) == 0 )
      return 0;
    v6 = 0;
    v7 = (_NDIS_PACKET **)v36;
    if ( !MaxSendPackets )
      return 0;
    do
    {
      FirstPendingPacket = a1->FirstPendingPacket;
      if ( !FirstPendingPacket )
        break;
      NDIS_STACK_RESERVED_FROM_PACKET(a1->FirstPendingPacket, &v33);
      a1->FirstPendingPacket = 0LL;
      WrapperReserved = FirstPendingPacket->WrapperReserved;
      v10 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
      if ( v10 != v11 )
        a1->FirstPendingPacket = (_NDIS_PACKET *)(v10 - 64);
      if ( ((v12 = a1->Flags, (v12 & 0x4000) != 0)
         || (v12 & 0x8800000) != 0 && SLOBYTE(FirstPendingPacket->Private.Flags) >= 0)
        && ndisMLoopbackPacketX(a1, FirstPendingPacket) )
      {
        v13 = *(_QWORD *)WrapperReserved;
        v14 = v33;
        v15 = *(_QWORD *)v33;
        if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
          || (v16 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24], *v16 != WrapperReserved) )
        {
LABEL_52:
          __fastfail(3u);
        }
        *v16 = (unsigned __int8 *)v13;
        *(_QWORD *)(v13 + 8) = v16;
        *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
        *(_QWORD *)WrapperReserved = WrapperReserved;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v14 = 1297040178LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( *(unsigned __int64 *)((char *)FirstPendingPacket->Reserved + FirstPendingPacket->Private.NdisPacketOobOffset) )
          ndisMFreeSGList(a1, FirstPendingPacket, v17);
        *((_DWORD *)v14 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0
          && *(void **)((char *)&FirstPendingPacket[1].Private.Pool + FirstPendingPacket->Private.NdisPacketOobOffset) )
        {
          ndisFreePaddedMdl(FirstPendingPacket);
        }
        NdisPacketOobOffset = FirstPendingPacket->Private.NdisPacketOobOffset;
        FirstPendingPacket->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&FirstPendingPacket[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists((struct _NDIS_FILTER_BLOCK *)a1, FirstPendingPacket, 0);
        else
          (*(void (__fastcall **)(__int64, _NDIS_PACKET *))(v15 + 112))(v15, FirstPendingPacket);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
      }
      else
      {
        *v7 = FirstPendingPacket;
        ++v6;
        FirstPendingPacket->Private.NdisPacketFlags |= 0x18u;
        *(unsigned int *)((char *)&FirstPendingPacket->Private.Count + FirstPendingPacket->Private.NdisPacketOobOffset) = 0;
        ++v7;
      }
    }
    while ( v6 < MaxSendPackets );
    if ( !v6 )
      return 0;
    a1->MiniportThread = 0LL;
    v19 = v36;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    v35(a1->MiniportAdapterContext, (_NDIS_PACKET **)v36, v6);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    v20 = 0LL;
    a1->MiniportThread = KeGetCurrentThread();
    while ( 1 )
    {
      v21 = *v19;
      v22 = *(_DWORD *)(*(unsigned __int16 *)(*v19 + 42LL) + *v19 + 32LL);
      *(_BYTE *)(*v19 + 41LL) &= ~8u;
      if ( v22 != 259 )
      {
        if ( v22 == -1073741670 )
        {
          a1->Flags &= ~0x400000u;
          a1->FirstPendingPacket = (_NDIS_PACKET *)v21;
          if ( (unsigned int)v20 < v6 )
          {
            v30 = &v36[v20];
            v31 = v6 - (unsigned int)v20;
            do
            {
              v32 = *v30++;
              *(_BYTE *)(v32 + 41) &= ~0x10u;
              --v31;
            }
            while ( v31 );
          }
LABEL_50:
          if ( !a1->FirstPendingPacket )
            return 0;
          MaxSendPackets = v34;
          goto LABEL_8;
        }
        NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v21, &v33);
        v23 = v33;
        v24 = *(_QWORD *)v33;
        if ( (*(_QWORD *)v33 & 0xFFFFFF00LL) != 0x4D4F4300 )
        {
          v25 = (_QWORD *)(v21 + 64);
          v26 = *(_QWORD *)(v21 + 64);
          if ( *(_QWORD *)(v26 + 8) != v21 + 64 )
            goto LABEL_52;
          v27 = *(_QWORD **)(v21 + 72);
          if ( (_QWORD *)*v27 != v25 )
            goto LABEL_52;
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          *(_QWORD *)(v21 + 72) = v21 + 64;
          *v25 = v25;
          a1->Flags |= 0x400000u;
          *(_QWORD *)v23 = 1297040179LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          if ( *(_QWORD *)(*(unsigned __int16 *)(v21 + 42) + v21 + 80) )
            ndisMFreeSGList(a1, (struct _NDIS_PACKET *)v21, v28);
          *((_DWORD *)v23 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v21 + 42) + v21 + 128) )
            ndisFreePaddedMdl((struct _NDIS_PACKET *)v21);
          v29 = *(unsigned __int16 *)(v21 + 42);
          *(_BYTE *)(v21 + 41) &= 0xC0u;
          if ( *(_QWORD *)(v29 + v21 + 112) )
            ndisMSendCompletePacketToNetBufferLists((struct _NDIS_FILTER_BLOCK *)a1, (struct _NDIS_PACKET *)v21, v22);
          else
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(v24 + 112))(v24, v21, v22);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          a1->MiniportThread = KeGetCurrentThread();
        }
      }
      v20 = (unsigned int)(v20 + 1);
      ++v19;
      if ( (unsigned int)v20 >= v6 )
        goto LABEL_50;
    }
  }
  a1->FirstPendingPacket = 0LL;
  return 0;
}
