/*
 * XREFs of _RtlCompressBufferXpressHuff@32 @ 0x4B372E00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCompressBufferXpressHuffMax@36 @ 0x4B372E62 (_RtlCompressBufferXpressHuffMax@36.c)
 *     _RtlCompressBufferXpressHuffStandard@36 @ 0x4B37343F (_RtlCompressBufferXpressHuffStandard@36.c)
 */

int __stdcall RtlCompressBufferXpressHuff(__int16 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( !a1 )
    return RtlCompressBufferXpressHuffStandard(a4, a5, a7, (a8 + 3) & 0xFFFFFFFC, 0, 0, a3);
  if ( a1 == 256 )
    return RtlCompressBufferXpressHuffMax(a4, a5, a7, (void *)((a8 + 3) & 0xFFFFFFFC), 0, 0, a3);
  return -1073741637;
}
