/*
 * XREFs of NdisMAllocateNetBufferSGList @ 0x1C0004CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     PplpLazyInitializeLookasideList @ 0x1C0039370 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008F39C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008F534 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C00ADE94 (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 */

NDIS_STATUS __stdcall NdisMAllocateNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PNET_BUFFER NetBuffer,
        PVOID Context,
        ULONG Flags,
        PVOID ScatterGatherListBuffer,
        ULONG ScatterGatherListBufferSize)
{
  __int64 v6; // rsi
  PVOID v7; // r15
  bool v10; // r13
  __int16 v11; // cx
  _MDL *MdlChain; // rdi
  unsigned int DataOffset; // ecx
  ULONG i; // eax
  unsigned int DataLength; // eax
  ULONG v16; // r12d
  char *v17; // rbp
  int v18; // r15d
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  _SLIST_ENTRY *v24; // r8
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r15
  struct _MDL *v32; // rbp
  _SLIST_ENTRY *PoolWithTag; // rax
  int v34; // edx
  struct _MDL *Mdl; // rax
  PVOID v36; // rdx
  int v37; // [rsp+38h] [rbp-80h]
  int v38; // [rsp+38h] [rbp-80h]
  __int64 v39; // [rsp+60h] [rbp-58h] BYREF
  __int64 v40; // [rsp+68h] [rbp-50h]
  unsigned int Number; // [rsp+70h] [rbp-48h]
  _SLIST_ENTRY *ListEntry; // [rsp+C0h] [rbp+8h]
  PSLIST_ENTRY ListEntrya; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v44; // [rsp+C8h] [rbp+10h] BYREF
  PVOID v45; // [rsp+D0h] [rbp+18h]

  v45 = Context;
  v6 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  v7 = Context;
  v10 = (Flags & 1) != 0;
  Number = -1;
  v39 = 0LL;
  v11 = 0;
  v40 = 0LL;
  if ( *(_DWORD *)(v6 + 48) || *(_DWORD *)(v6 + 80) )
  {
    v11 = *(_DWORD *)(v6 + 48);
    LODWORD(v40) = *(_DWORD *)(v6 + 48);
    HIDWORD(v40) = *(_DWORD *)(v6 + 80);
    v39 = *(_QWORD *)(v6 + 40);
    if ( !v39 )
    {
      v11 = v40;
      v39 = *(_QWORD *)(v6 + 40);
    }
  }
  if ( (v11 & 0x400) != 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v39 + ndisPcwPerCpuDataStride * Number + 80);
  }
  if ( (v40 & 0x40000000000LL) != 0 )
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v39, 0xAu);
  MdlChain = NetBuffer->MdlChain;
  DataOffset = NetBuffer->DataOffset;
  if ( !MdlChain )
    return -1073741823;
  for ( i = MdlChain->ByteCount; DataOffset >= i; i = MdlChain->ByteCount )
  {
    MdlChain = MdlChain->Next;
    DataOffset -= i;
  }
  DataLength = NetBuffer->DataLength;
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  NetBuffer->CurrentMdlOffset = DataOffset;
  v16 = DataLength + DataOffset;
  if ( DataLength + DataOffset < DataLength )
    return -1073676268;
  v17 = (char *)MdlChain->StartVa + MdlChain->ByteOffset;
  if ( v10 )
    NetBuffer->Reserved |= 4u;
  if ( ScatterGatherListBuffer )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, bool, PVOID, ULONG))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 3),
            *(_QWORD *)(v6 + 3824),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 4),
            v7,
            v10,
            ScatterGatherListBuffer,
            ScatterGatherListBufferSize);
    if ( v18 >= 0 )
      goto LABEL_14;
    v7 = v45;
  }
  v20 = *((_QWORD *)NdisMiniportDmaHandle + 8);
  v21 = KeGetPcr()->Prcb.Number + 1;
  v22 = *(_DWORD *)v20 - 1;
  if ( v21 < *(_DWORD *)v20 )
    v22 = v21;
  v23 = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 8LL * v22);
  v44 = v23;
  if ( !*(_BYTE *)(v23 + 112) )
  {
    PplpLazyInitializeLookasideList(v20, v23);
    v23 = v44;
  }
  ++*(_DWORD *)(v23 + 20);
  ListEntry = ExpInterlockedPopEntrySList((PSLIST_HEADER)v23);
  v24 = ListEntry;
  if ( ListEntry
    || (v25 = v44,
        ++*(_DWORD *)(v44 + 24),
        ListEntry = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(v25 + 48))(
                                      *(unsigned int *)(v25 + 36),
                                      *(unsigned int *)(v25 + 44),
                                      *(unsigned int *)(v25 + 40),
                                      v25),
        (v24 = ListEntry) != 0LL) )
  {
    NetBuffer->Reserved |= 1u;
    NetBuffer->NdisReserved[0] = v24;
    LOBYTE(v37) = v10;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int, _SLIST_ENTRY *, _DWORD))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 3),
            *(_QWORD *)(v6 + 3824),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 4),
            v7,
            v37,
            v24,
            *((_DWORD *)NdisMiniportDmaHandle + 14));
    if ( v18 >= 0 )
      goto LABEL_14;
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved &= ~1u;
    v26 = *((_QWORD *)NdisMiniportDmaHandle + 8);
    v27 = KeGetPcr()->Prcb.Number + 1;
    v28 = *(_DWORD *)v26 - 1;
    if ( v27 < *(_DWORD *)v26 )
      v28 = v27;
    v29 = v28;
    v30 = *(_QWORD *)(v26 + 32);
    v31 = *(_QWORD *)(v30 + 8 * v29);
    if ( !*(_BYTE *)(v31 + 112) )
      PplpLazyInitializeLookasideList(v26, *(_QWORD *)(v30 + 8 * v29));
    ++*(_DWORD *)(v31 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v31) < *(_WORD *)(v31 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v31, ListEntry);
    }
    else
    {
      ++*(_DWORD *)(v31 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v31 + 56))(ListEntry, v31);
    }
  }
  LOBYTE(v37) = v10;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL)
                                                                                             + 88LL))(
          *((_QWORD *)NdisMiniportDmaHandle + 3),
          *(_QWORD *)(v6 + 3824),
          MdlChain,
          v17,
          v16,
          *((_QWORD *)NdisMiniportDmaHandle + 4),
          v45,
          v37);
  if ( v18 < 0 )
  {
    v44 = 0LL;
    v32 = 0LL;
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6773444Eu);
    ListEntrya = PoolWithTag;
    if ( PoolWithTag )
    {
      Mdl = IoAllocateMdl(PoolWithTag, v16, 0, 0, 0LL);
      v32 = Mdl;
      if ( Mdl )
      {
        MmBuildMdlForNonPagedPool(Mdl);
        v32->Next = 0LL;
        if ( !v10 || (v18 = RtlCopyMdlToBuffer(MdlChain, 0LL, ListEntrya, v16, &v44), v18 >= 0) )
        {
          NetBuffer->Reserved |= 2u;
          v36 = v45;
          NetBuffer->NdisReserved[0] = v32;
          LOBYTE(v38) = v10;
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, PSLIST_ENTRY, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 88LL))(
                  *((_QWORD *)NdisMiniportDmaHandle + 3),
                  *(_QWORD *)(v6 + 3824),
                  v32,
                  ListEntrya,
                  v16,
                  *((_QWORD *)NdisMiniportDmaHandle + 4),
                  v36,
                  v38);
          if ( v18 >= 0 )
            goto LABEL_14;
        }
      }
      else
      {
        v18 = -1073741670;
      }
      PoolWithTag = ListEntrya;
    }
    else
    {
      v18 = -1073741670;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v34) = 4;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v34,
        3,
        20,
        (struct _GUID *)&WPP_b95a1582eedd34623c72b3aa5f8cd533_Traceguids,
        v18);
      PoolWithTag = ListEntrya;
    }
    if ( v32 )
    {
      IoFreeMdl(v32);
      PoolWithTag = ListEntrya;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved &= ~2u;
    NetBuffer->Reserved &= ~4u;
  }
LABEL_14:
  if ( (v40 & 0x40000000000LL) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v39, 0xAu, 0x17uLL);
  return v18;
}
