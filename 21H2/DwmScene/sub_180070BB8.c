/*
 * XREFs of sub_180070BB8 @ 0x180070BB8
 * Callers:
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 * Callees:
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 */

__int64 __fastcall sub_180070BB8(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rax

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  *(_QWORD *)(a1 + 440) = v4;
  return sub_18011BCAC(
           &unk_18020F620,
           3LL,
           "RenderDevice startup duration to attach complete: %8.3fms",
           (float)((float)(v4 - *(_DWORD *)(a1 + 424)) / 1000000.0));
}
