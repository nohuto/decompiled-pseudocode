/*
 * XREFs of IoFreeMapRegisters @ 0x14039FF10
 * Callers:
 *     HalPutScatterGatherList @ 0x14032EE70 (HalPutScatterGatherList.c)
 *     HalPutScatterGatherListV3 @ 0x14039FE90 (HalPutScatterGatherListV3.c)
 *     IoFreeAdapterChannelV3Internal @ 0x1404C1650 (IoFreeAdapterChannelV3Internal.c)
 *     IoFreeAdapterChannelV2 @ 0x1404C7E9C (IoFreeAdapterChannelV2.c)
 *     HalpAllocateMapRegisters @ 0x140861090 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140342130 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV3 @ 0x14039FF44 (IoFreeMapRegistersV3.c)
 *     IoFreeMapRegistersV2 @ 0x1404C8070 (IoFreeMapRegistersV2.c)
 */

void __stdcall IoFreeMapRegisters(PDMA_ADAPTER DmaAdapter, PVOID MapRegisterBase, ULONG NumberOfMapRegisters)
{
  __int64 v3; // r9
  __int64 v4; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) == 2 )
    IoFreeMapRegistersV2(v3, v4);
  else
    IoFreeMapRegistersV3(v3, v4);
}
