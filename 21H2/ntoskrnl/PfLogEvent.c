/*
 * XREFs of PfLogEvent @ 0x140273ADC
 * Callers:
 *     PfHardFaultLog @ 0x140238C50 (PfHardFaultLog.c)
 *     PfpLogApplicationEvent @ 0x1402735A8 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x1402738E0 (PfpRpLogDeprioEvent.c)
 *     PfLogForegroundProcess @ 0x140273A60 (PfLogForegroundProcess.c)
 *     PfFileInfoNotify @ 0x140328350 (PfFileInfoNotify.c)
 *     PfLogFileDataAccess @ 0x140565088 (PfLogFileDataAccess.c)
 *     PfpLogEventRequest @ 0x14077684C (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x140776924 (PfpLogScenarioEvent.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14099172C (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x1409919B4 (PfPowerActionNotify.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x140273BCC (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x140273CA8 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_140C4FD60);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4FF10 + 1, 1u);
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
