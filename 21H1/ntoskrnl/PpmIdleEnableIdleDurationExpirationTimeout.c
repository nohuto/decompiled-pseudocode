/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x140560EF8
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1407A5838 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}
