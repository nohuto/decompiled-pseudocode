/*
 * XREFs of ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0039590
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C00395E0 (-ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_C.c)
 */

__int64 __fastcall ndisRssV2Initialize(char *DeferredContext)
{
  *((_DWORD *)DeferredContext + 1430) = 0;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 5728), NotificationEvent, 0);
  DeferredContext[5752] = 0;
  return ndisRssV2InitializeDpcWorkerContext(
           DeferredContext,
           (struct _NDIS_RSS_DPC_WORKER_CONTEXT **)DeferredContext + 714);
}
