/*
 * XREFs of ?ndisQueuedPnPIrpSurpriseRemoval@@YAXPEAX@Z @ 0x1C011E2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E154 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedPnPIrpSurpriseRemoval(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisPnPIrpSurpriseRemovalInner(a1);
}
