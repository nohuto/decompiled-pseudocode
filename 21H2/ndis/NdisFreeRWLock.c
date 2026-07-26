/*
 * XREFs of NdisFreeRWLock @ 0x1C0039060
 * Callers:
 *     ?EthDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1C00644C4 (-EthDeleteFilter@@YAXPEAU_X_FILTER@@@Z.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x1C008E990 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1C008EA28 (-nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z.c)
 *     ?ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C00A4D00 (-ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0147320 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C00390A0 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  *(_DWORD *)Lock |= 0xFFFFFF7F;
  ndisFreePerProcessorSlot(*((_QWORD *)Lock + 4), 0x7772444EuLL);
  ExFreePoolWithTag(Lock, 0x7772444Eu);
}
