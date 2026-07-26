/*
 * XREFs of ?ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1C00876A8
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AC64 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisOidPostRcvFilterQueueParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085B30 (-ndisOidPostRcvFilterQueueParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0085598 (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

char __fastcall ndisUpdateRcvFilterQueueParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_RECEIVE_QUEUE_PARAMETERS *a2)
{
  __int64 v4; // r8
  unsigned int *v5; // r9
  unsigned int QueueId; // edx
  char *ReceiveQueueByQueueId; // rdx
  char v8; // bl
  unsigned int Flags; // eax
  KIRQL NewIrql; // [rsp+38h] [rbp+10h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  QueueId = a2->QueueId;
  if ( QueueId )
    ReceiveQueueByQueueId = (char *)ndisFindReceiveQueueByQueueId(a1, QueueId, v4, v5);
  else
    ReceiveQueueByQueueId = (char *)a1->DefaultReceiveQueue;
  if ( ReceiveQueueByQueueId )
  {
    Flags = a2->Flags;
    if ( (Flags & 0x10000) != 0 )
    {
      *((_DWORD *)ReceiveQueueByQueueId + 33) = (unsigned __int16)Flags;
      Flags = a2->Flags;
    }
    if ( (Flags & 0x20000) != 0 )
    {
      *(_GROUP_AFFINITY *)(ReceiveQueueByQueueId + 152) = a2->ProcessorAffinity;
      *((_DWORD *)ReceiveQueueByQueueId + 43) = a2->MSIXTableEntry;
      Flags = a2->Flags;
    }
    if ( (Flags & 0x40000) != 0 )
      *((_DWORD *)ReceiveQueueByQueueId + 42) = a2->NumSuggestedReceiveBuffers;
    if ( a2->Header.Revision >= 2u && (a2->Flags & 0x100000) != 0 )
      *((_DWORD *)ReceiveQueueByQueueId + 304) = a2->InterruptCoalescingDomainId;
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  return v8;
}
