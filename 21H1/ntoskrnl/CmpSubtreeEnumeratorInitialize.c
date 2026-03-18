/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x140716418
 * Callers:
 *     CmpPromoteSubtree @ 0x140715408 (CmpPromoteSubtree.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1406C8E60 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
