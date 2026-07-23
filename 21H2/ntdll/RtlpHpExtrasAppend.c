/*
 * XREFs of RtlpHpExtrasAppend @ 0x18010E368
 * Callers:
 *     RtlpHpAllocateHeap @ 0x18000776C (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpExtrasSetPresent @ 0x18006B2D4 (RtlpHpExtrasSetPresent.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasAppend(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        __int16 a7)
{
  __m128i *v7; // r11
  unsigned __int64 v8; // rbx
  __m128i *v9; // rbx

  v7 = (__m128i *)(a2 + a3);
  if ( (a6 & 0x10000000) != 0 )
    *v7 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  v8 = 0LL;
  if ( (a6 & 0x20000F08) != 0 )
  {
    v9 = v7 + 1;
    if ( (a6 & 0x10000000) == 0 )
      v9 = (__m128i *)(a2 + a3);
    v8 = ((unsigned __int64)&v9->m128i_u64[1] + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)v8 = 0LL;
    *(_BYTE *)(v8 + 2) &= 0xFu;
    *(_BYTE *)(v8 + 2) |= 16 * (BYTE1(a6) & 0xFE);
    *(_BYTE *)(v8 + 3) = a5 >> 4;
    *(_WORD *)v8 = a7;
    RtlpHpExtrasSetPresent(a1, a2, a6);
  }
  return v8;
}
