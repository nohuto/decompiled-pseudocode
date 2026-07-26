/*
 * XREFs of ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0062C8C
 * Callers:
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C3730 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C00326E8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     PplpLazyInitializeLookasideList @ 0x1C0038DD0 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0063234 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     NdisQueryPacket @ 0x1C0063A60 (NdisQueryPacket.c)
 *     NdisAllocateBuffer @ 0x1C00BE8A0 (NdisAllocateBuffer.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00C2744 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C29C4 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C2B5C (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 */

void __fastcall ndisMAllocSGListS(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r13
  struct _NDIS_STACK_RESERVED *v5; // r14
  __int64 v6; // r15
  __int64 NdisPacketOobOffset; // rax
  unsigned __int64 *p_Lock; // rcx
  unsigned int Number; // eax
  __int64 SGListLookasideList; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  _SLIST_ENTRY *v16; // r15
  KIRQL v17; // r12
  UINT v18; // r14d
  char *v19; // r9
  int v20; // ebx
  __int64 v21; // rcx
  unsigned int v22; // r8d
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v28; // r15
  unsigned int v29; // edx
  int v30; // ebx
  PNDIS_BUFFER v31; // r12
  bool v32; // sf
  char *v33; // rbx
  KIRQL v34; // al
  _DMA_ADAPTER *DmaAdapterObject; // rcx
  struct _NDIS_STACK_RESERVED *v36; // r15
  __int64 v37; // r13
  __int64 v38; // rax
  KIRQL v39; // dl
  char v40[8]; // [rsp+28h] [rbp-41h]
  int v41; // [rsp+38h] [rbp-31h]
  unsigned int v42; // [rsp+60h] [rbp-9h] BYREF
  PNDIS_BUFFER FirstBuffer; // [rsp+68h] [rbp-1h] BYREF
  struct _NDIS_STACK_RESERVED *v44; // [rsp+70h] [rbp+7h] BYREF
  PNDIS_BUFFER Buffer; // [rsp+78h] [rbp+Fh] BYREF
  char *v46; // [rsp+80h] [rbp+17h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+67h] BYREF
  int Status; // [rsp+E0h] [rbp+77h] BYREF
  SIZE_T NumberOfBytes; // [rsp+E8h] [rbp+7Fh] BYREF

  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  FirstBuffer = 0LL;
  LODWORD(NumberOfBytes) = 0;
  Buffer = 0LL;
  v44 = 0LL;
  NewIrql = 0;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &FirstBuffer, (PUINT)&NumberOfBytes);
  if ( !FirstBuffer )
  {
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v44);
    v5 = v44;
    v6 = *(_QWORD *)v44;
    a1->Flags |= 0x400000u;
    *(_QWORD *)v5 = 1297040176LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, a2);
    *((_DWORD *)v5 + 2) = 0;
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(a2);
    NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
    a2->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&a2[1].Private.Head + NdisPacketOobOffset) )
      ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, 0);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v6 + 112))(v6, a2, 0LL);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    p_Lock = &a1->Lock;
