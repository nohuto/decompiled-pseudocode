/*
 * XREFs of WdipSemCleanStart @ 0x140784C00
 * Callers:
 *     WdipSemInitialize @ 0x140784BAC (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14092B2A4 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x140774F9C (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x140784C6C (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x140784C8C (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x140784D94 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140784DEC (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x140784EDC (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14078551C (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x14092B560 (WdipSemShutdown.c)
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
