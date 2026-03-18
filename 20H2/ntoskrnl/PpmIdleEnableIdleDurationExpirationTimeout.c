/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x140564F28
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1407B5FAC (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}
