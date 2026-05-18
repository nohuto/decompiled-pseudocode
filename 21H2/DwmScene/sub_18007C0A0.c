/*
 * XREFs of sub_18007C0A0 @ 0x18007C0A0
 * Callers:
 *     <none>
 * Callees:
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 */

_QWORD *__fastcall sub_18007C0A0(__int64 a1, _QWORD *a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  *a2 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  return a2;
}
