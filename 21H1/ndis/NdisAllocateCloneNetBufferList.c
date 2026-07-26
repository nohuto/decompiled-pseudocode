/*
 * XREFs of NdisAllocateCloneNetBufferList @ 0x1C0003650
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferList @ 0x1C0003E20 (NdisAllocateNetBufferList.c)
 *     ndisPplLazyInitializeLookaside @ 0x1C0004234 (ndisPplLazyInitializeLookaside.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0013360 (NdisFreeCloneNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1C0017EB0 (NdisAllocateNetBuffer.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0065198 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00737E0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00ADBE0 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateCloneNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPoolHandle,
        NDIS_HANDLE NetBufferPoolHandle,
        ULONG AllocateCloneFlags)
{
  unsigned __int64 v4; // rbp
  NDIS_HANDLE v5; // r15
  char *v6; // rsi
  PNET_BUFFER_LIST v7; // r12
  int v8; // eax
  unsigned int Number; // ebx
  unsigned int v10; // r13d
  unsigned __int64 v11; // rax
  char *v12; // r15
  _SLIST_HEADER *v13; // rcx
  struct _NET_BUFFER_LIST *NetBufferList; // rdi
  __int16 v15; // bx
  int v16; // eax
  SIZE_T DataLength; // rdx
  PNET_BUFFER FirstNetBuffer; // rsi
  _NET_BUFFER *Alignment; // rbx
  unsigned int DataOffset; // r8d
  struct _MDL *MdlChain; // r13
  ULONG ByteCount; // eax
  unsigned int v23; // eax
  ULONG v24; // r12d
  _MDL *v25; // r15
  char *v26; // rcx
  struct _MDL *Mdl; // rax
  unsigned __int64 v28; // rax
  struct _MDL *Next; // rsi
  char *v31; // r12
  ULONG v32; // r13d
  struct _MDL *v33; // rax
  struct _MDL *v34; // rax
  int v35; // edx
  unsigned __int64 v36; // rax
  _QWORD *PoolWithTagPriority; // rax
  KIRQL v38; // al
  char **v39; // r8
  void ***v40; // rdx
  void **v41; // rcx
  KIRQL v42; // al
  __int64 v43; // r8
  bool v44; // zf
  __int64 v45; // rax
  _NET_BUFFER_LIST_CONTEXT *v46; // rax
  PNET_BUFFER NetBuffer; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v51; // [rsp+28h] [rbp-58h]
  _BYTE v52[4]; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v4 + 8) = AllocateCloneFlags;
  v5 = NetBufferPoolHandle;
  *(_QWORD *)(v4 + 64) = NetBufferPoolHandle;
  v6 = (char *)NetBufferListPoolHandle;
  *(_QWORD *)(v4 + 128) = OriginalNetBufferList;
  v7 = OriginalNetBufferList;
  *(_BYTE *)v4 = (AllocateCloneFlags & 2) != 0;
  if ( !NetBufferListPoolHandle )
    v6 = (char *)ndisNetBufferListPool;
  if ( !NetBufferPoolHandle )
  {
    v5 = ndisNetBufferPool;
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ndisNetBufferPool;
  }
  v8 = *((_DWORD *)v6 + 15);
  if ( (v8 & 1) == 0 )
  {
    NetBufferList = NdisAllocateNetBufferList(v6, 0, 0);
    if ( !NetBufferList )
      return NetBufferList;
    NetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
    FirstNetBuffer = NetBuffer;
    if ( !NetBuffer )
      goto LABEL_75;
    NetBufferList->Link.Region = (unsigned __int64)NetBuffer;
    goto LABEL_23;
  }
  if ( (v8 & 5) != 1 )
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v6);
    return 0LL;
  }
  Number = KeGetPcr()->Prcb.Number;
  v10 = 1;
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v11 = (unsigned __int64)Number << 8;
    v12 = &v6[v11 + 384];
    if ( !v12[216] )
      ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)&v6[v11 + 384]);
    v13 = (_SLIST_HEADER *)*((_QWORD *)v12 + 24);
    ++*((_DWORD *)v12 + 5);
    NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(v13);
    if ( !NetBufferList )
    {
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v12 + 25)) < 0xAu
        || (v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12 + 26),
            v43 = *((_QWORD *)v12 + 24),
            *((_QWORD *)v12 + 24) = *((_QWORD *)v12 + 25),
            *((_QWORD *)v12 + 25) = v43,
            KeReleaseSpinLock((PKSPIN_LOCK)v12 + 26, v42),
            (NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v12 + 24))) == 0LL) )
      {
        ++*((_DWORD *)v12 + 6);
      }
    }
    if ( NetBufferList )
      goto LABEL_14;
  }
  ++*((_DWORD *)v6 + 37);
  NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 8);
  if ( NetBufferList )
    goto LABEL_51;
  v36 = *((unsigned int *)v6 + 43);
  ++*((_DWORD *)v6 + 38);
  DataLength = v36 + 32;
  if ( v36 + 32 >= v36 )
  {
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            DataLength,
                            *((_DWORD *)v6 + 42),
                            NormalPoolPriority);
    if ( PoolWithTagPriority )
    {
      NetBufferList = (struct _NET_BUFFER_LIST *)(PoolWithTagPriority + 4);
      *PoolWithTagPriority = 0LL;
      if ( PoolWithTagPriority != (_QWORD *)-32LL )
      {
        *PoolWithTagPriority = v6;
        v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 1);
        v39 = (char **)*((_QWORD *)v6 + 2);
        v40 = (void ***)(v6 + 16);
        v41 = &NetBufferList[-1].NetBufferListInfo[27];
        if ( v39[1] != v6 + 16 )
          __fastfail(3u);
        v41[1] = v40;
        *v41 = v39;
        v39[1] = (char *)v41;
        *v40 = v41;
        KeReleaseSpinLock((PKSPIN_LOCK)v6 + 1, v38);
      }
    }
    else
    {
      NetBufferList = 0LL;
    }
    v10 = 0;
    if ( NetBufferList )
    {
LABEL_51:
      LODWORD(NetBufferList[-1].NetBufferListInfo[29]) = Number;
LABEL_14:
      v15 = WORD1(NetBufferList->NdisReserved[1]);
      memset(NetBufferList, 0, 8 * (v10 ^ 1LL) + 368);
      NetBufferList->NdisPoolHandle = v6;
      NetBufferList->Flags = 256;
      if ( v10 )
        WORD1(NetBufferList->NdisReserved[1]) = v15;
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        ndisGenerateNetBufferListCorrelationIds(NetBufferList, 1u);
      LOBYTE(NetBufferList->NetBufferListInfo[7]) = v6[32];
      v16 = *((_DWORD *)v6 + 15);
      if ( (v16 & 2) != 0 )
      {
        v44 = (v16 & 1) == 0;
        v45 = 560LL;
        if ( v44 )
          v45 = 384LL;
        v46 = (_NET_BUFFER_LIST_CONTEXT *)((char *)NetBufferList + v45);
        NetBufferList->Context = v46;
        v46->Next = 0LL;
        NetBufferList->Context->Size = *((_WORD *)v6 + 17);
        NetBufferList->Context->Offset = *((_WORD *)v6 + 17);
      }
      memset(&NetBufferList[1], 0, 0xB0uLL);
      NetBufferList[1].NdisPoolHandle = 0LL;
      *((_DWORD *)&NetBufferList[1].NdisPoolHandle + 2) = 0;
      LODWORD(NetBufferList[1].ParentNetBufferList) = 0;
      NetBufferList[1].NdisReserved[1] = v6;
      NetBufferList[1].Link.Region = 0LL;
      LODWORD(NetBufferList[1].Context) = 0;
      NetBufferList->Link.Region = (unsigned __int64)&NetBufferList[1];
      if ( *(int *)ndisNblTrackerMode >= 3 )
        ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 3u, 0LL, 0);
      goto LABEL_21;
    }
  }
  NetBufferList = 0LL;
LABEL_21:
  if ( !NetBufferList )
    return NetBufferList;
  FirstNetBuffer = NetBufferList->FirstNetBuffer;
  v5 = *(NDIS_HANDLE *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
LABEL_23:
  Alignment = v7->FirstNetBuffer;
  if ( !Alignment )
  {
LABEL_35:
    NetBufferList->SourceHandle = v7->SourceHandle;
    NetBufferList->NetBufferListInfo[16] = v7->NetBufferListInfo[16];
    v28 = (unsigned __int64)v7->NetBufferListInfo[10];
    if ( (v28 & 1) == 0 && (v28 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v7, NetBufferList, 0LL, 0LL);
    }
    if ( byte_1C00E3EA8 )
    {
      NetBufferList->NetBufferListInfo[13] = v7->NetBufferListInfo[13];
    }
    else if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      v48 = (__int64)v7->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v48;
      v49 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0x90);
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v49;
      LODWORD(v49) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0LL;
      *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0xA0);
      if ( (_DWORD)v49 )
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFuLL,
          (const struct _EVENT_DESCRIPTOR *)DataLength,
          (const struct _GUID *)(v4 + 176),
          (const struct _GUID *)(v4 + 192),
          Irp,
          v51,
          1u);
    }
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 5u, v7, 0);
    return NetBufferList;
  }
  while ( 1 )
  {
    DataLength = Alignment->DataLength;
    DataOffset = Alignment->DataOffset;
    MdlChain = Alignment->MdlChain;
    *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = DataLength;
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = FirstNetBuffer;
    if ( *(_BYTE *)v4 )
    {
      FirstNetBuffer->MdlChain = MdlChain;
      FirstNetBuffer->Link.Region = Alignment->Link.Region;
      FirstNetBuffer->DataLength = Alignment->DataLength;
      FirstNetBuffer->DataOffset = DataOffset;
      FirstNetBuffer->CurrentMdlOffset = Alignment->CurrentMdlOffset;
      Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_34;
      FirstNetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
      if ( !FirstNetBuffer )
        goto LABEL_75;
      goto LABEL_81;
    }
    if ( MdlChain )
      break;
LABEL_79:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
    {
LABEL_34:
      v7 = *(PNET_BUFFER_LIST *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      goto LABEL_35;
    }
    FirstNetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
    if ( !FirstNetBuffer )
      goto LABEL_75;
LABEL_81:
    **(_QWORD **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = FirstNetBuffer;
  }
  while ( 1 )
  {
    ByteCount = MdlChain->ByteCount;
    if ( DataOffset < ByteCount )
      break;
    MdlChain = MdlChain->Next;
    DataOffset -= ByteCount;
    if ( !MdlChain )
      goto LABEL_79;
  }
  v23 = ByteCount - DataOffset;
  v24 = DataLength;
  v25 = 0LL;
  if ( v23 < (unsigned int)DataLength )
    v24 = v23;
  if ( v24 )
  {
    v26 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + DataOffset;
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v26;
    Mdl = IoAllocateMdl(v26, v24, 0, 0, 0LL);
    v25 = Mdl;
    if ( !Mdl )
      goto LABEL_75;
    IoBuildPartialMdl(MdlChain, Mdl, *(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0), v24);
    LODWORD(DataLength) = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    v25->Next = 0LL;
  }
  FirstNetBuffer->Link.Region = (unsigned __int64)v25;
  DataLength = (unsigned int)DataLength - v24;
  FirstNetBuffer->MdlChain = v25;
  FirstNetBuffer->DataLength = Alignment->DataLength;
  FirstNetBuffer->CurrentMdlOffset = 0;
  FirstNetBuffer->DataOffset = 0;
  *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = DataLength;
  if ( !(_DWORD)DataLength || (Next = MdlChain->Next) == 0LL )
  {
LABEL_33:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
      goto LABEL_34;
    v5 = *(NDIS_HANDLE *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    FirstNetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
    if ( !FirstNetBuffer )
      goto LABEL_75;
    goto LABEL_81;
  }
  while ( 1 )
  {
    v31 = (char *)Next->StartVa + Next->ByteOffset;
    v32 = Next->ByteCount;
    if ( v32 > (unsigned int)DataLength )
      v32 = DataLength;
    v33 = IoAllocateMdl(v31, v32, 0, 0, 0LL);
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v33;
    if ( !v33 )
      break;
    IoBuildPartialMdl(Next, v33, v31, v32);
    v34 = *(struct _MDL **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
    v35 = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    v25->Next = v34;
    DataLength = v35 - v32;
    v25 = v34;
    *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = DataLength;
    v34->Next = 0LL;
    if ( (_DWORD)DataLength )
    {
      Next = Next->Next;
      if ( Next )
        continue;
    }
    goto LABEL_33;
  }
LABEL_75:
  NdisFreeCloneNetBufferList(NetBufferList, *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  return 0LL;
}
