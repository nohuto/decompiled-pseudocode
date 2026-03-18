/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1405DC8F8
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x1405DA63C (CmpDoFileSetSizeEx.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1405DC684 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x1405DC704 (CmpInitializeActualFileSizes.c)
 *     HvWriteLogFile @ 0x1405DCBD0 (HvWriteLogFile.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     HvSwapLogFiles @ 0x1406D9C2C (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1406DE6D4 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406E1144 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406E1578 (HvResetLogFileStatusAll.c)
 *     HvpPerformLogFileRecovery @ 0x1408767D8 (HvpPerformLogFileRecovery.c)
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
