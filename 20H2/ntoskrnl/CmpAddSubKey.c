/*
 * XREFs of CmpAddSubKey @ 0x14087CA20
 * Callers:
 *     CmpCreateTombstone @ 0x1404EBC7C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpCommitAddKeyUoW @ 0x140760EB8 (CmpCommitAddKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140881108 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x1407037B8 (CmpAddSubKeyEx.c)
 */

char __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
