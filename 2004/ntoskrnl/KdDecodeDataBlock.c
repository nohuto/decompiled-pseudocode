/*
 * XREFs of KdDecodeDataBlock @ 0x14050B3A4
 * Callers:
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409AA6E8 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     KdCopyDataBlock @ 0x14050B2E8 (KdCopyDataBlock.c)
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
