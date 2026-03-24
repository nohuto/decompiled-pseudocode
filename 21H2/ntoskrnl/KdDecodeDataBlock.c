/*
 * XREFs of KdDecodeDataBlock @ 0x140510804
 * Callers:
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409AD558 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     KdCopyDataBlock @ 0x140510748 (KdCopyDataBlock.c)
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
