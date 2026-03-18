/*
 * XREFs of _EngGetPrinterDataFileName@4 @ 0x1E9A6B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPWSTR __stdcall EngGetPrinterDataFileName(HDEV hdev)
{
  return (LPWSTR)*((_DWORD *)hdev + 233);
}
