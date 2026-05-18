/*
 * XREFs of sub_1800105F0 @ 0x1800105F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002F7A0 @ 0x18002F7A0 (sub_18002F7A0.c)
 *     sub_18006C5EC @ 0x18006C5EC (sub_18006C5EC.c)
 *     sub_18006DAE0 @ 0x18006DAE0 (sub_18006DAE0.c)
 *     sub_180070328 @ 0x180070328 (sub_180070328.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800105F0(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

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
  v6 = (volatile signed __int32 *)*((_QWORD *)&v10 + 1);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
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
