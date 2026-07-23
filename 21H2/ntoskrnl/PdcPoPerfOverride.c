/*
 * XREFs of PdcPoPerfOverride @ 0x1408EFA68
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408EE6E0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EEB00 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1403A6DB0 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A7B20 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1405771F8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
