/*
 * XREFs of ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0074040
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001D70 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisSendNetBufferLists @ 0x1C0002550 (NdisSendNetBufferLists.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0002AF0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000326C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C0003740 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0003C00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C0003F10 (NdisAllocateNetBufferList.c)
 *     NdisReturnNetBufferLists @ 0x1C00044C0 (NdisReturnNetBufferLists.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00050A0 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     NdisFreeNetBufferList @ 0x1C0005400 (NdisFreeNetBufferList.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C00056D0 (NdisFSendNetBufferListsComplete.c)
 *     NdisFSendNetBufferLists @ 0x1C0005B90 (NdisFSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0007190 (NdisFReturnNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0007560 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0013450 (NdisFreeCloneNetBufferList.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C007450C (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisNblTrackerRecordEvent @ 0x1C0074680 (NdisNblTrackerRecordEvent.c)
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C0075528 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C00756D8 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0075984 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x1C0075A24 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x1C0075ABC (-ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x1C0075B54 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x1C0075C58 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C0076044 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00AD210 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C00AD640 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C0073D74 (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0073F18 (-ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00BEA64 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00BED8C (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisNblTrackerRecordEventInternal(
        struct _NET_BUFFER_LIST *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5)
{
  unsigned int v6; // ecx
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  struct _NET_BUFFER_LIST *v11; // r9
  struct _NET_BUFFER_LIST **v12; // r9
  unsigned int v13; // r11d
  unsigned int v14; // r10d
  unsigned int v15; // esi
  unsigned __int64 v16; // rbp
  unsigned int v17; // r11d
  unsigned int v18; // ebx
  __int64 v19; // r12
  unsigned int v20; // r14d
  int v21; // ecx
  ULONG_PTR v22; // rcx
  unsigned int Number; // edx
  int v24; // edx
  unsigned __int64 *p_i; // r10
  unsigned int v26; // r8d
  unsigned int v27; // edx
  unsigned __int64 v28; // rax
  struct _NET_BUFFER_LIST *Alignment; // r14
  struct _NET_BUFFER_LIST *v30; // r9
  unsigned __int64 v31; // rbp
  unsigned int v33; // [rsp+24h] [rbp-74h]
  struct _NET_BUFFER_LIST *v35; // [rsp+30h] [rbp-68h]
  unsigned __int64 v36; // [rsp+38h] [rbp-60h]
  __int128 i; // [rsp+40h] [rbp-58h] BYREF
  __int64 v38; // [rsp+50h] [rbp-48h]

  v38 = 0LL;
  v35 = ndisBreakNbl;
  v6 = ndisMaxNumberOfProcessors + 1;
  v7 = 0;
  v8 = 0;
  v9 = a2 & 0xFFFFFFFFFFFFFFFDuLL;
  v36 = a2 | 0x8000000000000002uLL;
  v10 = a4;
  v11 = a1;
  for ( i = 0LL; v11; v11 = *v12 )
  {
    v6 = v8 + (ndisIsPossibleSmuggling(v9, (__int64)v11->NetBufferListInfo[27]) != 0) + 1;
    if ( v6 > v14 )
      return;
    v8 = v6;
    if ( v13 < 0x1F )
      break;
  }
  v15 = 8;
  v16 = v10 & 0xFFFFFFFFFFFFF000uLL;
  if ( (v10 & 0xFFFFFFFFFFFFF000uLL) != 0 )
    v15 = 16;
  if ( *(int *)ndisNblTrackerMode >= 4 )
    v7 = ndisCaptureStackTrace(v6);
  v17 = v15 + 8 * v8;
  v33 = v17;
  v18 = v17 >> 3;
  v19 = _InterlockedExchangeAdd((volatile signed __int32 *)&ndisNblTrackerHistoryNextIndex, v17 >> 3)
      % ndisNblTrackerHistorySize;
  if ( *(int *)ndisNblTrackerMode >= 4 )
  {
    v20 = 0;
    if ( v18 )
    {
      do
      {
        v21 = HIDWORD(ndisNblTrackerHistoryBuffer[(v20 + (unsigned int)v19) % ndisNblTrackerHistorySize]);
        if ( v21 >= 0 )
        {
          v22 = v21 & 0x3FFFFFF;
          if ( (_DWORD)v22 )
            ndisReleaseStackTrace(v22);
        }
        ++v20;
      }
      while ( v20 < v18 );
      v17 = v33;
    }
    v10 = a4;
  }
  Number = KeGetPcr()->Prcb.Number;
  LOBYTE(i) = a3;
  v24 = i & 0xFFFFF | (Number << 20);
  LODWORD(i) = v24;
  if ( v16 )
  {
    DWORD1(i) = DWORD1(i) & 0x80000000 | v7 & 0x3FFFFFF | ((a5 & 0xF) << 26) & 0xBFFFFFFF;
    *((_QWORD *)&i + 1) = v10 | 0x8000000000000000uLL;
  }
  else
  {
    DWORD1(i) = DWORD1(i) & 0xC0000000 | v7 & 0x3FFFFFF | ((a5 & 0xF) << 26) | 0x40000000;
    LODWORD(i) = v24 ^ (v24 ^ ((_DWORD)v10 << 8)) & 0xFFF00;
  }
  p_i = (unsigned __int64 *)&i;
  v26 = 0;
  do
  {
    v27 = (v26 + (unsigned int)v19) % ndisNblTrackerHistorySize;
    v28 = *p_i;
    ++v26;
    ++p_i;
    ndisNblTrackerHistoryBuffer[v27] = v28;
  }
  while ( v26 < v15 >> 3 );
  for ( ; v15 < v17; ndisNblTrackerHistoryBuffer[(unsigned int)v31] = (unsigned __int64)v30 )
  {
    Alignment = 0LL;
    v30 = a1;
    v31 = (v19 + ((unsigned __int64)v15 >> 3)) % ndisNblTrackerHistorySize;
    if ( a1 )
    {
      if ( a1 == v35 )
      {
        DbgPrint("Break on NBL %p (ndis!ndisBreakNbl)\n", v35);
        if ( a4 )
        {
          if ( a3 >= 0x1F )
          {
            DbgPrint("NBL will be given to: ");
            ndisNblTrackerPrintComponentNameToDebugger((struct _NDIS_NBL_TRACKER *)(a4 & 0xFFFFFFFFFFFFFFF8uLL));
          }
        }
        __debugbreak();
      }
      if ( a3 >= 0x1F )
        Alignment = (struct _NET_BUFFER_LIST *)a1->Link.Alignment;
      if ( ndisIsPossibleSmuggling(v9, (__int64)a1->NetBufferListInfo[27]) )
      {
        v15 += 8;
        if ( v15 >= v17 )
        {
          ndisNblTrackerHistoryBuffer[(unsigned int)v31] = 0LL;
          return;
        }
        ndisNblTrackerHistoryBuffer[(unsigned int)v31] = v36;
        LODWORD(v31) = (v19 + ((unsigned __int64)v15 >> 3)) % ndisNblTrackerHistorySize;
      }
    }
    v15 += 8;
    a1 = Alignment;
  }
}
