/*
 * XREFs of MiAllocateImportList @ 0x140747FD0
 * Callers:
 *     MiAddEntryToImportList @ 0x140540074 (MiAddEntryToImportList.c)
 *     MiCompressImportList @ 0x140747EBC (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x140747F7C (MiPrepareImportList.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiAllocateImportList(unsigned __int64 a1)
{
  _QWORD *result; // rax

  if ( a1 > 0x1FFFFFFE )
    return 0LL;
  result = MiAllocatePool(256, (unsigned int)(8 * a1 + 8), 0x54446D4Du);
  if ( result )
    *result = a1;
  return result;
}
