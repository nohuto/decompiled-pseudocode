/*
 * XREFs of ?ndisVerifierFreePacketPool@@YAXPEAX@Z @ 0x1C00ABE20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreePacketPoolInternal@@YAXPEAXE@Z @ 0x1C00C0E10 (-ndisFreePacketPoolInternal@@YAXPEAXE@Z.c)
 */

void __fastcall ndisVerifierFreePacketPool(struct _NDIS_PKT_POOL *a1, unsigned __int8 a2)
{
  ndisFreePacketPoolInternal(a1, a2);
}
