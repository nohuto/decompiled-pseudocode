/*
 * XREFs of IoThreadToProcess @ 0x1402321F0
 * Callers:
 *     PsSyscallProviderDispatch @ 0x1406593C0 (PsSyscallProviderDispatch.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406BCB64 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspSetContextThreadInternal @ 0x1407043D0 (PspSetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x140705578 (PspWow64SetContextThread.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     AlpcpCreateSecurityContext @ 0x1407A74A4 (AlpcpCreateSecurityContext.c)
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x1407A87D0 (PspThreadFromTicket.c)
 *     AlpcpCaptureAttributes @ 0x1407AB790 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     DbgkQueueUserExceptionReport @ 0x14092972C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140929C60 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x14092AC5C (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1409663D0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiForceCrashForInvalidAccess @ 0x140967E00 (MiForceCrashForInvalidAccess.c)
 *     NtSetContextThread @ 0x1409B1A00 (NtSetContextThread.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
