/*
 * XREFs of sub_1800E3F08 @ 0x1800E3F08
 * Callers:
 *     sub_1800731C0 @ 0x1800731C0 (sub_1800731C0.c)
 * Callees:
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180072BF0 @ 0x180072BF0 (sub_180072BF0.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E3F08(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax

  sub_1800619A8((__int64)a1);
  a1[2] = a2;
  v4 = (_QWORD *)a1[5];
  v5 = (_QWORD *)a1[4];
  if ( v5 != v4 )
  {
    do
    {
      sub_180072BF0(v5, 0);
      v5 += 7;
    }
    while ( v5 != v4 );
    v5 = (_QWORD *)a1[4];
  }
  a1[5] = v5;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  a1[3] = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  return sub_180061A34((__int64)a1);
}
