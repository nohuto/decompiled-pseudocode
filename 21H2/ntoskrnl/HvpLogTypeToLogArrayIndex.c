/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x14072465C
 * Callers:
 *     CmpFlushHive @ 0x14062A0D8 (CmpFlushHive.c)
 *     HvResetLogFileStatusAll @ 0x1406C19C8 (HvResetLogFileStatusAll.c)
 *     HvWriteLogFile @ 0x14071DA5C (HvWriteLogFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1407243E8 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x140724468 (CmpInitializeActualFileSizes.c)
 *     CmpDoFileSetSizeEx @ 0x140724A00 (CmpDoFileSetSizeEx.c)
 *     HvIsCurrentLogSwappable @ 0x1407254F4 (HvIsCurrentLogSwappable.c)
 *     HvSwapLogFiles @ 0x140725538 (HvSwapLogFiles.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x140725808 (HvTruncateAllLogFilesIfRequired.c)
 *     HvpPerformLogFileRecovery @ 0x1408740BC (HvpPerformLogFileRecovery.c)
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
