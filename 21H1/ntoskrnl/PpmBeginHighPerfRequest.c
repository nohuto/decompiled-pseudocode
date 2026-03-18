/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1403A4590
 * Callers:
 *     PoUserShutdownInitiated @ 0x1407617A0 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x140763838 (PoInitializeBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407BEB20 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1408EB278 (PdcPoPerfOverride.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x14033D470 (PoSetPowerRequestInternal.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PoSetPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  else
    return 3221225473LL;
}
