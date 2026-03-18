/*
 * XREFs of MmGetSessionId @ 0x1402041B0
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x1405D879C (EtwpPsProvTraceProcess.c)
 *     PsGetThreadSessionId @ 0x1405DA910 (PsGetThreadSessionId.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     PspBindProcessSessionToJob @ 0x1406724CC (PspBindProcessSessionToJob.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspInitializeProcessSecurity @ 0x1406F6E68 (PspInitializeProcessSecurity.c)
 *     MmCreatePeb @ 0x1406F9F18 (MmCreatePeb.c)
 *     PopInvokeWin32Callout @ 0x140710A4C (PopInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x140710C88 (ExCallSessionCallBack.c)
 *     SeExchangePrimaryToken @ 0x1407A36C8 (SeExchangePrimaryToken.c)
 *     MmGetSessionMappedViewInformation @ 0x1408BFF80 (MmGetSessionMappedViewInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408DF10C (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopInputDisabled @ 0x1408F0A2C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x140939A60 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140945730 (ExGetSessionBigPoolInformation.c)
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
