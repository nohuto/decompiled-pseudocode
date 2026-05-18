/*
 * XREFs of sub_1800E9864 @ 0x1800E9864
 * Callers:
 *     sub_180076E98 @ 0x180076E98 (sub_180076E98.c)
 * Callees:
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800E9760 @ 0x1800E9760 (sub_1800E9760.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E9864(__int64 a1, __int64 a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v6; // rbx
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a1 + 8) )
    return 0LL;
  sub_180067278(a1);
  v8 = 1;
  v9 = 0LL;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v10 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E9760((_QWORD *)(a1 + 32), &v8, a2, &v10, &v9);
  v6 = (*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) / 56LL;
  sub_180067304(a1);
  return v6 - 1;
}
