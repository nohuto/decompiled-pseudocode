/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1404FFDE8
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x14088D784 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14089DADC (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1408C3450 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1408D2990 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14037D5BC (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
