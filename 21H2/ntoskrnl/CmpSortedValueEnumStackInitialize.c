/*
 * XREFs of CmpSortedValueEnumStackInitialize @ 0x14069F4C8
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1402260D0 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall CmpSortedValueEnumStackInitialize(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 10) = 0;
  *(_WORD *)(a1 + 14) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_WORD *)(a1 + 8) = -1;
  return memset((void *)(a1 + 16), 0, 0x40uLL);
}
