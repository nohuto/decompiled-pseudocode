/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000317C
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001D70 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002E30 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0002F10 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004990 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0007470 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0007D60 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015A68 (-ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0067AA8 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C006938C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0069BB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     NdisNblTrackerTransferOwnership @ 0x1C0074530 (NdisNblTrackerTransferOwnership.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099654 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00A6108 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisQueueSendNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00A6174 (-ndisQueueSendNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00A630C (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00A6374 (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00AA050 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00AA750 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C00AD820 (NdisFreeFragmentNetBufferList.c)
 *     ?ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00C30A0 (-ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C3260 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C3F40 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C003E860 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0073EC0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  char v6; // r12
  char v7; // di
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r13
  struct _NET_BUFFER_LIST *Alignment; // r14
  unsigned __int64 v14; // rbx
  char *v15; // r8
  int *v16; // r9
  unsigned __int64 v17; // rdi
  char *SourceHandle; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  char v29; // [rsp+80h] [rbp+8h]
  __int64 v30; // [rsp+88h] [rbp+10h]
  char *v31; // [rsp+90h] [rbp+18h]
  char v32; // [rsp+A0h] [rbp+28h]

  v30 = a2;
  v6 = 0;
  v7 = ndisNblTrackerEpoch;
  v8 = a5 & 1;
  v32 = 0;
  v9 = 0LL;
  v29 = v8;
  v10 = 0LL;
  v11 = 0LL;
  Alignment = a1;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(a1, (struct NDIS_NBL_TRACKER_HANDLE__ *)a2, a4, (void *)a3, a5);
  v14 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v14 & 1) != 0 )
    v15 = *(char **)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  else
    v15 = (char *)v14;
  v31 = v15;
  if ( (v14 & 1) != 0 )
    v14 |= 2LL * (v7 & 1);
  if ( Alignment )
  {
    v16 = &WPP_RECORDER_INITIALIZED;
    do
    {
      v17 = (unsigned __int64)Alignment->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == (void *)v17 )
      {
        if ( !v17 && !Alignment->SourceHandle )
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(v30 & 0xFFFFFFFFFFFFFFFDuLL, a2, v15, v16);
        if ( (v17 & 4) != 0 )
          goto LABEL_42;
        SourceHandle = (char *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          a2 = (unsigned __int8)*SourceHandle;
          if ( (unsigned __int8)(a2 - 17) <= 1u || (_BYTE)a2 == 5 )
          {
            if ( SourceHandle != v15 || Alignment->ParentNetBufferList )
            {
              ++v9;
              v19 = v14;
            }
            else
            {
              ++v11;
              v19 = 24LL;
              ++v9;
            }
            goto LABEL_17;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != v16 )
          {
            LOBYTE(a2) = 3;
            WPP_RECORDER_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              a2,
              27,
              12,
              (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
              (char)Alignment,
              *SourceHandle);
            goto LABEL_39;
          }
        }
        else if ( *(int **)&WPP_RECORDER_INITIALIZED != v16 )
        {
          LOBYTE(a2) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a2,
            27,
            11,
            (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
            (char)Alignment);
LABEL_39:
          v16 = &WPP_RECORDER_INITIALIZED;
        }
LABEL_42:
        v15 = v31;
        v19 = v14 | 4;
LABEL_17:
        Alignment->NetBufferListInfo[27] = (void *)v19;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      v8 = v29;
      v20 = v10 - v9;
      v6 = v32;
      if ( (v17 & 1) != 0 && v20 )
      {
        if ( !v29 && !v32 )
        {
          v6 = 1;
          v32 = 1;
          v8 = KeGetCurrentIrql() == 2;
          v29 = v8;
        }
        v21 = v17;
        v22 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
        a2 = 2 * ((v21 >> 1) & 1);
        if ( v8 )
        {
          v23 = (_QWORD *)(*(_QWORD *)(v22 + 8 * a2 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v23 += v20;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 8 * a2 + 48), v20);
        }
      }
      v10 = v9;
    }
    while ( Alignment );
  }
  v24 = v9 - v11;
  if ( (v14 & 1) != 0 && v24 )
  {
    if ( !v8 && !v6 )
      v8 = KeGetCurrentIrql() == 2;
    v25 = v14;
    v26 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
    v27 = 2 * ((v25 >> 1) & 1);
    if ( v8 )
    {
      v28 = (_QWORD *)(*(_QWORD *)(v26 + 8 * v27 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v28 += v24;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 8 * v27 + 48), v24);
    }
  }
}
