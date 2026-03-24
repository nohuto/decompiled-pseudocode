/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140505888
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x140891B2C (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x1408A1EFC (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1408C7DA0 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1408D72E0 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1403805EC (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
