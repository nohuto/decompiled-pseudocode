/*
 * XREFs of IoThreadToProcess @ 0x140224230
 * Callers:
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140600D8C (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspSetContextThreadInternal @ 0x14063CA8C (PspSetContextThreadInternal.c)
 *     AlpcpCreateSecurityContext @ 0x14065540C (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureAttributes @ 0x1406D59F0 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1406EB0A0 (NtQueryInformationThread.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     DbgkQueueUserExceptionReport @ 0x140886970 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140886EB0 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x140887E7C (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2690 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C4404 (MiForceCrashForInvalidAccess.c)
 *     NtSetContextThread @ 0x14090B4D0 (NtSetContextThread.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
