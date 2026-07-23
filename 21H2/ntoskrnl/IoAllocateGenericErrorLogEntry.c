/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140505808
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x140891C8C (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x1408A205C (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1408C7F00 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1408D7440 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14038013C (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
