/*
 * XREFs of NdisFreeRWLock @ 0x1C0038D00
 * Callers:
 *     ?EthDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1C0064234 (-EthDeleteFilter@@YAXPEAU_X_FILTER@@@Z.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x1C008E810 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1C008E8A8 (-nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z.c)
 *     ?ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C00A4B80 (-ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0147300 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C0038D40 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  *(_DWORD *)Lock |= 0xFFFFFF7F;
  ndisFreePerProcessorSlot(*((_QWORD *)Lock + 4), 0x7772444EuLL);
  ExFreePoolWithTag(Lock, 0x7772444Eu);
}
