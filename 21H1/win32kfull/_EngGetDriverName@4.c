/*
 * XREFs of _EngGetDriverName@4 @ 0x1E9A4E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPWSTR __stdcall EngGetDriverName(HDEV hdev)
{
  return *(LPWSTR *)(*(_DWORD *)(*((_DWORD *)hdev + 276) + 8) + 4);
}
