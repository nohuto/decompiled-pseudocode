/*
 * XREFs of CmpAddSubKey @ 0x140875BC0
 * Callers:
 *     CmpCreateTombstone @ 0x1404E7DBC (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpCommitAddKeyUoW @ 0x14074DC48 (CmpCommitAddKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x14069316C (CmpAddSubKeyEx.c)
 */

char __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
