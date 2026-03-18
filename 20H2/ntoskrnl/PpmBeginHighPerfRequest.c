/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1403A7110
 * Callers:
 *     PoUserShutdownInitiated @ 0x140771690 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x140774288 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D0610 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1408F2108 (PdcPoPerfOverride.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x140362540 (PoSetPowerRequestInternal.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PoSetPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
