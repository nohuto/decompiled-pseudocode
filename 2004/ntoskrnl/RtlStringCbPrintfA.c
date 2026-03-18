/*
 * XREFs of RtlStringCbPrintfA @ 0x1403A5654
 * Callers:
 *     RtlpVerCompare @ 0x14037BAC0 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x140512FE4 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x14059CA48 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14059CACC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14059CB60 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14059CC04 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x1409B0190 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C4530 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C4800 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D3214 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D5010 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D50A8 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D5130 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409E46B0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E4860 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E49B0 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A92778 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x1403A56A8 (RtlStringVPrintfWorkerA.c)
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