LABEL_57:
    v39 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v39);
    return;
  }
  Number = KeGetPcr()->Prcb.Number;
  v46 = (char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset;
  SGListLookasideList = (__int64)MiniportSGDmaBlock->SGListLookasideList;
  v11 = Number + 1;
  v12 = *(_DWORD *)SGListLookasideList - 1;
  if ( v11 < *(_DWORD *)SGListLookasideList )
    v12 = v11;
  v13 = v12;
  v14 = *(_QWORD *)(SGListLookasideList + 32);
  v15 = *(_QWORD *)(v14 + 8 * v13);
  if ( !*(_BYTE *)(v15 + 112) )
    PplpLazyInitializeLookasideList(SGListLookasideList, *(_QWORD *)(v14 + 8 * v13));
  ++*(_DWORD *)(v15 + 20);
  v16 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v15);
  if ( !v16 )
  {
    ++*(_DWORD *)(v15 + 24);
    v16 = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v15 + 48))(
                            *(unsigned int *)(v15 + 36),
                            *(unsigned int *)(v15 + 44),
                            *(unsigned int *)(v15 + 40),
                            v15);
  }
  NewIrql = KfRaiseIrql(2u);
  v17 = NewIrql;
  if ( v16 )
  {
    a2->Private.Flags |= 0x2000u;
    v18 = NumberOfBytes;
    v19 = v46;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v16;
    Status = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->BuildScatterGatherList(
               MiniportSGDmaBlock->DmaAdapterObject,
               a1->DeviceObject,
               FirstBuffer,
               v19,
               v18,
               (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
               a2,
               1u,
               v16,
               MiniportSGDmaBlock->ScatterGatherListSize);
    v20 = Status;
    if ( Status >= 0 )
      goto LABEL_30;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    v21 = (__int64)MiniportSGDmaBlock->SGListLookasideList;
    v22 = KeGetPcr()->Prcb.Number + 1;
    v23 = *(_DWORD *)v21 - 1;
    if ( v22 < *(_DWORD *)v21 )
      v23 = v22;
    v24 = v23;
    v25 = *(_QWORD *)(v21 + 32);
    v26 = *(_QWORD *)(v25 + 8 * v24);
    if ( !*(_BYTE *)(v26 + 112) )
      PplpLazyInitializeLookasideList(v21, *(_QWORD *)(v25 + 8 * v24));
    ++*(_DWORD *)(v26 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v26) < *(_WORD *)(v26 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v26, v16);
    }
    else
    {
      ++*(_DWORD *)(v26 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v26 + 56))(v16, v26);
    }
    v20 = Status;
    v17 = NewIrql;
  }
  else
  {
    v20 = -1073741670;
    Status = -1073741670;
  }
  v18 = NumberOfBytes;
  if ( v20 < 0 )
  {
    LOBYTE(v41) = 1;
    v20 = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->GetScatterGatherList(
            MiniportSGDmaBlock->DmaAdapterObject,
            a1->DeviceObject,
            FirstBuffer,
            v46,
            NumberOfBytes,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
            a2,
            v41);
    Status = v20;
  }
LABEL_30:
  if ( v17 != 2 )
    KeLowerIrql(v17);
  if ( v20 < 0 )
  {
    v42 = 0;
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x6773444Eu);
    v28 = PoolWithTag;
    if ( PoolWithTag )
    {
      NdisAllocateBuffer(&Status, &Buffer, 0LL, PoolWithTag, v18);
      v30 = Status;
      v31 = Buffer;
      v32 = Status < 0;
      if ( Status )
        goto LABEL_39;
      ndisMCopyFromPacketToBuffer(a2, v29, v18, v28, &v42);
      if ( v42 == v18 )
      {
        a2->Private.Flags |= 0x800u;
        v33 = (char *)v31->StartVa + v31->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v31;
        v34 = KfRaiseIrql(2u);
        DmaAdapterObject = MiniportSGDmaBlock->DmaAdapterObject;
        LOBYTE(v41) = 1;
        NewIrql = v34;
        v30 = DmaAdapterObject->DmaOperations->GetScatterGatherList(
                DmaAdapterObject,
                a1->DeviceObject,
                v31,
                v33,
                v18,
                (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
                a2,
                v41);
        if ( NewIrql != 2 )
          KeLowerIrql(NewIrql);
        v32 = v30 < 0;
LABEL_39:
        if ( !v32 )
          return;
        goto LABEL_42;
      }
    }
    v31 = Buffer;
    v30 = -1073741670;
LABEL_42:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v40 = v30;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        3u,
        0xBu,
        (struct _GUID *)&WPP_b95a1582eedd34623c72b3aa5f8cd533_Traceguids,
        *(_QWORD *)v40);
    }
    if ( v31 )
      IoFreeMdl(v31);
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v44);
    v36 = v44;
    v37 = *(_QWORD *)v44;
    a1->Flags |= 0x400000u;
    *(_QWORD *)v36 = 1297040176LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, a2);
    *((_DWORD *)v36 + 2) = 0;
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(a2);
    v38 = a2->Private.NdisPacketOobOffset;
    a2->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&a2[1].Private.Head + v38) )
      ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, v30);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v37 + 112))(v37, a2, (unsigned int)v30);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    p_Lock = &a1->Lock;
    goto LABEL_57;
  }
}
