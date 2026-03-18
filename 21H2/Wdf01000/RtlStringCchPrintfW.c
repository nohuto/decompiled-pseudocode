/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0052D18
 * Callers:
 *     LibraryRegisterClient @ 0x1C0028570 (LibraryRegisterClient.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C00290A4 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C005FDF8 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0052D64 (RtlStringVPrintfWorkerW.c)
 */

int RtlStringCchPrintfW(wchar_t *pszDest, unsigned __int64 cchDest, wchar_t *pszFormat, ...)
{
  int result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, (unsigned __int64 *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
