/*
 * XREFs of sub_18006FCD0 @ 0x18006FCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 */

void __fastcall sub_18006FCD0(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( ++*(_DWORD *)(a1 + 3884) == 1 )
  {
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    v4 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
    *(_QWORD *)(a1 + 448) = v4;
    v5 = v4 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 480) = v5;
    sub_18011BCAC(
      &unk_18020F620,
      3LL,
      "RenderDevice startup duration until first frame begin: %8.3fms",
      (float)((float)(int)v5 / 1000000.0));
  }
}
