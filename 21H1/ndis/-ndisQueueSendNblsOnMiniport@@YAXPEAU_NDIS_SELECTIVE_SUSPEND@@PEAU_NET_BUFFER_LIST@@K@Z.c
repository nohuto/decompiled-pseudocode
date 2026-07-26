/*
 * XREFs of ?ndisQueueSendNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00A5CB4
 * Callers:
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C00A58A4 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000317C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 */

void __fastcall ndisQueueSendNblsOnMiniport(
        struct _NDIS_SELECTIVE_SUSPEND *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3)
{
  struct _NET_BUFFER_LIST *v3; // rsi
  unsigned __int64 v4; // rbp
  struct _NET_BUFFER_LIST *i; // rax

  v3 = 0LL;
  v4 = a3;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *((_QWORD *)a1 + 76), 1u, 1u);
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
  {
    i->Scratch = (void *)v4;
    v3 = i;
  }
  **((_QWORD **)a1 + 69) = a2;
  *((_QWORD *)a1 + 69) = v3;
}
