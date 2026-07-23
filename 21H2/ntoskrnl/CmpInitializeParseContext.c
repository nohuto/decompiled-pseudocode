/*
 * XREFs of CmpInitializeParseContext @ 0x140666098
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall CmpInitializeParseContext(__int64 a1)
{
  memset((void *)a1, 0, 0x128uLL);
  *(_DWORD *)(a1 + 96) = -1;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  return memset((void *)(a1 + 216), 0, 0x50uLL);
}
