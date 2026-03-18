/*
 * XREFs of CmpSortedValueEnumStackInitialize @ 0x1408783D4
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1404E7D08 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
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
