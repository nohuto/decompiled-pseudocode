/*
 * XREFs of PdcPoPerfOverride @ 0x1408F2108
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408F0D80 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408F11A0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1403A63A0 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A7110 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1405755A8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
