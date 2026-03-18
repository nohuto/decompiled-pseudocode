/*
 * XREFs of WdipSemCleanStart @ 0x1407A9908
 * Callers:
 *     WdipSemInitialize @ 0x1407A98B4 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x140932384 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x1407859AC (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x1407A9974 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x1407A9994 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x1407A9A9C (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1407A9AF4 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x1407A9BE4 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1407AA224 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x140932640 (WdipSemShutdown.c)
 */

__int64 WdipSemCleanStart()
{
  int LoggerIds; // ebx

  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds >= 0 )
  {
    LoggerIds = WdipSemEnableSemProvider();
    if ( LoggerIds >= 0 )
    {
      LoggerIds = WdipSemLoadConfigInfo();
      if ( LoggerIds >= 0 )
      {
        LoggerIds = WdipSemLoadGroupPolicy();
        if ( LoggerIds >= 0 )
        {
          LoggerIds = WdipSemLoadScenarioTable();
          if ( LoggerIds >= 0 )
            LoggerIds = WdipSemStartTimeoutCheck();
        }
      }
    }
  }
  WdipSemCleanupGroupPolicy();
  if ( LoggerIds < 0 )
    WdipSemShutdown();
  else
    WdipSemEnabled = 1;
  return (unsigned int)LoggerIds;
}
