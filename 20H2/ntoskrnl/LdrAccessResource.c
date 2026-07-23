/*
 * XREFs of LdrAccessResource @ 0x1407C1410
 * Callers:
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A6E7C4 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x1406AA71C (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrpAccessResourceData((unsigned __int64)DllHandle, (unsigned __int64)ResourceDataEntry);
}
