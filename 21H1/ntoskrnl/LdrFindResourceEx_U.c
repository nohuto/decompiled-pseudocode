/*
 * XREFs of LdrFindResourceEx_U @ 0x14090C390
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1406F8B20 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl LdrFindResourceEx_U(
        ULONG Flags,
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U((char *)DllHandle, (__int64 *)ResourceInfo, Level, Flags, ResourceDataEntry);
}
