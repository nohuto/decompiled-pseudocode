/*
 * XREFs of PfLogEvent @ 0x14036044C
 * Callers:
 *     PfHardFaultLog @ 0x14027B250 (PfHardFaultLog.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     PfpLogApplicationEvent @ 0x14035FF68 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x140360350 (PfpRpLogDeprioEvent.c)
 *     PfLogForegroundProcess @ 0x1403603D0 (PfLogForegroundProcess.c)
 *     PfLogFileDataAccess @ 0x1405C629C (PfLogFileDataAccess.c)
 *     PfpLogEventRequest @ 0x140986E88 (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x140986F94 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140A6AA08 (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x14036053C (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x140360618 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_140C4EAC0);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4EC70 + 1, 1u);
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
