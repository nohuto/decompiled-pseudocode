/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x14072A288
 * Callers:
 *     CmpPromoteSubtree @ 0x1407291E8 (CmpPromoteSubtree.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x140699D70 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
