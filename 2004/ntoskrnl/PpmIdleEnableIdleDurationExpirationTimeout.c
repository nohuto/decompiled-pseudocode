/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x140561548
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1407A7F88 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}
