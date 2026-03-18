/*
 * XREFs of RtlStringCbPrintfA @ 0x1403A7A54
 * Callers:
 *     RtlpVerCompare @ 0x14037D7F0 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x140516914 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x1405A04E8 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405A056C (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405A0600 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405A06A4 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x1409B6100 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409CA550 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409CA820 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D9234 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409DB030 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409DB0C8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409DB150 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409EA6D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409EA880 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409EA9D0 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x1403A7AA8 (RtlStringVPrintfWorkerA.c)
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerA(pszDest, cbDest, 0LL, pszFormat, va);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
