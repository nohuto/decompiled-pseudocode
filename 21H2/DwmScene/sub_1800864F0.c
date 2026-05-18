/*
 * XREFs of sub_1800864F0 @ 0x1800864F0
 * Callers:
 *     sub_180086244 @ 0x180086244 (sub_180086244.c)
 *     sub_1800864F0 @ 0x1800864F0 (sub_1800864F0.c)
 *     sub_1800AFD2C @ 0x1800AFD2C (sub_1800AFD2C.c)
 * Callees:
 *     sub_1800864F0 @ 0x1800864F0 (sub_1800864F0.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800864F0(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  signed __int32 v4; // eax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // [rsp+20h] [rbp-30h]
  __int128 v8; // [rsp+28h] [rbp-28h]

  sub_180089274(a1);
  result = *(_QWORD *)(a1 + 216);
  if ( result != qword_18020F6C0 )
  {
    v7 = *(_QWORD *)(a1 + 208);
    sub_180089274(a1);
    v8 = 0LL;
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v3 + 8);
        if ( !v4 )
          break;
        if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) )
        {
          v8 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    if ( (_QWORD)v8 )
    {
      v5 = sub_1800864F0(v8);
      v6 = v7;
      if ( v7 < v5 )
        v6 = v5;
      v7 = v6;
    }
    *(_QWORD *)(a1 + 216) = v7;
    if ( *((_QWORD *)&v8 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v8 + 1))(*((_QWORD *)&v8 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v8 + 1) + 8LL))(*((_QWORD *)&v8 + 1));
    }
    return v7;
  }
  return result;
}
