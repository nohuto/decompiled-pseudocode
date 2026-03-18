/*
 * XREFs of XmNotOp @ 0x1403C8C70
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396950 (XmStoreResult.c)
 */

_WORD *__fastcall XmNotOp(__int64 a1)
{
  char v2; // cl

  v2 = 8 * *(_DWORD *)(a1 + 120) + 7;
  return XmStoreResult(a1, ~*(_DWORD *)(a1 + 104) & (((1 << v2) - 1) | (unsigned int)(1 << v2)));
}
