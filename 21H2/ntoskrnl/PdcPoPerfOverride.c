/*
 * XREFs of PdcPoPerfOverride @ 0x14080877C
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x1408091FC (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140995D10 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14025DC0C (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403690D0 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140398DF0 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
