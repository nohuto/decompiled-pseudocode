/*
 * XREFs of _LdrGetDllHandle@16 @ 0x4B2CC810
 * Callers:
 *     <none>
 * Callees:
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 */

NTSTATUS __cdecl LdrGetDllHandle(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  return LdrGetDllHandleEx(1u, DllPath, DllCharacteristics, DllName, DllHandle);
}
