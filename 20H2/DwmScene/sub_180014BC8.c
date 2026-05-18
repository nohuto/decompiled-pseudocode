/*
 * XREFs of sub_180014BC8 @ 0x180014BC8
 * Callers:
 *     sub_1800157D0 @ 0x1800157D0 (sub_1800157D0.c)
 * Callees:
 *     sub_180013E28 @ 0x180013E28 (sub_180013E28.c)
 *     sub_180013E8C @ 0x180013E8C (sub_180013E8C.c)
 *     sub_180013EF0 @ 0x180013EF0 (sub_180013EF0.c)
 *     sub_180013F64 @ 0x180013F64 (sub_180013F64.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18008169C @ 0x18008169C (sub_18008169C.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180014BC8(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int32 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __int64 result; // rax
  __int64 *v9; // [rsp+28h] [rbp-59h] BYREF
  __int128 v10; // [rsp+30h] [rbp-51h]
  __int128 v11; // [rsp+40h] [rbp-41h]
  __int64 *v12; // [rsp+50h] [rbp-31h] BYREF
  __m128i v13; // [rsp+58h] [rbp-29h] BYREF
  __m128i v14; // [rsp+68h] [rbp-19h] BYREF
  __m128i v15; // [rsp+78h] [rbp-9h] BYREF
  __m128i v16; // [rsp+88h] [rbp+7h] BYREF
  __int64 *v17; // [rsp+98h] [rbp+17h]
  __int64 *v18; // [rsp+A0h] [rbp+1Fh]
  __int64 *v19; // [rsp+A8h] [rbp+27h]
  __int64 *v20; // [rsp+B0h] [rbp+2Fh]
  __int128 v21; // [rsp+B8h] [rbp+37h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  v11 = 0LL;
  v2 = *(volatile signed __int32 **)(v1 + 40);
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 2);
    v2 = *(volatile signed __int32 **)(v1 + 40);
  }
  v3 = *(_QWORD *)(v1 + 32);
  *(_QWORD *)&v11 = v3;
  *((_QWORD *)&v11 + 1) = v2;
  v21 = 0LL;
  v10 = 0LL;
  v4 = *(_QWORD *)(v3 + 80);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v10 = *(_OWORD *)(v3 + 72);
        break;
      }
    }
    v3 = v11;
  }
  sub_1800615B4(v10 + 16, &v21);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
    v3 = v11;
  }
  sub_1800839A4(v3);
  v12 = 0LL;
  v17 = *(__int64 **)(v3 + 384);
  v18 = *(__int64 **)(v3 + 376);
  sub_180013EF0(&v12, v18, v17, 0);
  if ( v12 == *(__int64 **)(v3 + 384) )
  {
    v6 = 0LL;
  }
  else
  {
    sub_180013E8C(v13.m128i_i64, v12);
    v6 = _mm_load_si128(&v13);
  }
  v14 = v6;
  v13 = 0LL;
  sub_18008169C(v3, &v14);
  sub_1800839A4(v3);
  v9 = 0LL;
  v19 = *(__int64 **)(v3 + 384);
  v20 = *(__int64 **)(v3 + 376);
  sub_180013F64(&v9, v20, v19, 0);
  if ( v9 == *(__int64 **)(v3 + 384) )
  {
    v7 = 0LL;
  }
  else
  {
    sub_180013E28(v15.m128i_i64, v9);
    v7 = _mm_load_si128(&v15);
  }
  v16 = v7;
  v15 = 0LL;
  result = sub_18008169C(v3, &v16);
  if ( BYTE8(v21) )
    result = sub_180061A34(v21);
  if ( v2 )
  {
    result = (unsigned int)_InterlockedDecrement(v2 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      result = (unsigned int)_InterlockedDecrement(v2 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return result;
}
