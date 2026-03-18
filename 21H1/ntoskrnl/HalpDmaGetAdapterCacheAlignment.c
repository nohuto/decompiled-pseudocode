/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x1404B3690
 * Callers:
 *     HalPutScatterGatherList @ 0x1402F30D0 (HalPutScatterGatherList.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039C498 (HalpDmaCheckMdlAccessibility.c)
 *     HalGetDmaTransferInfoInternal @ 0x14039C528 (HalGetDmaTransferInfoInternal.c)
 *     HalFlushAdapterBuffersEx @ 0x14039F810 (HalFlushAdapterBuffersEx.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404B217C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404B2630 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x1404B27E0 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404C320C (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x1404C375C (HalpFlushMapBuffers.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1404C844C (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x1404C8568 (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1404C86CC (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x1404C8824 (HalpDmaMapScatterTransferV2.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x1404C89B0 (HalpDmaNextContiguousPieceV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140304650 (HalpDmaGetAdapterVersion.c)
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
