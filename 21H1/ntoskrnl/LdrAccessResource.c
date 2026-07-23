/*
 * XREFs of LdrAccessResource @ 0x1407B0350
 * Callers:
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A67B14 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x1406FC428 (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrpAccessResourceData(
           (unsigned __int64)DllHandle,
           &ResourceDataEntry->OffsetToData,
           (unsigned __int64 *)ResourceBuffer,
           ResourceLength);
}
