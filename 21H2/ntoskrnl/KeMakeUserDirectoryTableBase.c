/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x1402959F4
 * Callers:
 *     MiDeleteProcessShadow @ 0x1403104B8 (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x140388728 (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406A7A1C (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
