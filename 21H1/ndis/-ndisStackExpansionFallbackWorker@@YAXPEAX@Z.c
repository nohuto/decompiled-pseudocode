/*
 * XREFs of ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C00694D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000317C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C00055E0 (NdisFSendNetBufferListsComplete.c)
 *     NdisFReturnNetBufferLists @ 0x1C00070A0 (NdisFReturnNetBufferLists.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000BF70 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000E7D0 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0015660 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0016070 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A1C8 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A61C (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A6C0 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0067184 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C00AF3A0 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 */

void __fastcall ndisStackExpansionFallbackWorker(struct _NDIS_FILTER_BLOCK *a1)
{
  __int128 v2; // xmm0
  KIRQL v3; // dl
  __int128 v4; // xmm1
  struct _NET_BUFFER_LIST *ReceivedNblsToComplete; // xmm0_8
  __int64 v6; // rbx
  char *v7; // rbx
  char *v8; // rax
  void *v9; // r14
  struct _KEVENT *v10; // rdi
  struct _NDIS_STATUS_INDICATION *v11; // rdx
  KIRQL v12; // dl
  char *v13; // r14
  char *v14; // rbx
  struct _KEVENT *v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  struct _KEVENT *v18; // rbx
  __int128 v19; // [rsp+30h] [rbp-49h]
  PVOID P[2]; // [rsp+40h] [rbp-39h]
  __int128 Parameter; // [rsp+68h] [rbp-11h] BYREF
  __int128 v22; // [rsp+78h] [rbp-1h]
  __int128 v23; // [rsp+88h] [rbp+Fh]
  __int64 v24; // [rsp+98h] [rbp+1Fh]
  __int128 v25; // [rsp+A0h] [rbp+27h]
  KIRQL NewIrql; // [rsp+E0h] [rbp+67h] BYREF

  NewIrql = 0;
  Parameter = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  v2 = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.IssueOidRequest;
  v3 = NewIrql;
  v4 = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.DevicePnPEvents;
  a1->StackExpansionFallback.WorkItemQueued = 0;
  v25 = v2;
  v19 = v2;
  *(_OWORD *)P = *(_OWORD *)&a1->StackExpansionFallback.PendingWork.StatusIndications;
  ReceivedNblsToComplete = a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
  *(_OWORD *)&a1->StackExpansionFallback.PendingWork.IssueOidRequest = 0LL;
  *(_OWORD *)&a1->StackExpansionFallback.PendingWork.StatusIndications = 0LL;
  *(_OWORD *)&a1->StackExpansionFallback.PendingWork.DevicePnPEvents = 0LL;
  a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete = 0LL;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v3);
  *((_QWORD *)&Parameter + 1) = a1;
  if ( (_BYTE)v25 )
    ndisFDoOidRequestInternal(a1);
  if ( BYTE1(v19) )
    ndisFOidRequestCompleteInternal(a1);
  v6 = *((_QWORD *)&v19 + 1);
  while ( v6 )
  {
    *((_QWORD *)&v22 + 1) = v6;
    v6 = *(_QWORD *)(v6 + 72);
    ndisFDirectOidRequestCompleteInternal(&Parameter);
  }
  v7 = (char *)P[0];
  if ( P[0] )
  {
    do
    {
      v8 = v7 + 80;
      v9 = v7;
      v10 = (struct _KEVENT *)*((_QWORD *)v7 + 11);
      v11 = (struct _NDIS_STATUS_INDICATION *)v7;
      v7 = (char *)*((_QWORD *)v7 + 10);
      *((_QWORD *)v8 + 1) = 0LL;
      ndisFIndicateStatusInternal(a1, v11);
      if ( v10 )
      {
        KeSetEvent(v10, 0, 0);
      }
      else
      {
        ndisDereferenceRef(&a1->PnPRef.SpinLock, 1u);
        ExFreePoolWithTag(v9, 0);
      }
    }
    while ( v7 );
  }
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  if ( !a1->StackExpansionFallback.PendingWork.StatusIndications )
    a1->StatusIndicationsQueued = 0;
  v12 = NewIrql;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v12);
  v13 = (char *)P[1];
  while ( v13 )
  {
    v14 = v13 + 32;
    *((_QWORD *)&v22 + 1) = v13;
    v15 = (struct _KEVENT *)*((_QWORD *)v13 + 4);
    v13 = (char *)*((_QWORD *)v13 + 7);
    *(_QWORD *)v14 = 0LL;
    ndisFNetPnPEventInternal(&Parameter);
    *((_DWORD *)v14 + 2) = Parameter;
    KeSetEvent(v15, 0, 0);
  }
  v16 = v4;
  while ( v16 )
  {
    v17 = v16 + 28;
    *((_QWORD *)&v22 + 1) = v16;
    v18 = *(struct _KEVENT **)(v16 + 36);
    v16 = *(_QWORD *)(v16 + 28);
    *(_QWORD *)(v17 + 8) = 0LL;
    ndisFDevicePnPEventNotifyInternal(&Parameter);
    KeSetEvent(v18, 0, 0);
  }
  if ( *((_QWORD *)&v4 + 1) )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        *((struct _NET_BUFFER_LIST **)&v4 + 1),
        160LL,
        (unsigned __int64)a1->NblTracker,
        0x91u,
        0);
    NdisFSendNetBufferListsComplete(a1, *((PNET_BUFFER_LIST *)&v4 + 1), 0);
  }
  if ( ReceivedNblsToComplete )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(ReceivedNblsToComplete, 160LL, (unsigned __int64)a1->NblTracker, 0x8Bu, 0);
    NdisFReturnNetBufferLists(a1, ReceivedNblsToComplete, 0);
  }
  ndisDereferenceFilter((char *)a1, 1u);
}
