/*
 * XREFs of CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x1407184D4
 * Callers:
 *     CmpPromoteSubtree @ 0x140717798 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140717CE0 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x140718510 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x1407185AC (CmpSubtreeEnumeratorStart.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStartForKeyNodeStack(__int64 a1, unsigned __int16 *a2)
{
  __int64 result; // rax

  result = CmpSubtreeEnumeratorStart(a1, *a2);
  if ( (int)result >= 0 )
  {
    CmpSubtreeEnumeratorBeginForKeyNodeStack(a1, a2);
    return 0LL;
  }
  return result;
}
