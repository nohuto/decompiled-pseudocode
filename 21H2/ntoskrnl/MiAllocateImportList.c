/*
 * XREFs of MiAllocateImportList @ 0x1406DF7A0
 * Callers:
 *     MiCompressImportList @ 0x1406DF688 (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x1406DF748 (MiPrepareImportList.c)
 *     MiAddEntryToImportList @ 0x140978260 (MiAddEntryToImportList.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
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
