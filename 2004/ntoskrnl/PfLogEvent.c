/*
 * XREFs of PfLogEvent @ 0x14026C1B8
 * Callers:
 *     PfFileInfoNotify @ 0x14025C410 (PfFileInfoNotify.c)
 *     PfHardFaultLog @ 0x14025F7B8 (PfHardFaultLog.c)
 *     PfpLogApplicationEvent @ 0x14026BC84 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x14026BFBC (PfpRpLogDeprioEvent.c)
 *     PfLogForegroundProcess @ 0x14026C13C (PfLogForegroundProcess.c)
 *     PfLogFileDataAccess @ 0x14055F9A8 (PfLogFileDataAccess.c)
 *     PfpLogEventRequest @ 0x1407640CC (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x1407641A4 (PfpLogScenarioEvent.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14098D73C (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x14098D9C4 (PfPowerActionNotify.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x14026C2A8 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14026C384 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_140C4FB20);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4FCD0 + 1, 1u);
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
