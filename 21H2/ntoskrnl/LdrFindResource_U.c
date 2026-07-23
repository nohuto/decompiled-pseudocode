/*
 * XREFs of LdrFindResource_U @ 0x1407C5C50
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A6C744 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1405EDB54 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl LdrFindResource_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U(
           (char *)DllHandle,
           (__int64 *)ResourceInfo,
           Level,
           0,
           (unsigned int **)ResourceDataEntry);
}
