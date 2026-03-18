/*
 * XREFs of KeSetTimer @ 0x140236250
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, 0, 0, (__int64)Dpc);
}
