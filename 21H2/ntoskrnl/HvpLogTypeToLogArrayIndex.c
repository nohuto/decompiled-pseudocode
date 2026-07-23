/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1406FC688
 * Callers:
 *     HvSwapLogFiles @ 0x140617C10 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x14061D984 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406202D4 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406206D0 (HvResetLogFileStatusAll.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     HvWriteLogFile @ 0x1406F9FEC (HvWriteLogFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1406FC414 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x1406FC494 (CmpInitializeActualFileSizes.c)
 *     CmpDoFileSetSizeEx @ 0x1406FC9FC (CmpDoFileSetSizeEx.c)
 *     HvpPerformLogFileRecovery @ 0x14087421C (HvpPerformLogFileRecovery.c)
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
