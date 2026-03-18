/*
 * XREFs of RtlDecompressBufferProgress @ 0x14058CA70
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140991804 (PopDecompressHiberBlocks.c)
 * Callees:
 *     RtlDecompressBufferXpressHuffProgress @ 0x14058CB40 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x14058D168 (RtlDecompressBufferXpressLzProgress.c)
 */

__int64 __fastcall RtlDecompressBufferProgress(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  if ( a1 == 3 )
    return RtlDecompressBufferXpressLzProgress(a2, a3, a4, a5, a6, a8, a9);
  if ( a1 == 4 )
    return RtlDecompressBufferXpressHuffProgress(a2, a3, a4, a5, a6, a7, a8, a9, 4096);
  return 3221226079LL;
}
