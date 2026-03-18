/*
 * XREFs of IoThreadToProcess @ 0x140208A40
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405ED830 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1405F1760 (NtQueryInformationThread.c)
 *     AlpcpCreateSecurityContext @ 0x1405F2BD4 (AlpcpCreateSecurityContext.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406C5080 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     DbgkQueueUserExceptionReport @ 0x140889270 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1408897B0 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x14088A77C (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C4D70 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C6AE4 (MiForceCrashForInvalidAccess.c)
 *     NtSetContextThread @ 0x14090DBC0 (NtSetContextThread.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
