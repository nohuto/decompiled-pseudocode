/*
 * XREFs of XmBswapOp @ 0x1404E5140
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396950 (XmStoreResult.c)
 */

_WORD *__fastcall XmBswapOp(__int64 a1)
{
  return XmStoreResult(a1, _byteswap_ulong(*(_DWORD *)(a1 + 108)));
}
