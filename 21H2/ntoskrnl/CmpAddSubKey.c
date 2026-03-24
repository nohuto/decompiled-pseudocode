/*
 * XREFs of CmpAddSubKey @ 0x14087A398
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED55C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x140668BE4 (CmpAddSubKeyEx.c)
 */

char __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
