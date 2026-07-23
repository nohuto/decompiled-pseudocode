/*
 * XREFs of IopSetDeviceSecurityDescriptors @ 0x14076E480
 * Callers:
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14075849C (IopSetDeviceSecurityDescriptor.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptors(
        struct _DMA_ADAPTER *a1,
        struct _DMA_ADAPTER *a2,
        DWORD *a3,
        void *a4,
        POOL_TYPE a5,
        GENERIC_MAPPING *a6)
{
  unsigned int v7; // edi
  struct _DMA_ADAPTER *v10; // rbx
  unsigned int v11; // eax
  struct _DMA_ADAPTER *DmaOperations; // rsi

  v7 = 0;
  v10 = a2;
  ObfReferenceObject(a2);
  do
  {
    v11 = IopSetDeviceSecurityDescriptor((__int64)v10, a3, a4, a5, a6);
    DmaOperations = (struct _DMA_ADAPTER *)v10[1].DmaOperations;
    if ( v10 == a1 )
      v7 = v11;
    if ( DmaOperations )
      ObfReferenceObject(v10[1].DmaOperations);
    HalPutDmaAdapter(v10);
    v10 = DmaOperations;
  }
  while ( DmaOperations );
  return v7;
}
