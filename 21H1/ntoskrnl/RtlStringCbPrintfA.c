/*
 * XREFs of RtlStringCbPrintfA @ 0x1403A9324
 * Callers:
 *     RtlpVerCompare @ 0x14037AD40 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x140512994 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x14059C358 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14059C3DC (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14059C470 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14059C514 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x1409AF330 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409C4520 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409C47F0 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x1409D31B4 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409D4FB0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1409D5048 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x1409D50D0 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x1409E4650 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409E4800 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1409E4950 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A93068 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x1403A9378 (RtlStringVPrintfWorkerA.c)
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
