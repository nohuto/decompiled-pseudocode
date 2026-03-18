/*
 * XREFs of MiAllocateImportList @ 0x140756BB0
 * Callers:
 *     MiAddEntryToImportList @ 0x140543A44 (MiAddEntryToImportList.c)
 *     MiCompressImportList @ 0x140756A9C (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x140756B5C (MiPrepareImportList.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
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
