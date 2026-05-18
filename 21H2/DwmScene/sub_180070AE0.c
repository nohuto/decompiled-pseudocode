/*
 * XREFs of sub_180070AE0 @ 0x180070AE0
 * Callers:
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 * Callees:
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_18006FF60 @ 0x18006FF60 (sub_18006FF60.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 */

__int64 __fastcall sub_180070AE0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  sub_18006714C((__int64)(a1 + 3), a2);
  sub_18006FF60(a1);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v9 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  a1[54] = v9;
  v10 = v9 - a1[53];
  a1[59] = v10;
  return sub_18011BCAC(
           &unk_18020F620,
           3LL,
           "RenderDevice startup duration to initialization complete: %8.3fms",
           (float)((float)(int)v10 / 1000000.0),
           a5,
           a6);
}
