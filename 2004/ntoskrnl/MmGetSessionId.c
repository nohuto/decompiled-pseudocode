/*
 * XREFs of MmGetSessionId @ 0x14027D4C0
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     PsInvokeWin32Callout @ 0x140602AD0 (PsInvokeWin32Callout.c)
 *     PspInitializeProcessSecurity @ 0x140613A04 (PspInitializeProcessSecurity.c)
 *     PspBindProcessSessionToJob @ 0x1406595D8 (PspBindProcessSessionToJob.c)
 *     MmCreatePeb @ 0x14065D900 (MmCreatePeb.c)
 *     EtwpPsProvTraceProcess @ 0x14065EA9C (EtwpPsProvTraceProcess.c)
 *     PsGetThreadSessionId @ 0x140660C10 (PsGetThreadSessionId.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PopInvokeWin32Callout @ 0x1406A4E40 (PopInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x1406A507C (ExCallSessionCallBack.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     SeExchangePrimaryToken @ 0x1407A5F18 (SeExchangePrimaryToken.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C12D0 (MmGetSessionMappedViewInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408E036C (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopInputDisabled @ 0x1408F1D1C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x14093AD00 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1409469D0 (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionId(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}
