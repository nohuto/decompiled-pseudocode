/*
 * XREFs of PopPausePowerRequestStats @ 0x14064DF40
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x14064D028 (PopStatsDeletePowerRequest.c)
 * Callees:
 *     PoPauseStopWatch @ 0x1402771E8 (PoPauseStopWatch.c)
 *     PoIsRunningStopWatch @ 0x140278230 (PoIsRunningStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x14064DFF8 (PopGetStopWatchByRequestType.c)
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
