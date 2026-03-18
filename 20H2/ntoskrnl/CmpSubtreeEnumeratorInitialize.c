/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x140726768
 * Callers:
 *     CmpPromoteSubtree @ 0x140725758 (CmpPromoteSubtree.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1406BDE98 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
