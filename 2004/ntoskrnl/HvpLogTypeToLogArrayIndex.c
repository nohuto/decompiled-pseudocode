/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1406397A0
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x140637A3C (CmpDoFileSetSizeEx.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x14063952C (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x1406395AC (CmpInitializeActualFileSizes.c)
 *     HvWriteLogFile @ 0x140639A78 (HvWriteLogFile.c)
 *     HvSwapLogFiles @ 0x140707388 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x14070C5A4 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14070EC68 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x14070F060 (HvResetLogFileStatusAll.c)
 *     HvpPerformLogFileRecovery @ 0x140870C80 (HvpPerformLogFileRecovery.c)
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
