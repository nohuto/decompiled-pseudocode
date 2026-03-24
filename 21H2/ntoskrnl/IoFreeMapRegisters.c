/*
 * XREFs of IoFreeMapRegisters @ 0x1403A2CA0
 * Callers:
 *     HalPutScatterGatherList @ 0x14029E020 (HalPutScatterGatherList.c)
 *     HalPutScatterGatherListV3 @ 0x1403A2C20 (HalPutScatterGatherListV3.c)
 *     IoFreeAdapterChannelV3Internal @ 0x1404C6540 (IoFreeAdapterChannelV3Internal.c)
 *     IoFreeAdapterChannelV2 @ 0x1404CCDCC (IoFreeAdapterChannelV2.c)
 *     HalpAllocateMapRegisters @ 0x1408646B0 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1402B62B0 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV3 @ 0x1403A2CD4 (IoFreeMapRegistersV3.c)
 *     IoFreeMapRegistersV2 @ 0x1404CCFA0 (IoFreeMapRegistersV2.c)
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
