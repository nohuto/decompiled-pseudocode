/*
 * XREFs of sub_18002A7E0 @ 0x18002A7E0
 * Callers:
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18000BA30 @ 0x18000BA30 (sub_18000BA30.c)
 *     unknown_libname_35 @ 0x18000F450 (unknown_libname_35.c)
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180013BB0 @ 0x180013BB0 (sub_180013BB0.c)
 *     sub_1800149E4 @ 0x1800149E4 (sub_1800149E4.c)
 *     sub_1800191A8 @ 0x1800191A8 (sub_1800191A8.c)
 *     sub_18002CA60 @ 0x18002CA60 (sub_18002CA60.c)
 *     sub_18002D480 @ 0x18002D480 (sub_18002D480.c)
 *     sub_18002D560 @ 0x18002D560 (sub_18002D560.c)
 *     sub_18002DD10 @ 0x18002DD10 (sub_18002DD10.c)
 *     sub_1800301C4 @ 0x1800301C4 (sub_1800301C4.c)
 *     sub_1800303A4 @ 0x1800303A4 (sub_1800303A4.c)
 *     sub_180038A8C @ 0x180038A8C (sub_180038A8C.c)
 *     sub_180038BF8 @ 0x180038BF8 (sub_180038BF8.c)
 *     sub_180038D10 @ 0x180038D10 (sub_180038D10.c)
 *     sub_18003A1A4 @ 0x18003A1A4 (sub_18003A1A4.c)
 *     sub_18003D548 @ 0x18003D548 (sub_18003D548.c)
 *     sub_18003D8F0 @ 0x18003D8F0 (sub_18003D8F0.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_18002A7E0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v5; // r8d
  int v6; // r9d
  _DWORD *v7; // rax
  _DWORD *v8; // rcx
  int v9; // r12d
  HRESULT v10; // eax
  int ActivationFactory; // eax
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  __int64 v20; // rbx
  int (__fastcall ***v21)(_QWORD, void *, HSTRING *); // rcx
  int v22; // eax
  HRESULT v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  volatile signed __int64 *v27; // r14
  int v28; // ebx
  void *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  int v32; // eax
  int v33; // edx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rdx
  HSTRING v37; // rbx
  int v38; // eax
  HSTRING v39; // rcx
  __int64 v40; // rcx
  HRESULT v41; // eax
  __int64 v42; // rbx
  __int64 v43; // rcx
  int v44; // eax
  int v45; // edx
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rdx
  HSTRING v49; // rbx
  __int64 v50; // rcx
  int v51; // eax
  double v52; // xmm0_8
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  _OWORD *v55; // rax
  __int64 v56; // rcx
  int v57; // eax
  int v58; // ebx
  __int64 v59; // r12
  __int64 v60; // rcx
  int v61; // eax
  int v62; // edx
  __int64 v63; // r12
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rbx
  __int64 v68; // rcx
  int v69; // eax
  int v70; // edx
  __int64 v71; // rcx
  __int64 v72; // rbx
  int v73; // eax
  __int64 v74; // rbx
  __int64 v75; // rcx
  int v76; // eax
  int v77; // edx
  __int64 v78; // rcx
  int v79; // eax
  volatile signed __int64 *v80; // rbx
  int v81; // esi
  void *v82; // rax
  __int64 v83; // rcx
  const WCHAR *v84; // rsi
  int v85; // eax
  int v86; // eax
  __int64 v87; // rdx
  PVOID Reserved1; // r12
  __int64 v89; // rcx
  int v90; // eax
  int v91; // eax
  int v92; // edx
  _QWORD *v93; // r12
  __int64 v94; // rcx
  int v95; // eax
  HSTRING v96; // rcx
  __int64 v97; // r12
  __int64 v98; // rdx
  int v99; // eax
  int v100; // edx
  __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rcx
  int (__fastcall ***v105)(_QWORD, void *, HSTRING *); // rcx
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v109; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v110; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v111; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v112; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int64 *v113; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING v114; // [rsp+70h] [rbp-98h] BYREF
  int (__fastcall ***v115)(_QWORD, void *, HSTRING *); // [rsp+78h] [rbp-90h] BYREF
  HSTRING v116; // [rsp+80h] [rbp-88h] BYREF
  const WCHAR *v117; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int64 *v118; // [rsp+90h] [rbp-78h] BYREF
  __int64 v119; // [rsp+98h] [rbp-70h] BYREF
  __int64 v120; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v121; // [rsp+A8h] [rbp-60h] BYREF
  const WCHAR *v122; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v123; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v124; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v125; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD *v126; // [rsp+D0h] [rbp-38h]
  _QWORD *v127; // [rsp+D8h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+E8h] [rbp-20h] BYREF
  HSTRING string; // [rsp+100h] [rbp-8h] BYREF
  __int64 retaddr; // [rsp+140h] [rbp+38h]

  v126 = a1;
  v110 = 0LL;
  v2 = 0LL;
  v127 = 0LL;
  v3 = operator new(0xC0uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v4 = v3;
  if ( !v3 )
  {
    v9 = -2147024882;
    goto LABEL_10;
  }
  *v3 = &off_18004C5B0;
  v3[2] = &off_1800486E0;
  sub_180011A50(v3 + 3);
  v4[8] = 1LL;
  *v4 = off_18004CC48;
  v4[1] = off_18004CC28;
  v4[2] = off_18004CBF0;
  v4[3] = off_18004CBA8;
  if ( qword_18005ADB0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
  *v4 = off_18004D6A0;
  v4[1] = off_18004D680;
  v4[2] = off_18004D648;
  v4[3] = off_18004D600;
  sub_1800301C4((_DWORD)v4 + 72, (_DWORD)v4, v5, v6, 1048576000, 1074790400);
  LODWORD(v113) = 1;
  *((_DWORD *)v4 + 40) = 0;
  InitializeSRWLock((PSRWLOCK)v4 + 21);
  v4[22] = 0LL;
  *((_BYTE *)v4 + 184) = 0;
  *((_DWORD *)v4 + 47) = 0;
  v7 = operator new(4uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v8 = v7;
  if ( v7 )
    *v7 = 1;
  else
    v8 = 0LL;
  v4[22] = v8;
  v9 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    *((_BYTE *)v4 + 184) = 1;
    v2 = v4;
    v127 = v4;
LABEL_10:
    v4 = 0LL;
  }
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  if ( v9 < 0 )
  {
    sub_180003268(retaddr, 1107, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
    goto LABEL_203;
  }
  v111 = 0LL;
  string = 0LL;
  v10 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v10 < 0 )
    goto LABEL_209;
  ActivationFactory = RoGetActivationFactory(string, &unk_180051010, &v111);
  v9 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v13 = v111;
    v14 = v110;
    if ( v110 )
    {
      v110 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 144LL))(
                          v13,
                          a1[29],
                          &v110);
    v9 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v12 = 1117;
      goto LABEL_24;
    }
    ActivationFactory = sub_18002D560(v2, ::string, v110, &v109);
    v9 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v12 = 1118;
      goto LABEL_24;
    }
    v115 = 0LL;
    v15 = a1[30];
    v16 = v111;
    if ( v15 )
    {
      v17 = v110;
      if ( v110 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v15 = a1[30];
      }
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v16 + 144LL))(v16, v15, &v110);
      v9 = v18;
      if ( v18 < 0 )
      {
        v19 = 1127;
LABEL_41:
        sub_180003268(retaddr, v19, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v18);
LABEL_199:
        v105 = v115;
        if ( v115 )
        {
          v115 = 0LL;
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, void *, HSTRING *)))(*v105)[2])(v105);
        }
        goto LABEL_201;
      }
      v20 = a1[32];
      v21 = v115;
      if ( v115 )
      {
        v115 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, void *, HSTRING *)))(*v21)[2])(v21);
      }
      if ( (*(int (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, void *, HSTRING *)))(*(_QWORD *)v20 + 48LL))(
             v20,
             &v115) >= 0 )
      {
        v22 = sub_18002D560(v2, qword_18005AEB8, v115, &v109);
        if ( v22 < 0 )
          sub_180012300(retaddr, 1131, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v22);
      }
LABEL_39:
      v18 = sub_18002D560(v2, qword_18005AEB0, v110, &v109);
      v9 = v18;
      if ( v18 < 0 )
      {
        v19 = 1139;
        goto LABEL_41;
      }
      v118 = 0LL;
      v25 = a1[35];
      if ( v25 && a1[36] )
      {
        v26 = sub_180038BF8(v25, &v118);
        if ( v26 < 0 )
          sub_180012300(retaddr, 1148, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v26);
        v27 = v118;
      }
      else
      {
        v27 = 0LL;
        v118 = 0LL;
        v28 = 0;
        v29 = operator new(0x88uLL, (const struct std::nothrow_t *)&unk_18005AF88);
        v30 = 0LL;
        if ( !v29 || (v30 = sub_1800303A4(v29)) == 0 )
          v28 = -2147024882;
        if ( v28 >= 0 )
        {
          v27 = (volatile signed __int64 *)v30;
          v118 = (volatile signed __int64 *)v30;
          v30 = 0LL;
        }
        if ( v30 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      v123 = 0LL;
      sub_18002DD10(v27, &v123);
      v31 = v123;
      v32 = sub_18002D560(v2, qword_18005AEC0, v123, &v109);
      v9 = v32;
      if ( v32 < 0 )
      {
        v33 = 1157;
LABEL_62:
        sub_180003268(retaddr, v33, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v32);
LABEL_195:
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        if ( v27 )
          sub_18000BA30(v27);
        goto LABEL_199;
      }
      *(_OWORD *)&hstringHeader.Reserved.Reserved1 = xmmword_180050070;
      v34 = v111;
      v35 = v110;
      if ( v110 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v32 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, __int64 *))(*(_QWORD *)v34 + 160LL))(
              v34,
              &hstringHeader,
              &v110);
      v9 = v32;
      if ( v32 < 0 )
      {
        v33 = 1160;
        goto LABEL_62;
      }
      v32 = sub_18002D560(v2, qword_18005AEC8, v110, &v109);
      v9 = v32;
      if ( v32 < 0 )
      {
        v33 = 1161;
        goto LABEL_62;
      }
      v114 = 0LL;
      if ( v115 )
      {
        v112 = 0LL;
        if ( (**v115)(v115, &unk_180050C88, &v112) >= 0 )
        {
          v37 = v112;
          WindowsDeleteString(v114);
          v114 = 0LL;
          v38 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v37 + 48LL))(v37, &v114);
          if ( v38 < 0 )
            sub_180012300(
              retaddr,
              1173,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              v38);
        }
        v39 = v112;
        if ( v112 )
        {
          v112 = 0LL;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
      else
      {
        v40 = a1[35];
        if ( v40 )
        {
          if ( a1[36] )
          {
            LOBYTE(v36) = 1;
            v117 = *(const WCHAR **)(*(_QWORD *)(sub_18003A1A4(v40, v36) + 16) + 24LL);
            v41 = sub_1800191A8(&v114, &v117);
            if ( v41 < 0 )
              sub_180012300(
                retaddr,
                1179,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                v41);
          }
        }
      }
      v42 = v111;
      v43 = v110;
      if ( v110 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      v44 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v42 + 144LL))(v42, v114, &v110);
      v9 = v44;
      if ( v44 < 0 )
      {
        v45 = 1182;
LABEL_85:
        sub_180003268(retaddr, v45, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v44);
LABEL_194:
        WindowsDeleteString(v114);
        v114 = 0LL;
        goto LABEL_195;
      }
      v44 = sub_18002D560(v2, qword_18005AED8, v110, &v109);
      v9 = v44;
      if ( v44 < 0 )
      {
        v45 = 1183;
        goto LABEL_85;
      }
      v46 = v111;
      v47 = v110;
      if ( v110 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      }
      v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v46 + 144LL))(v46, a1[20], &v110);
      v9 = v44;
      if ( v44 < 0 )
      {
        v45 = 1189;
        goto LABEL_85;
      }
      v44 = sub_18002D560(v2, qword_18005AED0, v110, &v109);
      v9 = v44;
      if ( v44 < 0 )
      {
        v45 = 1190;
        goto LABEL_85;
      }
      v122 = 0LL;
      v49 = 0LL;
      v112 = 0LL;
      v124 = 0LL;
      v119 = 0LL;
      v50 = a1[32];
      if ( v50 && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v50 + 80LL))(v50, &v119) >= 0 && v119 )
      {
        v51 = (*(__int64 (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)v119 + 64LL))(v119, &v122);
        if ( v51 < 0 )
          sub_180012300(retaddr, 1205, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v51);
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v119 + 48LL))(v119, &v124) >= 0 )
        {
          v52 = o_round();
          v53 = 0LL;
          if ( v52 >= 9.223372036854776e18 )
          {
            v52 = v52 - 9.223372036854776e18;
            if ( v52 < 9.223372036854776e18 )
              v53 = 0x8000000000000000uLL;
          }
          v49 = (HSTRING)(v53 + (unsigned int)(int)v52);
        }
      }
      else
      {
        v54 = a1[35];
        if ( v54 && a1[36] )
        {
          LOBYTE(v48) = 1;
          v55 = (_OWORD *)sub_18003A1A4(v54, v48);
          v56 = a1[36];
          LODWORD(v113) = 8;
          *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *v55;
          v57 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, __int64, const WCHAR **, volatile signed __int64 **))(*(_QWORD *)v56 + 64LL))(
                  v56,
                  &hstringHeader,
                  2LL,
                  &v117,
                  &v113);
          v58 = v57;
          if ( v57 >= 0 )
          {
            v122 = v117;
            v58 = 0;
          }
          else
          {
            sub_180003268(
              retaddr,
              294,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
              v57);
          }
          if ( v58 < 0 )
            sub_180012300(
              retaddr,
              1219,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              v58);
          v49 = v112;
        }
      }
      v59 = v111;
      v60 = v110;
      if ( v110 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
      }
      v61 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64 *))(*(_QWORD *)v59 + 168LL))(v59, v122, &v110);
      v9 = v61;
      if ( v61 < 0 )
      {
        v62 = 1222;
LABEL_116:
        sub_180003268(retaddr, v62, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v61);
LABEL_192:
        v104 = v119;
        if ( v119 )
        {
          v119 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
        }
        goto LABEL_194;
      }
      v61 = sub_18002D560(v2, qword_18005AF00, v110, &v109);
      v9 = v61;
      if ( v61 < 0 )
      {
        v62 = 1223;
        goto LABEL_116;
      }
      v63 = v111;
      v64 = v110;
      if ( v110 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
      }
      v61 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v63 + 104LL))(v63, v49, &v110);
      v9 = v61;
      if ( v61 < 0 )
      {
        v62 = 1225;
        goto LABEL_116;
      }
      v61 = sub_18002D560(v2, qword_18005AEE0, v110, &v109);
      v9 = v61;
      if ( v61 < 0 )
      {
        v62 = 1226;
        goto LABEL_116;
      }
      v125 = 0LL;
      v121 = 0LL;
      v65 = a1[32];
      if ( v65 )
      {
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v65 + 88LL))(v65, &v121) >= 0 )
        {
          if ( v121 )
          {
            v66 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v121 + 64LL))(v121, &v125);
            if ( v66 < 0 )
              sub_180012300(
                retaddr,
                1237,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                v66);
          }
        }
      }
      v67 = v111;
      v68 = v110;
      if ( v110 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
      }
      v69 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v67 + 168LL))(v67, v125, &v110);
      v9 = v69;
      if ( v69 < 0 )
      {
        v70 = 1240;
LABEL_128:
        sub_180003268(retaddr, v70, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v69);
LABEL_190:
        v103 = v121;
        if ( v121 )
        {
          v121 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
        }
        goto LABEL_192;
      }
      v69 = sub_18002D560(v2, qword_18005AEE8, v110, &v109);
      v9 = v69;
      if ( v69 < 0 )
      {
        v70 = 1241;
        goto LABEL_128;
      }
      v120 = 0LL;
      v116 = 0LL;
      v71 = a1[32];
      if ( v71 )
      {
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v71 + 96LL))(v71, &v120) >= 0 )
        {
          v72 = v120;
          if ( v120 )
          {
            WindowsDeleteString(v116);
            v116 = 0LL;
            v73 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v72 + 56LL))(v72, &v116);
            if ( v73 < 0 )
              sub_180012300(
                retaddr,
                1251,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                v73);
          }
        }
      }
      v74 = v111;
      v75 = v110;
      if ( v110 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      }
      v76 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v74 + 144LL))(v74, v116, &v110);
      v9 = v76;
      if ( v76 < 0 )
      {
        v77 = 1254;
LABEL_140:
        sub_180003268(retaddr, v77, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v76);
LABEL_188:
        WindowsDeleteString(v116);
        v116 = 0LL;
        v102 = v120;
        if ( v120 )
        {
          v120 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
        }
        goto LABEL_190;
      }
      v76 = sub_18002D560(v2, qword_18005AEF0, v110, &v109);
      v9 = v76;
      if ( v76 < 0 )
      {
        v77 = 1255;
        goto LABEL_140;
      }
      v113 = 0LL;
      v78 = a1[35];
      if ( v78 && a1[36] )
      {
        v79 = sub_180038A8C(v78, &v113);
        if ( v79 < 0 )
          sub_180012300(retaddr, 1264, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v79);
        v80 = v113;
      }
      else
      {
        v80 = 0LL;
        v113 = 0LL;
        v81 = 0;
        v82 = operator new(0x88uLL, (const struct std::nothrow_t *)&unk_18005AF88);
        v83 = 0LL;
        if ( !v82 || (v83 = sub_1800149E4((__int64)v82)) == 0 )
          v81 = -2147024882;
        if ( v81 >= 0 )
        {
          v80 = (volatile signed __int64 *)v83;
          v113 = (volatile signed __int64 *)v83;
          v83 = 0LL;
        }
        if ( v83 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
      }
      v117 = 0LL;
      sub_180013BB0((__int64)v80, (volatile signed __int64 **)&v117);
      v84 = v117;
      v85 = sub_18002D560(v2, qword_18005AEF8, v117, &v109);
      v9 = v85;
      if ( v85 < 0 )
      {
        sub_180003268(retaddr, 1273, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v85);
LABEL_184:
        if ( v84 )
          (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v84 + 16LL))(v84);
        if ( v80 )
          sub_18000BA30(v80);
        goto LABEL_188;
      }
      *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0LL;
      v86 = sub_18003D548(&hstringHeader);
      if ( v86 < 0 )
        sub_180012300(retaddr, 1279, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v86);
      Reserved1 = hstringHeader.Reserved.Reserved1;
      if ( hstringHeader.Reserved.Reserved1 )
      {
        v89 = v110;
        if ( v110 )
        {
          v110 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
        }
        v90 = sub_18003D8F0(Reserved1, v87, &v110);
        if ( v90 < 0 )
          sub_180012300(retaddr, 1282, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v90);
        v91 = sub_18002D560(v2, qword_18005AF08, v110, &v109);
        v9 = v91;
        if ( v91 < 0 )
        {
          v92 = 1283;
LABEL_182:
          sub_180003268(retaddr, v92, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v91);
          goto LABEL_183;
        }
      }
      v93 = v126;
      v94 = v126[35];
      if ( v94 && v126[36] )
      {
        v112 = 0LL;
        v95 = sub_180038D10(v94, &v112);
        if ( v95 < 0 )
          sub_180012300(retaddr, 1292, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v95);
        v96 = v112;
        if ( v112 )
        {
          v97 = v111;
          v98 = v110;
          if ( v110 )
          {
            v110 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 16LL))(v98);
            v96 = v112;
          }
          v99 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v97 + 144LL))(v97, v96, &v110);
          v9 = v99;
          if ( v99 < 0 )
          {
            v100 = 1295;
LABEL_175:
            sub_180003268(
              retaddr,
              v100,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              v99);
            WindowsDeleteString(v112);
LABEL_183:
            unknown_libname_35((__int64)&hstringHeader);
            goto LABEL_184;
          }
          v99 = sub_18002D560(v2, qword_18005AF10, v110, &v109);
          v9 = v99;
          if ( v99 < 0 )
          {
            v100 = 1296;
            goto LABEL_175;
          }
          v96 = v112;
          v93 = v126;
        }
        WindowsDeleteString(v96);
      }
      v101 = v93[27];
      if ( v101 )
      {
        v93[27] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 16LL))(v101);
      }
      v91 = sub_18002D480(v2, v93 + 27);
      v9 = v91;
      if ( v91 >= 0 )
        goto LABEL_183;
      v92 = 1301;
      goto LABEL_182;
    }
    string = 0LL;
    v23 = WindowsCreateStringReference(&word_180051520, 0, &hstringHeader, &string);
    if ( v23 >= 0 )
    {
      v24 = v110;
      if ( v110 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      (*(void (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v16 + 144LL))(v16, string, &v110);
      goto LABEL_39;
    }
    sub_180011F90(v23);
LABEL_209:
    sub_180011F90(v10);
    JUMPOUT(0x18002B860LL);
  }
  v12 = 1111;
LABEL_24:
  sub_180003268(
    retaddr,
    v12,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    ActivationFactory);
LABEL_201:
  v106 = v111;
  if ( v111 )
  {
    v111 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v106 + 16LL))(v106);
  }
LABEL_203:
  if ( v2 )
    sub_18002CA60(v2);
  v107 = v110;
  if ( v110 )
  {
    v110 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
  }
  return (unsigned int)v9;
}
