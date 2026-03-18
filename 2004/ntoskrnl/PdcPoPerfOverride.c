/*
 * XREFs of PdcPoPerfOverride @ 0x1408EC4F8
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408EB170 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EB590 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1403A3F74 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A4D10 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140571B78 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
