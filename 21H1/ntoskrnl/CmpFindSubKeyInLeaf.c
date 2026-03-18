/*
 * XREFs of CmpFindSubKeyInLeaf @ 0x140875DC8
 * Callers:
 *     CmpAddToLeaf @ 0x140693584 (CmpAddToLeaf.c)
 * Callees:
 *     CmpFindSubKeyInLeafWithStatus @ 0x14061BA70 (CmpFindSubKeyInLeafWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyInLeaf(__int64 a1, __int64 a2, unsigned __int16 *a3, _DWORD *a4)
{
  unsigned int v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0;
  CmpFindSubKeyInLeafWithStatus(a1, a2, a3, a4, (int *)v5);
  return v5[0];
}
