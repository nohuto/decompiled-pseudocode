/*
 * XREFs of ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0068D6C
 * Callers:
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C00084D0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     NdisFOidRequestComplete @ 0x1C000F0E0 (NdisFOidRequestComplete.c)
 *     NdisFNetPnPEvent @ 0x1C00158F0 (NdisFNetPnPEvent.c)
 *     NdisFDevicePnPEventNotify @ 0x1C0016130 (NdisFDevicePnPEventNotify.c)
 *     NdisFIndicateStatus @ 0x1C0018AC0 (NdisFIndicateStatus.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001BF54 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0068CAC (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFDirectOidRequestComplete @ 0x1C00AF780 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0018624 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 */

void __fastcall ndisQueueStackExpansionFallbackWorkItem(struct _NDIS_FILTER_BLOCK *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1->StackExpansionFallback.WorkItemQueued )
  {
    v2 = 0;
    ndisReferenceRefEx(&a1->Ref.SpinLock, 1u, (enum _NDIS_REFERENCE_STATUS *)&v2);
    a1->StackExpansionFallback.WorkItemQueued = 1;
    ExQueueWorkItem(&a1->StackExpansionFallback.WorkItem, NormalWorkQueue);
  }
}
