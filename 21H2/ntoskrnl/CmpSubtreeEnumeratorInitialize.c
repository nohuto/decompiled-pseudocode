/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x14091D24C
 * Callers:
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x14069F2B4 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
