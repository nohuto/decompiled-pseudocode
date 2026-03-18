/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x1407187A8
 * Callers:
 *     CmpPromoteSubtree @ 0x140717798 (CmpPromoteSubtree.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1406E9520 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
