/*
 * XREFs of CmpSubtreeEnumeratorStartForKcbStack @ 0x140873308
 * Callers:
 *     CmpPromoteSubtree @ 0x140717798 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140717CE0 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 * Callees:
 *     CmpSubtreeEnumeratorStart @ 0x1407185AC (CmpSubtreeEnumeratorStart.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x140873228 (CmpSubtreeEnumeratorBeginForKcbStack.c)
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
