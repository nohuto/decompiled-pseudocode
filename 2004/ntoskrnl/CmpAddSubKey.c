/*
 * XREFs of CmpAddSubKey @ 0x140876EB0
 * Callers:
 *     CmpCreateTombstone @ 0x1404E83EC (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpCommitAddKeyUoW @ 0x1407522D8 (CmpCommitAddKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x14087B598 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x140640CC0 (CmpAddSubKeyEx.c)
 */

char __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
