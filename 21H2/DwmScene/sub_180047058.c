/*
 * XREFs of sub_180047058 @ 0x180047058
 * Callers:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180046708 @ 0x180046708 (sub_180046708.c)
 *     sub_180047548 @ 0x180047548 (sub_180047548.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180047058(__int64 a1, __int64 **a2)
{
  __int64 *v4; // r14
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rdx
  const void **v9; // rax
  const void *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int128 v17; // [rsp+20h] [rbp-29h] BYREF
  __int128 v18; // [rsp+30h] [rbp-19h]
  __int64 v19; // [rsp+40h] [rbp-9h]
  __int128 v20; // [rsp+48h] [rbp-1h] BYREF
  __int64 v21; // [rsp+58h] [rbp+Fh]
  _QWORD Src[2]; // [rsp+60h] [rbp+17h] BYREF
  __m128i si128; // [rsp+70h] [rbp+27h]

  v19 = a1;
  v21 = 0LL;
  v20 = 0LL;
  v4 = a2[1];
  v5 = *a2;
  v6 = ((char *)v4 - (char *)*a2) / 48;
  if ( v6 )
  {
    if ( v6 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    sub_180047548(&v20);
    v5 = *a2;
    v4 = a2[1];
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(Src[0]) = 0;
  while ( v5 != v4 )
  {
    v7 = v5;
    if ( (unsigned __int64)v5[3] >= 0x10 )
      v7 = (__int64 *)*v5;
    *(_QWORD *)&v17 = v7;
    DWORD2(v17) = *((_DWORD *)v5 + 8);
    HIDWORD(v17) = dword_1801443E0[6 * *((unsigned __int8 *)v5 + 40) - 6 + *((int *)v5 + 9)];
    v18 = *((unsigned int *)v5 + 11);
    v8 = *((_QWORD *)&v20 + 1);
    if ( v21 == *((_QWORD *)&v20 + 1) )
    {
      sub_180046708((const void **)&v20, *((_BYTE **)&v20 + 1), &v17);
    }
    else
    {
      **((_OWORD **)&v20 + 1) = v17;
      *(_OWORD *)(v8 + 16) = v18;
      *((_QWORD *)&v20 + 1) += 32LL;
    }
    v9 = sub_180031B44((const void **)&v17, v5, " ");
    v10 = v9;
    if ( (unsigned __int64)v9[3] >= 0x10 )
      v10 = *v9;
    std::string::append(Src, v10, (unsigned __int64)v9[2]);
    if ( *((_QWORD *)&v18 + 1) >= 0x10uLL )
    {
      v11 = v17;
      if ( (unsigned __int64)(*((_QWORD *)&v18 + 1) + 1LL) >= 0x1000 )
      {
        v11 = *(_QWORD *)(v17 - 8);
        if ( (unsigned __int64)(v17 - v11 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v11, *((_QWORD *)&v18 + 1) + 40LL);
          __debugbreak();
        }
      }
      j_j__o_free(v11);
    }
    v5 += 6;
  }
  *(_OWORD *)a1 = v20;
  *(_QWORD *)(a1 + 16) = v21;
  v20 = 0LL;
  v21 = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_180020B7C((_QWORD *)(a1 + 24), (__int64)Src);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = Src[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(Src[0] - 8LL);
      if ( (unsigned __int64)(Src[0] - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(Src[0]) = 0;
  v13 = v20;
  if ( (_QWORD)v20 )
  {
    v14 = (v21 - v20) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v14 >= 0x1000 )
    {
      v15 = v14 + 39;
      v13 = *(_QWORD *)(v20 - 8);
      if ( (unsigned __int64)(v20 - v13 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v13, v15);
        __debugbreak();
      }
    }
    j_j__o_free(v13);
  }
  return a1;
}
