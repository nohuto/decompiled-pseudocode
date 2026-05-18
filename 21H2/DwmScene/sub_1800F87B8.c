/*
 * XREFs of sub_1800F87B8 @ 0x1800F87B8
 * Callers:
 *     sub_1800A9A9C @ 0x1800A9A9C (sub_1800A9A9C.c)
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 *     sub_1800F86D8 @ 0x1800F86D8 (sub_1800F86D8.c)
 *     sub_1800F8F9C @ 0x1800F8F9C (sub_1800F8F9C.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180020E1C @ 0x180020E1C (sub_180020E1C.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_1800A1F98 @ 0x1800A1F98 (sub_1800A1F98.c)
 *     sub_1800A5EB0 @ 0x1800A5EB0 (sub_1800A5EB0.c)
 *     sub_1800A6D18 @ 0x1800A6D18 (sub_1800A6D18.c)
 *     sub_1800A6E2C @ 0x1800A6E2C (sub_1800A6E2C.c)
 *     sub_1800AA734 @ 0x1800AA734 (sub_1800AA734.c)
 *     sub_1800AA768 @ 0x1800AA768 (sub_1800AA768.c)
 *     sub_1800F85B0 @ 0x1800F85B0 (sub_1800F85B0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800F87B8(_QWORD *a1, _QWORD *a2, __int64 a3, const void **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  const void **v11; // rax
  __int64 v12; // rcx
  const void **v13; // rax
  const void *v14; // rdx
  __m128i *v15; // rax
  __m128i *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  char *v21; // rcx
  const void *v22; // rcx
  const void *v23; // rcx
  const void *v24; // rcx
  const void *v25; // rcx
  const void *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 result; // rax
  volatile signed __int32 *v30; // rdi
  signed __int32 v31; // eax
  bool v32; // zf
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  char *v41; // rcx
  unsigned __int64 v42; // rdx
  char *v43; // r8
  char *v44; // rcx
  __m128i v45; // [rsp+28h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-C8h]
  __m128i Src; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v48; // [rsp+58h] [rbp-A8h]
  _QWORD v49[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v50; // [rsp+78h] [rbp-88h]
  char *v51; // [rsp+88h] [rbp-78h] BYREF
  __m128i v52; // [rsp+98h] [rbp-68h]
  __int64 v53[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v54[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v55[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v56[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v57[4]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v58[3]; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v59; // [rsp+160h] [rbp+60h]
  _QWORD *v60; // [rsp+168h] [rbp+68h]
  const void **v61; // [rsp+170h] [rbp+70h]
  __int128 v62; // [rsp+178h] [rbp+78h] BYREF
  __int128 v63; // [rsp+188h] [rbp+88h] BYREF
  __int128 v64; // [rsp+198h] [rbp+98h]
  _QWORD v65[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  __m128i v66; // [rsp+1B8h] [rbp+B8h]
  __int128 v67; // [rsp+1C8h] [rbp+C8h] BYREF
  const void *v68[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  __m128i v69; // [rsp+1E8h] [rbp+E8h]
  const void *v70[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  __m128i v71; // [rsp+208h] [rbp+108h]
  const void *v72[2]; // [rsp+218h] [rbp+118h] BYREF
  __m128i v73; // [rsp+228h] [rbp+128h]
  const void *v74[2]; // [rsp+238h] [rbp+138h] BYREF
  __m128i v75; // [rsp+248h] [rbp+148h]
  const void *v76[2]; // [rsp+258h] [rbp+158h] BYREF
  __m128i v77; // [rsp+268h] [rbp+168h]

  v60 = a2;
  v61 = a4;
  if ( !a2[2] )
  {
    v8 = a1[2] + 496LL;
    v50 = 0LL;
    sub_180020B7C(v49, v8);
    if ( a2 != v49 )
      sub_180020E1C(a2, (__int64)v49);
    if ( *((_QWORD *)&v50 + 1) >= 0x10uLL )
    {
      v9 = v49[0];
      if ( (unsigned __int64)(*((_QWORD *)&v50 + 1) + 1LL) >= 0x1000 )
      {
        v9 = *(_QWORD *)(v49[0] - 8LL);
        if ( (unsigned __int64)(v49[0] - v9 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v9, *((_QWORD *)&v50 + 1) + 40LL);
          __debugbreak();
        }
      }
      j_j__o_free(v9);
    }
  }
  if ( !a4[2] )
  {
    v10 = sub_1800AA768(a1[2]);
    v11 = (const void **)sub_1800A6D18(v58, v10);
    if ( a4 != v11 )
      sub_180020E1C(a4, (__int64)v11);
    if ( v59 >= 0x10 )
    {
      v12 = v58[0];
      if ( v59 + 1 >= 0x1000 )
      {
        v12 = *(_QWORD *)(v58[0] - 8);
        if ( (unsigned __int64)(v58[0] - v12 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v12, v59 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v12);
    }
  }
  v67 = 0LL;
  sub_1800AA734(a1[2], &v67);
  v62 = 0LL;
  sub_1800A5EB0(v67, (__int64 *)&v62, a3);
  sub_1800A6E2C(v65, (_QWORD **)&v62);
  v13 = sub_180031B44((const void **)&v51, a2, byte_1801DBA2C);
  v14 = a4;
  if ( (unsigned __int64)a4[3] >= 0x10 )
    v14 = *a4;
  v15 = (__m128i *)std::string::append(v13, v14, (unsigned __int64)a4[2]);
  v48 = 0LL;
  Src = *v15;
  v48 = v15[1];
  v15[1].m128i_i64[0] = 0LL;
  v15[1].m128i_i64[1] = 15LL;
  v15->m128i_i8[0] = 0;
  v16 = (__m128i *)std::string::append(&Src, byte_1801DBA2C, 1uLL);
  si128 = 0LL;
  v45 = *v16;
  si128 = v16[1];
  v16[1].m128i_i64[0] = 0LL;
  v16[1].m128i_i64[1] = 15LL;
  v16->m128i_i8[0] = 0;
  v17 = v65;
  if ( v66.m128i_i64[1] >= 0x10uLL )
    v17 = (_QWORD *)v65[0];
  v18 = std::string::append(&v45, v17, v66.m128i_u64[0]);
  v63 = *(_OWORD *)v18;
  v64 = *((_OWORD *)v18 + 1);
  v18[2] = 0LL;
  v18[3] = 15LL;
  *(_BYTE *)v18 = 0;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v19 = v45.m128i_i64[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v19 = *(_QWORD *)(v45.m128i_i64[0] - 8);
      if ( (unsigned __int64)(v45.m128i_i64[0] - v19 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v19, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v19);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  v45.m128i_i8[0] = 0;
  if ( v48.m128i_i64[1] >= 0x10uLL )
  {
    v20 = Src.m128i_i64[0];
    if ( (unsigned __int64)(v48.m128i_i64[1] + 1) >= 0x1000 )
    {
      v20 = *(_QWORD *)(Src.m128i_i64[0] - 8);
      if ( (unsigned __int64)(Src.m128i_i64[0] - v20 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v20, v48.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v20);
  }
  v48 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  Src.m128i_i8[0] = 0;
  if ( v52.m128i_i64[1] >= 0x10uLL )
  {
    v21 = v51;
    if ( (unsigned __int64)(v52.m128i_i64[1] + 1) >= 0x1000 )
    {
      v21 = (char *)*((_QWORD *)v51 - 1);
      if ( (unsigned __int64)(v51 - v21 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v21, v52.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v21);
  }
  v52 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v51) = 0;
  sub_180031B44(v76, &v63, "/Vertex");
  sub_180031B44(v74, &v63, "/Pixel");
  sub_180031B44(v72, &v63, "/Geometry");
  sub_180031B44(v70, &v63, "/Domain");
  sub_180031B44(v68, &v63, "/Hull");
  v53[2] = 0LL;
  v53[3] = 0LL;
  sub_180020B7C(v53, (__int64)v76);
  sub_1800F85B0(a1, 1, v53);
  v54[2] = 0LL;
  v54[3] = 0LL;
  sub_180020B7C(v54, (__int64)v74);
  sub_1800F85B0(a1, 5, v54);
  v55[2] = 0LL;
  v55[3] = 0LL;
  sub_180020B7C(v55, (__int64)v72);
  sub_1800F85B0(a1, 4, v55);
  v56[2] = 0LL;
  v56[3] = 0LL;
  sub_180020B7C(v56, (__int64)v70);
  sub_1800F85B0(a1, 3, v56);
  v57[2] = 0LL;
  v57[3] = 0LL;
  sub_180020B7C(v57, (__int64)v68);
  sub_1800F85B0(a1, 2, v57);
  if ( v69.m128i_i64[1] >= 0x10uLL )
  {
    v22 = v68[0];
    if ( (unsigned __int64)(v69.m128i_i64[1] + 1) >= 0x1000 )
    {
      v22 = (const void *)*((_QWORD *)v68[0] - 1);
      if ( (unsigned __int64)((char *)v68[0] - (char *)v22 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v22, v69.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v22);
  }
  v69 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v68[0]) = 0;
  if ( v71.m128i_i64[1] >= 0x10uLL )
  {
    v23 = v70[0];
    if ( (unsigned __int64)(v71.m128i_i64[1] + 1) >= 0x1000 )
    {
      v23 = (const void *)*((_QWORD *)v70[0] - 1);
      if ( (unsigned __int64)((char *)v70[0] - (char *)v23 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v23, v71.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v23);
  }
  v71 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v70[0]) = 0;
  if ( v73.m128i_i64[1] >= 0x10uLL )
  {
    v24 = v72[0];
    if ( (unsigned __int64)(v73.m128i_i64[1] + 1) >= 0x1000 )
    {
      v24 = (const void *)*((_QWORD *)v72[0] - 1);
      if ( (unsigned __int64)((char *)v72[0] - (char *)v24 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v24, v73.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v24);
  }
  v73 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v72[0]) = 0;
  if ( v75.m128i_i64[1] >= 0x10uLL )
  {
    v25 = v74[0];
    if ( (unsigned __int64)(v75.m128i_i64[1] + 1) >= 0x1000 )
    {
      v25 = (const void *)*((_QWORD *)v74[0] - 1);
      if ( (unsigned __int64)((char *)v74[0] - (char *)v25 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v25, v75.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v25);
  }
  v75 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v74[0]) = 0;
  if ( v77.m128i_i64[1] >= 0x10uLL )
  {
    v26 = v76[0];
    if ( (unsigned __int64)(v77.m128i_i64[1] + 1) >= 0x1000 )
    {
      v26 = (const void *)*((_QWORD *)v76[0] - 1);
      if ( (unsigned __int64)((char *)v76[0] - (char *)v26 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v26, v77.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v26);
  }
  v77 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v76[0]) = 0;
  if ( *((_QWORD *)&v64 + 1) >= 0x10uLL )
  {
    v27 = v63;
    if ( (unsigned __int64)(*((_QWORD *)&v64 + 1) + 1LL) >= 0x1000 )
    {
      v27 = *(_QWORD *)(v63 - 8);
      if ( (unsigned __int64)(v63 - v27 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v27, *((_QWORD *)&v64 + 1) + 40LL);
        __debugbreak();
      }
    }
    j_j__o_free(v27);
  }
  if ( v66.m128i_i64[1] >= 0x10uLL )
  {
    v28 = v65[0];
    if ( (unsigned __int64)(v66.m128i_i64[1] + 1) >= 0x1000 )
    {
      v28 = *(_QWORD *)(v65[0] - 8LL);
      if ( (unsigned __int64)(v65[0] - v28 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v28, v66.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v28);
  }
  v66 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v65[0]) = 0;
  result = sub_1800A1F98((__int64 *)&v62, (__int64)&v62);
  v30 = (volatile signed __int32 *)*((_QWORD *)&v67 + 1);
  if ( *((_QWORD *)&v67 + 1) )
  {
    v31 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v67 + 1) + 8LL), 0xFFFFFFFF);
    v32 = v31 == 1;
    result = (unsigned int)(v31 - 1);
    if ( v32 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
      result = (unsigned int)_InterlockedDecrement(v30 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
    }
  }
  v33 = a2[3];
  if ( v33 >= 0x10 )
  {
    v34 = *a2;
    v35 = v33 + 1;
    if ( v35 >= 0x1000 )
    {
      v36 = v35 + 39;
      v37 = *(_QWORD *)(v34 - 8);
      v38 = v34 - v37;
      if ( (unsigned __int64)(v38 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v38, v36);
        goto LABEL_87;
      }
      v34 = v37;
    }
    result = j_j__o_free(v34);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  v39 = (unsigned __int64)a4[3];
  if ( v39 >= 0x10 )
  {
    v40 = v39 + 1;
    v41 = (char *)*a4;
    if ( v40 < 0x1000 )
    {
LABEL_84:
      result = j_j__o_free(v41);
      goto LABEL_85;
    }
    v42 = v40 + 39;
    v43 = (char *)*((_QWORD *)v41 - 1);
    v44 = (char *)(v41 - v43);
    if ( (unsigned __int64)(v44 - 8) <= 0x1F )
    {
      v41 = v43;
      goto LABEL_84;
    }
LABEL_87:
    o__invalid_parameter_noinfo_noreturn(v44, v42);
    JUMPOUT(0x1800F8F9BLL);
  }
LABEL_85:
  a4[2] = 0LL;
  a4[3] = (const void *)15;
  *(_BYTE *)a4 = 0;
  return result;
}
