/*
 * XREFs of CmpSubtreeEnumeratorStartForKcbStack @ 0x14091D2E4
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14065B560 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14065B6A0 (CmpPromoteSubtree.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     CmpSubtreeEnumeratorStart @ 0x14065C7A4 (CmpSubtreeEnumeratorStart.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x14091D1FC (CmpSubtreeEnumeratorBeginForKcbStack.c)
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
