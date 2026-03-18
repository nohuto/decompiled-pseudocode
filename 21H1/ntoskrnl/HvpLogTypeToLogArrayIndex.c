/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x14068731C
 * Callers:
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x14068560C (CmpDoFileSetSizeEx.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1406870A8 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x140687128 (CmpInitializeActualFileSizes.c)
 *     HvWriteLogFile @ 0x1406875F4 (HvWriteLogFile.c)
 *     HvSwapLogFiles @ 0x1406E3998 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1406E85D4 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406EB1B4 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406EB3F8 (HvResetLogFileStatusAll.c)
 *     HvpPerformLogFileRecovery @ 0x14086F190 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpLogTypeToLogArrayIndex(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 4 || a1 == 1 )
    return 0LL;
  return result;
}
