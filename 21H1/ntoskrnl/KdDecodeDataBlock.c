/*
 * XREFs of KdDecodeDataBlock @ 0x14050AD54
 * Callers:
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409A9888 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     KdCopyDataBlock @ 0x14050AC98 (KdCopyDataBlock.c)
 */

__int64 KdDecodeDataBlock()
{
  __int64 result; // rax

  if ( KdpDataBlockEncoded )
  {
    result = KdCopyDataBlock(&KdDebuggerDataBlock);
    KdpDataBlockEncoded = 0;
  }
  return result;
}
