/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x140689DAC
 * Callers:
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140689B38 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x140689C24 (CmpInitializeActualFileSizes.c)
 *     HvWriteLogFile @ 0x14068A060 (HvWriteLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x14068EC28 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x1406DFF64 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1406E72CC (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406E9C5C (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406E9D84 (HvResetLogFileStatusAll.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x14091A344 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvpPerformLogFileRecovery @ 0x14091ADA0 (HvpPerformLogFileRecovery.c)
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
