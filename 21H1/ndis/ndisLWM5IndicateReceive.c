/*
 * XREFs of ndisLWM5IndicateReceive @ 0x1C00C44E0
 * Callers:
 *     ?EthIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z @ 0x1C00C44A0 (-EthIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z.c)
 * Callees:
 *     NdisFreePacket @ 0x1C00323D0 (NdisFreePacket.c)
 *     NdisAllocatePacket @ 0x1C0032490 (NdisAllocatePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     ExFreeToNPagedLookasideList @ 0x1C008E214 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00A3E28 (ExAllocateFromNPagedLookasideList.c)
 *     NdisAllocateBuffer @ 0x1C00BE8A0 (NdisAllocateBuffer.c)
 */

void __fastcall ndisLWM5IndicateReceive(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        size_t Size)
{
  __int64 v7; // r13
  struct _NPAGED_LOOKASIDE_LIST *v8; // r14
  size_t v9; // r15
  size_t v10; // r12
  __int64 v11; // rdi
  struct _MDL *PoolWithTag; // rax
  unsigned int v13; // eax
  struct _MDL *v14; // rsi
  SIZE_T v15; // rax
  MDL *v16; // rax
  int v17; // edi
  PNDIS_BUFFER v18; // rdi
  unsigned int v19; // edx
  _MDL *Head; // r15
  char *v21; // rax
  __int64 v22; // rbx
  ULONG ByteCount; // edi
  _MDL *v24; // rcx
  PNDIS_PACKET v25; // r10
  unsigned int v26; // ecx
  _MDL *v27; // rbx
  PNDIS_PACKET v28; // r9
  unsigned int v29; // r10d
  PNDIS_PACKET v30; // rcx
  int v31; // [rsp+40h] [rbp-28h] BYREF
  PNDIS_PACKET Packet; // [rsp+48h] [rbp-20h] BYREF
  char *v33; // [rsp+50h] [rbp-18h]
  PNDIS_BUFFER Buffer; // [rsp+58h] [rbp-10h] BYREF
  int Status; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+50h]
  void *Src; // [rsp+C0h] [rbp+58h]
  size_t v38; // [rsp+C8h] [rbp+60h]

  LODWORD(v38) = a4;
  Src = a3;
  v36 = a2;
  v7 = *(_QWORD *)(a1 + 296);
  v8 = 0LL;
  Status = 0;
  Packet = 0LL;
  v9 = a4;
  if ( (*(_DWORD *)(v7 + 120) & 0x20000000) == 0 )
    return;
  v10 = (unsigned int)Size;
  v11 = a4 + (unsigned int)Size;
  if ( (unsigned int)v11 < (unsigned int)Size )
    return;
  if ( (unsigned int)v11 >= 0x64 )
  {
    if ( (unsigned int)v11 >= 0x5EA )
    {
      v13 = v11 + ((MmSizeOfMdl((PVOID)0xFFF, (unsigned int)v11) + 7) & 0xFFFFFFF8);
      if ( v13 < (unsigned int)v11 )
        return;
      PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x7254444Eu);
      goto LABEL_10;
    }
    v8 = &ndisRcv1514BytesLL;
  }
  else
  {
    v8 = &ndisRcv100BytesLL;
  }
  PoolWithTag = (struct _MDL *)ExAllocateFromNPagedLookasideList(v8);
