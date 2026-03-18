/*
 * XREFs of _EngGetPrinterData@24 @ 0x1E7CB2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __stdcall EngGetPrinterData(
        HANDLE hPrinter,
        LPWSTR pValueName,
        LPDWORD pType,
        LPBYTE pData,
        DWORD cjSize,
        LPDWORD pcjNeeded)
{
  EngSetLastError(0x32u);
  return 50;
}
