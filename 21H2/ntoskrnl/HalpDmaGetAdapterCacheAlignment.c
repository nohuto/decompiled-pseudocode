/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x14045693C
 * Callers:
 *     HalGetDmaTransferInfoInternal @ 0x140200750 (HalGetDmaTransferInfoInternal.c)
 *     HalPutScatterGatherListV2 @ 0x140230618 (HalPutScatterGatherListV2.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x140458C22 (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x140458D38 (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x140458E94 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x140458FD4 (HalpDmaMapScatterTransferV2.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x140459160 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140503D4C (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x140504198 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x140504644 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x1405047F4 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x140513C1C (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x14051416C (HalpFlushMapBuffers.c)
 *     HalFlushAdapterBuffersEx @ 0x140516D80 (HalFlushAdapterBuffersEx.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14023A8D0 (HalpDmaGetAdapterVersion.c)
 */

__int64 __fastcall HalpDmaGetAdapterCacheAlignment(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return 1LL;
  result = (unsigned int)HalpCoreDmaAlignment;
  if ( *(_BYTE *)(v1 + 437) )
    return 1LL;
  return result;
}
