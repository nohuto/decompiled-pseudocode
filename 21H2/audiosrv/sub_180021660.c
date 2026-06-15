/*
 * XREFs of sub_180021660 @ 0x180021660
 * Callers:
 *     sub_180037EF0 @ 0x180037EF0 (sub_180037EF0.c)
 * Callees:
 *     sub_18000E6E0 @ 0x18000E6E0 (sub_18000E6E0.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800233E0 @ 0x1800233E0 (sub_1800233E0.c)
 *     sub_180032210 @ 0x180032210 (sub_180032210.c)
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 *     sub_18004B060 @ 0x18004B060 (sub_18004B060.c)
 *     sub_18004BC54 @ 0x18004BC54 (sub_18004BC54.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052550 @ 0x180052550 (sub_180052550.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069110 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_1800C2A48 @ 0x1800C2A48 (sub_1800C2A48.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 *     sub_18011B780 @ 0x18011B780 (sub_18011B780.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180021660(__int64 a1, int a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v4; // r12
  __int64 *v5; // r14
  int v6; // eax
  int v8; // ebx
  BOOL v9; // r14d
  BOOL v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r14
  struct _RTL_CRITICAL_SECTION *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r12
  unsigned int v16; // r13d
  unsigned int v17; // r13d
  __int64 v18; // r13
  volatile signed __int32 **v19; // rsi
  volatile signed __int32 *v20; // r14
  int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r8
  __int64 v25; // rax
  volatile signed __int32 **v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r15
  volatile signed __int32 **v29; // r12
  struct _RTL_CRITICAL_SECTION *v30; // rcx
  __int64 v31; // rax
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  __int64 v35; // rax
  __int128 *v36; // rax
  __int128 v37; // xmm6
  int v38; // esi
  __int64 v39; // rcx
  __int64 v40; // r9
  int v41; // edx
  int v42; // r8d
  _QWORD *v43; // rcx
  __int64 v44; // rax
  int v45; // r8d
  _QWORD *v46; // rcx
  __int64 v47; // rax
  __int128 v48; // xmm0
  void *v49; // rdx
  void *v50; // r14
  unsigned __int16 *v51; // rsi
  __int64 *v52; // rax
  int v53; // r8d
  int v54; // edx
  unsigned __int128 *v55; // rax
  unsigned __int128 v56; // xmm0
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  int v60; // r9d
  __int64 i; // r8
  __int64 v62; // rax
  __int64 v63; // r15
  __int64 v64; // rax
  int v65; // eax
  __int64 p_LockCount; // rcx
  int *v67; // r13
  unsigned __int16 *v68; // rcx
  int v69; // edx
  unsigned __int16 v70; // ax
  int v71; // r10d
  __int16 v72; // r11
  int v73; // edx
  unsigned __int16 v74; // ax
  int v75; // r9d
  __int16 v76; // r12
  __int16 v77; // dx
  int v78; // ecx
  __int16 v79; // ax
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v83; // rax
  __int64 v84; // r9
  __int64 v85; // rdx
  _QWORD *v86; // rax
  int v87; // eax
  __int64 v88; // r14
  __int64 v89; // r9
  __int64 v90; // rdx
  _QWORD *v91; // rax
  int v92; // eax
  __int64 v93; // rax
  __int64 v94; // r10
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // eax
  __int64 v98; // r11
  __int128 v99; // xmm0
  __int64 v100; // rax
  __int64 v101; // rax
  unsigned __int16 v102; // r8
  unsigned __int16 v103; // r9
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned __int16 v106; // r8
  unsigned __int16 v107; // r9
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  int v113; // eax
  unsigned int v114; // esi
  __int64 v115; // rcx
  __int64 v116; // r9
  __int64 v117; // rdx
  int v118; // [rsp+30h] [rbp-D0h]
  int v119; // [rsp+34h] [rbp-CCh]
  int v120; // [rsp+34h] [rbp-CCh]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-C8h]
  volatile signed __int32 **v122; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v123; // [rsp+48h] [rbp-B8h]
  LPVOID pv; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v125; // [rsp+58h] [rbp-A8h]
  __int64 v126; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v127; // [rsp+68h] [rbp-98h]
  int v128; // [rsp+6Ch] [rbp-94h]
  int v129; // [rsp+70h] [rbp-90h]
  __int64 v130; // [rsp+78h] [rbp-88h]
  _QWORD *v131; // [rsp+80h] [rbp-80h]
  PROPVARIANT v132[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v133; // [rsp+98h] [rbp-68h]
  LPVOID *p_pv; // [rsp+A0h] [rbp-60h]
  LPVOID v135; // [rsp+A8h] [rbp-58h] BYREF
  char v136; // [rsp+B0h] [rbp-50h]
  __int64 *v137; // [rsp+B8h] [rbp-48h]
  PROPVARIANT pvar[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v139; // [rsp+D0h] [rbp-30h]
  PROPVARIANT v140[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v141; // [rsp+E8h] [rbp-18h]
  __m256i v142; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v143; // [rsp+110h] [rbp+10h]
  __int128 v144; // [rsp+120h] [rbp+20h]
  __int64 v145; // [rsp+130h] [rbp+30h]
  __int128 v146; // [rsp+140h] [rbp+40h] BYREF
  __m256i v147; // [rsp+150h] [rbp+50h] BYREF
  char v148[24]; // [rsp+170h] [rbp+70h] BYREF
  char v149[24]; // [rsp+188h] [rbp+88h] BYREF
  char v150[24]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v151[24]; // [rsp+1B8h] [rbp+B8h] BYREF
  char v152[24]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v153[24]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int128 Buf2; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v155[24]; // [rsp+210h] [rbp+110h]
  __int128 Buf1; // [rsp+228h] [rbp+128h] BYREF
  _BYTE v157[24]; // [rsp+238h] [rbp+138h]
  __int128 v158; // [rsp+250h] [rbp+150h]
  __int128 v159; // [rsp+260h] [rbp+160h] BYREF
  __int128 v160; // [rsp+270h] [rbp+170h] BYREF
  __int128 v161; // [rsp+280h] [rbp+180h] BYREF
  char v162[16]; // [rsp+290h] [rbp+190h] BYREF
  void *retaddr; // [rsp+2F8h] [rbp+1F8h]

  v4 = a4;
  v131 = a4;
  v5 = a3;
  v137 = a3;
  v6 = a2;
  v129 = a2;
  v8 = 0;
  if ( a3 )
  {
    if ( !a4 )
      goto LABEL_137;
  }
  else if ( !a4 )
  {
    sub_18004BD84(
      retaddr,
      8359LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      2147500035LL);
    return 2147500035LL;
  }
  pv = 0LL;
  v143 = xmmword_18015B798;
  v9 = 1;
  v10 = 1;
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 )
  {
    *(_OWORD *)pvar = 0LL;
    v139 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
           v11,
           &xmmword_18015B7F8,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      v10 = LODWORD(pvar[1]) == 0;
    }
    PropVariantClear(pvar);
    if ( !v10 )
    {
      v31 = a1 + 168;
      goto LABEL_50;
    }
  }
  if ( !*(_QWORD *)(a1 + 1656) )
  {
    v112 = sub_180118A38(v153, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v112);
  }
  sub_1800230F0(*(_QWORD *)(a1 + 1664));
  if ( !*(_QWORD *)(a1 + 1672) )
  {
    v111 = sub_180118A38(v152, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v111);
  }
  v12 = *(_QWORD *)(a1 + 1680);
  if ( !*(_BYTE *)(v12 + 52) )
    goto LABEL_16;
  v13 = (struct _RTL_CRITICAL_SECTION *)(v12 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 56));
  v130 = v12 + 56;
  v14 = 0LL;
  v126 = 0LL;
  v15 = 0LL;
  v127 = 0;
  v128 = 0;
  v16 = 0;
  if ( *(int *)(v12 + 40) > 0 )
  {
    while ( 1 )
    {
      v83 = sub_180023320(v12 + 32, v16);
      if ( !(unsigned int)sub_1800233E0(&v126, v83) )
        break;
      if ( (signed int)++v16 >= *(_DWORD *)(v12 + 40) )
      {
        v15 = v127;
        v14 = v126;
        goto LABEL_12;
      }
    }
    v84 = 2147942414LL;
    v85 = 502LL;
  }
  else
  {
LABEL_12:
    v17 = 0;
    if ( (int)v15 <= 0 )
    {
LABEL_13:
      if ( v14 )
      {
        if ( (int)v15 > 0 )
        {
          v88 = v14;
          do
          {
            sub_1800322B0(v88);
            v88 += 16LL;
            --v15;
          }
          while ( v15 );
        }
        _o_free(v14);
      }
      if ( v13 )
        goto LABEL_15;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)sub_180023320(&v126, v17) + 20LL) )
      {
        v86 = (_QWORD *)sub_180023320(&v126, v17);
        v87 = sub_180052550(*v86, v12);
        if ( v87 < 0 )
          break;
      }
      if ( (int)++v17 >= (int)v15 )
        goto LABEL_13;
    }
    v84 = (unsigned int)v87;
    v85 = 508LL;
  }
  sub_18004BD84(retaddr, v85, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v84);
  sub_180032210(&v126);
  if ( v12 != -56 )
LABEL_15:
    LeaveCriticalSection(v13);
LABEL_16:
  if ( !*(_QWORD *)(a1 + 1688) )
  {
    v110 = sub_180118A38(v151, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v110);
  }
  v18 = *(_QWORD *)(a1 + 1696);
  if ( *(_BYTE *)(v18 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v18 + 56));
    v145 = v18 + 56;
    v19 = 0LL;
    v122 = 0LL;
    v20 = 0LL;
    v123 = 0LL;
    v21 = 0;
    v22 = 0LL;
    v119 = 0;
    if ( *(int *)(v18 + 40) > 0 )
    {
      v23 = 0LL;
      do
      {
        if ( v23 < 0 || (int)v22 >= *(_DWORD *)(v18 + 40) )
        {
          sub_1800BB2C8(3221225612LL);
          __debugbreak();
        }
        v24 = *(_QWORD *)(v18 + 32);
        v125 = v24;
        if ( (_DWORD)v20 == v21 )
        {
          if ( v21 )
          {
            v21 = 2 * (_DWORD)v20;
            if ( ((unsigned int)v20 & 0x40000000) != 0 )
              goto LABEL_159;
          }
          else
          {
            v21 = 1;
          }
          if ( (unsigned __int64)v21 > 0x7FFFFFF
            || (v25 = o__recalloc(v19, v21, 16LL), (v19 = (volatile signed __int32 **)v25) == 0LL) )
          {
LABEL_159:
            v89 = 2147942414LL;
            v90 = 502LL;
            goto LABEL_161;
          }
          HIDWORD(v123) = v21;
          v122 = (volatile signed __int32 **)v25;
          LODWORD(v22) = v119;
          v24 = v125;
        }
        v26 = &v19[2 * (int)v20];
        if ( v26 )
        {
          *v26 = 0LL;
          v26[1] = 0LL;
          v27 = *(_QWORD *)(v23 + v24 + 8);
          if ( v27 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
            v21 = HIDWORD(v123);
            LODWORD(v20) = v123;
            v19 = v122;
          }
          *v26 = *(volatile signed __int32 **)(v23 + v24);
          v26[1] = *(volatile signed __int32 **)(v23 + v24 + 8);
        }
        v20 = (volatile signed __int32 *)(unsigned int)((_DWORD)v20 + 1);
        LODWORD(v123) = (_DWORD)v20;
        v22 = (unsigned int)(v22 + 1);
        v119 = v22;
        v23 += 16LL;
      }
      while ( (int)v22 < *(_DWORD *)(v18 + 40) );
    }
    v28 = 0LL;
    if ( (int)v20 <= 0 )
    {
LABEL_38:
      if ( v19 )
      {
        if ( (int)v20 > 0 )
        {
          ++v19;
          v28 = (unsigned int)v20;
          do
          {
            v20 = *v19;
            if ( *v19 && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_167:
              (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v20)(v20, v22);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v20);
            }
            v19 += 2;
            --v28;
          }
          while ( v28 );
          v19 = v122;
        }
        _o_free(v19);
      }
      v30 = (struct _RTL_CRITICAL_SECTION *)(v18 + 56);
      if ( v18 == -56 )
        goto LABEL_48;
    }
    else
    {
      v29 = v19;
      while ( 1 )
      {
        if ( (int)v28 < 0 )
        {
          sub_1800BB2C8(3221225612LL);
          goto LABEL_167;
        }
        if ( *((_BYTE *)*v29 + 20) )
        {
          v91 = (_QWORD *)sub_180023320(&v122, (unsigned int)v28);
          v92 = sub_180052550(*v91, v18);
          if ( v92 < 0 )
            break;
        }
        v28 = (unsigned int)(v28 + 1);
        v29 += 2;
        if ( (int)v28 >= (int)v20 )
          goto LABEL_38;
      }
      v89 = (unsigned int)v92;
      v90 = 508LL;
LABEL_161:
      sub_18004BD84(retaddr, v90, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v89);
      sub_180032210(&v122);
      v30 = (struct _RTL_CRITICAL_SECTION *)(v18 + 56);
      if ( v18 == -56 )
        goto LABEL_48;
    }
    LeaveCriticalSection(v30);
  }
LABEL_48:
  if ( !*(_QWORD *)(a1 + 152) )
  {
    v109 = sub_180118A38(v150, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v109);
  }
  v31 = *(_QWORD *)(a1 + 160);
  v9 = 1;
  v4 = v131;
LABEL_50:
  v32 = 0;
  v33 = *(_DWORD *)(v31 + 8);
  if ( v33 <= 0 )
    goto LABEL_169;
  v34 = *(_QWORD *)v31;
  while ( 1 )
  {
    v35 = *(_QWORD *)(v34 + 16LL * v32) - v143;
    if ( !v35 )
      v35 = *(_QWORD *)(v34 + 16LL * v32 + 8) - *((_QWORD *)&v143 + 1);
    if ( !v35 )
      break;
    if ( ++v32 >= v33 )
      goto LABEL_169;
  }
  if ( v32 == -1 )
  {
LABEL_169:
    v36 = (__int128 *)sub_180022AC0(a1, v162, 0LL, 0LL);
  }
  else
  {
    v160 = xmmword_18015B798;
    v36 = &v160;
  }
  v37 = *v36;
  *v4 = 0LL;
  p_pv = &pv;
  v135 = 0LL;
  v136 = 1;
  v146 = v37;
  v38 = sub_18000E6E0(a1, 0, &v146, &v135);
  if ( v38 < 0 )
  {
    v39 = *(_QWORD *)(a1 + 80);
    if ( !v39 )
      goto LABEL_63;
    *(_OWORD *)v140 = 0LL;
    v141 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v39 + 40LL))(
           v39,
           &xmmword_18015B7F8,
           v140) >= 0
      && LOWORD(v140[0]) == 19 )
    {
      v9 = LODWORD(v140[1]) == 0;
    }
    PropVariantClear(v140);
    if ( !v9 )
    {
      v40 = a1 + 168;
    }
    else
    {
LABEL_63:
      if ( !*(_QWORD *)(a1 + 152) )
      {
        v93 = sub_180118A38(v148, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
        sub_180118968(v93);
      }
      v40 = *(_QWORD *)(a1 + 160);
    }
    v41 = *(_DWORD *)(v40 + 8);
    if ( v41 )
    {
      v42 = 0;
      if ( v41 <= 0 )
        goto LABEL_71;
      while ( 1 )
      {
        v43 = (_QWORD *)(*(_QWORD *)v40 + 16LL * v42);
        v44 = *v43 - 0x4965933DC18E2F7ELL;
        if ( *v43 == 0x4965933DC18E2F7ELL )
          v44 = v43[1] + 0xCD572DD10E12E49LL;
        if ( !v44 )
          break;
        if ( ++v42 >= v41 )
          goto LABEL_71;
      }
      if ( v42 == -1 )
      {
LABEL_71:
        v45 = 0;
        if ( v41 <= 0 )
          goto LABEL_174;
        while ( 1 )
        {
          v46 = (_QWORD *)(*(_QWORD *)v40 + 16LL * v45);
          v47 = *v46 - 0x4FD1B4939E90EA20LL;
          if ( *v46 == 0x4FD1B4939E90EA20LL )
            v47 = v46[1] + 0x30A9569EEC81575FLL;
          if ( !v47 )
            break;
          if ( ++v45 >= v41 )
            goto LABEL_174;
        }
        if ( v45 == -1 )
LABEL_174:
          v48 = *(_OWORD *)sub_180023320(v40, 0LL);
        else
          v48 = xmmword_18015B798;
      }
      else
      {
        v48 = xmmword_18015B810;
      }
    }
    else
    {
      v48 = xmmword_18015B730;
    }
    v142.m256i_i64[0] = a1;
    v142.m256i_i32[2] = 0;
    *(_OWORD *)((char *)&v142.m256i_u64[1] + 4) = v48;
    v147 = v142;
    v38 = sub_18001F9C0(a1, 0, 0, 0, (__int128 *)v147.m256i_i8, &v135);
  }
  if ( v136 )
  {
    v49 = *p_pv;
    *p_pv = v135;
    if ( v49 )
      CoTaskMemFree(v49);
  }
  if ( v38 < 0 )
  {
    sub_18004BD84(
      retaddr,
      8432LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v38);
    sub_1800C2A48(&pv);
    sub_18004BD84(
      retaddr,
      8364LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v38);
    return (unsigned int)v38;
  }
  v50 = pv;
  v51 = (unsigned __int16 *)pv;
  *v4 = 30000LL;
  v144 = v37;
  if ( !*(_QWORD *)(a1 + 1720) )
  {
    v108 = sub_180118A38(v149, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v108);
  }
  v52 = *(__int64 **)(a1 + 1728);
  v53 = 0;
  v54 = *((_DWORD *)v52 + 4);
  if ( v54 <= 0 )
    goto LABEL_84;
  v94 = *v52;
  while ( 1 )
  {
    v95 = *(_QWORD *)(v94 + 16LL * v53) - v144;
    if ( !v95 )
      v95 = *(_QWORD *)(v94 + 16LL * v53 + 8) - *((_QWORD *)&v144 + 1);
    if ( !v95 )
      break;
    if ( ++v53 >= v54 )
      goto LABEL_84;
  }
  if ( v53 == -1 )
  {
LABEL_84:
    v161 = v37;
    v55 = (unsigned __int128 *)&v161;
  }
  else
  {
    *(_OWORD *)v142.m256i_i8 = v37;
    v96 = sub_18004B060(a1 + 1720, 0LL);
    v97 = sub_18011B780(v96, &v142);
    if ( v97 == -1 )
    {
      v99 = xmmword_18015B730;
    }
    else
    {
      if ( v97 < 0 || v97 >= *(_DWORD *)(v98 + 16) )
      {
        sub_1800BB2C8(3221225612LL);
        __debugbreak();
      }
      v99 = *(_OWORD *)(*(_QWORD *)(v98 + 8) + 16LL * v97);
    }
    v159 = v99;
    v55 = (unsigned __int128 *)&v159;
    v50 = pv;
  }
  v56 = *v55;
  v158 = v56;
  v57 = v56;
  v59 = v56 >> 64;
  v130 = v56;
  v58 = v56;
  if ( !(_QWORD)v56 )
    v58 = *((_QWORD *)&v56 + 1);
  if ( !v58 )
  {
    v158 = xmmword_18015B798;
    v57 = 0x4FD1B4939E90EA20LL;
    v130 = 0x4FD1B4939E90EA20LL;
    v59 = 0xCF56A961137EA8A1uLL;
  }
  v60 = 0;
  v118 = 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v125 = i;
    v62 = *(_QWORD *)(a1 + 224);
    if ( v60 >= *(_DWORD *)(v62 + 8) )
      goto LABEL_134;
    if ( i < 0 )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    v63 = *(_QWORD *)(i + *(_QWORD *)v62);
    v64 = *(_QWORD *)v63 - v57;
    if ( *(_QWORD *)v63 == v57 )
      v64 = *(_QWORD *)(v63 + 8) - v59;
    if ( !v64 )
    {
      v65 = 0;
      v120 = 0;
      if ( *(int *)(v63 + 24) > 0 )
        break;
    }
LABEL_223:
    v118 = ++v60;
  }
  p_LockCount = 0LL;
  lpCriticalSection = 0LL;
  while ( 1 )
  {
    if ( p_LockCount < 0 || v65 >= *(_DWORD *)(v63 + 24) )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    v67 = *(int **)(p_LockCount + *(_QWORD *)(v63 + 16));
    v68 = *(unsigned __int16 **)v67;
    if ( !v51 )
    {
      if ( !v68 )
        goto LABEL_131;
      goto LABEL_221;
    }
    if ( !v68 )
      goto LABEL_221;
    v69 = *v51;
    v70 = v51[8];
    if ( (_WORD)v69 == 0xFFFE )
    {
      if ( v70 != 22 )
      {
        v100 = *((_QWORD *)v51 + 3) - 0x10000000000003LL;
        if ( *((_QWORD *)v51 + 3) == 0x10000000000003LL )
          v100 = *((_QWORD *)v51 + 4) - 0x719B3800AA000080LL;
        if ( v100 )
        {
          v101 = *((_QWORD *)v51 + 3) - 0x10000000000001LL;
          if ( *((_QWORD *)v51 + 3) == 0x10000000000001LL )
            v101 = *((_QWORD *)v51 + 4) - 0x719B3800AA000080LL;
          if ( v101 )
            goto LABEL_221;
        }
      }
      Buf1 = *(_OWORD *)v51;
      *(_OWORD *)v157 = *((_OWORD *)v51 + 1);
      *(_QWORD *)&v157[16] = *((_QWORD *)v51 + 4);
      *(_WORD *)v157 = 22;
      v71 = *(_DWORD *)&v157[4];
      v72 = Buf1;
    }
    else
    {
      if ( v70 && (((_WORD)v69 - 1) & 0xFFFD) != 0 )
        goto LABEL_221;
      v102 = v51[1];
      if ( (unsigned __int16)(v102 - 1) > 1u )
        goto LABEL_221;
      v103 = v51[7];
      if ( ((v103 - 8) & 0xFFE7) != 0 )
        goto LABEL_221;
      Buf1 = *(_OWORD *)v51;
      v72 = -2;
      LOWORD(Buf1) = -2;
      *(_WORD *)v157 = 22;
      *(_WORD *)&v157[2] = v103;
      *(_OWORD *)&v157[8] = xmmword_18015B740;
      *(_DWORD *)&v157[8] = v69;
      v71 = (v102 == 1) + 3;
      *(_DWORD *)&v157[4] = v71;
    }
    v73 = *v68;
    v74 = v68[8];
    if ( (_WORD)v73 == 0xFFFE )
      break;
    if ( !v74 || (((_WORD)v73 - 1) & 0xFFFD) == 0 )
    {
      v106 = v68[1];
      if ( (unsigned __int16)(v106 - 1) <= 1u )
      {
        v107 = v68[7];
        v76 = -2;
        if ( ((v107 - 8) & 0xFFE7) == 0 )
        {
          Buf2 = *(_OWORD *)v68;
          LOWORD(Buf2) = -2;
          *(_WORD *)&v155[2] = v107;
          *(_OWORD *)&v155[8] = xmmword_18015B740;
          *(_DWORD *)&v155[8] = v73;
          v75 = (v106 == 1) + 3;
          *(_DWORD *)&v155[4] = v75;
          goto LABEL_107;
        }
      }
    }
LABEL_221:
    v65 = v120 + 1;
    v120 = v65;
    p_LockCount = (__int64)&lpCriticalSection->LockCount;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)lpCriticalSection + 8);
    if ( v65 >= *(_DWORD *)(v63 + 24) )
    {
      v59 = *((_QWORD *)&v158 + 1);
      v57 = v130;
      i = v125;
      v60 = v118;
      goto LABEL_223;
    }
  }
  if ( v74 != 22 )
  {
    v104 = *((_QWORD *)v68 + 3) - 0x10000000000003LL;
    if ( *((_QWORD *)v68 + 3) == 0x10000000000003LL )
      v104 = *((_QWORD *)v68 + 4) - 0x719B3800AA000080LL;
    if ( v104 )
    {
      v105 = *((_QWORD *)v68 + 3) - 0x10000000000001LL;
      if ( *((_QWORD *)v68 + 3) == 0x10000000000001LL )
        v105 = *((_QWORD *)v68 + 4) - 0x719B3800AA000080LL;
      if ( v105 )
        goto LABEL_221;
    }
  }
  Buf2 = *(_OWORD *)v68;
  *(_OWORD *)v155 = *((_OWORD *)v68 + 1);
  *(_QWORD *)&v155[16] = *((_QWORD *)v68 + 4);
  v75 = *(_DWORD *)&v155[4];
  v76 = Buf2;
LABEL_107:
  *(_WORD *)v155 = 22;
  if ( WORD1(Buf1) )
  {
    v77 = WORD1(Buf2);
  }
  else
  {
    v77 = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v78 = DWORD1(Buf2);
  }
  else
  {
    v78 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v79 = HIWORD(Buf2);
  }
  else
  {
    v79 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v71 )
  {
    v75 = 0;
    *(_DWORD *)&v155[4] = 0;
  }
  if ( !v72 )
  {
    v76 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !v77 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v78 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v79 )
    HIDWORD(Buf1) = 0;
  if ( !v75 )
    *(_DWORD *)&v157[4] = 0;
  if ( !v76 )
    LOWORD(Buf1) = 0;
  v80 = *(_QWORD *)&v157[8] - *(_QWORD *)&v155[8];
  if ( *(_QWORD *)&v157[8] == *(_QWORD *)&v155[8] )
    v80 = *(_QWORD *)&v157[16] - *(_QWORD *)&v155[16];
  if ( v80 || memcmp(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_221;
LABEL_131:
  v81 = (unsigned int)(int)((double)v67[4] * 10000000.0 / (double)*((int *)v51 + 1) + 0.5);
  if ( v81 >= *v131 )
    v81 = *v131;
  *v131 = v81;
LABEL_134:
  pv = 0LL;
  if ( v50 )
    CoTaskMemFree(v50);
  v5 = v137;
  v6 = v129;
LABEL_137:
  if ( !v5 )
    return 0LL;
  if ( v6 )
  {
    *v5 = 100000LL;
    return 0LL;
  }
  while ( 1 )
  {
    *(_OWORD *)v132 = 0LL;
    v133 = 0LL;
    v113 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
             *(_QWORD *)(a1 + 40),
             &unk_18015C4E0,
             v132);
    v114 = v113;
    if ( v113 < 0 )
    {
      v117 = 8384LL;
      goto LABEL_246;
    }
    if ( LOWORD(v132[0]) != 65 )
      break;
    if ( LODWORD(v132[1]) != 8 )
      goto LABEL_244;
    v115 = *v133;
    *v5 = *v133;
    if ( v115 )
      goto LABEL_243;
    if ( (unsigned int)++v8 >= 0x7D0 )
    {
      v114 = -2147467259;
      v116 = 2147500037LL;
      v117 = 8397LL;
      goto LABEL_247;
    }
    Sleep(5u);
    PropVariantClear(v132);
  }
  if ( LOWORD(v132[0]) )
  {
LABEL_244:
    v114 = -2147024809;
    v116 = 2147942487LL;
    v117 = 8410LL;
    goto LABEL_247;
  }
  *v5 = 100000LL;
  v113 = sub_18004BC54(a1, v5);
  v114 = v113;
  if ( v113 >= 0 )
  {
LABEL_243:
    PropVariantClear(v132);
    return 0LL;
  }
  v117 = 8406LL;
LABEL_246:
  v116 = (unsigned int)v113;
LABEL_247:
  sub_18004BD84(retaddr, v117, "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp", v116);
  PropVariantClear(v132);
  return v114;
}
