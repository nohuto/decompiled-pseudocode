/*
 * XREFs of IoThreadToProcess @ 0x14025A330
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     AlpcpCaptureAttributes @ 0x14060EA80 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x140610870 (NtQueryInformationThread.c)
 *     AlpcpCreateSecurityContext @ 0x140611CE0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406D0A30 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspSetContextThreadInternal @ 0x1406F2D50 (PspSetContextThreadInternal.c)
 *     DbgkQueueUserExceptionReport @ 0x140882400 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140882940 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x14088390C (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408BDC70 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiForceCrashForInvalidAccess @ 0x1408BF954 (MiForceCrashForInvalidAccess.c)
 *     NtSetContextThread @ 0x140906CF0 (NtSetContextThread.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
