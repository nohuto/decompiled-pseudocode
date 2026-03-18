/*
 * XREFs of PfLogEvent @ 0x14024487C
 * Callers:
 *     PfpLogApplicationEvent @ 0x140244348 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x140244680 (PfpRpLogDeprioEvent.c)
 *     PfLogForegroundProcess @ 0x140244800 (PfLogForegroundProcess.c)
 *     PfFileInfoNotify @ 0x1402A0D50 (PfFileInfoNotify.c)
 *     PfHardFaultLog @ 0x1402D10AC (PfHardFaultLog.c)
 *     PfLogFileDataAccess @ 0x140563378 (PfLogFileDataAccess.c)
 *     PfpLogEventRequest @ 0x1407726DC (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x1407727B4 (PfpLogScenarioEvent.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14099372C (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x1409939B4 (PfPowerActionNotify.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x14024496C (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x140244A48 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140411040 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_140C4FBA0);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4FD50 + 1, 1u);
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
