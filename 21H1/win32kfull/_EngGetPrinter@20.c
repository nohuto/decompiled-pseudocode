/*
 * XREFs of _EngGetPrinter@20 @ 0x1E7CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngGetPrinter(HANDLE hPrinter, DWORD dwLevel, LPBYTE pPrinter, DWORD cbBuf, LPDWORD pcbNeeded)
{
  EngSetLastError(0x32u);
  return 0;
}
