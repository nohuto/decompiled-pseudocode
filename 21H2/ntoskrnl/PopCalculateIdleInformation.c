/*
 * XREFs of PopCalculateIdleInformation @ 0x140570650
 * Callers:
 *     PopCalculateCsSummary @ 0x1405700E0 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 *     PopSleepstudyStartNextSession @ 0x140774E98 (PopSleepstudyStartNextSession.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1408EF0E0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408EF390 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408EF6B4 (PopDripsWatchdogStartWatchdog.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x1408FA54C (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     PpmConvertTime @ 0x14026A1CC (PpmConvertTime.c)
 *     PpmQueryPlatformStateResidency @ 0x14056760C (PpmQueryPlatformStateResidency.c)
 */

ULONGLONG __fastcall PopCalculateIdleInformation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // r15d
  int v5; // r12d
  unsigned __int64 PlatformStateResidency; // rbp
  int v7; // r13d
  unsigned int v8; // r14d
  ULONGLONG *v9; // rsi
  int v10; // edi
  ULONGLONG v11; // rax
  ULONGLONG result; // rax
  __int64 v14; // [rsp+68h] [rbp+10h]
  ULONGLONG v15; // [rsp+70h] [rbp+18h]

  v1 = 0LL;
  v2 = a1;
  if ( PpmPlatformStates )
  {
    v3 = *(_QWORD *)(PpmPlatformStates + 48);
    v4 = *(_DWORD *)(v3 + 4);
    v5 = *(_DWORD *)(v3 + 8);
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
  }
  v15 = 0LL;
  PlatformStateResidency = PpmQueryPlatformStateResidency(dword_140C500C0);
  if ( PlatformStateResidency != -1LL )
    PlatformStateResidency /= 0xAuLL;
  v7 = 0;
  v8 = 0;
  if ( v4 )
  {
    v9 = (ULONGLONG *)(v3 + 56);
    v10 = dword_140C500C0;
    do
    {
      v14 = PopQpcFrequency;
      v1 += PpmConvertTime(*v9, PopQpcFrequency, 0xF4240uLL);
      if ( v10 != -1 && v8 == v10 )
      {
        v11 = PpmConvertTime(*v9, v14, 0xF4240uLL);
        v7 = *((_DWORD *)v9 - 6);
        v15 = v11;
      }
      ++v8;
      v9 += 126;
    }
    while ( v8 < v4 );
    v2 = a1;
  }
  result = v15;
  *(_QWORD *)v2 = v1;
  *(_QWORD *)(v2 + 8) = v15;
  *(_QWORD *)(v2 + 16) = PlatformStateResidency;
  *(_DWORD *)(v2 + 24) = v7;
  *(_DWORD *)(v2 + 28) = v5;
  return result;
}
