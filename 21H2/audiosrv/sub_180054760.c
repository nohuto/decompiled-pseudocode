/*
 * XREFs of sub_180054760 @ 0x180054760
 * Callers:
 *     sub_180058660 @ 0x180058660 (sub_180058660.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180054490 @ 0x180054490 (sub_180054490.c)
 *     sub_180055010 @ 0x180055010 (sub_180055010.c)
 *     sub_180058B74 @ 0x180058B74 (sub_180058B74.c)
 *     sub_180058C08 @ 0x180058C08 (sub_180058C08.c)
 *     sub_1800591C4 @ 0x1800591C4 (sub_1800591C4.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 *     sub_18005A220 @ 0x18005A220 (sub_18005A220.c)
 *     sub_18005A458 @ 0x18005A458 (sub_18005A458.c)
 *     sub_18005B794 @ 0x18005B794 (sub_18005B794.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall sub_180054760(__int64 a1, char a2)
{
  __int64 v3; // r12
  int v4; // ebx
  void *v5; // rcx
  LPVOID v6; // rbx
  unsigned __int64 *v7; // r13
  __int64 v8; // rax
  int v9; // eax
  int v10; // ebx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  _DWORD *v14; // rbx
  void *v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  unsigned int v24; // r14d
  unsigned int v25; // r15d
  void *v26; // rcx
  void *v27; // rcx
  BOOL v28; // ebx
  int v29; // ebx
  __int64 v30; // rax
  unsigned int i; // edi
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rax
  int v35; // ecx
  int v36; // eax
  __int64 *v37; // rax
  __int128 *v38; // rdx
  __int64 v39; // rax
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  void *v47; // rcx
  int v49; // r9d
  int v50; // edx
  __int64 v51; // rax
  int v52; // eax
  LPVOID v53; // rbx
  __int64 v54; // rax
  int v55; // eax
  LPVOID v56; // rbx
  __int64 v57; // rax
  int v58; // eax
  int v59; // edx
  __int64 *v60; // rax
  __int64 v61; // rax
  int v62; // r9d
  __int64 v63; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID *v64; // [rsp+40h] [rbp-C8h]
  GUID *v65; // [rsp+48h] [rbp-C0h] BYREF
  char v66; // [rsp+50h] [rbp-B8h]
  char v67; // [rsp+58h] [rbp-B0h]
  __int128 v68; // [rsp+68h] [rbp-A0h] BYREF
  int v69; // [rsp+78h] [rbp-90h]
  LPVOID pv[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v71; // [rsp+98h] [rbp-70h] BYREF
  int v72; // [rsp+A8h] [rbp-60h]
  unsigned int v73; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v74; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v75; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v76; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v77; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v78; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v79; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID v80; // [rsp+D8h] [rbp-30h] BYREF
  LPVOID v81; // [rsp+E0h] [rbp-28h] BYREF
  LPVOID v82; // [rsp+E8h] [rbp-20h] BYREF
  LPVOID v83; // [rsp+F0h] [rbp-18h] BYREF
  LPVOID v84; // [rsp+F8h] [rbp-10h] BYREF
  LPVOID v85; // [rsp+100h] [rbp-8h] BYREF
  LPVOID v86; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v87[6]; // [rsp+110h] [rbp+8h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h]

  v67 = a2;
  v3 = a1 + 64;
  *(_DWORD *)sub_180055010(a1 + 64, 2LL) = 0;
  pv[0] = 0LL;
  *(_QWORD *)&v68 = pv;
  *((_QWORD *)&v68 + 1) = 0LL;
  LOBYTE(v69) = 1;
  v4 = sub_180058B74(*(_QWORD *)(a1 + 40), &v63, (char *)&v68 + 8);
  if ( (_BYTE)v69 )
  {
    v5 = *(void **)v68;
    *(_QWORD *)v68 = *((_QWORD *)&v68 + 1);
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( v4 >= 0 && (_DWORD)v63 )
  {
    *(_DWORD *)sub_180055010(v3, 0LL) = 1;
    v6 = pv[0];
    v7 = (unsigned __int64 *)(a1 + 152);
    v8 = sub_1800234A0((unsigned __int64 *)(a1 + 152), 0LL);
    v9 = sub_18005A458(v8, (unsigned int)v63, v6);
    v10 = v9;
    if ( v9 >= 0 )
      goto LABEL_7;
    v49 = v9;
    v50 = 1236;
LABEL_119:
    sub_18004BD84(
      (int)retaddr,
      v50,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v49);
    goto LABEL_85;
  }
  *(_DWORD *)sub_180055010(v3, 0LL) = 0;
  v7 = (unsigned __int64 *)(a1 + 152);
  v51 = sub_1800234A0((unsigned __int64 *)(a1 + 152), 0LL);
  v52 = sub_18005A458(v51, 1LL, &xmmword_18015B810);
  v10 = v52;
  if ( v52 < 0 )
  {
    v49 = v52;
    v50 = 1241;
    goto LABEL_119;
  }
LABEL_7:
  v11 = pv[0];
  pv[0] = 0LL;
  if ( v11 )
    CoTaskMemFree(v11);
  LODWORD(v63) = 0;
  v87[0] = 590439624;
  v87[1] = 1283267372;
  v87[2] = 1907779772;
  v87[3] = 1730509416;
  v87[4] = 1;
  *(_QWORD *)&v68 = pv;
  *((_QWORD *)&v68 + 1) = 0LL;
  LOBYTE(v69) = 1;
  v10 = sub_180058C08(
          *(_QWORD *)(a1 + 40),
          (unsigned int)v87,
          (unsigned int)&xmmword_18015BB80,
          (unsigned int)&v63,
          (__int64)&v68 + 8);
  if ( (_BYTE)v69 )
  {
    v12 = *(void **)v68;
    *(_QWORD *)v68 = *((_QWORD *)&v68 + 1);
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( v10 >= 0 && (_DWORD)v63 )
  {
    v53 = pv[0];
    v54 = sub_1800234A0(v7, 3uLL);
    v55 = sub_18005A458(v54, (unsigned int)v63, v53);
    v10 = v55;
    if ( v55 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        1254,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v55);
      goto LABEL_85;
    }
    *(_DWORD *)sub_180055010(v3, 3LL) = 1;
  }
  else
  {
    if ( v10 != -2147023728 )
    {
      if ( v10 >= 0 )
        goto LABEL_85;
      v50 = 1263;
      goto LABEL_118;
    }
    *(_DWORD *)sub_180055010(v3, 3LL) = 0;
  }
  v13 = pv[0];
  pv[0] = 0LL;
  if ( v13 )
    CoTaskMemFree(v13);
  LODWORD(v63) = 0;
  v14 = (_DWORD *)sub_180055010(v3, 0LL);
  *(_DWORD *)sub_180055010(v3, 1LL) = *v14;
  if ( !*(_DWORD *)sub_180055010(v3, 1LL) )
  {
LABEL_103:
    v16 = v63;
    goto LABEL_23;
  }
  *(_QWORD *)&v68 = pv;
  *((_QWORD *)&v68 + 1) = 0LL;
  LOBYTE(v69) = 1;
  v10 = sub_180058C08(
          *(_QWORD *)(a1 + 40),
          (unsigned int)v87,
          (unsigned int)&xmmword_18015A8B0,
          (unsigned int)&v63,
          (__int64)&v68 + 8);
  if ( (_BYTE)v69 )
  {
    v15 = *(void **)v68;
    *(_QWORD *)v68 = *((_QWORD *)&v68 + 1);
    if ( v15 )
      CoTaskMemFree(v15);
  }
  v16 = v63;
  if ( v10 >= 0 && (_DWORD)v63 )
  {
    v56 = pv[0];
    v57 = sub_1800234A0(v7, 1uLL);
    v58 = sub_18005A458(v57, (unsigned int)v63, v56);
    v10 = v58;
    if ( v58 < 0 )
    {
      v49 = v58;
      v50 = 1277;
      goto LABEL_119;
    }
    goto LABEL_103;
  }
  if ( v10 != -2147023728 )
  {
    if ( v10 >= 0 )
      goto LABEL_85;
    v50 = 1281;
LABEL_118:
    v49 = v10;
    goto LABEL_119;
  }
LABEL_23:
  if ( !v16 )
  {
    v17 = sub_1800234A0(v7, 1uLL);
    v18 = sub_18005A458(v17, 1LL, &xmmword_18015B810);
    v10 = v18;
    if ( v18 < 0 )
    {
      v49 = v18;
      v50 = 1288;
      goto LABEL_119;
    }
  }
  v86 = 0LL;
  v73 = 0;
  v85 = 0LL;
  v74 = 0;
  v84 = 0LL;
  v75 = 0;
  v64 = &v86;
  v65 = 0LL;
  v66 = 1;
  v71 = xmmword_180160B40;
  v72 = 13;
  v68 = xmmword_180160990;
  v69 = 5;
  sub_180054490(
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
    (__int64)&v68,
    (__int64 *)&v71,
    &v73,
    &v65);
  if ( v66 )
  {
    v19 = *v64;
    *v64 = v65;
    if ( v19 )
      CoTaskMemFree(v19);
  }
  v64 = &v85;
  v65 = 0LL;
  v66 = 1;
  v68 = xmmword_180160BA0;
  v69 = 14;
  v71 = xmmword_1801609A8;
  v72 = 6;
  sub_180054490(
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
    (__int64)&v71,
    (__int64 *)&v68,
    &v74,
    &v65);
  if ( v66 )
  {
    v20 = *v64;
    *v64 = v65;
    if ( v20 )
      CoTaskMemFree(v20);
  }
  v64 = &v84;
  v65 = 0LL;
  v66 = 1;
  v68 = xmmword_180160B28;
  v69 = 15;
  v71 = xmmword_180160978;
  v72 = 7;
  sub_180054490(
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
    (__int64)&v71,
    (__int64 *)&v68,
    &v75,
    &v65);
  if ( v66 )
  {
    v21 = *v64;
    *v64 = v65;
    if ( v21 )
      CoTaskMemFree(v21);
  }
  v83 = 0LL;
  v76 = 0;
  v82 = 0LL;
  v77 = 0;
  v64 = &v83;
  v65 = 0LL;
  v66 = 1;
  v68 = xmmword_180160B58;
  v69 = 19;
  v71 = xmmword_180160B70;
  v72 = 11;
  sub_180054490(
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
    (__int64)&v71,
    (__int64 *)&v68,
    &v76,
    &v65);
  if ( v66 )
  {
    v22 = *v64;
    *v64 = v65;
    if ( v22 )
      CoTaskMemFree(v22);
  }
  v64 = &v82;
  v65 = 0LL;
  v66 = 1;
  v68 = xmmword_180160BB8;
  v69 = 20;
  v71 = xmmword_180160BD0;
  v72 = 12;
  sub_180054490(
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
    (__int64)&v71,
    (__int64 *)&v68,
    &v77,
    &v65);
  if ( v66 )
  {
    v23 = *v64;
    *v64 = v65;
    if ( v23 )
      CoTaskMemFree(v23);
  }
  v24 = 0;
  if ( v73 || v74 || v75 || v76 || v77 )
    v24 = 1;
  v25 = 0;
  v81 = 0LL;
  v78 = 0;
  v80 = 0LL;
  v79 = 0;
  v64 = &v81;
  v65 = 0LL;
  v66 = 1;
  v68 = xmmword_180160AC0;
  v69 = 0;
  v71 = xmmword_180160AD8;
  v72 = 1;
  sub_180054490(
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
    (__int64)&v71,
    (__int64 *)&v68,
    &v78,
    &v65);
  if ( v66 )
  {
    v26 = *v64;
    *v64 = v65;
    if ( v26 )
      CoTaskMemFree(v26);
  }
  v64 = &v80;
  v65 = 0LL;
  v66 = 1;
  v68 = xmmword_180160AC0;
  v69 = 0;
  v71 = xmmword_180160AF0;
  v72 = 2;
  sub_180054490(
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 16),
    (__int64)&v71,
    (__int64 *)&v68,
    &v79,
    &v65);
  if ( v66 )
  {
    v27 = *v64;
    *v64 = v65;
    if ( v27 )
      CoTaskMemFree(v27);
  }
  if ( v78 == 1 || v79 == 1 )
    v25 = 1;
  v28 = *(_DWORD *)sub_180055010(v3, 0LL) && (v24 || !v25);
  *(_DWORD *)sub_180055010(v3, 0LL) = v28;
  v29 = 0;
  if ( *(__int64 *)(a1 + 1704) > 0 )
  {
    v30 = 0LL;
    do
    {
      *(_DWORD *)sub_180055010(a1 + 1704, v30) = 0;
      v30 = ++v29;
    }
    while ( v29 < *(_QWORD *)(a1 + 1704) );
  }
  for ( i = 0; i < 4; ++i )
  {
    if ( i != 2 )
    {
      v32 = sub_180059A8C(a1, i, v24, v25);
      v10 = v32;
      if ( v32 < 0 )
      {
        sub_18004BD84(
          (int)retaddr,
          1345,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          v32);
        goto LABEL_71;
      }
    }
  }
  v33 = *(_QWORD *)(a1 + 80);
  if ( v33
    && (v68 = xmmword_180160B08,
        v69 = 13,
        v34 = sub_1800234A0((unsigned __int64 *)(a1 + 1752), 0LL),
        v36 = sub_18005A220(v35, v33, (unsigned int)&v68, 0, v34),
        v10 = v36,
        v36 < 0) )
  {
    v59 = 1351;
  }
  else if ( v67 && (v36 = sub_1800591C4(a1), v10 = v36, v36 < 0) )
  {
    v59 = 1357;
  }
  else
  {
    v37 = (__int64 *)sub_1800234A0(v7, 0LL);
    if ( (unsigned int)sub_180022EE0(v37, &xmmword_18015B798) == -1 )
    {
      v60 = (__int64 *)sub_1800234A0(v7, 0LL);
      if ( (unsigned int)sub_180022EE0(v60, &xmmword_18015B810) == -1 )
      {
        v61 = sub_1800234A0(v7, 0LL);
        v38 = (__int128 *)sub_180023320(v61, 0);
      }
      else
      {
        v38 = &xmmword_18015B810;
      }
    }
    v71 = *v38;
    if ( !(unsigned int)sub_1800273F8(a1 + 168, &v71) )
    {
      v10 = -2147024882;
      v62 = -2147024882;
      v59 = 1369;
      goto LABEL_115;
    }
    v71 = xmmword_18015B798;
    v39 = sub_1800233B0((unsigned __int64 *)(a1 + 1672), 0LL);
    v36 = sub_18005B794(v39, &v71);
    v10 = v36;
    if ( v36 >= 0 )
    {
      v10 = 0;
      goto LABEL_71;
    }
    v59 = 1372;
  }
  v62 = v36;
LABEL_115:
  sub_18004BD84(
    (int)retaddr,
    v59,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v62);
LABEL_71:
  v40 = v80;
  v80 = 0LL;
  if ( v40 )
    CoTaskMemFree(v40);
  v41 = v81;
  v81 = 0LL;
  if ( v41 )
    CoTaskMemFree(v41);
  v42 = v82;
  v82 = 0LL;
  if ( v42 )
    CoTaskMemFree(v42);
  v43 = v83;
  v83 = 0LL;
  if ( v43 )
    CoTaskMemFree(v43);
  v44 = v84;
  v84 = 0LL;
  if ( v44 )
    CoTaskMemFree(v44);
  v45 = v85;
  v85 = 0LL;
  if ( v45 )
    CoTaskMemFree(v45);
  v46 = v86;
  v86 = 0LL;
  if ( v46 )
    CoTaskMemFree(v46);
LABEL_85:
  v47 = pv[0];
  pv[0] = 0LL;
  if ( v47 )
    CoTaskMemFree(v47);
  return (unsigned int)v10;
}
