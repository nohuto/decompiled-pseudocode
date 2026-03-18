/*
 * XREFs of PopPausePowerRequestStats @ 0x14071CDE0
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x14071DE44 (PopStatsDeletePowerRequest.c)
 * Callees:
 *     PoIsRunningStopWatch @ 0x140361530 (PoIsRunningStopWatch.c)
 *     PoPauseStopWatch @ 0x14036196C (PoPauseStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x14071CE98 (PopGetStopWatchByRequestType.c)
 */

char __fastcall PopPausePowerRequestStats(__int64 a1)
{
  unsigned int i; // ebx
  __int64 StopWatchByRequestType; // rax
  __int64 v4; // rcx

  for ( i = 0; i < 4; ++i )
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType(a1, i, 0LL);
    if ( StopWatchByRequestType )
    {
      LOBYTE(StopWatchByRequestType) = PoIsRunningStopWatch(StopWatchByRequestType);
      if ( (_BYTE)StopWatchByRequestType )
        LOBYTE(StopWatchByRequestType) = PoPauseStopWatch(v4);
    }
  }
  return StopWatchByRequestType;
}
