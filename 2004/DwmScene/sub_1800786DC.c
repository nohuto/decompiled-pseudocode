/*
 * XREFs of sub_1800786DC @ 0x1800786DC
 * Callers:
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 * Callees:
 *     sub_1800715C8 @ 0x1800715C8 (sub_1800715C8.c)
 *     sub_18007235C @ 0x18007235C (sub_18007235C.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     sub_1800AF618 @ 0x1800AF618 (sub_1800AF618.c)
 *     sub_1800AF860 @ 0x1800AF860 (sub_1800AF860.c)
 *     sub_18010E810 @ 0x18010E810 (sub_18010E810.c)
 *     sub_18010E9F8 @ 0x18010E9F8 (sub_18010E9F8.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800786DC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  __int128 v10; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v11[2]; // [rsp+58h] [rbp-59h] BYREF
  __m128i si128; // [rsp+68h] [rbp-49h]
  __int64 v13; // [rsp+78h] [rbp-39h] BYREF
  volatile signed __int32 *v14; // [rsp+80h] [rbp-31h]
  __int128 v15; // [rsp+88h] [rbp-29h] BYREF
  __int64 v16; // [rsp+98h] [rbp-19h]
  __int64 v17; // [rsp+A0h] [rbp-11h] BYREF
  volatile signed __int32 *v18; // [rsp+A8h] [rbp-9h]
  _BYTE v19[64]; // [rsp+B8h] [rbp+7h] BYREF

  memset(v19, 0, sizeof(v19));
  v10 = 0LL;
  v2 = a1[59];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a1[59];
  }
  *(_QWORD *)&v10 = a1[58];
  *((_QWORD *)&v10 + 1) = v2;
  sub_18010E810(
    (unsigned int)v19,
    (unsigned int)&v10,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    898,
    (__int64)"RenderDisplays",
    (__int64)"RenderDisplays",
    1);
  v15 = 0LL;
  v16 = 0LL;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 14LL;
  strcpy((char *)v11, "RenderDisplays");
  v3 = sub_1800752F4((__int64)a1, &v17);
  v4 = (volatile signed __int32 *)v3[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)v3[1];
  }
  v13 = *v3;
  v14 = v4;
  sub_1800715C8(&v15, &v13, (__int64)v11);
  if ( v14 && !_InterlockedDecrement(v14 + 3) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
  v5 = v18;
  if ( v18 )
  {
    if ( !_InterlockedDecrement(v18 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( !_InterlockedDecrement(v5 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v11[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v11[0] - 8LL);
      if ( (unsigned __int64)(v11[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v11[0]) = 0;
  v7 = (_QWORD *)a1[21];
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
  {
    if ( (unsigned int)sub_1800AF618(i[2]) == 1 )
      sub_1800AF860(i[2]);
  }
  sub_18007643C((__int64)a1);
  sub_18007235C((__int64 *)&v15);
  return sub_18010E9F8(v19);
}
