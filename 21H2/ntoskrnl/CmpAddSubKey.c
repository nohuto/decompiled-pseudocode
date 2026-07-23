/*
 * XREFs of CmpAddSubKey @ 0x14087A4F8
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED79C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x14065DA04 (CmpAddSubKeyEx.c)
 */

char __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
