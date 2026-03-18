/*
 * XREFs of CmpSubtreeEnumeratorStartForKcbStack @ 0x140872018
 * Callers:
 *     CmpPromoteSubtree @ 0x140715408 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140715950 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 * Callees:
 *     CmpSubtreeEnumeratorStart @ 0x14071621C (CmpSubtreeEnumeratorStart.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x140871F38 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStartForKcbStack(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 result; // rax

  result = CmpSubtreeEnumeratorStart(a1, *(_WORD *)(a2 + 2), a3, a4);
  if ( (int)result >= 0 )
  {
    CmpSubtreeEnumeratorBeginForKcbStack(a1, a2);
    return 0LL;
  }
  return result;
}
