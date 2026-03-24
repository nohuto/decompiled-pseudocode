/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x1402E46A4
 * Callers:
 *     MiDeleteProcessShadow @ 0x140305768 (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x1403885D8 (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406D073C (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
