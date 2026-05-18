/*
 * XREFs of sub_180041A10 @ 0x180041A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D08C @ 0x18001D08C (sub_18001D08C.c)
 *     sub_180040FE0 @ 0x180040FE0 (sub_180040FE0.c)
 *     sub_1800410CC @ 0x1800410CC (sub_1800410CC.c)
 *     sub_180041294 @ 0x180041294 (sub_180041294.c)
 *     sub_180041788 @ 0x180041788 (sub_180041788.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180041A10(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v6; // ebx
  int v7; // ecx
  __int64 v8; // rcx
  const char *v9; // rdi
  char *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  char *v14; // rax
  unsigned __int64 v15; // rdx
  char *String[2]; // [rsp+30h] [rbp-D0h] BYREF
  __m128i si128; // [rsp+40h] [rbp-C0h]
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[8]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-90h]
  _BYTE v22[352]; // [rsp+90h] [rbp-70h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  v6 = 0;
  LOBYTE(String[0]) = 0;
  v7 = *(_DWORD *)(a1 + 96);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      sub_180041788((__int64)&v18, (__int64 **)(a1 + 112));
      sub_1800410CC(a1, a2, v18, (v19 - v18) >> 5, a3);
      sub_18001D08C(String, (__int64)v20);
      sub_180040FE0(&v18);
    }
  }
  else
  {
    sub_180041294((__int64)&v18, *(_QWORD *)(a1 + 104), (__int64)v22);
    sub_1800410CC(a1, a2, (__int64)v22, v18, a3);
    sub_18001D08C(String, (__int64)&v19);
    if ( v21 >= 0x10 )
    {
      v8 = v19;
      if ( v21 + 1 >= 0x1000 )
      {
        v8 = *(_QWORD *)(v19 - 8);
        if ( (unsigned __int64)(v19 - v8 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v8, v21 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v8);
    }
  }
  v9 = (const char *)String;
  v10 = String[0];
  v11 = si128.m128i_u64[1];
  if ( si128.m128i_i64[1] >= 0x10uLL )
    v9 = String[0];
  v12 = *(_QWORD *)(a1 + 144);
  if ( v12 )
  {
    if ( v9 )
      v6 = strnlen(v9, 0x7FFFFFFFuLL);
    (*(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v12 + 40LL))(v12, &unk_1801D6830, v6, v9);
    v11 = si128.m128i_u64[1];
    v10 = String[0];
  }
  if ( v11 >= 0x10 )
  {
    v13 = v11 + 1;
    v14 = v10;
    if ( v13 >= 0x1000 )
    {
      v15 = v13 + 39;
      v10 = (char *)*((_QWORD *)v10 - 1);
      if ( (unsigned __int64)(v14 - v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v15);
        __debugbreak();
      }
    }
    j_j__o_free(v10);
  }
}
