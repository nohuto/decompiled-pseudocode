/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x1C0013450
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0003740 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C0004324 (ndisPplLazyInitializeLookaside.c)
 *     NdisFreeNetBuffer @ 0x1C00083C0 (NdisFreeNetBuffer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00173B4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0074040 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeNetBufferListContext @ 0x1C00ACF80 (NdisFreeNetBufferListContext.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  _BYTE *v2; // rbp
  void *NdisPoolHandle; // rax
  ULONG v4; // r12d
  int v6; // eax
  _NET_BUFFER *FirstNetBuffer; // rsi
  char v8; // r14
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *v11; // rbx
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *v13; // r14
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  char *v16; // rbx
  _SLIST_HEADER *v17; // rsi
  _SLIST_HEADER *v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // r15
  PNET_BUFFER_LIST Alignment; // rsi
  void *v23; // rbx
  char *SourceHandle; // rcx
  __int64 v25; // rax
  _BYTE v26[128]; // [rsp+100h] [rbp+100h] BYREF

  v2 = (_BYTE *)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL);
  NdisPoolHandle = CloneNetBufferList->NdisPoolHandle;
  CloneNetBufferList->Link.Alignment = 0LL;
  v4 = FreeCloneFlags & 2;
  *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = NdisPoolHandle;
  v6 = *(_DWORD *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_2;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *(_BYTE *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
  *v2 = 0;
  if ( v6 >= 3 )
    ndisNblTrackerRecordEventInternal(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
  Alignment = CloneNetBufferList;
  do
  {
    v23 = Alignment->NetBufferListInfo[27];
    while ( Alignment->NetBufferListInfo[27] == v23 )
    {
      if ( !v23 && !Alignment->SourceHandle )
        Alignment->SourceHandle = 0LL;
      if ( ((unsigned __int8)v23 & 4) == 0 )
      {
        SourceHandle = (char *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          *(_QWORD *)&FreeCloneFlags = (unsigned __int8)*SourceHandle;
          if ( (unsigned __int8)(FreeCloneFlags - 17) <= 1u || (_BYTE)FreeCloneFlags == 5 )
          {
            if ( SourceHandle != (char *)136 || Alignment->ParentNetBufferList )
            {
              ++v20;
              v25 = 136LL;
            }
            else
            {
              ++v19;
              v25 = 24LL;
              ++v20;
            }
            goto LABEL_35;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(FreeCloneFlags) = 3;
            WPP_RECORDER_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              FreeCloneFlags,
              27,
              12,
              (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
              (char)Alignment,
              *SourceHandle);
          }
        }
        else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xBu,
            (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
            Alignment);
        }
      }
      v25 = 140LL;
LABEL_35:
      Alignment->NetBufferListInfo[27] = (void *)v25;
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    if ( ((unsigned __int8)v23 & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(v23, v21 - v20, v2 + 1, (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL);
    v21 = v20;
  }
  while ( Alignment );
LABEL_2:
  FirstNetBuffer = CloneNetBufferList->FirstNetBuffer;
  v8 = *(_BYTE *)(*(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 60LL) & 1;
  if ( FirstNetBuffer )
  {
    do
    {
      if ( !v4 )
      {
        MdlChain = FirstNetBuffer->MdlChain;
        if ( MdlChain )
        {
          do
          {
            Next = MdlChain->Next;
            IoFreeMdl(MdlChain);
            MdlChain = Next;
          }
          while ( Next );
        }
      }
      v11 = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer != CloneNetBufferList->FirstNetBuffer || !v8 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = v11;
    }
    while ( v11 );
  }
  Context = CloneNetBufferList->Context;
  v13 = (char *)CloneNetBufferList->NdisPoolHandle;
  if ( Context && (CloneNetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(CloneNetBufferList, Context->Size - Context->Offset);
  CloneNetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)CloneNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(FreeCloneFlags) = 1;
    WfpNblInfoCleanup(CloneNetBufferList, *(_QWORD *)&FreeCloneFlags);
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(CloneNetBufferList, 0LL, 4u, 0LL, 0);
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v14 = (unsigned int)CloneNetBufferList[-1].NetBufferListInfo[29];
    v15 = (unsigned __int64)v14 << 8;
    v16 = &v13[v15 + 384];
    if ( !v16[216] )
    {
      ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)&v13[v15 + 384], (__int64)(v13 + 128));
      v14 = (unsigned int)CloneNetBufferList[-1].NetBufferListInfo[29];
    }
    if ( v14 == KeGetPcr()->Prcb.Number )
      v17 = (_SLIST_HEADER *)*((_QWORD *)v16 + 24);
    else
      v17 = (_SLIST_HEADER *)*((_QWORD *)v16 + 25);
    ++*((_DWORD *)v16 + 7);
    if ( ExQueryDepthSList(v17) < *((_WORD *)v16 + 8) )
    {
      v18 = v17;
      goto LABEL_21;
    }
    ++*((_DWORD *)v16 + 8);
  }
  ++*((_DWORD *)v13 + 39);
  if ( ExQueryDepthSList((PSLIST_HEADER)v13 + 8) >= *((_WORD *)v13 + 72) )
  {
    ++*((_DWORD *)v13 + 40);
    (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v13 + 23))(CloneNetBufferList, v13 + 128);
  }
  else
  {
    v18 = (_SLIST_HEADER *)(v13 + 128);
LABEL_21:
    ExpInterlockedPushEntrySList(v18, (PSLIST_ENTRY)CloneNetBufferList);
  }
}
