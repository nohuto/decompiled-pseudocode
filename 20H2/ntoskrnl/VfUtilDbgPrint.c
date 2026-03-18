/*
 * XREFs of VfUtilDbgPrint @ 0x14059ECC4
 * Callers:
 *     VfClearVerifierSettings @ 0x14059E8B0 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1405A03C4 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x1405A04E8 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A056C (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A0600 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A06A4 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C9060 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x1409C9910 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x1409CA4B0 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409CA550 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409CA820 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x1409CAE60 (ViCiPreprocessOptions.c)
 *     ViXdvBindXdvDDIWrappers @ 0x1409CBC60 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1409CBD2C (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvDriverLoadImage @ 0x1409CBE3C (ViXdvDriverLoadImage.c)
 *     ViAdapterCallback @ 0x1409D01B0 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x1409D1220 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x1409D1C70 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1409D273C (ViSpecialAllocateCommonBuffer.c)
 *     VfIoDetachDevice @ 0x1409D9234 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409DB030 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409DB0C8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409DB150 (VfErrorReport9.c)
 *     ViErrorDisplayDescription @ 0x1409DB218 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409DB26C (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409DD430 (ViShutdownWatchdogExecuteDpc.c)
 *     ViDeadlockPreprocessOptions @ 0x1409E2828 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x1409E3F70 (ViWdIrpTimedOut.c)
 *     VfPnpDumpIrpStack @ 0x1409E5750 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x1409E6210 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x1409E64F0 (VfWmiDumpIrpStack.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1409E7354 (ViCtxCheckAndReleaseIsrState.c)
 *     VerifierNtCreateFile @ 0x1409EA6D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409EA880 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409EA9D0 (VerifierNtWriteFile.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140364830 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
