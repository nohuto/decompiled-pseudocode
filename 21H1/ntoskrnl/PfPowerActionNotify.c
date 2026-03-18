/*
 * XREFs of PfPowerActionNotify @ 0x14098D1AC
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14070ED84 (PopUmpoProcessPowerMessage.c)
 *     PopUmpoSendLegacyEvent @ 0x140760FF8 (PopUmpoSendLegacyEvent.c)
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PopDispatchSuperfetchNotification @ 0x140762744 (PopDispatchSuperfetchNotification.c)
 *     PfpProcessScenarioPhase @ 0x1407787A8 (PfpProcessScenarioPhase.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PfLogEvent @ 0x1402D5B58 (PfLogEvent.c)
 *     PfpServiceMainThreadUnboost @ 0x14037FE80 (PfpServiceMainThreadUnboost.c)
 *     PfTSetTraceWorkerPriority @ 0x1403801BC (PfTSetTraceWorkerPriority.c)
 *     PfpLogScenarioEvent @ 0x1407628C4 (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x1407629D4 (PfGenerateTrace.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14098CF24 (PfpPowerActionStartScenarioTracing.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14098CFE8 (PfpStartLoggingHardFaultEvents.c)
 *     PfpScenCtxPrefetchWait @ 0x14098D0BC (PfpScenCtxPrefetchWait.c)
 *     MmPerformMemoryListCommand @ 0x1409961BC (MmPerformMemoryListCommand.c)
 *     PfpScenCtxScenarioSet @ 0x140996208 (PfpScenCtxScenarioSet.c)
 *     PfSnBeginBootPhase @ 0x1409968F4 (PfSnBeginBootPhase.c)
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
          PfpLogScenarioEvent(1, 2, 1, dword_140C50254, 0);
LABEL_7:
        v11 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return PfLogEvent(
                 28,
                 dword_140C5021C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                               + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
                 &v10,
                 8u);
      }
      PfpPowerActionStartScenarioTracing((__int64)&qword_140C50220, a2);
      if ( dword_140C50250 == 5 )
        PfSnBeginBootPhase(4LL);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C50220);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C50220);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C50220);
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
          v9 = HIDWORD(qword_140C50054);
          if ( dword_140C50250 == 5 )
            v9 = dword_140C5005C;
          else
            v8 = 2;
        }
        else
        {
          v9 = qword_140C50054;
          v8 = 1;
        }
        v11 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140C50220, v8, v9);
        PfpServiceMainThreadUnboost(0LL);
        return PfLogEvent(
                 28,
                 dword_140C5021C
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
      return PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C50220);
  }
  return result;
}
