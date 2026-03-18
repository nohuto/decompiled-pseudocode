/*
 * XREFs of HalpDmaNextContiguousPiece @ 0x1404B36F0
 * Callers:
 *     HalPutScatterGatherList @ 0x1402F30D0 (HalPutScatterGatherList.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x1404B202C (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404B217C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x1404B250C (HalpDmaMapContiguousTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404B2630 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1404C844C (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x1404C8568 (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1404C86CC (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x1404C8824 (HalpDmaMapScatterTransferV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140304650 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x1404B27E0 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x1404C89B0 (HalpDmaNextContiguousPieceV2.c)
 */

__int64 __fastcall HalpDmaNextContiguousPiece(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, unsigned int a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaNextContiguousPieceV2(v8, v9, v6, v7, a5, a6);
  else
    return HalpDmaNextContiguousPieceV3(v8, v9, v6, v7, a5, a6);
}
