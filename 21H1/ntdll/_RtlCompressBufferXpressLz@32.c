/*
 * XREFs of _RtlCompressBufferXpressLz@32 @ 0x4B373B10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCompressBufferXpressLzMax@36 @ 0x4B373B72 (_RtlCompressBufferXpressLzMax@36.c)
 *     _RtlCompressBufferXpressLzStandard@36 @ 0x4B3740DB (_RtlCompressBufferXpressLzStandard@36.c)
 */

int __stdcall RtlCompressBufferXpressLz(__int16 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( !a1 )
    return RtlCompressBufferXpressLzStandard(a4, a5, a7, (a8 + 3) & 0xFFFFFFFC, 0, 0, a3);
  if ( a1 == 256 )
    return RtlCompressBufferXpressLzMax(a4, a5, a7, (void *)((a8 + 3) & 0xFFFFFFFC), 0, 0, a3);
  return -1073741637;
}
