/*
 * XREFs of MiAllocateTempLoaderEntry @ 0x140748EEC
 * Callers:
 *     MiObtainSectionForDriver @ 0x140746898 (MiObtainSectionForDriver.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiAllocateTempLoaderEntry(__int64 a1)
{
  _QWORD *result; // rax

  result = MiAllocatePool(64, 0xA0uLL, 0x644C6D4Du);
  if ( result )
  {
    result[14] = a1;
    *((_WORD *)result + 54) = 1;
    *((_DWORD *)result + 26) = 0x1000000;
    result[17] = -2LL;
  }
  return result;
}
