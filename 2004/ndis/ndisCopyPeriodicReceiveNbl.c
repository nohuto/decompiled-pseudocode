/*
 * XREFs of ndisCopyPeriodicReceiveNbl @ 0x1C00A2234
 * Callers:
 *     ndisMPeriodicReceivesResources @ 0x1C00A34FC (ndisMPeriodicReceivesResources.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0003B10 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0005310 (NdisFreeNetBufferList.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0065858 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ExFreeToNPagedLookasideList @ 0x1C008E8F4 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00A42E8 (ExAllocateFromNPagedLookasideList.c)
 */

PNET_BUFFER_LIST __fastcall ndisCopyPeriodicReceiveNbl(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // rsi
  SIZE_T v6; // r12
  unsigned int v7; // ebx
  struct _NPAGED_LOOKASIDE_LIST *v8; // r15
  struct _MDL *PoolWithTagPriority; // rax
  struct _MDL *v10; // r14
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rdi
  struct _MDL *v12; // r13
  char *MappedSystemVa; // rax
  unsigned int ByteCount; // ecx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  char *v17; // rdx
  __int64 v18; // rbx
  size_t v19; // r8
  char *v20; // rcx
  char *v21; // rax
  int v22; // eax
  void **v23; // rcx
  __int64 v24; // r8
  const struct _EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // r9
  void **v27; // rcx
  __int64 v28; // rax
  unsigned __int8 DataOffset; // [rsp+20h] [rbp-A8h]
  const struct _GUID *DataLength; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v32; // [rsp+40h] [rbp-88h]
  __int64 v34; // [rsp+60h] [rbp-68h]
  struct _GUID v35; // [rsp+70h] [rbp-58h] BYREF
  struct _GUID v36; // [rsp+80h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a3 + 8);
  v5 = 0LL;
  v34 = v3;
  v6 = *(unsigned int *)(v3 + 24);
  v7 = (MmSizeOfMdl((PVOID)0xFFF, v6) + 7) & 0xFFFFFFF8;
  if ( (unsigned int)v6 <= 0x64 )
  {
    v8 = &Lookaside;
LABEL_5:
    PoolWithTagPriority = (struct _MDL *)ExAllocateFromNPagedLookasideList(v8);
    goto LABEL_8;
  }
  if ( (unsigned int)v6 <= 0x5EE )
  {
    v8 = &stru_1C00E4200;
    goto LABEL_5;
  }
  v8 = 0LL;
  if ( (v6 + v7) >> 32 )
    return (PNET_BUFFER_LIST)v5;
  PoolWithTagPriority = (struct _MDL *)ExAllocatePoolWithTagPriority(
                                         NonPagedPoolNx,
                                         v7 + (unsigned int)v6,
                                         0x7270444Eu,
                                         LowPoolPriority);
LABEL_8:
  v10 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return (PNET_BUFFER_LIST)v5;
  PoolWithTagPriority->Next = 0LL;
  PoolWithTagPriority->MdlFlags = 0;
  v32 = (unsigned __int64)PoolWithTagPriority + v7;
  PoolWithTagPriority->ByteCount = v6;
  PoolWithTagPriority->ByteOffset = ((_WORD)PoolWithTagPriority + (_WORD)v7) & 0xFFF;
  PoolWithTagPriority->Size = 8 * ((((((unsigned int)PoolWithTagPriority + v7) & 0xFFFLL) + v6 + 4095) >> 12) + 6);
  PoolWithTagPriority->StartVa = (PVOID)(v32 & 0xFFFFFFFFFFFFF000uLL);
  MmBuildMdlForNonPagedPool(PoolWithTagPriority);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(PoolHandle, 0, 0, v10, 0, v6);
  if ( !NetBufferAndNetBufferList )
    goto LABEL_40;
  v12 = *(struct _MDL **)(v3 + 8);
  if ( (v12->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)v12->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000000u);
  if ( !MappedSystemVa || (ByteCount = v12->ByteCount, v15 = *(unsigned int *)(v34 + 16), (unsigned int)v15 > ByteCount) )
  {
LABEL_39:
    NdisFreeNetBufferList(NetBufferAndNetBufferList);
LABEL_40:
    if ( (v10->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v10->MappedSystemVa, v10);
    if ( v8 )
      ExFreeToNPagedLookasideList(v8, v10);
    else
      ExFreePoolWithTag(v10, 0x7270444Eu);
    return (PNET_BUFFER_LIST)v5;
  }
  v16 = ByteCount - v15;
  if ( v16 >= (unsigned int)v6 )
    v16 = v6;
  v17 = &MappedSystemVa[v15];
  v18 = v16;
  v19 = v16;
  v20 = (char *)v32;
  while ( 1 )
  {
    memmove(v20, v17, v19);
    LODWORD(v6) = v6 - v18;
    v12 = v12->Next;
    v20 = (char *)(v18 + v32);
    v32 += v18;
    if ( !v12 )
      break;
    v18 = v12->ByteCount;
    if ( (v12->MdlFlags & 5) != 0 )
    {
      v21 = (char *)v12->MappedSystemVa;
    }
    else
    {
      v21 = (char *)MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000000u);
      v20 = (char *)v32;
    }
    if ( !v21 )
      goto LABEL_39;
    v17 = v21;
    if ( (unsigned int)v18 >= (unsigned int)v6 )
      v18 = (unsigned int)v6;
    v19 = (unsigned int)v18;
  }
  LODWORD(NetBufferAndNetBufferList->ProtocolReserved[0]) = a2;
  NetBufferAndNetBufferList->MiniportReserved[1] = v8;
  NetBufferAndNetBufferList->SourceHandle = *(void **)(a3 + 120);
  v22 = *(_DWORD *)(a3 + 136);
  if ( (v22 & 0x80u) != 0 )
  {
    NetBufferAndNetBufferList->Flags |= 0x80u;
    NetBufferAndNetBufferList->NblFlags |= 0x8000u;
    v22 = *(_DWORD *)(a3 + 136);
  }
  if ( (v22 & 0x200) != 0 )
    NetBufferAndNetBufferList->Flags |= 0x200u;
  v23 = &NetBufferAndNetBufferList->NetBufferListInfo[6];
  NetBufferAndNetBufferList->NetBufferListInfo[0] = *(void **)(a3 + 144);
  v24 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[1] = *(void **)(a3 + 152);
  v25 = (const struct _EVENT_DESCRIPTOR *)(a3 - (_QWORD)NetBufferAndNetBufferList);
  v26 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[2] = *(void **)(a3 + 160);
  NetBufferAndNetBufferList->NetBufferListInfo[3] = *(void **)(a3 + 168);
  NetBufferAndNetBufferList->NetBufferListInfo[4] = *(void **)(a3 + 176);
  do
  {
    *v23 = *(void **)((char *)v23 + (_QWORD)v25);
    ++v23;
    --v26;
  }
  while ( v26 );
  v27 = &NetBufferAndNetBufferList->NetBufferListInfo[11];
  do
  {
    *v27 = *(void **)((char *)&v25->Id + (_QWORD)v27);
    ++v27;
    --v24;
  }
  while ( v24 );
  if ( byte_1C00E3FD8 )
  {
    NetBufferAndNetBufferList->NetBufferListInfo[13] = *(void **)(a3 + 248);
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v28 = *(_QWORD *)(a3 + 248) & 0x7FFFFFFFFFFFFFFFLL;
    v36 = (struct _GUID)((__int64)NetBufferAndNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
    v35 = (struct _GUID)(unsigned __int64)v28;
    EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFLL, v25, &v36, &v35, DataOffset, DataLength, 6u);
  }
  return NetBufferAndNetBufferList;
}
