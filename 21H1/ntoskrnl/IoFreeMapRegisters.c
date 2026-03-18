/*
 * XREFs of IoFreeMapRegisters @ 0x14039F780
 * Callers:
 *     HalPutScatterGatherList @ 0x1402F30D0 (HalPutScatterGatherList.c)
 *     HalPutScatterGatherListV3 @ 0x14039F700 (HalPutScatterGatherListV3.c)
 *     IoFreeAdapterChannelV3Internal @ 0x1404C11E0 (IoFreeAdapterChannelV3Internal.c)
 *     IoFreeAdapterChannelV2 @ 0x1404C79EC (IoFreeAdapterChannelV2.c)
 *     HalpAllocateMapRegisters @ 0x14085FD40 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140304650 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV3 @ 0x14039F7B4 (IoFreeMapRegistersV3.c)
 *     IoFreeMapRegistersV2 @ 0x1404C7BC0 (IoFreeMapRegistersV2.c)
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
