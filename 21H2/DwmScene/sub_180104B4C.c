/*
 * XREFs of sub_180104B4C @ 0x180104B4C
 * Callers:
 *     sub_1801042DC @ 0x1801042DC (sub_1801042DC.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800B836C @ 0x1800B836C (sub_1800B836C.c)
 *     sub_1800B8594 @ 0x1800B8594 (sub_1800B8594.c)
 *     sub_1800B8840 @ 0x1800B8840 (sub_1800B8840.c)
 *     sub_1801029F0 @ 0x1801029F0 (sub_1801029F0.c)
 *     sub_180105A94 @ 0x180105A94 (sub_180105A94.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180105C18 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     sub_180105C94 @ 0x180105C94 (sub_180105C94.c)
 *     memset @ 0x18012396A (memset.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180104B4C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r12
  char v7; // r14
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  _BYTE *v12; // rax
  _BYTE *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  _BYTE *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // xmm1_4
  int v24; // xmm2_4
  __int64 v25; // rax
  unsigned __int8 v26; // al
  __int64 v27; // rax
  __int64 result; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  _QWORD v33[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+38h] [rbp-C8h]
  _QWORD v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  _QWORD *v39; // [rsp+60h] [rbp-A0h]
  _QWORD *v40; // [rsp+68h] [rbp-98h]
  int v41; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+74h] [rbp-8Ch] BYREF
  int v43; // [rsp+78h] [rbp-88h] BYREF
  _QWORD Src[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h]
  unsigned __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v48[2]; // [rsp+A8h] [rbp-58h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-48h]
  _QWORD v50[2]; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v51; // [rsp+D8h] [rbp-28h]
  _QWORD v52[3]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v53; // [rsp+100h] [rbp+0h]
  _QWORD v54[3]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v55; // [rsp+120h] [rbp+20h]
  _BYTE v56[240]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v57[240]; // [rsp+220h] [rbp+120h] BYREF

  v47 = 0LL;
  v5 = 0LL;
  *(_DWORD *)(a3 + 32) = 1;
  v53 = 15LL;
  v52[2] = 11LL;
  strcpy((char *)v52, "LUT_3D_SIZE");
  v51.m128i_i64[1] = 15LL;
  v51.m128i_i64[0] = 10LL;
  strcpy((char *)v50, "DOMAIN_MIN");
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 10LL;
  strcpy((char *)v48, "DOMAIN_MAX");
  v6 = 0LL;
  v7 = 0;
  v45 = 0LL;
  v46 = 15LL;
  LOBYTE(Src[0]) = 0;
  v8 = std::ios::widen(a2 + *(int *)(*(_QWORD *)a2 + 4LL), 10LL);
  v9 = sub_1800B836C(a2, Src, v8);
  if ( !(unsigned __int8)std::ios_base::operator bool(v9 + *(int *)(*(_QWORD *)v9 + 4LL)) )
    goto LABEL_36;
  v11 = 0LL;
  while ( 1 )
  {
    if ( !v45 )
      goto LABEL_32;
    v12 = Src;
    if ( v46 >= 0x10 )
      v12 = (_BYTE *)Src[0];
    if ( v45 == 1 && !(*v12 == 13 ? 0 : *v12 < 0xDu ? -1 : 1) )
      goto LABEL_32;
    v14 = Src;
    if ( v46 >= 0x10 )
      v14 = (_BYTE *)Src[0];
    if ( *v14 == 35 )
      goto LABEL_32;
    v15 = Src;
    if ( v46 >= 0x10 )
      v15 = (_QWORD *)Src[0];
    if ( *((_BYTE *)v15 + v45 - 1) == 13 )
    {
      v16 = --v45;
      v17 = Src;
      if ( v46 >= 0x10 )
        v17 = (_QWORD *)Src[0];
      *((_BYTE *)v17 + v16) = 0;
    }
    v39 = v33;
    v34 = 0LL;
    v35 = 0LL;
    sub_180020B7C(v33, (__int64)v52);
    v37 = 0LL;
    v38 = 0LL;
    sub_180020B7C(v36, (__int64)Src);
    if ( (unsigned __int8)sub_180105A94(v36, v33) )
      break;
    v40 = v36;
    v37 = 0LL;
    v38 = 0LL;
    sub_180020B7C(v36, (__int64)v50);
    v34 = 0LL;
    v35 = 0LL;
    sub_180020B7C(v33, (__int64)Src);
    sub_180105A94(v33, v36);
    v40 = v36;
    v37 = 0LL;
    v38 = 0LL;
    sub_180020B7C(v36, (__int64)v48);
    v34 = 0LL;
    v35 = 0LL;
    sub_180020B7C(v33, (__int64)Src);
    if ( !(unsigned __int8)sub_180105A94(v33, v36) )
    {
      if ( !v7 || !v47 )
        goto LABEL_32;
      memset(v56, 0, sizeof(v56));
      sub_1800B8594((__int64)v56, (__int64)Src, 1, 1);
      v21 = std::istream::operator>>(v56, &v43);
      v22 = std::istream::operator>>(v21, &v41);
      std::istream::operator>>(v22, &v42);
      v23 = v41;
      v24 = v42;
      v25 = *(_QWORD *)(a3 + 8);
      *(_DWORD *)(v11 + v25) = v43;
      *(_DWORD *)(v11 + v25 + 4) = v23;
      *(_DWORD *)(v11 + v25 + 8) = v24;
      *(_DWORD *)(v11 + v25 + 12) = 1065353216;
      ++v6;
      v11 += 16LL;
      sub_1800B8840((__int64)&v56[144]);
      v20 = &v56[144];
      if ( v6 == v5 )
        goto LABEL_35;
      goto LABEL_31;
    }
    v7 = 1;
LABEL_32:
    LOBYTE(v10) = 10;
    v26 = std::ios::widen(a2 + *(int *)(*(_QWORD *)a2 + 4LL), v10);
    v27 = sub_1800B836C(a2, Src, v26);
    if ( !(unsigned __int8)std::ios_base::operator bool(v27 + *(int *)(*(_QWORD *)v27 + 4LL)) )
      goto LABEL_36;
  }
  memset(v57, 0, sizeof(v57));
  sub_1800B8594((__int64)v57, (__int64)Src, 1, 1);
  v54[2] = 0LL;
  v55 = 15LL;
  LOBYTE(v54[0]) = 0;
  v18 = sub_1801029F0((__int64)v57, v54);
  std::istream::operator>>(v18, &v47);
  v5 = v47 * v47 * v47;
  sub_180105C94(a3 + 8, v5);
  if ( v55 < 0x10 )
  {
LABEL_25:
    sub_1800B8840((__int64)&v57[144]);
    v20 = &v57[144];
LABEL_31:
    std::ios::~ios<char,std::char_traits<char>>(v20);
    goto LABEL_32;
  }
  v19 = v54[0];
  if ( v55 + 1 < 0x1000 || (v19 = *(_QWORD *)(v54[0] - 8LL), (unsigned __int64)(v54[0] - v19 - 8) <= 0x1F) )
  {
    j_j__o_free(v19);
    goto LABEL_25;
  }
  o__invalid_parameter_noinfo_noreturn(v19, v55 + 40);
LABEL_35:
  std::ios::~ios<char,std::char_traits<char>>(v20);
LABEL_36:
  result = v47;
  *(_QWORD *)a3 = v47;
  if ( v46 >= 0x10 )
  {
    v29 = Src[0];
    if ( v46 + 1 >= 0x1000 )
    {
      v29 = *(_QWORD *)(Src[0] - 8LL);
      if ( (unsigned __int64)(Src[0] - v29 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v29, v46 + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v29);
  }
  v45 = 0LL;
  v46 = 15LL;
  LOBYTE(Src[0]) = 0;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v30 = v48[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v30 = *(_QWORD *)(v48[0] - 8LL);
      if ( (unsigned __int64)(v48[0] - v30 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v30, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v30);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v48[0]) = 0;
  if ( v51.m128i_i64[1] >= 0x10uLL )
  {
    v31 = v50[0];
    if ( (unsigned __int64)(v51.m128i_i64[1] + 1) >= 0x1000 )
    {
      v31 = *(_QWORD *)(v50[0] - 8LL);
      if ( (unsigned __int64)(v50[0] - v31 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v31, v51.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v31);
  }
  v51 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v50[0]) = 0;
  if ( v53 >= 0x10 )
  {
    v32 = v52[0];
    if ( v53 + 1 >= 0x1000 )
    {
      v32 = *(_QWORD *)(v52[0] - 8LL);
      if ( (unsigned __int64)(v52[0] - v32 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v32, v53 + 40);
        __debugbreak();
      }
    }
    return j_j__o_free(v32);
  }
  return result;
}
