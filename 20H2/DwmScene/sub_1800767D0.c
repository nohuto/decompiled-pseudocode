/*
 * XREFs of sub_1800767D0 @ 0x1800767D0
 * Callers:
 *     <none>
 * Callees:
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 */

_QWORD *__fastcall sub_1800767D0(__int64 a1, _QWORD *a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  *a2 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  return a2;
}
