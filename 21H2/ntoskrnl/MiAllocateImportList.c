/*
 * XREFs of MiAllocateImportList @ 0x14075DC24
 * Callers:
 *     MiAddEntryToImportList @ 0x140545788 (MiAddEntryToImportList.c)
 *     MiCompressImportList @ 0x14075DB10 (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x14075DBD0 (MiPrepareImportList.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
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
