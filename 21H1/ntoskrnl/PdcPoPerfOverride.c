/*
 * XREFs of PdcPoPerfOverride @ 0x1408EB278
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408E9EF0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EA310 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1403A3814 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A4590 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140571528 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}
