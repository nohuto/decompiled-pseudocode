/*
 * XREFs of sub_18006B210 @ 0x18006B210
 * Callers:
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 * Callees:
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_18006A690 @ 0x18006A690 (sub_18006A690.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 */

__int64 __fastcall sub_18006B210(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  sub_18006187C((__int64)(a1 + 3), a2);
  sub_18006A690(a1);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v9 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  a1[54] = v9;
  v10 = v9 - a1[53];
  a1[59] = v10;
  return sub_1801163DC(
           &unk_1802085A0,
           3LL,
           "RenderDevice startup duration to initialization complete: %8.3fms",
           (float)((float)(int)v10 / 1000000.0),
           a5,
           a6);
}
