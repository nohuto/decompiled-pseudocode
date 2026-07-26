/*
 * XREFs of NdisMAllocateSharedMemoryAsyncEx @ 0x1C0060A10
 * Callers:
 *     <none>
 * Callees:
 *     NdisMAllocateSharedMemoryAsync @ 0x1C0060840 (NdisMAllocateSharedMemoryAsync.c)
 */

NDIS_STATUS __stdcall NdisMAllocateSharedMemoryAsyncEx(
        NDIS_HANDLE MiniportDmaHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID Context)
{
  return NdisMAllocateSharedMemoryAsync(MiniportDmaHandle, Length, Cached, Context);
}
