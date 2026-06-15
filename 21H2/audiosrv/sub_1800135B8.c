/*
 * XREFs of sub_1800135B8 @ 0x1800135B8
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006871C @ 0x18006871C (sub_18006871C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006F708 @ 0x18006F708 (sub_18006F708.c)
 *     sub_18006F7DC @ 0x18006F7DC (sub_18006F7DC.c)
 *     sub_18006F958 @ 0x18006F958 (sub_18006F958.c)
 *     sub_18006FB2C @ 0x18006FB2C (sub_18006FB2C.c)
 *     sub_18006FC08 @ 0x18006FC08 (sub_18006FC08.c)
 *     sub_18006FC14 @ 0x18006FC14 (sub_18006FC14.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 *     sub_1800E3CDC @ 0x1800E3CDC (sub_1800E3CDC.c)
 *     sub_1800EA370 @ 0x1800EA370 (sub_1800EA370.c)
 *     sub_1800ED584 @ 0x1800ED584 (sub_1800ED584.c)
 *     sub_1800EE200 @ 0x1800EE200 (sub_1800EE200.c)
 *     sub_1800EE2F4 @ 0x1800EE2F4 (sub_1800EE2F4.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_1800135B8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        char a8,
        __int64 a9,
        char a10,
        char a11,
        _QWORD *a12)
{
  _QWORD *v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdi
  bool v25; // si
  __int64 v26; // rdi
  int v27; // ecx
  bool v28; // zf
  int v29; // edi
  __int64 v30; // rdx
  int v31; // eax
  int v32; // edi
  int v33; // eax
  char v34; // r15
  _QWORD *i; // rbx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  unsigned __int16 *v38; // rsi
  __int64 v39; // rdi
  const void *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  char v45; // si
  char v46; // di
  _QWORD *v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rbx
  int v52; // eax
  int v53; // eax
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // r15
  __int64 v58; // rsi
  unsigned int v59; // eax
  int v60; // ebx
  int v61; // ebx
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rbx
  __int64 v67; // rbx
  __int64 v68; // rax
  LPVOID pv; // [rsp+50h] [rbp-99h] BYREF
  __int128 v70; // [rsp+58h] [rbp-91h] BYREF
  __int64 v71; // [rsp+68h] [rbp-81h]
  __int64 v72; // [rsp+70h] [rbp-79h] BYREF
  __int64 v73; // [rsp+78h] [rbp-71h] BYREF
  __int64 v74; // [rsp+80h] [rbp-69h] BYREF
  __int64 v75; // [rsp+88h] [rbp-61h] BYREF
  unsigned int v76; // [rsp+90h] [rbp-59h]
  __int64 v77; // [rsp+98h] [rbp-51h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-49h] BYREF
  __int128 v79; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-31h]
  _QWORD v81[2]; // [rsp+C0h] [rbp-29h] BYREF
  __int128 v82; // [rsp+D0h] [rbp-19h] BYREF
  void *retaddr; // [rsp+128h] [rbp+3Fh]

  v76 = a4;
  v78 = a2;
  v81[0] = a6;
  v14 = a12;
  v74 = (__int64)a12;
  LODWORD(v73) = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 16LL, &unk_18015E5F0, *(_QWORD *)a3);
  }
  v82 = *(_OWORD *)(a3 + 48);
  v15 = *(int *)(a3 + 8);
  if ( v15 >= *(_QWORD *)(a2 + 1752) )
  {
    v68 = sub_180118A38(&v70, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    LODWORD(v73) = 1;
    sub_180118968(v68);
  }
  v16 = *(_QWORD *)(a2 + 1760) + 16 * v15;
  v17 = 0;
  v18 = *(_DWORD *)(v16 + 8);
  if ( v18 <= 0 )
  {
LABEL_9:
    v17 = -1;
  }
  else
  {
    while ( *(_OWORD *)(*(_QWORD *)v16 + 16LL * v17) != v82 )
    {
      if ( ++v17 >= v18 )
        goto LABEL_9;
    }
  }
  if ( v17 == -1 )
    goto LABEL_30;
  pv = 0LL;
  sub_18002A504(&pv, 0LL);
  v19 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a2 + 16) + 40LL))(*(_QWORD *)(a2 + 16), &pv);
  v20 = v19;
  if ( v19 < 0 )
  {
    sub_18004BD84(
      retaddr,
      1803LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (unsigned int)v19);
LABEL_20:
    if ( pv )
      CoTaskMemFree(pv);
    return v20;
  }
  v72 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *))(*(_QWORD *)qword_18019EE50 + 24LL))(
          qword_18019EE50,
          pv,
          &v72);
  v20 = v21;
  if ( v21 < 0 )
  {
    sub_18004BD84(
      retaddr,
      1806LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (unsigned int)v21);
LABEL_18:
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    goto LABEL_20;
  }
  v70 = 0LL;
  v71 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v72 + 80LL))(v72, &v70);
  v20 = v22;
  if ( v22 < 0 )
  {
    sub_18004BD84(
      retaddr,
      1808LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (unsigned int)v22);
    v23 = v70;
    if ( (_QWORD)v70 )
    {
      sub_1800CD58C(v70);
      sub_1800472E0(v23, (v71 - v23) & 0xFFFFFFFFFFFFFFF8uLL);
      v70 = 0LL;
      v71 = 0LL;
    }
    goto LABEL_18;
  }
  sub_1800EA370(&v75, v70, *((_QWORD *)&v70 + 1), a3);
  v25 = v75 == *((_QWORD *)&v70 + 1);
  v20 = v75 != *((_QWORD *)&v70 + 1) ? 0x887C0043 : 0;
  v26 = v70;
  if ( (_QWORD)v70 )
  {
    sub_1800CD58C(v70);
    sub_1800472E0(v26, (v71 - v26) & 0xFFFFFFFFFFFFFFF8uLL);
    v70 = 0LL;
    v71 = 0LL;
  }
  if ( v72 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
  v27 = (int)pv;
  if ( pv )
    CoTaskMemFree(pv);
  v28 = !v25;
  v14 = (_QWORD *)v74;
  if ( v28 )
  {
    v29 = a5;
  }
  else
  {
LABEL_30:
    v29 = a5;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)qword_18019EE48 + 24LL))(
            qword_18019EE48,
            a2,
            a3,
            v76,
            a5,
            a6,
            0LL,
            0LL,
            v14);
    v27 = (int)off_18019C348;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 17LL, &unk_18015E5F0, v20);
    }
  }
  if ( v20 == -2005139364 )
  {
    if ( a8 )
    {
      v20 = sub_1800ED584(v27, a2, a3, v76, v29, a6, a9, (__int64)v14);
      if ( (v20 & 0x80000000) == 0 )
        return 0LL;
      v30 = 1838LL;
      goto LABEL_39;
    }
LABEL_43:
    v30 = 2081LL;
LABEL_39:
    sub_18004BD84(retaddr, v30, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v20);
    return v20;
  }
  if ( v20 != -2005139360 && v20 != -2005139389 )
  {
    if ( (v20 & 0x80000000) == 0 )
      return 0LL;
    goto LABEL_43;
  }
  pv = 0LL;
  sub_1800461B8(&pv);
  v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)qword_18019EE50 + 24LL))(
          qword_18019EE50,
          *(_QWORD *)a3,
          &pv);
  v32 = v31;
  if ( v31 < 0 )
  {
    sub_18004BD84(
      retaddr,
      1852LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (unsigned int)v31);
LABEL_148:
    sub_1800461B8(&pv);
    return (unsigned int)v32;
  }
  v79 = 0LL;
  v80 = 0LL;
  v33 = (*(__int64 (__fastcall **)(LPVOID, __int128 *))(*(_QWORD *)pv + 80LL))(pv, &v79);
  v32 = v33;
  if ( v33 < 0 )
  {
    sub_18004BD84(
      retaddr,
      1855LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (unsigned int)v33);
LABEL_146:
    v66 = v79;
    if ( (_QWORD)v79 )
    {
      sub_1800CD58C(v79);
      sub_1800472E0(v66, (v80 - v66) & 0xFFFFFFFFFFFFFFF8uLL);
      v79 = 0LL;
      v80 = 0LL;
    }
    goto LABEL_148;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 18LL, &unk_18015E5F0, (__int64)(*((_QWORD *)&v79 + 1) - v79) >> 3);
  }
  v77 = 0LL;
  v34 = 0;
  for ( i = (_QWORD *)v79; ; ++i )
  {
    v36 = (_QWORD *)*((_QWORD *)&v79 + 1);
    if ( i == *((_QWORD **)&v79 + 1) )
      break;
    v37 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*i + 40LL))(*i, &v82);
    if ( *v37 == *(_QWORD *)(a3 + 48)
      && v37[1] == *(_QWORD *)(a3 + 56)
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i) == *(_DWORD *)(a3 + 8)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 88LL))(*i) )
    {
      if ( a11 )
      {
        v38 = *(unsigned __int16 **)(a3 + 16);
        v39 = v38[8];
        v40 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i);
        if ( memcmp(v40, v38, v39 + 18) )
        {
LABEL_62:
          v14 = (_QWORD *)v74;
          continue;
        }
      }
      if ( a10 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) != *(_QWORD *)(a3 + 32) )
          goto LABEL_62;
      }
      else if ( v34 || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 136LL))(*i) )
      {
        v34 = 1;
      }
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        v41 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
        sub_1800EE2F4(*((_QWORD *)off_18019C348 + 2), 19LL, v42, v41);
      }
      sub_18006871C(&v77, i);
      v43 = abs64((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) - *(_QWORD *)(a3 + 32));
      v44 = v77;
      if ( v77 && v43 && v34 )
      {
        sub_1800461B8(&v77);
        v44 = v77;
      }
      v77 = 0LL;
      v14 = (_QWORD *)v74;
      *(_QWORD *)v74 = v44;
    }
  }
  if ( *v14 )
    goto LABEL_149;
  v72 = 0LL;
  v45 = 0;
  v46 = 0;
  v47 = (_QWORD *)v79;
  while ( 2 )
  {
    if ( v47 == v36 )
      goto LABEL_137;
    v48 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v47 + 40LL))(*v47, &v82);
    if ( *v48 != *(_QWORD *)(a3 + 48)
      || v48[1] != *(_QWORD *)(a3 + 56)
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 80LL))(*v47) != *(_DWORD *)(a3 + 8)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 88LL))(*v47) )
    {
LABEL_87:
      ++v47;
      v36 = (_QWORD *)*((_QWORD *)&v79 + 1);
      continue;
    }
    break;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 152LL))(*v47) )
  {
    v46 = 1;
    goto LABEL_87;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 120LL))(*v47) )
  {
    v45 = 1;
    goto LABEL_87;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v49 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 32LL))(*v47);
    sub_1800EE2F4(*((_QWORD *)off_18019C348 + 2), 20LL, v50, v49);
  }
  sub_18006871C(&v72, v47);
  v51 = v72;
  if ( !v72 )
  {
LABEL_137:
    if ( a11 || a10 )
    {
      if ( v45 )
      {
        v32 = -2004287448;
        v65 = 1981LL;
LABEL_144:
        sub_18004BD84(
          retaddr,
          v65,
          "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (unsigned int)v32);
        goto LABEL_145;
      }
      if ( v46 )
      {
        v32 = -2004287447;
        v65 = 1982LL;
        goto LABEL_144;
      }
    }
    v32 = -2005139360;
    v65 = 1984LL;
    goto LABEL_144;
  }
  v73 = 0LL;
  v52 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v72 + 104LL))(v72, &v73);
  v32 = v52;
  if ( v52 < 0 )
  {
    sub_18004BD84(
      retaddr,
      1990LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (unsigned int)v52);
    goto LABEL_129;
  }
  v70 = 0LL;
  v71 = 0LL;
  v53 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int128 *))(*(_QWORD *)pv + 104LL))(pv, v51, &v70);
  v32 = v53;
  if ( v53 < 0 )
  {
    v54 = (unsigned int)v53;
    v55 = 1994LL;
    goto LABEL_127;
  }
  v75 = v51;
  sub_180047458(&v75);
  sub_18006F958(&v82, v70, *((_QWORD *)&v70 + 1), &v75);
  sub_18006FC08(&v82);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 21LL, &unk_18015E5F0);
  }
  sub_1800EE200(&v79);
  sub_1800461B8(&v72);
  v56 = v74;
  v57 = v81[0];
  v58 = v78;
  v59 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)qword_18019EE48 + 24LL))(
          qword_18019EE48,
          v78,
          a3,
          v76,
          a5,
          v81[0],
          0LL,
          0LL,
          v74);
  v32 = v59;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 22LL, &unk_18015E5F0, v59);
  }
  if ( v32 < 0 )
  {
    v74 = 0LL;
    v60 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)qword_18019EE48 + 24LL))(
            qword_18019EE48,
            v58,
            v73,
            2LL,
            0,
            v57,
            0LL,
            0LL,
            &v74);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 24LL, &unk_18015E5F0, (unsigned int)v60);
    }
    if ( v60 >= 0 )
    {
      v75 = 0LL;
      v61 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)qword_18019EE48 + 24LL))(
              qword_18019EE48,
              v58,
              v73,
              2LL,
              0,
              v57,
              0LL,
              0LL,
              &v75);
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 25LL, &unk_18015E5F0, (unsigned int)v61);
      }
      if ( v61 >= 0 )
      {
        v62 = sub_18006FB2C(&v78, &v75);
        sub_18006F708(v81, v70, *((_QWORD *)&v70 + 1), v62);
        sub_18006FC14(v81);
      }
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    }
    if ( v74 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
  }
  else
  {
    sub_18006F7DC(&v78, v70, *((_QWORD *)&v70 + 1), v56);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 23LL, &unk_18015E5F0);
    }
  }
  if ( v32 < 0 )
  {
    v54 = (unsigned int)v32;
    v55 = 2076LL;
LABEL_127:
    sub_18004BD84(retaddr, v55, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v54);
    v63 = v70;
    if ( (_QWORD)v70 )
    {
      sub_1800CD58C(v70);
      sub_1800472E0(v63, (v71 - v63) & 0xFFFFFFFFFFFFFFF8uLL);
      v70 = 0LL;
      v71 = 0LL;
    }
LABEL_129:
    if ( v73 )
      sub_1800E3CDC(v73);
    v73 = 0LL;
LABEL_145:
    sub_1800461B8(&v72);
    sub_1800461B8(&v77);
    goto LABEL_146;
  }
  v64 = v70;
  if ( (_QWORD)v70 )
  {
    sub_1800CD58C(v70);
    sub_1800472E0(v64, (v71 - v64) & 0xFFFFFFFFFFFFFFF8uLL);
    v70 = 0LL;
    v71 = 0LL;
  }
  if ( v73 )
    sub_1800E3CDC(v73);
  v73 = 0LL;
  sub_1800461B8(&v72);
LABEL_149:
  sub_1800461B8(&v77);
  v67 = v79;
  if ( (_QWORD)v79 )
  {
    sub_1800CD58C(v79);
    sub_1800472E0(v67, (v80 - v67) & 0xFFFFFFFFFFFFFFF8uLL);
    v79 = 0LL;
    v80 = 0LL;
  }
  sub_1800461B8(&pv);
  return 0LL;
}
