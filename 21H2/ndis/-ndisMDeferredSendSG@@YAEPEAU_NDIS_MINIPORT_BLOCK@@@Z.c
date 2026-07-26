/*
 * XREFs of ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3980
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032C88 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0063B84 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C2FF4 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C318C (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C52C0 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendSG(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_PACKET *i; // rdi
  int v3; // r9d
  unsigned __int8 *WrapperReserved; // r14
  struct _NDIS_MINIPORT_BLOCK *v5; // rcx
  unsigned int v6; // ebx
  unsigned __int64 *p_Lock; // rbp
  unsigned int Flags; // ebx
  unsigned __int8 v9; // cl
  __int64 v10; // rax
  struct _NDIS_STACK_RESERVED *v11; // r15
  __int64 v12; // r13
  unsigned __int8 **v13; // rcx
  __int64 v14; // r8
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  for ( i = a1->FirstPendingPacket; i && (a1->Flags & 0x400000) != 0; i = a1->FirstPendingPacket )
  {
    NDIS_STACK_RESERVED_FROM_PACKET(i, &v17);
    a1->FirstPendingPacket = 0LL;
    WrapperReserved = i->WrapperReserved;
    v5 = *(struct _NDIS_MINIPORT_BLOCK **)&i->MacReserved[16];
    if ( v5 != (struct _NDIS_MINIPORT_BLOCK *)&a1->PacketList )
      a1->FirstPendingPacket = (_NDIS_PACKET *)&v5[-1].PktMonComp.CompHandle;
    if ( ((v3 & 0x4000) != 0 || (v3 & 0x8800000) != 0 && SLOBYTE(i->Private.Flags) >= 0) && ndisMLoopbackPacketX(a1, i) )
    {
      v6 = 0;
      p_Lock = &a1->Lock;
    }
    else
    {
      Flags = i->Private.Flags;
      p_Lock = &a1->Lock;
      i->Private.NdisPacketFlags |= 0x10u;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      v6 = a1->SendHandler(a1->MiniportAdapterContext, i, Flags);
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      if ( v6 == 259 )
        continue;
    }
    v9 = i->Private.NdisPacketFlags & 0xEF;
    i->Private.NdisPacketFlags = v9;
    if ( v6 == -1073741670 )
    {
      i->Private.NdisPacketFlags = v9;
      a1->Flags &= ~0x400000u;
      a1->FirstPendingPacket = i;
    }
    else
    {
      v10 = *(_QWORD *)WrapperReserved;
      v11 = v17;
      v12 = *(_QWORD *)v17;
      if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
        || (v13 = *(unsigned __int8 ***)&i->MacReserved[24], *v13 != WrapperReserved) )
      {
        __fastfail(3u);
      }
      *v13 = (unsigned __int8 *)v10;
      *(_QWORD *)(v10 + 8) = v13;
      *(_QWORD *)&i->MacReserved[24] = &i->MacReserved[16];
      *(_QWORD *)WrapperReserved = WrapperReserved;
      a1->Flags |= 0x400000u;
      *(_QWORD *)v11 = 1297040180LL;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
      if ( *(unsigned __int64 *)((char *)i->Reserved + i->Private.NdisPacketOobOffset) )
        ndisMFreeSGList(a1, i, v14);
      *((_DWORD *)v11 + 2) = 0;
      if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&i[1].Private.Pool + i->Private.NdisPacketOobOffset) )
        ndisFreePaddedMdl(i);
      NdisPacketOobOffset = i->Private.NdisPacketOobOffset;
      i->Private.NdisPacketFlags &= 0xC0u;
      if ( *(_MDL **)((char *)&i[1].Private.Head + NdisPacketOobOffset) )
        ndisMSendCompletePacketToNetBufferLists((struct _NDIS_FILTER_BLOCK *)a1, i, v6);
      else
        (*(void (__fastcall **)(__int64, _NDIS_PACKET *, _QWORD))(v12 + 112))(v12, i, v6);
      KeAcquireSpinLockAtDpcLevel(p_Lock);
      a1->MiniportThread = KeGetCurrentThread();
    }
  }
  return 0;
}
