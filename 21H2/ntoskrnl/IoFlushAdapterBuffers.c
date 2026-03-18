/*
 * XREFs of IoFlushAdapterBuffers @ 0x140393E00
 * Callers:
 *     HalPutScatterGatherListV2 @ 0x140230618 (HalPutScatterGatherListV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14023A8D0 (HalpDmaGetAdapterVersion.c)
 *     IoFlushAdapterBuffersV2 @ 0x140393E40 (IoFlushAdapterBuffersV2.c)
 *     IoFlushAdapterBuffersV3 @ 0x140517BAC (IoFlushAdapterBuffersV3.c)
 */

BOOLEAN __stdcall IoFlushAdapterBuffers(
        PDMA_ADAPTER DmaAdapter,
        PMDL Mdl,
        PVOID MapRegisterBase,
        PVOID CurrentVa,
        ULONG Length,
        BOOLEAN WriteToDevice)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) == 2 )
    return IoFlushAdapterBuffersV2(v8, v9, v6, v7, Length, WriteToDevice);
  else
    return IoFlushAdapterBuffersV3(v8, v9, v6, v7, Length, WriteToDevice);
}
