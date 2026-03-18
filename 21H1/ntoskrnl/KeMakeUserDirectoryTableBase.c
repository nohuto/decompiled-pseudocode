/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x140329338
 * Callers:
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x140384D68 (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406F128C (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
