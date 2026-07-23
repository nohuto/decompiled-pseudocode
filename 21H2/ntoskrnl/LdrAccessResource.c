/*
 * XREFs of LdrAccessResource @ 0x1407C5C30
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A6C744 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x1405ED82C (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrpAccessResourceData((unsigned __int64)DllHandle, (unsigned __int64)ResourceDataEntry);
}
