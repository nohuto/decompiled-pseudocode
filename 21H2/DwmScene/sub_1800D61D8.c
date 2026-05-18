/*
 * XREFs of sub_1800D61D8 @ 0x1800D61D8
 * Callers:
 *     sub_1800D6414 @ 0x1800D6414 (sub_1800D6414.c)
 * Callees:
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18006832C @ 0x18006832C (sub_18006832C.c)
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     sub_18006AE58 @ 0x18006AE58 (sub_18006AE58.c)
 *     sub_1800D6594 @ 0x1800D6594 (sub_1800D6594.c)
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 *     _Thrd_yield @ 0x180125326 (_Thrd_yield.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D61D8(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v6; // rsi
  char v7; // r12
  __int64 v8; // rbp
  __int64 **v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  int v19; // [rsp+38h] [rbp-F0h]
  __int64 v20; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v21[136]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v22[3]; // [rsp+D8h] [rbp-50h] BYREF

  v2 = a2;
  sub_180067278(a1);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v6 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_18006AE58((__int64)v21);
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 56);
  v19 = v8;
  v9 = *(__int64 ***)(a1 + 48);
  v10 = *v9;
  if ( *v9 != (__int64 *)v9 )
  {
    do
    {
      if ( v7 )
        break;
      v11 = Query_perf_frequency();
      v12 = Query_perf_counter();
      if ( 1000000000 * (v12 % v11) / v11 + 1000000000 * (v12 / v11) - v6 >= 1000000 * v2 )
      {
LABEL_6:
        sub_18011BCAC(
          &unk_180213B98,
          4LL,
          "GpuProfiler::FramesData::WaitPendingFrames() -- wait for flush abandoned (limit is %lld ms)",
          v2);
        v7 = 1;
      }
      else
      {
        while ( 1 )
        {
          LOBYTE(v13) = 1;
          if ( (unsigned int)sub_1801090C0(*(_QWORD *)(a1 + 16 * (v10[4] + 4)), v21, v13) == 3 )
            break;
          Thrd_yield();
          v14 = Query_perf_frequency();
          v15 = Query_perf_counter();
          if ( 1000000000 * (v15 % v14) / v14 + 1000000000 * (v15 / v14) - v6 >= 1000000 * v2 )
            goto LABEL_6;
        }
        sub_1800D6594(a1 + 8, v10 + 4);
        v10 = (__int64 *)*sub_18006832C((_QWORD *)(a1 + 48), &v20, v10);
      }
    }
    while ( v10 != *(__int64 **)(a1 + 48) );
    LODWORD(v8) = v19;
  }
  v16 = Query_perf_frequency();
  v17 = Query_perf_counter();
  sub_18011BCAC(
    &unk_180213B98,
    2LL,
    "GpuProfiler::FramesData::WaitPendingFrames() -- waited %lld ms for flush (pending frames: %d)",
    (1000000000 * (v17 % v16) / v16 + 1000000000 * (v17 / v16) - v6) / 1000000,
    v8);
  sub_180069FBC(v22, (__int64)v22);
  return sub_180067304(a1);
}
