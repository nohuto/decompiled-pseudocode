/*
 * XREFs of IoFreeMapRegisters @ 0x140456A30
 * Callers:
 *     HalPutScatterGatherListV2 @ 0x140230618 (HalPutScatterGatherListV2.c)
 *     IoFreeAdapterChannelV2 @ 0x1404585B4 (IoFreeAdapterChannelV2.c)
 *     HalPutScatterGatherListV3 @ 0x140511A58 (HalPutScatterGatherListV3.c)
 *     IoFreeAdapterChannelV3Internal @ 0x14051295C (IoFreeAdapterChannelV3Internal.c)
 *     HalpAllocateMapRegisters @ 0x140908B50 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14023A8D0 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV2 @ 0x140458780 (IoFreeMapRegistersV2.c)
 *     IoFreeMapRegistersV3 @ 0x1405129C8 (IoFreeMapRegistersV3.c)
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
