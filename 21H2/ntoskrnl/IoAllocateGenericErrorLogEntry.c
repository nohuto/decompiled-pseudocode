/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1405573A8
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x140934AB4 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140947068 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x14096C4AC (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x14097E5C0 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1403A711C (IopAllocateErrorLogEntry.c)
 */

__int64 __fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
