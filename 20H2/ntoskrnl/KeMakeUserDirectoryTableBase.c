/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x140335584
 * Callers:
 *     MiDeleteProcessShadow @ 0x140236418 (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x140387E78 (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406EDB40 (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
