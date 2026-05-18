/*
 * XREFs of sub_18006BC54 @ 0x18006BC54
 * Callers:
 *     sub_18006CDF0 @ 0x18006CDF0 (sub_18006CDF0.c)
 *     sub_1800DD08C @ 0x1800DD08C (sub_1800DD08C.c)
 * Callees:
 *     sub_1800A0674 @ 0x1800A0674 (sub_1800A0674.c)
 *     sub_1800A06D8 @ 0x1800A06D8 (sub_1800A06D8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006BC54(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  sub_1800A0674(a1, &v6, a2);
  if ( (_QWORD)v6 )
  {
    v2 = sub_1800A06D8(v6);
    v3 = (volatile signed __int32 *)*((_QWORD *)&v6 + 1);
    if ( *((_QWORD *)&v6 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v6 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    return v2;
  }
  else
  {
    v5 = (volatile signed __int32 *)*((_QWORD *)&v6 + 1);
    if ( *((_QWORD *)&v6 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v6 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
    return 0LL;
  }
}
