/*
 * XREFs of IoFreeMapRegisters @ 0x1403A2DF0
 * Callers:
 *     HalPutScatterGatherList @ 0x14021B580 (HalPutScatterGatherList.c)
 *     HalPutScatterGatherListV3 @ 0x1403A2D70 (HalPutScatterGatherListV3.c)
 *     IoFreeAdapterChannelV3Internal @ 0x1404C6780 (IoFreeAdapterChannelV3Internal.c)
 *     IoFreeAdapterChannelV2 @ 0x1404CD00C (IoFreeAdapterChannelV2.c)
 *     HalpAllocateMapRegisters @ 0x140864810 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140234490 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV3 @ 0x1403A2E24 (IoFreeMapRegistersV3.c)
 *     IoFreeMapRegistersV2 @ 0x1404CD1E0 (IoFreeMapRegistersV2.c)
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
