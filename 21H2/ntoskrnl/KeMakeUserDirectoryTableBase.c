/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x14036C7EC
 * Callers:
 *     MiDeleteProcessShadow @ 0x14027D408 (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x14036CD34 (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1407F1A10 (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
