/*
 * XREFs of NdisMFreeNetBufferSGList @ 0x1C0005F00
 * Callers:
 *     <none>
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C0038DD0 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C00AD76C (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 */

void __stdcall NdisMFreeNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PSCATTER_GATHER_LIST pSGL,
        PNET_BUFFER NetBuffer)
{
  PNET_BUFFER v4; // rbx
  unsigned __int16 Reserved; // ax
  _SLIST_ENTRY *v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  struct _MDL *v13; // rsi
  char *v14; // rdi
  unsigned __int64 CurrentMdlOffset; // r8
  unsigned __int64 DataLength; // r9
  struct _MDL *CurrentMdl; // rdx
  unsigned __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = NetBuffer;
  LOBYTE(NetBuffer) = (NetBuffer->Reserved & 4) != 0;
  (*(void (__fastcall **)(_QWORD, PSCATTER_GATHER_LIST, PNET_BUFFER))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3)
                                                                                + 8LL)
                                                                    + 96LL))(
    *((_QWORD *)NdisMiniportDmaHandle + 3),
    pSGL,
    NetBuffer);
  Reserved = v4->Reserved;
  if ( (Reserved & 1) != 0 )
  {
    v6 = (_SLIST_ENTRY *)v4->NdisReserved[0];
    v4->NdisReserved[0] = 0LL;
    v4->Reserved = Reserved & 0xFFFE;
    v7 = *((_QWORD *)NdisMiniportDmaHandle + 8);
    v8 = KeGetPcr()->Prcb.Number + 1;
    v9 = *(_DWORD *)v7 - 1;
    if ( v8 < *(_DWORD *)v7 )
      v9 = v8;
    v10 = v9;
    v11 = *(_QWORD *)(v7 + 32);
    v12 = *(_QWORD *)(v11 + 8 * v10);
    if ( !*(_BYTE *)(v12 + 112) )
      PplpLazyInitializeLookasideList(v7, *(_QWORD *)(v11 + 8 * v10));
    ++*(_DWORD *)(v12 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v12) < *(_WORD *)(v12 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v12, v6);
    }
    else
    {
      ++*(_DWORD *)(v12 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v12 + 56))(v6, v12);
    }
  }
  else if ( (Reserved & 2) != 0 )
  {
    v13 = (struct _MDL *)v4->NdisReserved[0];
    v14 = (char *)v13->StartVa + v13->ByteOffset;
    if ( (Reserved & 4) == 0 )
    {
      CurrentMdlOffset = v4->CurrentMdlOffset;
      DataLength = v4->DataLength;
      CurrentMdl = v4->CurrentMdl;
      v18 = 0LL;
      RtlCopyBufferToMdl(&v14[48 * CurrentMdlOffset], CurrentMdl, CurrentMdlOffset, DataLength, &v18);
      Reserved = v4->Reserved;
    }
    v4->Reserved = Reserved & 0xFFFD;
    v4->NdisReserved[0] = 0LL;
    IoFreeMdl(v13);
    ExFreePoolWithTag(v14, 0);
  }
  v4->Reserved &= ~4u;
}
