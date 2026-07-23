/*
 * XREFs of LdrAccessResource @ 0x1407B34C0
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A67F94 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x1407129CC (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrpAccessResourceData((unsigned __int64)DllHandle, (unsigned __int64)ResourceDataEntry);
}
