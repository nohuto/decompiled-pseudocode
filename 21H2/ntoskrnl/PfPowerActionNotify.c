/*
 * XREFs of PfPowerActionNotify @ 0x1409919B4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14066DD84 (PopUmpoProcessPowerMessage.c)
 *     PopUmpoSendLegacyEvent @ 0x140775048 (PopUmpoSendLegacyEvent.c)
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 *     PopDispatchSuperfetchNotification @ 0x1407767A4 (PopDispatchSuperfetchNotification.c)
 *     PfpProcessScenarioPhase @ 0x14078D158 (PfpProcessScenarioPhase.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PfLogEvent @ 0x140273ADC (PfLogEvent.c)
 *     PfpServiceMainThreadUnboost @ 0x140382C80 (PfpServiceMainThreadUnboost.c)
 *     PfTSetTraceWorkerPriority @ 0x140382F54 (PfTSetTraceWorkerPriority.c)
 *     PfpLogScenarioEvent @ 0x140776924 (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x140776A34 (PfGenerateTrace.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14099172C (PfpPowerActionStartScenarioTracing.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1409917F0 (PfpStartLoggingHardFaultEvents.c)
 *     PfpScenCtxPrefetchWait @ 0x1409918C4 (PfpScenCtxPrefetchWait.c)
 *     MmPerformMemoryListCommand @ 0x14099BB4C (MmPerformMemoryListCommand.c)
 *     PfpScenCtxScenarioSet @ 0x14099BB98 (PfpScenCtxScenarioSet.c)
 *     PfSnBeginBootPhase @ 0x14099C284 (PfSnBeginBootPhase.c)
 */

__int64 __fastcall PfPowerActionNotify(int a1, __int64 a2, int a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax
  signed int v7; // ebx
  int v8; // ebx
  unsigned int v9; // r8d
  int v10; // [rsp+58h] [rbp+20h] BYREF
  int v11; // [rsp+5Ch] [rbp+24h]

  v11 = 0;
  v10 = 2 * a1;
  if ( (a2 & 1) != 0 )
    v10 = (2 * a1) | 1;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 5 && (unsigned int)(a3 - 2) <= 2 )
          PfpLogScenarioEvent(1, 2, 1, dword_140C50354, 0);
LABEL_7:
        v11 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return PfLogEvent(
                 28,
                 dword_140C5031C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                               + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
                 &v10,
                 8u);
      }
      PfpPowerActionStartScenarioTracing((__int64)&qword_140C50320, a2);
      if ( dword_140C50350 == 5 )
        PfSnBeginBootPhase(4LL);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C50320);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C50320);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C50320);
      result = PfpStartLoggingHardFaultEvents();
      if ( (int)result >= 0 )
        goto LABEL_7;
    }
    else
    {
      result = (unsigned int)(a3 - 2);
      if ( (unsigned int)result <= 3 )
      {
        MmPerformMemoryListCommand(1LL);
        v7 = PfTSetTraceWorkerPriority(0x10u);
        PfGenerateTrace((__int64)&Thread, 1);
        if ( v7 <= 31 )
          PfTSetTraceWorkerPriority(v7);
        v8 = 5;
        if ( a3 == 5 )
        {
          v9 = HIDWORD(qword_140C50154);
          if ( dword_140C50350 == 5 )
            v9 = dword_140C5015C;
          else
            v8 = 2;
        }
        else
        {
          v9 = qword_140C50154;
          v8 = 1;
        }
        v11 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140C50320, v8, v9);
        PfpServiceMainThreadUnboost(0LL);
        return PfLogEvent(
                 28,
                 dword_140C5031C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                               + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
                 &v10,
                 8u);
      }
    }
  }
  else
  {
    result = (unsigned int)(a3 - 2);
    if ( (unsigned int)result <= 2 || a3 == 5 )
      return PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C50320);
  }
  return result;
}
