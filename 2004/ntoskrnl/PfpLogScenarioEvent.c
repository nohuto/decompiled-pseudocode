/*
 * XREFs of PfpLogScenarioEvent @ 0x1407641A4
 * Callers:
 *     PfpProcessScenarioPhase @ 0x14077ABB8 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x14098D9C4 (PfPowerActionNotify.c)
 * Callees:
 *     PfLogEvent @ 0x14026C1B8 (PfLogEvent.c)
 *     PfTSetTraceWorkerPriority @ 0x1403809FC (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x1407642B4 (PfGenerateTrace.c)
 *     MmPerformMemoryListCommand @ 0x14099758C (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall PfpLogScenarioEvent(int a1, char a2, char a3, unsigned __int16 a4, char a5)
{
  __int64 v6; // rbx
  signed int v9; // r14d
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a1;
  MmPerformMemoryListCommand(1LL);
  v9 = PfTSetTraceWorkerPriority(0x10u);
  PfGenerateTrace(&Thread, 1LL);
  v11[0] = v6;
  v11[1] = a2 & 3 | (4 * (a4 | ((unsigned __int8)(a3 & 3) << 16)));
  result = PfLogEvent(
             27,
             dword_140C500DC
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                           + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
             v11,
             0x10u);
  if ( (a5 & 1) != 0 )
    result = PfGenerateTrace(&Thread, 0LL);
  if ( v9 <= 31 )
    return PfTSetTraceWorkerPriority(v9);
  return result;
}
