/*
 * XREFs of sub_1800DE778 @ 0x1800DE778
 * Callers:
 *     sub_1800DDF78 @ 0x1800DDF78 (sub_1800DDF78.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     sub_18006D850 @ 0x18006D850 (sub_18006D850.c)
 *     sub_180070328 @ 0x180070328 (sub_180070328.c)
 *     sub_1800F921C @ 0x1800F921C (sub_1800F921C.c)
 *     sub_1800F9398 @ 0x1800F9398 (sub_1800F9398.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_1800DE778(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v17[2]; // [rsp+20h] [rbp-29h] BYREF
  __m128i si128; // [rsp+30h] [rbp-19h]
  __int128 v19; // [rsp+40h] [rbp-9h] BYREF
  __int128 v20; // [rsp+50h] [rbp+7h] BYREF
  __int128 v21; // [rsp+60h] [rbp+17h] BYREF
  __int128 v22; // [rsp+70h] [rbp+27h] BYREF

  v19 = 0LL;
  v6 = sub_180070328(*a4, (__int64)a2);
  v19 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v19 = *(_OWORD *)v6;
  v22 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v17[0]) = 0;
  sub_18000FC14(v17, 0x1CuLL, 0LL, "IPM_ResolveMultisampledInput");
  sub_1800F921C(&v22, &v19, v17);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v8 = v17[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v8 = *(_QWORD *)(v17[0] - 8);
      if ( (unsigned __int64)(v17[0] - v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v8);
  }
  v9 = a1[57];
  v21 = 0LL;
  v10 = *(_QWORD *)(v9 + 144);
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  v21 = *(_OWORD *)(v9 + 136);
  v20 = 0LL;
  v11 = a1[9];
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v11 = a1[9];
  }
  *(_QWORD *)&v20 = a1[8];
  *((_QWORD *)&v20 + 1) = v11;
  sub_18006D850((_QWORD **)v19, (__int64)&v20, (__int64)&v21);
  *a2 = 0LL;
  a2[1] = 0LL;
  v12 = a1[9];
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  *a2 = a1[8];
  a2[1] = a1[9];
  v13 = (volatile signed __int32 *)*((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = (volatile signed __int32 *)*((_QWORD *)&v21 + 1);
  if ( *((_QWORD *)&v21 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  sub_1800F9398(&v22);
  v15 = (volatile signed __int32 *)*((_QWORD *)&v19 + 1);
  if ( *((_QWORD *)&v19 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return a2;
}
