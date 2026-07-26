/*
 * XREFs of ?nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1C008E8A8
 * Callers:
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E338 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C0038D00 (NdisFreeRWLock.c)
 */

void __fastcall nullDeleteFilter(PNDIS_RW_LOCK_EX *P)
{
  NdisFreeRWLock(P[36]);
  ExFreePoolWithTag(P, 0);
}
