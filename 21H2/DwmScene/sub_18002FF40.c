/*
 * XREFs of sub_18002FF40 @ 0x18002FF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002F7A0 @ 0x18002F7A0 (sub_18002F7A0.c)
 *     sub_18006DAE0 @ 0x18006DAE0 (sub_18006DAE0.c)
 *     sub_180070328 @ 0x180070328 (sub_180070328.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002FF40(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  v10 = 0LL;
  sub_18002F7A0(a1, &v10);
  if ( (_QWORD)v10 )
  {
    v5 = (_QWORD *)sub_180070328();
    sub_18006DAE0(*v5, 0LL);
  }
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v6 = *((_QWORD *)&v10 + 1);
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
  }
  v7 = Query_perf_frequency();
  v8 = Query_perf_counter();
  return sub_18006C5EC(
           a1,
           v4,
           1000000000 * (v8 / v7) + 1000000000 * (v8 % v7) / v7,
           1000000000 * (v8 / v7) + 1000000000 * (v8 % v7) / v7 - v4);
}
