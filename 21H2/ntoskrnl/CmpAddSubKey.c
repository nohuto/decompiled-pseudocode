/*
 * XREFs of CmpAddSubKey @ 0x140881496
 * Callers:
 *     CmpCreateTombstone @ 0x14053FB50 (CmpCreateTombstone.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x140718244 (CmpAddSubKeyEx.c)
 */

__int64 __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
