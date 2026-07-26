/*
 * XREFs of NdisAllocateNetBufferAndNetBufferList @ 0x1C0003C00
 * Callers:
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0067D38 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C00756D8 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C0076044 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x1C00A23B4 (ndisCopyPeriodicReceiveNbl.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00AA1C0 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00AD210 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C00AD640 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C0004324 (ndisPplLazyInitializeLookaside.c)
 *     NdisFreeNetBufferList @ 0x1C0005400 (NdisFreeNetBufferList.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0074040 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisAllocateNetBufferListContext @ 0x1C00AC9C0 (NdisAllocateNetBufferListContext.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE210 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferAndNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill,
        PMDL MdlChain,
        ULONG DataOffset,
        SIZE_T DataLength)
{
  unsigned int Number; // r13d
  unsigned int v11; // r12d
  unsigned __int64 v12; // rax
  char *v13; // rsi
  _SLIST_HEADER *v14; // rcx
  PSLIST_ENTRY v15; // rbx
  unsigned __int64 v16; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v18; // al
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int16 v22; // si
  int v23; // eax
  ULONG v24; // ecx
  ULONG ByteCount; // eax
  KIRQL v27; // al
  __int64 v28; // r8
  bool v29; // zf
  __int64 v30; // rax
  _SLIST_ENTRY *v31; // rax

  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 15) & 5) == 1 )
    {
      if ( (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) == 0 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v11 = 1;
        if ( ndisMaxNumberOfProcessors != 1 )
        {
          v12 = (unsigned __int64)Number << 8;
          v13 = (char *)PoolHandle + v12 + 384;
          if ( !v13[216] )
            ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)PoolHandle + v12 + 384));
          v14 = (_SLIST_HEADER *)*((_QWORD *)v13 + 24);
          ++*((_DWORD *)v13 + 5);
          v15 = ExpInterlockedPopEntrySList(v14);
          if ( !v15 )
          {
            if ( ExQueryDepthSList(*((PSLIST_HEADER *)v13 + 25)) < 0xAu
              || (v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 26),
                  v28 = *((_QWORD *)v13 + 24),
                  *((_QWORD *)v13 + 24) = *((_QWORD *)v13 + 25),
                  *((_QWORD *)v13 + 25) = v28,
                  KeReleaseSpinLock((PKSPIN_LOCK)v13 + 26, v27),
                  (v15 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v13 + 24))) == 0LL) )
            {
              ++*((_DWORD *)v13 + 6);
            }
          }
          if ( v15 )
            goto LABEL_19;
        }
        ++*((_DWORD *)PoolHandle + 37);
        v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
        if ( v15 )
          goto LABEL_18;
        v16 = *((unsigned int *)PoolHandle + 43);
        ++*((_DWORD *)PoolHandle + 38);
        if ( v16 + 32 >= v16 )
        {
          PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  v16 + 32,
                                                  *((_DWORD *)PoolHandle + 42),
                                                  NormalPoolPriority);
          if ( PoolWithTagPriority )
          {
            PoolWithTagPriority->Next = 0LL;
            v15 = PoolWithTagPriority + 2;
            if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
            {
              PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
              v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
              v19 = *((_QWORD *)PoolHandle + 2);
              v20 = (char *)PoolHandle + 16;
              v21 = &v15[-2].Next + 1;
              if ( *(NDIS_HANDLE *)(v19 + 8) != (char *)PoolHandle + 16 )
                __fastfail(3u);
              v21[1] = v20;
              *v21 = v19;
              *(_QWORD *)(v19 + 8) = v21;
              *v20 = v21;
              KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v18);
            }
          }
          else
          {
            v15 = 0LL;
          }
          v11 = 0;
          if ( v15 )
          {
LABEL_18:
            *((_DWORD *)&v15[-1].Next + 2) = Number;
LABEL_19:
            v22 = *((_WORD *)&v15[3].Next + 5);
            memset(v15, 0, 8 * (v11 ^ 1LL) + 368);
            v15[2].Next = (_SLIST_ENTRY *)PoolHandle;
            *((_DWORD *)&v15[8].Next + 2) = 256;
            if ( v11 )
              *((_WORD *)&v15[3].Next + 5) = v22;
            if ( Microsoft_Windows_Networking_CorrelationEnabled )
              ndisGenerateNetBufferListCorrelationIds((struct _NET_BUFFER_LIST *)v15, 1u);
            *((_BYTE *)&v15[12].Next + 8) = *((_BYTE *)PoolHandle + 32);
            v23 = *((_DWORD *)PoolHandle + 15);
            if ( (v23 & 2) == 0 )
              goto LABEL_24;
            v29 = (v23 & 1) == 0;
            v30 = 35LL;
            if ( v29 )
              v30 = 24LL;
            v31 = &v15[v30];
            v15[1].Next = v31;
            v31->Next = 0LL;
            *((_WORD *)&v15[1].Next->Next + 4) = *((_WORD *)PoolHandle + 17);
            *((_WORD *)&v15[1].Next->Next + 5) = *((_WORD *)PoolHandle + 17);
            if ( *((_WORD *)PoolHandle + 17) >= ContextSize )
            {
              *((_WORD *)&v15[1].Next->Next + 5) -= ContextSize;
            }
            else
            {
LABEL_24:
              if ( ContextSize )
              {
                if ( NdisAllocateNetBufferListContext(
                       (PNET_BUFFER_LIST)v15,
                       ContextSize,
                       ContextBackFill,
                       *((_DWORD *)PoolHandle + 14)) )
                {
                  NdisFreeNetBufferList((PNET_BUFFER_LIST)v15);
                  v15 = 0LL;
                }
                else
                {
                  *((_DWORD *)&v15[8].Next + 2) |= 0x400u;
                }
              }
            }
            if ( v15 )
            {
              memset(&v15[24], 0, 0xB0uLL);
              v24 = DataOffset;
              *((_DWORD *)&v15[26].Next + 2) = DataOffset;
              *((_DWORD *)&v15[25].Next + 2) = DataLength;
              v15[26].Next = (_SLIST_ENTRY *)MdlChain;
              for ( *((_QWORD *)&v15[27].Next + 1) = PoolHandle; MdlChain; v24 -= ByteCount )
              {
                ByteCount = MdlChain->ByteCount;
                if ( v24 < ByteCount )
                  break;
                MdlChain = MdlChain->Next;
              }
              *((_QWORD *)&v15[24].Next + 1) = MdlChain;
              LODWORD(v15[25].Next) = v24;
              *((_QWORD *)&v15->Next + 1) = v15 + 24;
              if ( *(int *)ndisNblTrackerMode >= 3 )
                ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v15, 0LL, 3u, 0LL, 0);
            }
            return (PNET_BUFFER_LIST)v15;
          }
        }
      }
      return 0LL;
    }
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", PoolHandle);
    return 0LL;
  }
  else
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool is NULL\n");
    return 0LL;
  }
}
