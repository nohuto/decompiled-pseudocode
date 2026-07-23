/*
 * XREFs of _LdrFindResourceDirectory_U@16 @ 0x4B33F160
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 */

NTSTATUS __cdecl LdrFindResourceDirectory_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DIRECTORY *ResourceDirectory)
{
  return LdrpSearchResourceSection_U(DllHandle, (int)ResourceInfo, Level, 2u, (int)ResourceDirectory);
}
