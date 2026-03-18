/*
 * XREFs of KeZeroPages @ 0x1403FB000
 * Callers:
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiZeroMemory @ 0x1402DFB30 (MiZeroMemory.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x1402F51CC (MiFillPhysicalPages.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     MiZeroLargePage @ 0x140349124 (MiZeroLargePage.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403A7E38 (MiTimeSingleLargePageZeroWorker.c)
 *     MiZeroPageCalibrateIsr @ 0x1403B8F90 (MiZeroPageCalibrateIsr.c)
 *     MiHugePageOperation @ 0x14052DAA8 (MiHugePageOperation.c)
 *     MiPageNotZero @ 0x140549CA0 (MiPageNotZero.c)
 *     MiDoGangAssignment @ 0x14055ACD0 (MiDoGangAssignment.c)
 *     MxMapVa @ 0x140A3EDAC (MxMapVa.c)
 *     MiMapBBTMemory @ 0x140A53620 (MiMapBBTMemory.c)
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