LABEL_10:
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  v15 = MmSizeOfMdl((PVOID)0xFFF, (unsigned int)v11);
  v14->Next = 0LL;
  v14->ByteCount = v11;
  v16 = (struct _MDL *)((char *)v14 + ((v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
  Buffer = v16;
  v14->MdlFlags = 0;
  v14->StartVa = (PVOID)((unsigned __int64)v16 & 0xFFFFFFFFFFFFF000uLL);
  v14->ByteOffset = (unsigned __int16)v16 & 0xFFF;
  v14->Size = 8 * ((((unsigned __int64)((unsigned __int16)v16 & 0xFFF) + v11 + 4095) >> 12) + 6);
  MmBuildMdlForNonPagedPool(v14);
  NdisAllocatePacket(&Status, &Packet, ndisRecvPacketPool);
  v17 = Status;
  if ( Status )
    goto LABEL_32;
  Status = 0;
  Packet->Private.Head = v14;
  Packet->Private.Tail = v14;
  *(_QWORD *)Packet->MiniportReserved = v8;
  LODWORD(Packet[-1].Reserved[1]) |= 1u;
  if ( (unsigned int)v10 <= a6 )
  {
    v18 = Buffer;
    memmove(Buffer, Src, v9);
    memmove((char *)v18 + v9, a5, v10);
    goto LABEL_27;
  }
  v31 = 0;
  Buffer = 0LL;
  v19 = ++*(_DWORD *)Packet[-1].ProtocolReserved;
  if ( v19 >= 3 * ndisPacketStackSize )
  {
    *(_DWORD *)Packet[-1].ProtocolReserved = v19 - 1;
LABEL_33:
    v30 = Packet;
LABEL_34:
    if ( v30 )
    {
      LODWORD(v30[-1].Reserved[1]) &= ~1u;
      NdisFreePacket(Packet);
    }
    if ( (v14->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v14->MappedSystemVa, v14);
    if ( v8 )
      ExFreeToNPagedLookasideList(v8, v14);
    else
      ExFreePoolWithTag(v14, 0);
    return;
  }
  Head = Packet->Private.Head;
  v21 = (char *)((Head->MdlFlags & 5) != 0 ? Head->MappedSystemVa : MmMapLockedPages(Head, 0));
  v22 = (unsigned int)v38;
  ByteCount = Head->ByteCount;
  v33 = v21;
  memmove(v21, Src, (unsigned int)v38);
  NdisAllocateBuffer(&Status, &Buffer, 0LL, &v33[v22], ByteCount - v38);
  v17 = Status;
  if ( Status )
    goto LABEL_32;
  v24 = Buffer;
  Buffer->Next = Head->Next;
  Packet->Private.Head = v24;
  *(_QWORD *)Packet->ProtocolReserved = Head;
  v25 = Packet;
  v26 = *(_DWORD *)Packet[-1].ProtocolReserved;
  if ( v26 < 3 * ndisPacketStackSize )
  {
    *((_QWORD *)&Packet->Private.PhysicalCount + 6 * (v26 / 3 - (unsigned __int64)ndisPacketStackSize) + v26 % 3) = 0LL;
    v25 = Packet;
  }
  v17 = (*(__int64 (__fastcall **)(PNDIS_PACKET, int *, _QWORD, __int64, _DWORD, _DWORD))(*(_QWORD *)(v7 + 3760) + 216LL))(
          v25,
          &v31,
          *(_QWORD *)(v7 + 24),
          v36,
          0,
          v10);
  if ( v17 != 259 )
  {
    v27 = *(_MDL **)Packet->ProtocolReserved;
    IoFreeMdl(Packet->Private.Head);
    Packet->Private.Head = v27;
    *(_QWORD *)Packet->ProtocolReserved = 0LL;
    v28 = Packet;
    v29 = *(_DWORD *)Packet[-1].ProtocolReserved;
    if ( v29 < 3 * ndisPacketStackSize )
    {
      *((_QWORD *)&Packet->Private.PhysicalCount + 6 * (v29 / 3 - (unsigned __int64)ndisPacketStackSize) + v29 % 3) = 0LL;
      v28 = Packet;
    }
    --*(_DWORD *)v28[-1].ProtocolReserved;
  }
  if ( v17 )
  {
LABEL_32:
    if ( v17 == 259 )
      return;
    goto LABEL_33;
  }
LABEL_27:
  *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) = 0;
  if ( !*(_DWORD *)(v7 + 464) )
    *(_DWORD *)((char *)&Packet->Private.Tail + Packet->Private.NdisPacketOobOffset) = 14;
  (*(void (__fastcall **)(__int64, PNDIS_PACKET *, __int64))(v7 + 432))(v7, &Packet, 1LL);
  if ( (*(_DWORD *)(v7 + 120) & 0x40000) == 0 )
  {
    v30 = Packet;
    if ( *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) != 259 )
      goto LABEL_34;
  }
}
