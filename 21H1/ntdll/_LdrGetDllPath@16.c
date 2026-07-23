/*
 * XREFs of _LdrGetDllPath@16 @ 0x4B2B27B0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 */

NTSTATUS __cdecl LdrGetDllPath(PCWSTR DllName, ULONG Flags, PWSTR *DllPath, PWSTR *SearchPaths)
{
  return LdrpGetDllPath(DllName, (int)DllPath, 0, 0, 0, (int)SearchPaths);
}
