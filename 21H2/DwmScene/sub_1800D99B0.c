/*
 * XREFs of sub_1800D99B0 @ 0x1800D99B0
 * Callers:
 *     sub_1800D90D8 @ 0x1800D90D8 (sub_1800D90D8.c)
 * Callees:
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180020E1C @ 0x180020E1C (sub_180020E1C.c)
 *     sub_18002C9B0 @ 0x18002C9B0 (sub_18002C9B0.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     sub_1800995B8 @ 0x1800995B8 (sub_1800995B8.c)
 *     sub_1800B970C @ 0x1800B970C (sub_1800B970C.c)
 *     sub_1800D27A4 @ 0x1800D27A4 (sub_1800D27A4.c)
 *     sub_1800D7FD4 @ 0x1800D7FD4 (sub_1800D7FD4.c)
 *     sub_1800D88D4 @ 0x1800D88D4 (sub_1800D88D4.c)
 *     sub_1800D8B64 @ 0x1800D8B64 (sub_1800D8B64.c)
 *     sub_1800D8D58 @ 0x1800D8D58 (sub_1800D8D58.c)
 *     sub_1800D8E30 @ 0x1800D8E30 (sub_1800D8E30.c)
 *     sub_1800D9008 @ 0x1800D9008 (sub_1800D9008.c)
 *     sub_1800D909C @ 0x1800D909C (sub_1800D909C.c)
 *     sub_1800DA1CC @ 0x1800DA1CC (sub_1800DA1CC.c)
 *     sub_1800DA6C4 @ 0x1800DA6C4 (sub_1800DA6C4.c)
 *     sub_1800DA774 @ 0x1800DA774 (sub_1800DA774.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     snprintf @ 0x1801251F0 (snprintf.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall sub_1800D99B0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, float a6, float *a7)
{
  float v7; // xmm10_4
  __int128 v8; // xmm13
  _QWORD *v11; // rax
  __int64 *v12; // rdi
  __int64 *v13; // rsi
  __int64 *v14; // r14
  __int64 *v15; // rbx
  __int64 *v16; // rax
  char *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  const void *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 *v31; // rcx
  __int64 ***v32; // rax
  unsigned __int64 v33; // r8
  __int64 **v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  float v37; // xmm6_4
  float v38; // xmm0_4
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 *v42; // rcx
  double v43; // xmm8_8
  double v44; // xmm9_8
  double *v45; // rax
  int v46; // ecx
  __int128 v47; // xmm2
  __int128 v48; // xmm1
  double v49; // xmm3_8
  __int128 v50; // xmm0
  unsigned __int64 *v51; // rdx
  __int64 v52; // r9
  __int128 v53; // xmm0
  unsigned __int64 *v54; // rdx
  __int64 v55; // r9
  double v56; // xmm3_8
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 *v65; // rbx
  __int64 *v66; // rcx
  char v68; // [rsp+48h] [rbp-C0h]
  __int128 v69; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v70[3]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v71; // [rsp+80h] [rbp-88h]
  const void *v72[3]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v73; // [rsp+A0h] [rbp-68h]
  char v74[16]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 Src[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v77; // [rsp+D0h] [rbp-38h]
  __int128 v78; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v79; // [rsp+E8h] [rbp-20h]
  __int64 *v80; // [rsp+F8h] [rbp-10h]
  __int128 v81; // [rsp+100h] [rbp-8h] BYREF
  void *v82[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v83; // [rsp+120h] [rbp+18h]
  __int64 v84[2]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v85; // [rsp+138h] [rbp+30h]
  unsigned __int64 v86; // [rsp+140h] [rbp+38h]
  unsigned __int64 v87; // [rsp+148h] [rbp+40h]
  char Buffer[8]; // [rsp+158h] [rbp+50h] BYREF
  unsigned __int64 v89; // [rsp+170h] [rbp+68h]

  *(_BYTE *)a1 = 1;
  *(_QWORD *)(a1 + 8) = a3;
  *(_OWORD *)v82 = 0LL;
  v83 = 0LL;
  sub_1800D8D58(v82, a4);
  v81 = 0LL;
  v11 = operator new(0x30uLL);
  *v11 = v11;
  v11[1] = v11;
  v11[2] = v11;
  *((_WORD *)v11 + 12) = 257;
  *(_QWORD *)&v81 = v11;
  v12 = (__int64 *)v82[0];
  v13 = (__int64 *)v82[1];
  v14 = 0LL;
  if ( v82[0] != v82[1] )
  {
    do
    {
      v76 = 0LL;
      v77 = 0LL;
      sub_180020B7C(Src, (__int64)v12);
      sub_1800D8E30(v84, Src);
      v15 = (__int64 *)v81;
      v16 = *(__int64 **)(v81 + 8);
      if ( *((_BYTE *)v16 + 25) )
        goto LABEL_9;
      do
      {
        if ( v16[4] >= v87 )
        {
          v15 = v16;
          v16 = (__int64 *)*v16;
        }
        else
        {
          v16 = (__int64 *)v16[2];
        }
      }
      while ( !*((_BYTE *)v16 + 25) );
      if ( v15 == (__int64 *)v81 || v87 < v15[4] )
LABEL_9:
        v15 = (__int64 *)v81;
      if ( v15 == (__int64 *)v81 )
      {
        *(_QWORD *)&v69 = v87;
        DWORD2(v69) = 1;
        sub_1800D8B64((__int64 **)&v81, (__int64)v74, (__int64)&v69);
      }
      else
      {
        sub_1800D7FD4((__int64 *)Buffer, *((_DWORD *)v15 + 10));
        v17 = (char *)sub_180031B44(v72, Src, "#");
        v18 = (__int64 *)sub_1800995B8((__int64)v70, v17, Buffer);
        if ( Src != v18 )
          sub_180020E1C(Src, (__int64)v18);
        if ( v71 >= 0x10 )
        {
          v19 = v70[0];
          if ( v71 + 1 >= 0x1000 )
          {
            v19 = *(_QWORD *)(v70[0] - 8LL);
            if ( (unsigned __int64)(v70[0] - v19 - 8) > 0x1F )
            {
              o__invalid_parameter_noinfo_noreturn(v19, v71 + 40);
LABEL_49:
              o__invalid_parameter_noinfo_noreturn(v20, v21);
LABEL_50:
              o__invalid_parameter_noinfo_noreturn(v22, v23);
LABEL_51:
              o__invalid_parameter_noinfo_noreturn(v24, v25);
LABEL_52:
              o__invalid_parameter_noinfo_noreturn(v26, v27);
              goto LABEL_53;
            }
          }
          j_j__o_free(v19);
        }
        v70[2] = 0LL;
        v71 = 15LL;
        LOBYTE(v70[0]) = 0;
        if ( v73 >= 0x10 )
        {
          v20 = v72[0];
          if ( v73 + 1 >= 0x1000 )
          {
            v21 = v73 + 40;
            v20 = (const void *)*((_QWORD *)v72[0] - 1);
            if ( (unsigned __int64)((char *)v72[0] - (char *)v20 - 8) > 0x1F )
              goto LABEL_49;
          }
          j_j__o_free(v20);
        }
        v72[2] = 0LL;
        v73 = 15LL;
        LOBYTE(v72[0]) = 0;
        if ( v89 >= 0x10 )
        {
          v22 = *(_QWORD *)Buffer;
          if ( v89 + 1 >= 0x1000 )
          {
            v23 = v89 + 40;
            v22 = *(_QWORD *)(*(_QWORD *)Buffer - 8LL);
            if ( (unsigned __int64)(*(_QWORD *)Buffer - v22 - 8) > 0x1F )
              goto LABEL_50;
          }
          j_j__o_free(v22);
        }
        ++*((_DWORD *)v15 + 10);
      }
      sub_180012F14(v12, Src);
      if ( v86 >= 0x10 )
      {
        v24 = v84[0];
        if ( v86 + 1 >= 0x1000 )
        {
          v25 = v86 + 40;
          v24 = *(_QWORD *)(v84[0] - 8);
          if ( (unsigned __int64)(v84[0] - v24 - 8) > 0x1F )
            goto LABEL_51;
        }
        j_j__o_free(v24);
      }
      v85 = 0LL;
      v86 = 15LL;
      LOBYTE(v84[0]) = 0;
      if ( v77 >= 0x10 )
      {
        v26 = Src[0];
        if ( v77 + 1 >= 0x1000 )
        {
          v27 = v77 + 40;
          v26 = *(_QWORD *)(Src[0] - 8);
          if ( (unsigned __int64)(Src[0] - v26 - 8) > 0x1F )
            goto LABEL_52;
        }
        j_j__o_free(v26);
      }
      v12 += 6;
    }
    while ( v12 != v13 );
    v13 = (__int64 *)v82[1];
    v12 = (__int64 *)v82[0];
  }
  sub_1800D88D4((unsigned __int64)v12, (unsigned __int64)v13, ((char *)v13 - (char *)v12) / 48, v68);
  v69 = xmmword_180214CF0;
  v7 = a6;
  (*(void (__fastcall **)(__int64, __int64, __int64, __int128 *, const char *))(*(_QWORD *)a2 + 96LL))(
    a2,
    v28,
    v29,
    &v69,
    "D      S      E     [DMin , DMax ]");
  v8 = xmmword_180214CF0;
  v78 = 0LL;
  v79 = 0uLL;
  v80 = 0LL;
  v30 = operator new(0x10uLL);
  v30[1] = 0LL;
  *(_QWORD *)&v78 = v30;
  *v30 = &v78;
  v13 = (__int64 *)v82[0];
  v14 = (__int64 *)v82[1];
  while ( v13 != v14 )
  {
    v15 = v80;
    if ( v80 )
    {
      v31 = v80;
      v12 = (__int64 *)*((_QWORD *)&v79 + 1);
      do
      {
        v32 = 0LL;
        if ( (_QWORD)v78 && *(_QWORD *)v78 )
          v32 = **(__int64 *****)v78;
        v33 = (unsigned __int64)v12 + (_QWORD)v31 - 1;
        if ( v32 && (v34 = *v32) != 0LL && *v34 )
          v35 = **v34;
        else
LABEL_53:
          v35 = 0LL;
        if ( sub_1800D909C((__int64)v13, *(_QWORD *)(*(_QWORD *)(v35 + 8) + 8 * (v33 & (*(_QWORD *)(v35 + 16) - 1LL)))) )
          break;
        sub_18006B3C4(
          *(__int64 **)(*((_QWORD *)&v78 + 1) + 8 * ((__int128)(__int64 *)((char *)v15 + (_QWORD)v12 - 1) & (v79 - 1))),
          0);
        v15 = (__int64 *)((char *)v80 - 1);
        v31 = v15;
        v80 = (__int64 *)((char *)v80 - 1);
        v12 = (__int64 *)(*((_QWORD *)&v79 + 1) & -(__int64)(v15 != 0LL));
        *((_QWORD *)&v79 + 1) = v12;
      }
      while ( v15 );
    }
    sub_1800DA6C4(&v78, v13);
    v36 = (unsigned __int64)v80 - 1;
    if ( (__int64)v80 - 1 < 0 )
      v37 = (float)(int)(v36 & 1 | (v36 >> 1)) + (float)(int)(v36 & 1 | (v36 >> 1));
    else
      v37 = (float)(int)v36;
    v76 = 0LL;
    v77 = 15LL;
    LOBYTE(Src[0]) = 0;
    v38 = 40.0 - (float)(v37 + v37);
    v39 = 0LL;
    if ( v38 >= 9.223372e18 )
    {
      v38 = v38 - 9.223372e18;
      if ( v38 < 9.223372e18 )
        v39 = 0x8000000000000000uLL;
    }
    sub_1800B970C(Src, v13, 0LL, v39 + (unsigned int)(int)v38);
    v69 = v8;
    v42 = Src;
    if ( v77 >= 0x10 )
      v42 = (__int64 *)Src[0];
    (*(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int64 *))(*(_QWORD *)a2 + 96LL))(
      a2,
      v40,
      v41,
      &v69,
      v42);
    v43 = *((double *)v13 + 4);
    v44 = *((double *)v13 + 5);
    sub_1800D8E30(v84, v13);
    v45 = (double *)sub_1800DA1CC(a1, v84);
    v46 = *((_DWORD *)v45 + 41);
    if ( v46 )
    {
      *(double *)&v48 = *v45;
      *(double *)&v47 = *v45;
      if ( (unsigned int)v46 > 1 )
      {
        v50 = *(unsigned __int64 *)v45;
        v51 = (unsigned __int64 *)(v45 + 1);
        v52 = (unsigned int)(v46 - 1);
        do
        {
          v47 = *v51;
          if ( *(double *)&v47 <= *(double *)&v50 )
            v47 = v50;
          ++v51;
          v50 = v47;
          --v52;
        }
        while ( v52 );
        v53 = *(unsigned __int64 *)v45;
        v54 = (unsigned __int64 *)(v45 + 1);
        v55 = (unsigned int)(v46 - 1);
        do
        {
          v48 = *v54;
          if ( *(double *)&v53 <= *(double *)&v48 )
            v48 = v53;
          ++v54;
          v53 = v48;
          --v55;
        }
        while ( v55 );
      }
      v56 = 0.0;
      v57 = *((unsigned int *)v45 + 41);
      do
      {
        v56 = v56 + *v45++;
        --v57;
      }
      while ( v57 );
      v49 = v56 / (double)v46;
    }
    else
    {
      *(_QWORD *)&v47 = 0LL;
      *(_QWORD *)&v48 = 0LL;
      v49 = 0.0;
    }
    snprintf(Buffer, 0x40uLL, "%5.2f  %5.2f  %5.2f [%5.2f, %5.2f]", v49, v43, v44, *(double *)&v48, *(double *)&v47);
    v69 = v8;
    (*(void (__fastcall **)(__int64, __int64, __int64, __int128 *, char *))(*(_QWORD *)a2 + 96LL))(
      a2,
      v58,
      v59,
      &v69,
      Buffer);
    v7 = v7 + 1.0;
    if ( v86 >= 0x10 )
    {
      v60 = v84[0];
      if ( v86 + 1 >= 0x1000 )
      {
        v60 = *(_QWORD *)(v84[0] - 8);
        if ( (unsigned __int64)(v84[0] - v60 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v60, v86 + 40);
LABEL_88:
          o__invalid_parameter_noinfo_noreturn(v61, v62);
          __debugbreak();
        }
      }
      j_j__o_free(v60);
    }
    v85 = 0LL;
    v86 = 15LL;
    LOBYTE(v84[0]) = 0;
    if ( v77 >= 0x10 )
    {
      v61 = Src[0];
      if ( v77 + 1 >= 0x1000 )
      {
        v62 = v77 + 40;
        v61 = *(_QWORD *)(Src[0] - 8);
        if ( (unsigned __int64)(Src[0] - v61 - 8) > 0x1F )
          goto LABEL_88;
      }
      j_j__o_free(v61);
    }
    v13 += 6;
  }
  *a7 = v7;
  sub_1800DA774(&v78);
  v63 = v78;
  *(_QWORD *)&v78 = 0LL;
  j_j__o_free(v63);
  v64 = v81;
  v65 = *(__int64 **)(v81 + 8);
  if ( !*((_BYTE *)v65 + 25) )
  {
    do
    {
      sub_18002C9B0((__int64)&v81, (__int64)&v81, (__int64 *)v65[2]);
      v66 = v65;
      v65 = (__int64 *)*v65;
      j_j__o_free(v66);
    }
    while ( !*((_BYTE *)v65 + 25) );
    v64 = v81;
  }
  j_j__o_free(v64);
  sub_1800D27A4((__int64 **)v82);
  return sub_1800D9008(a1);
}
