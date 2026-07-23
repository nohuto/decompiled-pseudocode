/*
 * XREFs of _LdrAccessResource@16 @ 0x4B308B00
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpAccessResourceData@16 @ 0x4B2BD414 (_LdrpAccessResourceData@16.c)
 */

NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrpAccessResourceData(
           (unsigned int)DllHandle,
           (unsigned int)ResourceDataEntry,
           (int)ResourceBuffer,
           (int)ResourceLength);
}
