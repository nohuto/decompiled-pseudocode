/*
 * XREFs of PfLogEvent @ 0x1402D5B58
 * Callers:
 *     PfFileInfoNotify @ 0x1402B5440 (PfFileInfoNotify.c)
 *     PfHardFaultLog @ 0x1402B87E8 (PfHardFaultLog.c)
 *     PfpLogApplicationEvent @ 0x1402D5624 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x1402D595C (PfpRpLogDeprioEvent.c)
 *     PfLogForegroundProcess @ 0x1402D5ADC (PfLogForegroundProcess.c)
 *     PfLogFileDataAccess @ 0x14055F358 (PfLogFileDataAccess.c)
 *     PfpLogEventRequest @ 0x1407627EC (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x1407628C4 (PfpLogScenarioEvent.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14098CF24 (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x14098D1AC (PfPowerActionNotify.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x1402D5C48 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1402D5D24 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_140C4FC60);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4FE10 + 1, 1u);
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
