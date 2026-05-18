/*
 * XREFs of sub_1800E97D8 @ 0x1800E97D8
 * Callers:
 *     sub_180078A90 @ 0x180078A90 (sub_180078A90.c)
 * Callees:
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800784C0 @ 0x1800784C0 (sub_1800784C0.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E97D8(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax

  sub_180067278((__int64)a1);
  a1[2] = a2;
  v4 = (_QWORD *)a1[5];
  v5 = (_QWORD *)a1[4];
  if ( v5 != v4 )
  {
    do
    {
      sub_1800784C0(v5, 0);
      v5 += 7;
    }
    while ( v5 != v4 );
    v5 = (_QWORD *)a1[4];
  }
  a1[5] = v5;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  a1[3] = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  return sub_180067304((__int64)a1);
}
