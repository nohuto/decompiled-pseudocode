/*
 * XREFs of sub_1800E3F94 @ 0x1800E3F94
 * Callers:
 *     sub_1800715C8 @ 0x1800715C8 (sub_1800715C8.c)
 * Callees:
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800E3E90 @ 0x1800E3E90 (sub_1800E3E90.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E3F94(__int64 a1, __int64 a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v6; // rbx
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a1 + 8) )
    return 0LL;
  sub_1800619A8(a1);
  v8 = 1;
  v9 = 0LL;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v10 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E3E90((_QWORD *)(a1 + 32), &v8, a2, &v10, &v9);
  v6 = (*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) / 56LL;
  sub_180061A34(a1);
  return v6 - 1;
}
