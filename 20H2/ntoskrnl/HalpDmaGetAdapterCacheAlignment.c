/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x1404B7290
 * Callers:
 *     HalPutScatterGatherList @ 0x140301D80 (HalPutScatterGatherList.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039FD78 (HalpDmaCheckMdlAccessibility.c)
 *     HalGetDmaTransferInfoInternal @ 0x14039FE08 (HalGetDmaTransferInfoInternal.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2470 (HalFlushAdapterBuffersEx.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404B5D7C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404B6230 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x1404B63E0 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404C6B9C (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x1404C70EC (HalpFlushMapBuffers.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1404CBE5C (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x1404CBF78 (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1404CC0DC (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x1404CC234 (HalpDmaMapScatterTransferV2.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x1404CC3C0 (HalpDmaNextContiguousPieceV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140312EA0 (HalpDmaGetAdapterVersion.c)
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
