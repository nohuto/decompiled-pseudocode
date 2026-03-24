/*
 * XREFs of IoThreadToProcess @ 0x140205700
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E6290 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1405FB940 (NtQueryInformationThread.c)
 *     PspSetContextThreadInternal @ 0x140647C9C (PspSetContextThreadInternal.c)
 *     AlpcpCreateSecurityContext @ 0x1406605EC (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406A15FC (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     DbgkQueueUserExceptionReport @ 0x140886810 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140886D50 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x140887D1C (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2530 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C42A4 (MiForceCrashForInvalidAccess.c)
 *     NtSetContextThread @ 0x14090B370 (NtSetContextThread.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
