/*
 * XREFs of EngGetDriverName @ 0x1C028A180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPWSTR __stdcall EngGetDriverName(HDEV hdev)
{
  return *(LPWSTR *)(*(_QWORD *)(*((_QWORD *)hdev + 224) + 16LL) + 8LL);
}
