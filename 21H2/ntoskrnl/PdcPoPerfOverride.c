/*
 * XREFs of PdcPoPerfOverride @ 0x1408EF908
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408EE580 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EE9A0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1403A6C60 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A79D0 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140576FB8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
