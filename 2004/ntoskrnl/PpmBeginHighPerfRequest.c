/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1403A4D10
 * Callers:
 *     PoUserShutdownInitiated @ 0x140763080 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x140765258 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407C1E10 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1408EC4F8 (PdcPoPerfOverride.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x140276180 (PoSetPowerRequestInternal.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PoSetPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
