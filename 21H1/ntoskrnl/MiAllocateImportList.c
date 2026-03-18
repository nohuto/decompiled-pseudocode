/*
 * XREFs of MiAllocateImportList @ 0x140746450
 * Callers:
 *     MiAddEntryToImportList @ 0x14053FA24 (MiAddEntryToImportList.c)
 *     MiCompressImportList @ 0x14074633C (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x1407463FC (MiPrepareImportList.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
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
