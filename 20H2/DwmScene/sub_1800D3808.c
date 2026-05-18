/*
 * XREFs of sub_1800D3808 @ 0x1800D3808
 * Callers:
 *     sub_1800670F0 @ 0x1800670F0 (sub_1800670F0.c)
 * Callees:
 *     sub_180012E34 @ 0x180012E34 (sub_180012E34.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800A1C7C @ 0x1800A1C7C (sub_1800A1C7C.c)
 *     sub_1800CCED4 @ 0x1800CCED4 (sub_1800CCED4.c)
 *     sub_1800D1F0C @ 0x1800D1F0C (sub_1800D1F0C.c)
 *     sub_1800D3560 @ 0x1800D3560 (sub_1800D3560.c)
 *     sub_1800D3738 @ 0x1800D3738 (sub_1800D3738.c)
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 *     sub_1800D48FC @ 0x1800D48FC (sub_1800D48FC.c)
 *     atexit @ 0x18011E554 (atexit.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 *     sprintf_s @ 0x18011F08C (sprintf_s.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall sub_1800D3808(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 ***v7; // r12
  __m128d v8; // xmm10
  double v9; // xmm6_8
  __int64 v10; // rbx
  unsigned __int64 *v11; // rbx
  unsigned __int64 *v12; // rdi
  unsigned __int64 *v13; // rsi
  __m128 v14; // xmm9
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  __int128 v18; // xmm2
  __int128 v19; // xmm1
  double v20; // xmm3_8
  __int128 v21; // xmm0
  unsigned __int64 *v22; // rdx
  __int64 v23; // r8
  __int128 v24; // xmm0
  unsigned __int64 *v25; // rdx
  __int64 v26; // r8
  double v27; // xmm3_8
  double *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // ecx
  __int128 v33; // xmm2
  __int128 v34; // xmm1
  double v35; // xmm3_8
  __int128 v36; // xmm0
  unsigned __int64 *v37; // rdx
  __int64 v38; // r8
  __int128 v39; // xmm0
  unsigned __int64 *v40; // rdx
  __int64 v41; // r8
  double v42; // xmm3_8
  double *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  int v49; // ecx
  __int128 v50; // xmm2
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  unsigned __int64 *v53; // rdx
  __int64 v54; // r8
  __int128 v55; // xmm0
  unsigned __int64 *v56; // rdx
  __int64 v57; // r8
  double *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 **v64; // rdi
  __int64 *v65; // rbx
  __int64 v66; // rsi
  __int64 v67; // rcx
  __int64 **v68; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  _QWORD v75[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v76; // [rsp+58h] [rbp-B0h]
  __int128 v77; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+70h] [rbp-98h]
  unsigned __int64 v79; // [rsp+78h] [rbp-90h]
  __int64 v80[3]; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v81; // [rsp+98h] [rbp-70h]
  __m128d v82; // [rsp+A0h] [rbp-68h]
  char Buffer[256]; // [rsp+B8h] [rbp-50h] BYREF

  v76 = a1;
  v5 = a3[16];
  v6 = a1 + 200;
  *(_BYTE *)(a1 + 200) = 1;
  *(_QWORD *)(a1 + 208) = v5;
  v75[1] = 0LL;
  v7 = (__int64 ***)(a3 + 17);
  sub_1800A1C7C(a3 + 17, &v75[1], (size_t *)Buf2);
  v8 = _mm_unpacklo_pd((__m128d)(unsigned __int64)a3[1], (__m128d)(unsigned __int64)a3[1]);
  v9 = 0.0;
  v10 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_18021A3A8 > *(_DWORD *)(v10 + 44) )
  {
    Init_thread_header(&dword_18021A3A8);
    if ( dword_18021A3A8 == -1 )
    {
      v79 = 15LL;
      v78 = 5LL;
      strcpy((char *)&v77, "#main");
      sub_1800D3560(&qword_18021A380, (__int64 *)&v77);
      if ( v79 >= 0x10 )
      {
        v72 = v77;
        if ( v79 + 1 >= 0x1000 )
        {
          v72 = *(_QWORD *)(v77 - 8);
          if ( (unsigned __int64)(v77 - v72 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v72, v79 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v72);
      }
      atexit(sub_180131370);
      Init_thread_footer(&dword_18021A3A8);
    }
  }
  if ( dword_18021A3D8 > *(_DWORD *)(v10 + 44) )
  {
    Init_thread_header(&dword_18021A3D8);
    if ( dword_18021A3D8 == -1 )
    {
      v79 = 15LL;
      v78 = 5LL;
      strcpy((char *)&v77, "#post");
      sub_1800D3560(&qword_18021A3B0, (__int64 *)&v77);
      if ( v79 >= 0x10 )
      {
        v73 = v77;
        if ( v79 + 1 >= 0x1000 )
        {
          v73 = *(_QWORD *)(v77 - 8);
          if ( (unsigned __int64)(v77 - v73 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v73, v79 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v73);
      }
      atexit(sub_1801313E0);
      Init_thread_footer(&dword_18021A3D8);
    }
  }
  if ( dword_18021A408 > *(_DWORD *)(v10 + 44) )
  {
    Init_thread_header(&dword_18021A408);
    if ( dword_18021A408 == -1 )
    {
      v79 = 15LL;
      v78 = 8LL;
      strcpy((char *)&v77, "#present");
      sub_1800D3560(&qword_18021A3E0, (__int64 *)&v77);
      if ( v79 >= 0x10 )
      {
        v74 = v77;
        if ( v79 + 1 >= 0x1000 )
        {
          v74 = *(_QWORD *)(v77 - 8);
          if ( (unsigned __int64)(v77 - v74 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v74, v79 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v74);
      }
LABEL_67:
      atexit(sub_180131450);
      Init_thread_footer(&dword_18021A408);
    }
  }
  v11 = (unsigned __int64 *)sub_1800D48FC(v6, &qword_18021A380);
  v12 = (unsigned __int64 *)sub_1800D48FC(v6, &qword_18021A3B0);
  v13 = (unsigned __int64 *)sub_1800D48FC(v6, &qword_18021A3E0);
  v14 = _mm_mul_ps(
          _mm_add_ps(
            _mm_cvtepi32_ps(_mm_xor_si128(_mm_load_si128((const __m128i *)&xmmword_180139B40), (__m128i)xmmword_180139B30)),
            (__m128)xmmword_180139B50),
          (__m128)xmmword_180139B60);
  *(__m128 *)&v75[1] = v14;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, void *))(*(_QWORD *)a2 + 96LL))(
    a2,
    v15,
    v16,
    &v75[1],
    &unk_1801D347C);
  v17 = *((_DWORD *)v11 + 41);
  if ( v17 )
  {
    *(_QWORD *)&v19 = *v11;
    *(_QWORD *)&v18 = *v11;
    if ( (unsigned int)v17 > 1 )
    {
      v21 = *v11;
      v22 = v11 + 1;
      v23 = (unsigned int)(v17 - 1);
      do
      {
        v18 = *v22;
        if ( *(double *)&v18 <= *(double *)&v21 )
          v18 = v21;
        ++v22;
        v21 = v18;
        --v23;
      }
      while ( v23 );
      v24 = *v11;
      v25 = v11 + 1;
      v26 = (unsigned int)(v17 - 1);
      do
      {
        v19 = *v25;
        if ( *(double *)&v24 <= *(double *)&v19 )
          v19 = v24;
        ++v25;
        v24 = v19;
        --v26;
      }
      while ( v26 );
    }
    v27 = v9;
    v28 = (double *)v11;
    v29 = *((unsigned int *)v11 + 41);
    do
    {
      v27 = v27 + *v28++;
      --v29;
    }
    while ( v29 );
    v20 = v27 / (double)v17;
  }
  else
  {
    *(_QWORD *)&v18 = 0LL;
    *(_QWORD *)&v19 = 0LL;
    v20 = 0.0;
  }
  sprintf_s(Buffer, 0x100uLL, "Main:    %5.2f [%5.2f, %5.2f] ms", v20, *(double *)&v19, *(double *)&v18);
  *(__m128 *)&v75[1] = v14;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, char *))(*(_QWORD *)a2 + 96LL))(
    a2,
    v30,
    v31,
    &v75[1],
    Buffer);
  v32 = *((_DWORD *)v12 + 41);
  if ( v32 )
  {
    *(_QWORD *)&v34 = *v12;
    *(_QWORD *)&v33 = *v12;
    if ( (unsigned int)v32 > 1 )
    {
      v36 = *v12;
      v37 = v12 + 1;
      v38 = (unsigned int)(v32 - 1);
      do
      {
        v33 = *v37;
        if ( *(double *)&v33 <= *(double *)&v36 )
          v33 = v36;
        ++v37;
        v36 = v33;
        --v38;
      }
      while ( v38 );
      v39 = *v12;
      v40 = v12 + 1;
      v41 = (unsigned int)(v32 - 1);
      do
      {
        v34 = *v40;
        if ( *(double *)&v39 <= *(double *)&v34 )
          v34 = v39;
        ++v40;
        v39 = v34;
        --v41;
      }
      while ( v41 );
    }
    v42 = v9;
    v43 = (double *)v12;
    v44 = *((unsigned int *)v12 + 41);
    do
    {
      v42 = v42 + *v43++;
      --v44;
    }
    while ( v44 );
    v35 = v42 / (double)v32;
  }
  else
  {
    *(double *)&v33 = v9;
    *(double *)&v34 = v9;
    v35 = v9;
  }
  sprintf_s(Buffer, 0x100uLL, "Post:    %5.2f [%5.2f, %5.2f] ms", v35, *(double *)&v34, *(double *)&v33);
  *(__m128 *)&v75[1] = v14;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, char *))(*(_QWORD *)a2 + 96LL))(
    a2,
    v45,
    v46,
    &v75[1],
    Buffer);
  *(__m128 *)&v75[1] = v14;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, const char *))(*(_QWORD *)a2 + 96LL))(
    a2,
    v47,
    v48,
    &v75[1],
    "         ^ includes swapchain access sync");
  v49 = *((_DWORD *)v13 + 41);
  if ( v49 )
  {
    *(_QWORD *)&v51 = *v13;
    *(_QWORD *)&v50 = *v13;
    if ( (unsigned int)v49 > 1 )
    {
      v52 = *v13;
      v53 = v13 + 1;
      v54 = (unsigned int)(v49 - 1);
      do
      {
        v50 = *v53;
        if ( *(double *)&v50 <= *(double *)&v52 )
          v50 = v52;
        ++v53;
        v52 = v50;
        --v54;
      }
      while ( v54 );
      v55 = *v13;
      v56 = v13 + 1;
      v57 = (unsigned int)(v49 - 1);
      do
      {
        v51 = *v56;
        if ( *(double *)&v55 <= *(double *)&v51 )
          v51 = v55;
        ++v56;
        v55 = v51;
        --v57;
      }
      while ( v57 );
    }
    v58 = (double *)v13;
    v59 = *((unsigned int *)v13 + 41);
    do
    {
      v9 = v9 + *v58++;
      --v59;
    }
    while ( v59 );
    v9 = v9 / (double)v49;
  }
  else
  {
    *(double *)&v50 = v9;
    *(double *)&v51 = v9;
  }
  sprintf_s(Buffer, 0x100uLL, "Present: %5.2f [%5.2f, %5.2f] ms", v9, *(double *)&v51, *(double *)&v50);
  *(__m128 *)&v75[1] = v14;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, char *))(*(_QWORD *)a2 + 96LL))(
    a2,
    v60,
    v61,
    &v75[1],
    Buffer);
  *(__m128 *)&v75[1] = v14;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, const char *))(*(_QWORD *)a2 + 96LL))(
    a2,
    v62,
    v63,
    &v75[1],
    "Markers:");
  *(_QWORD *)&v9 = 1090519040LL;
  LODWORD(v75[1]) = 1090519040;
  v78 = 0LL;
  v77 = 0LL;
  v64 = *v7;
  v65 = **v7;
  if ( v65 != (__int64 *)*v7 )
  {
    v7 = 0LL;
    do
    {
      if ( *((_DWORD *)v65 + 16) == 1 )
      {
        v80[2] = 0LL;
        v81 = 15LL;
        LOBYTE(v80[0]) = 0;
        sub_180012E34(v80, v65 + 4);
        v82 = _mm_sub_pd(*(__m128d *)(v65 + 9), v8);
        v66 = *((_QWORD *)&v77 + 1);
        if ( v78 == *((_QWORD *)&v77 + 1) )
        {
          sub_1800D1F0C(&v77, *((_QWORD **)&v77 + 1), (__int64)v80);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)&v77 + 1) + 16LL) = 0LL;
          *(_QWORD *)(v66 + 24) = 0LL;
          sub_18001CDF8((_QWORD *)v66, (__int64)v80);
          *(__m128d *)(v66 + 32) = v82;
          *((_QWORD *)&v77 + 1) += 48LL;
        }
        if ( v81 >= 0x10 )
        {
          v67 = v80[0];
          if ( v81 + 1 >= 0x1000 )
          {
            v67 = *(_QWORD *)(v80[0] - 8);
            if ( (unsigned __int64)(v80[0] - v67 - 8) > 0x1F )
            {
              o__invalid_parameter_noinfo_noreturn(v67, v81 + 40);
              goto LABEL_67;
            }
          }
          j_j__o_free(v67);
        }
      }
      v68 = (__int64 **)v65[2];
      if ( *((_BYTE *)v68 + 25) )
      {
        for ( i = (__int64 *)v65[1]; !*((_BYTE *)i + 25) && v65 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v65 = i;
        v65 = i;
      }
      else
      {
        v65 = (__int64 *)v65[2];
        for ( j = *v68; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v65 = j;
      }
    }
    while ( v65 != (__int64 *)v64 );
  }
  sub_1800D40E0(v76, a2, a3[16], (unsigned int)&v77, 1082130432, 1090519040, (__int64)&v75[1]);
  sub_1800CCED4((__int64 **)&v77);
  return sub_1800D3738(v6);
}
