/*
 * XREFs of NdisAllocateBufferPool @ 0x1C00BEF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisAllocateBufferPool(PNDIS_STATUS Status, PNDIS_HANDLE PoolHandle, UINT NumberOfDescriptors)
{
  *PoolHandle = 0LL;
  *Status = 0;
}
