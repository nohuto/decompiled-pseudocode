/*
 * XREFs of KeZeroPages @ 0x140402DB0
 * Callers:
 *     MiZeroPage @ 0x140233310 (MiZeroPage.c)
 *     MiZeroLargePage @ 0x1402B71F8 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1402E6380 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1402E6470 (MiFillPhysicalPages.c)
 *     MiZeroMemory @ 0x1402E65E4 (MiZeroMemory.c)
 *     MiFreePagesFromMdl @ 0x1402FF4EC (MiFreePagesFromMdl.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0728 (MiTimeSingleLargePageZeroWorker.c)
 *     MiZeroPageCalibrateIsr @ 0x1403BC430 (MiZeroPageCalibrateIsr.c)
 *     MiHugePageOperation @ 0x140532F78 (MiHugePageOperation.c)
 *     MiPageNotZero @ 0x14054F170 (MiPageNotZero.c)
 *     MiDoGangAssignment @ 0x140560170 (MiDoGangAssignment.c)
 *     MxMapVa @ 0x140A44B6C (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A552A8 (MiMapBBTMemory.c)
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
