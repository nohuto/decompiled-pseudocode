/*
 * XREFs of sub_180098464 @ 0x180098464
 * Callers:
 *     sub_180013FD8 @ 0x180013FD8 (sub_180013FD8.c)
 *     sub_1800983B0 @ 0x1800983B0 (sub_1800983B0.c)
 * Callees:
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     sub_1800EAE04 @ 0x1800EAE04 (sub_1800EAE04.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180098464(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rbx
  char v8[16]; // [rsp+30h] [rbp-40h] BYREF
  __m128i si128; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  __int64 *v11; // [rsp+58h] [rbp-18h]

  v10 = a1;
  v11 = a2;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 6LL;
  strcpy(v8, "Bounds");
  sub_1800EAE04(a1, v8, a2);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v4 = *(_QWORD *)v8;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)v8 - 8LL);
      if ( (unsigned __int64)(*(_QWORD *)v8 - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  v8[0] = 0;
  *(_QWORD *)a1 = &Spectre::Engine::Bounds::`vftable';
  *(_QWORD *)(a1 + 88) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 100) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 108) = 0;
  v5 = *a2;
  sub_180083A6C(*a2);
  *(_QWORD *)(v5 + 448) |= 8uLL;
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a1;
}
