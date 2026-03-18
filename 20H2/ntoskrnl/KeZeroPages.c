/*
 * XREFs of KeZeroPages @ 0x140400950
 * Callers:
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiZeroLargePage @ 0x140319D50 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1403333BC (MiFillPhysicalPages.c)
 *     MiZeroMemory @ 0x1403338A0 (MiZeroMemory.c)
 *     MiFreePagesFromMdl @ 0x14034E438 (MiFreePagesFromMdl.c)
 *     MiZeroPageCalibrateIsr @ 0x1403A8A70 (MiZeroPageCalibrateIsr.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AA828 (MiTimeSingleLargePageZeroWorker.c)
 *     MiHugePageOperation @ 0x140531478 (MiHugePageOperation.c)
 *     MiPageNotZero @ 0x14054D670 (MiPageNotZero.c)
 *     MiDoGangAssignment @ 0x14055E6A0 (MiDoGangAssignment.c)
 *     MxMapVa @ 0x140A4504C (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A53CA0 (MiMapBBTMemory.c)
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
