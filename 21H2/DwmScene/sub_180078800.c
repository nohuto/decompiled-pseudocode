/*
 * XREFs of sub_180078800 @ 0x180078800
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800719A8 @ 0x1800719A8 (sub_1800719A8.c)
 *     sub_180078570 @ 0x180078570 (sub_180078570.c)
 *     sub_1800854DC @ 0x1800854DC (sub_1800854DC.c)
 *     sub_18008BAC0 @ 0x18008BAC0 (sub_18008BAC0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180078800(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-59h] BYREF
  __int128 v14; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-39h] BYREF
  __m128i si128; // [rsp+50h] [rbp-29h]
  __int64 Src[3]; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp-1h]
  _QWORD v19[4]; // [rsp+80h] [rbp+7h] BYREF
  __int128 v20; // [rsp+A0h] [rbp+27h] BYREF
  __int128 v21; // [rsp+B0h] [rbp+37h] BYREF

  v21 = 0LL;
  sub_180066E3C(*a2 + 16, (__int64)&v21);
  v20 = 0LL;
  *(_QWORD *)&v14 = v19;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 13LL;
  strcpy((char *)v15, "DefaultCamera");
  v19[2] = 0LL;
  v19[3] = 0LL;
  sub_18001277C(v19, (__int64)&qword_18020F748);
  v4 = *a2;
  v5 = sub_1800854DC(v15);
  sub_18008BAC0(v4, &v20, v5, v19);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v15[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v15[0] - 8LL);
      if ( (unsigned __int64)(v15[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v15[0]) = 0;
  v13 = 0LL;
  sub_1800719A8(v20, &v13);
  v18 = 15LL;
  Src[2] = 13LL;
  strcpy((char *)Src, "DefaultCamera");
  v7 = v13;
  sub_180012F14((__int64 *)(v13 + 24), Src);
  if ( v18 >= 0x10 )
  {
    v8 = Src[0];
    if ( v18 + 1 >= 0x1000 )
    {
      v8 = *(_QWORD *)(Src[0] - 8);
      if ( (unsigned __int64)(Src[0] - v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v18 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v8);
  }
  *(_BYTE *)(v7 + 72) = 0;
  v14 = 0LL;
  v9 = *((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    v9 = *((_QWORD *)&v13 + 1);
  }
  v14 = v13;
  result = sub_180078570(a1, &v14);
  if ( v9 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 8));
    if ( !(_DWORD)result )
    {
      v11 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  v12 = (volatile signed __int32 *)*((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( BYTE8(v21) )
    return sub_180067304(v21);
  return result;
}
