/*
 * XREFs of KeZeroPages @ 0x140402F90
 * Callers:
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1402977C0 (MiFillPhysicalPages.c)
 *     MiZeroMemory @ 0x140297934 (MiZeroMemory.c)
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0898 (MiTimeSingleLargePageZeroWorker.c)
 *     MiZeroPageCalibrateIsr @ 0x1403BC5A0 (MiZeroPageCalibrateIsr.c)
 *     MiHugePageOperation @ 0x1405331B8 (MiHugePageOperation.c)
 *     MiPageNotZero @ 0x14054F3B0 (MiPageNotZero.c)
 *     MiDoGangAssignment @ 0x1405603B0 (MiDoGangAssignment.c)
 *     MxMapVa @ 0x140A45B6C (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A562A8 (MiMapBBTMemory.c)
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
