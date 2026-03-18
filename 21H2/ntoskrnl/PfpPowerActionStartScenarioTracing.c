/*
 * XREFs of PfpPowerActionStartScenarioTracing @ 0x140A6AA08
 * Callers:
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 * Callees:
 *     PfLogEvent @ 0x14036044C (PfLogEvent.c)
 *     PfTAccessTracingCleanup @ 0x140A483FC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140A484F0 (PfTAccessTracingStart.c)
 *     MmPerformMemoryListCommand @ 0x140A5B810 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall PfpPowerActionStartScenarioTracing(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  PfTAccessTracingCleanup((__int64)&PfTGlobals, a2, 4);
  MmPerformMemoryListCommand();
  PfTAccessTracingStart((__int64)&PfTGlobals, (__int64)&PfKernelGlobals, 4);
  v3 = *(int *)(a1 + 48);
  v6 = 0LL;
  v5 = v3;
  LODWORD(v6) = 4 * (unsigned __int16)*(_DWORD *)(a1 + 52);
  return PfLogEvent(
           27,
           dword_140C5451C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v5,
           0x10u);
}
