/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140500438
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x14088EAA4 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14089EDFC (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1408C47A0 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1408D3CE0 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14037E07C (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
