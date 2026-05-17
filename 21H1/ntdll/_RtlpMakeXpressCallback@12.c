/*
 * XREFs of _RtlpMakeXpressCallback@12 @ 0x4B375013
 * Callers:
 *     _RtlCompressBufferXpressHuffMax@36 @ 0x4B372E62 (_RtlCompressBufferXpressHuffMax@36.c)
 *     _RtlCompressBufferXpressHuffStandard@36 @ 0x4B37343F (_RtlCompressBufferXpressHuffStandard@36.c)
 *     _RtlCompressBufferXpressLzMax@36 @ 0x4B373B72 (_RtlCompressBufferXpressLzMax@36.c)
 *     _RtlCompressBufferXpressLzStandard@36 @ 0x4B3740DB (_RtlCompressBufferXpressLzStandard@36.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

unsigned int __fastcall RtlpMakeXpressCallback(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int result; // eax

  ((void (__thiscall *)(_DWORD, _DWORD))*a1)(*a1, a1[1]);
  result = a1[2] + a3;
  if ( a2 < result )
    return a2;
  return result;
}
