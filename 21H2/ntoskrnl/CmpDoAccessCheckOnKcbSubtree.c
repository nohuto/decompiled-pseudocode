/*
 * XREFs of CmpDoAccessCheckOnKcbSubtree @ 0x14091854C
 * Callers:
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14065B560 (CmpDoAccessCheckOnLayeredSubtree.c)
 */

__int64 __fastcall CmpDoAccessCheckOnKcbSubtree(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  return CmpDoAccessCheckOnLayeredSubtree(a1, a2, 0LL, a3, a4, 1);
}
