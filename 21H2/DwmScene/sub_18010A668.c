/*
 * XREFs of sub_18010A668 @ 0x18010A668
 * Callers:
 *     sub_1800DB5A4 @ 0x1800DB5A4 (sub_1800DB5A4.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     sub_18006F12C @ 0x18006F12C (sub_18006F12C.c)
 *     sub_1800ACBBC @ 0x1800ACBBC (sub_1800ACBBC.c)
 *     sub_1800AD5A4 @ 0x1800AD5A4 (sub_1800AD5A4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18010A668(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  __int128 v8; // [rsp+30h] [rbp-9h] BYREF
  __int128 v9; // [rsp+40h] [rbp+7h] BYREF
  __int64 Src[2]; // [rsp+58h] [rbp+1Fh] BYREF
  __m128i si128; // [rsp+68h] [rbp+2Fh]
  _QWORD *v12; // [rsp+78h] [rbp+3Fh]
  _BYTE v13[8]; // [rsp+80h] [rbp+47h] BYREF
  volatile signed __int32 *v14; // [rsp+88h] [rbp+4Fh]

  v12 = a1;
  v8 = 0LL;
  v3 = a2[1];
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a2[1];
  }
  *(_QWORD *)&v8 = *a2;
  *((_QWORD *)&v8 + 1) = v3;
  sub_1800ACBBC((__int64)a1, (__int64)&v8);
  *a1 = &Spectre::Engine::ImageProcessingCamera::`vftable';
  v4 = sub_18006F12C((__int64)v13);
  v9 = 0LL;
  v9 = *(_OWORD *)v4;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  sub_1800AD5A4(a1, 0LL, 0LL, &v9, 0LL);
  v5 = v14;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(Src[0]) = 0;
  sub_18000FC14(Src, 0x15uLL, 0LL, "ImageProcessingCamera");
  sub_180012F14(a1 + 3, Src);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = Src[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(Src[0] - 8);
      if ( (unsigned __int64)(Src[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  return a1;
}
