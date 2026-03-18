/*
 * XREFs of VfUtilDbgPrint @ 0x14059AB34
 * Callers:
 *     VfClearVerifierSettings @ 0x14059A720 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x14059C234 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x14059C358 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14059C3DC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14059C470 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14059C514 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C3030 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x1409C38E0 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x1409C4480 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C4520 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C47F0 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1409C4E30 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x1409C5C30 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1409C5CFC (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x1409C5E0C (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x1409CA180 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x1409CB1F0 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x1409CBC40 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409CC70C (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDetachDevice @ 0x1409D31B4 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D4FB0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D5048 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D50D0 (VfErrorReport9.c)
 *     ViErrorDisplayDescription @ 0x1409D5198 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D51EC (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409D73B0 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x1409DC7A8 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x1409DDEF0 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x1409DF6D0 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x1409E0190 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x1409E0470 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1409E12D4 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x1409E4650 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E4800 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E4950 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14033C750 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
