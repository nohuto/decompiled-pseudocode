/*
 * XREFs of ?ndisSynchReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C3F40
 * Callers:
 *     <none>
 * Callees:
 *     ndisReturnPacketToNetBufferList @ 0x1C00C3F08 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisSynchReturnPacketsForTranslation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  ndisReturnPacketToNetBufferList(a1, a2);
}
