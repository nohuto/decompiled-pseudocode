/*
 * XREFs of ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C3D60
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032C88 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00635DC (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0063B84 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C2FF4 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C3044 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C318C (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 */

void __fastcall ndisMSendPacketsSGToMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  __int64 v5; // rbp
  struct _NDIS_PACKET *v6; // rbx
  unsigned int v7; // esi
  struct _NDIS_STACK_RESERVED *v8; // r12
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 NdisPacketOobOffset; // rax
  KIRQL v12; // dl
  struct _NDIS_STACK_RESERVED *v13; // [rsp+60h] [rbp+8h] BYREF
  KIRQL NewIrql; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 )
  {
    v13 = 0LL;
    NewIrql = 0;
    v5 = a3;
    do
    {
      v6 = *a2;
      v7 = 0;
      if ( (a1->SendFlags & 8) != 0 )
        v7 = ndisMCheckPacketAndPad(a1, *a2);
      *(unsigned int *)((char *)&v6->Private.Count + v6->Private.NdisPacketOobOffset) = 259;
      if ( v7 )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
        NDIS_STACK_RESERVED_FROM_PACKET(v6, &v13);
        v8 = v13;
        v9 = *(_QWORD *)v13;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v8 = 1297040176LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( *(unsigned __int64 *)((char *)v6->Reserved + v6->Private.NdisPacketOobOffset) )
          ndisMFreeSGList(a1, v6, v10);
        *((_DWORD *)v8 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&v6[1].Private.Pool + v6->Private.NdisPacketOobOffset) )
          ndisFreePaddedMdl(v6);
        NdisPacketOobOffset = v6->Private.NdisPacketOobOffset;
        v6->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&v6[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists((struct _NDIS_FILTER_BLOCK *)a1, v6, v7);
        else
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v9 + 112))(v9, v6, v7);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        v12 = NewIrql;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v12);
      }
      else
      {
        ndisMAllocSGListS(a1, v6);
      }
      ++a2;
      --v5;
    }
    while ( v5 );
  }
}
