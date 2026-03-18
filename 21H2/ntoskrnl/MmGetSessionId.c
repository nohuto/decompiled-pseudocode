/*
 * XREFs of MmGetSessionId @ 0x140300B40
 * Callers:
 *     PspBindProcessSessionToJob @ 0x1406827E8 (PspBindProcessSessionToJob.c)
 *     ExCallSessionCallBack @ 0x1406A8F48 (ExCallSessionCallBack.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     PsInvokeWin32Callout @ 0x1406F83A0 (PsInvokeWin32Callout.c)
 *     EtwpPsProvTraceProcess @ 0x14070AFEC (EtwpPsProvTraceProcess.c)
 *     PspInitializeProcessSecurity @ 0x14070F0D8 (PspInitializeProcessSecurity.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     MmCreatePeb @ 0x140755B70 (MmCreatePeb.c)
 *     PsGetThreadSessionId @ 0x1407B6780 (PsGetThreadSessionId.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PopInvokeWin32Callout @ 0x1407F2AD0 (PopInvokeWin32Callout.c)
 *     SeExchangePrimaryToken @ 0x140847260 (SeExchangePrimaryToken.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x14098C390 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098FDE4 (PopSendSuspendResumeApplicationNotification.c)
 *     EtwpPoolRunDown @ 0x1409EAB74 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1409F5D80 (ExGetSessionBigPoolInformation.c)
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
