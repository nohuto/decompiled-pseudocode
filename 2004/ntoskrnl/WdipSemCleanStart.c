/*
 * XREFs of WdipSemCleanStart @ 0x14079A5D8
 * Callers:
 *     WdipSemInitialize @ 0x14079A584 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14092C554 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x1407773AC (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x14079A644 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x14079A664 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x14079A76C (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x14079A7C4 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x14079A8B4 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14079AEF4 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x14092C810 (WdipSemShutdown.c)
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
