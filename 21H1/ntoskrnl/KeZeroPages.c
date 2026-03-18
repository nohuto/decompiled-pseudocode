/*
 * XREFs of KeZeroPages @ 0x1403F9D70
 * Callers:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiZeroLargePage @ 0x14030B58C (MiZeroLargePage.c)
 *     MiZeroMemory @ 0x140324C30 (MiZeroMemory.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1403511A8 (MiFillPhysicalPages.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AE258 (MiTimeSingleLargePageZeroWorker.c)
 *     MiZeroPageCalibrateIsr @ 0x1403B8160 (MiZeroPageCalibrateIsr.c)
 *     MiHugePageOperation @ 0x14052D458 (MiHugePageOperation.c)
 *     MiPageNotZero @ 0x140549650 (MiPageNotZero.c)
 *     MiDoGangAssignment @ 0x14055A680 (MiDoGangAssignment.c)
 *     MxMapVa @ 0x140A45B74 (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A4D920 (MiMapBBTMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroPages(__m128i *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 128LL;
  v3 = a2 >> 7;
  do
  {
    _mm_stream_si128(a1, (__m128i)0LL);
    _mm_stream_si128(a1 + 1, (__m128i)0LL);
    _mm_stream_si128(a1 + 2, (__m128i)0LL);
    _mm_stream_si128(a1 + 3, (__m128i)0LL);
    a1 += 8;
    _mm_stream_si128(a1 - 4, (__m128i)0LL);
    _mm_stream_si128(a1 - 3, (__m128i)0LL);
    --v3;
    _mm_stream_si128(a1 - 2, (__m128i)0LL);
    _mm_stream_si128(a1 - 1, (__m128i)0LL);
  }
  while ( v3 );
  _mm_sfence();
  return result;
}
