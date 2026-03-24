/*
 * XREFs of PfLogEvent @ 0x1402D4DFC
 * Callers:
 *     PfHardFaultLog @ 0x1402BAA40 (PfHardFaultLog.c)
 *     PfpLogApplicationEvent @ 0x1402D48C8 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x1402D4C00 (PfpRpLogDeprioEvent.c)
 *     PfLogForegroundProcess @ 0x1402D4D80 (PfLogForegroundProcess.c)
 *     PfFileInfoNotify @ 0x14031D600 (PfFileInfoNotify.c)
 *     PfLogFileDataAccess @ 0x140564E48 (PfLogFileDataAccess.c)
 *     PfpLogEventRequest @ 0x14077668C (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x140776764 (PfpLogScenarioEvent.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14099072C (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x1409909B4 (PfPowerActionNotify.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x1402D4EEC (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1402D4FC8 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140413F40 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_140C4FD20);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4FED0 + 1, 1u);
  }
  else
  {
    MEMORY[0] = MEMORY[0] & 0xFFFFFFFFFFFFF003uLL | ((v8 & 0x3FF0 | 0x8000CuLL) >> 2);
    MEMORY[8] = a2;
    MEMORY[0] ^= (MEMORY[0] ^ (a1 << 12)) & 0x1F000;
    memmove((void *)0x10, a3, a4);
    PfFbLogEntryComplete(0LL);
    return 0;
  }
  return (unsigned int)v9;
}
