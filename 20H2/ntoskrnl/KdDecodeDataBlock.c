/*
 * XREFs of KdDecodeDataBlock @ 0x14050ECD4
 * Callers:
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409B0658 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     KdCopyDataBlock @ 0x14050EC18 (KdCopyDataBlock.c)
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
