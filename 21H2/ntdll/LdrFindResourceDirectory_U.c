/*
 * XREFs of LdrFindResourceDirectory_U @ 0x1800E0F60
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl LdrFindResourceDirectory_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DIRECTORY *ResourceDirectory)
{
  return LdrpSearchResourceSection_U(DllHandle, (__int64)ResourceInfo, Level, 2u, (__int64)ResourceDirectory);
}
