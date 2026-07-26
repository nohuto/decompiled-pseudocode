/*
 * XREFs of NdisFreeNetBuffer @ 0x1C00082D0
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x1C0013360 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C00AD360 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C0004234 (ndisPplLazyInitializeLookaside.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFreeNetBuffer(PNET_BUFFER NetBuffer)
{
  char *NdisPoolHandle; // rbp
  _MDL *MdlChain; // rcx
  unsigned int SharedMemoryInfo; // ecx
  unsigned __int64 v5; // rax
  char *v6; // rbx
  _SLIST_HEADER *v7; // rsi
  _SLIST_HEADER *v8; // rcx

  NdisPoolHandle = (char *)NetBuffer->NdisPoolHandle;
  if ( (*((_DWORD *)NdisPoolHandle + 22) & 1) != 0 )
  {
    MdlChain = NetBuffer->MdlChain;
    if ( (MdlChain->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(MdlChain->MappedSystemVa, MdlChain);
  }
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    SharedMemoryInfo = (unsigned int)NetBuffer[-1].SharedMemoryInfo;
    v5 = (unsigned __int64)SharedMemoryInfo << 8;
    v6 = &NdisPoolHandle[v5 + 384];
    if ( !v6[216] )
    {
      ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)&NdisPoolHandle[v5 + 384], (__int64)(NdisPoolHandle + 128));
      SharedMemoryInfo = (unsigned int)NetBuffer[-1].SharedMemoryInfo;
    }
    if ( SharedMemoryInfo == KeGetPcr()->Prcb.Number )
      v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 24);
    else
      v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 25);
    ++*((_DWORD *)v6 + 7);
    if ( ExQueryDepthSList(v7) < *((_WORD *)v6 + 8) )
    {
      v8 = v7;
LABEL_11:
      ExpInterlockedPushEntrySList(v8, (PSLIST_ENTRY)NetBuffer);
      return;
    }
    ++*((_DWORD *)v6 + 8);
  }
  ++*((_DWORD *)NdisPoolHandle + 39);
  if ( ExQueryDepthSList((PSLIST_HEADER)NdisPoolHandle + 8) < *((_WORD *)NdisPoolHandle + 72) )
  {
    v8 = (_SLIST_HEADER *)(NdisPoolHandle + 128);
    goto LABEL_11;
  }
  ++*((_DWORD *)NdisPoolHandle + 40);
  (*((void (__fastcall **)(PNET_BUFFER, char *))NdisPoolHandle + 23))(NetBuffer, NdisPoolHandle + 128);
}
