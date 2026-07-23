/*
 * XREFs of CmpFindSubKeyInLeaf @ 0x14087A700
 * Callers:
 *     CmpAddToLeaf @ 0x14065E93C (CmpAddToLeaf.c)
 *     CmpRemoveSubKeyFromList @ 0x140660490 (CmpRemoveSubKeyFromList.c)
 * Callees:
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406DD740 (CmpFindSubKeyInLeafWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyInLeaf(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int16 *a4, _DWORD *a5)
{
  unsigned int v6[6]; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = 0;
  CmpFindSubKeyInLeafWithStatus(a1, a2, a3, a4, a5, (int *)v6);
  return v6[0];
}
