/*
 * XREFs of MmGetSessionId @ 0x1402863C0
 * Callers:
 *     ExCallSessionCallBack @ 0x1405E44F8 (ExCallSessionCallBack.c)
 *     PopInvokeWin32Callout @ 0x14066EF08 (PopInvokeWin32Callout.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     MmCreatePeb @ 0x1406A1848 (MmCreatePeb.c)
 *     PsGetThreadSessionId @ 0x1406A2530 (PsGetThreadSessionId.c)
 *     PspInitializeProcessSecurity @ 0x1406AD6E0 (PspInitializeProcessSecurity.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwpPsProvTraceProcess @ 0x1406F2410 (EtwpPsProvTraceProcess.c)
 *     PspBindProcessSessionToJob @ 0x1406F5DFC (PspBindProcessSessionToJob.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     SeExchangePrimaryToken @ 0x1407BC3D4 (SeExchangePrimaryToken.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C4A30 (MmGetSessionMappedViewInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408E3B0C (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopInputDisabled @ 0x1408F526C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x14093E4D0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14094A130 (ExGetSessionBigPoolInformation.c)
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
