/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x1404B3D70
 * Callers:
 *     HalPutScatterGatherList @ 0x14032EE70 (HalPutScatterGatherList.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039CC28 (HalpDmaCheckMdlAccessibility.c)
 *     HalGetDmaTransferInfoInternal @ 0x14039CCB8 (HalGetDmaTransferInfoInternal.c)
 *     HalFlushAdapterBuffersEx @ 0x14039FFA0 (HalFlushAdapterBuffersEx.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404B285C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404B2D10 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x1404B2EC0 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404C367C (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x1404C3BCC (HalpFlushMapBuffers.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1404C88FC (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x1404C8A18 (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1404C8B7C (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x1404C8CD4 (HalpDmaMapScatterTransferV2.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x1404C8E60 (HalpDmaNextContiguousPieceV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140342130 (HalpDmaGetAdapterVersion.c)
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
