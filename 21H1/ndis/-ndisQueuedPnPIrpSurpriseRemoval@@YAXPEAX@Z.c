/*
 * XREFs of ?ndisQueuedPnPIrpSurpriseRemoval@@YAXPEAX@Z @ 0x1C011E320
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E184 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedPnPIrpSurpriseRemoval(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisPnPIrpSurpriseRemovalInner(a1);
}
