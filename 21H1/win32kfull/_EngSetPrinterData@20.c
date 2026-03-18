/*
 * XREFs of _EngSetPrinterData@20 @ 0x1E7CC5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __stdcall EngSetPrinterData(
        HANDLE hPrinter,
        LPWSTR pType,
        DWORD dwType,
        LPBYTE lpbPrinterData,
        DWORD cjPrinterData)
{
  EngSetLastError(0x32u);
  return 50;
}
