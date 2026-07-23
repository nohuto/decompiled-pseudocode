/*
 * XREFs of LdrGetDllPath @ 0x180011450
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDllPath @ 0x18001147C (LdrpGetDllPath.c)
 */

NTSTATUS __cdecl LdrGetDllPath(PCWSTR DllName, ULONG Flags, PWSTR *DllPath, PWSTR *SearchPaths)
{
  return LdrpGetDllPath(DllName, 0LL, 0LL, (__int64)SearchPaths);
}
