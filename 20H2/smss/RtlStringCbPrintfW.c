/*
 * XREFs of RtlStringCbPrintfW @ 0x14000202C
 * Callers:
 *     SmpAllocateInitialCommandBuffer @ 0x140001F14 (SmpAllocateInitialCommandBuffer.c)
 *     SmpParseCommandLine @ 0x1400046B0 (SmpParseCommandLine.c)
 *     SmpInvokeAutoChk @ 0x1400057C4 (SmpInvokeAutoChk.c)
 *     SmpSaveOldPageFiles @ 0x140006E48 (SmpSaveOldPageFiles.c)
 *     SmpCleanupStalePageFiles @ 0x1400074EC (SmpCleanupStalePageFiles.c)
 *     SmpLoadDataFromRegistry @ 0x1400094D0 (SmpLoadDataFromRegistry.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x14000A0E0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000BEDC (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpGetCrashParameters @ 0x140012C4C (SmpGetCrashParameters.c)
 *     SmpGetDumpDestination @ 0x140012D08 (SmpGetDumpDestination.c)
 *     SmpClearTemporaryFiles @ 0x140013EE0 (SmpClearTemporaryFiles.c)
 *     SmpShuffleMove @ 0x1400150F8 (SmpShuffleMove.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140002084 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  if ( v3 )
    *pszDest = 0;
  return v4;
}
