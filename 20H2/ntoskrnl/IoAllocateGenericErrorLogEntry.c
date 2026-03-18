/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140503D08
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x140894564 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x1408A492C (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1408CA5E0 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1408D9B20 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14037FDAC (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
