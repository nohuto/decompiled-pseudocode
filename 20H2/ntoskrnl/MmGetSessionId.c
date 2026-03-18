/*
 * XREFs of MmGetSessionId @ 0x140233F30
 * Callers:
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     PsInvokeWin32Callout @ 0x140628330 (PsInvokeWin32Callout.c)
 *     PsGetThreadSessionId @ 0x140629740 (PsGetThreadSessionId.c)
 *     ExCallSessionCallBack @ 0x14062BF24 (ExCallSessionCallBack.c)
 *     PspBindProcessSessionToJob @ 0x14062DB78 (PspBindProcessSessionToJob.c)
 *     EtwpPsProvTraceProcess @ 0x14063252C (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     PspInitializeProcessSecurity @ 0x14068EDF8 (PspInitializeProcessSecurity.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x1406AD438 (MmCreatePeb.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     PopInvokeWin32Callout @ 0x14071FDDC (PopInvokeWin32Callout.c)
 *     SeExchangePrimaryToken @ 0x1407B6FE4 (SeExchangePrimaryToken.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C7110 (MmGetSessionMappedViewInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408E61AC (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopInputDisabled @ 0x1408F792C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x140940B30 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14094C790 (ExGetSessionBigPoolInformation.c)
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
