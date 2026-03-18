/*
 * XREFs of VfUtilDbgPrint @ 0x14059B224
 * Callers:
 *     VfClearVerifierSettings @ 0x14059AE10 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x14059CA48 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14059CACC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14059CB60 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14059CC04 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C3040 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x1409C38F0 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x1409C4490 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C4530 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C4800 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1409C4E40 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x1409C5C40 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1409C5D0C (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x1409C5E1C (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x1409CA190 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x1409CB200 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x1409CBC50 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409CC71C (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDetachDevice @ 0x1409D3214 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D5010 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D50A8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D5130 (VfErrorReport9.c)
 *     ViErrorDisplayDescription @ 0x1409D51F8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D524C (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409D7410 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x1409DC808 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x1409DDF50 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x1409DF730 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x1409E01F0 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x1409E04D0 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1409E1334 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x1409E46B0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E4860 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E49B0 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403613C0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
