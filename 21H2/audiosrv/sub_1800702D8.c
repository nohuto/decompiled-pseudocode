/*
 * XREFs of sub_1800702D8 @ 0x1800702D8
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180020B94 @ 0x180020B94 (sub_180020B94.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800374C8 @ 0x1800374C8 (sub_1800374C8.c)
 *     sub_180037744 @ 0x180037744 (sub_180037744.c)
 *     sub_180044818 @ 0x180044818 (sub_180044818.c)
 *     sub_1800463E8 @ 0x1800463E8 (sub_1800463E8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800EC128 @ 0x1800EC128 (sub_1800EC128.c)
 *     sub_18011C754 @ 0x18011C754 (sub_18011C754.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_1800702D8(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _QWORD *a6,
        IID *a7,
        _OWORD *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        IID *a15,
        __int64 a16,
        __int128 *a17,
        __int64 a18,
        __int64 a19,
        char a20,
        char a21,
        char a22,
        __int64 a23,
        __int64 a24,
        _QWORD *a25,
        __int64 a26)
{
  unsigned int v26; // r15d
  int v27; // r13d
  _QWORD *v28; // rsi
  IID *v29; // r14
  unsigned int *v30; // rbx
  char *v31; // rdi
  unsigned int v32; // esi
  int v33; // r9d
  int v34; // edx
  unsigned int *v35; // rax
  int v36; // edx
  int v37; // eax
  int v38; // edx
  int v39; // edx
  unsigned int v40; // r13d
  unsigned int *v41; // rax
  SIZE_T v42; // rsi
  unsigned int *v43; // rax
  int v44; // r8d
  unsigned int v45; // ecx
  __int128 v46; // xmm0
  SIZE_T v47; // rsi
  unsigned int *v48; // rax
  int v49; // r15d
  int v50; // esi
  unsigned int v51; // ecx
  void **v52; // rcx
  int v53; // eax
  int v54; // r9d
  int v55; // edx
  unsigned int v56; // r14d
  SIZE_T v57; // rsi
  unsigned int *v58; // rax
  int v59; // r8d
  unsigned int v60; // ecx
  unsigned int *v61; // rax
  __int128 *v62; // rax
  int v63; // eax
  _QWORD *v64; // rcx
  int v65; // eax
  int v66; // r9d
  int v67; // edx
  int v68; // r15d
  unsigned int v69; // r14d
  __int64 v70; // rsi
  char *v71; // rax
  int v72; // r8d
  unsigned int v73; // ecx
  __int64 v74; // rax
  unsigned int *v75; // rax
  char *v76; // rax
  __int64 v78; // [rsp+48h] [rbp-B9h] BYREF
  _OWORD *v79; // [rsp+50h] [rbp-B1h] BYREF
  _OWORD *v80; // [rsp+58h] [rbp-A9h] BYREF
  _QWORD *v81; // [rsp+60h] [rbp-A1h] BYREF
  __int64 v82; // [rsp+68h] [rbp-99h]
  __int64 v83; // [rsp+70h] [rbp-91h] BYREF
  unsigned int *v84; // [rsp+78h] [rbp-89h]
  unsigned int v85; // [rsp+80h] [rbp-81h]
  IID *v86; // [rsp+88h] [rbp-79h]
  IID rclsid; // [rsp+98h] [rbp-69h] BYREF
  char v88; // [rsp+A8h] [rbp-59h]
  __int64 v89; // [rsp+B8h] [rbp-49h]
  __int64 v90; // [rsp+C0h] [rbp-41h]
  _QWORD *v91; // [rsp+C8h] [rbp-39h]
  __int64 v92; // [rsp+D0h] [rbp-31h] BYREF
  char *v93; // [rsp+D8h] [rbp-29h]
  CLSID pClsid; // [rsp+E0h] [rbp-21h] BYREF
  char v95; // [rsp+F0h] [rbp-11h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+2Fh]

  LODWORD(v82) = a4;
  v26 = a3;
  v85 = a3;
  v27 = a2;
  LODWORD(v83) = a2;
  v28 = (_QWORD *)a1;
  v81 = (_QWORD *)a1;
  v86 = a7;
  v29 = a15;
  v89 = (__int64)a15;
  v91 = a25;
  v90 = a26;
  v30 = 0LL;
  v84 = 0LL;
  v31 = 0LL;
  v93 = 0LL;
  v92 = 0LL;
  sub_1800463E8(a1, &v92);
  if ( !a25 )
    goto LABEL_111;
  if ( (v26 & 0x800000) != 0 )
  {
    if ( v27 )
    {
      v32 = -2147418113;
      v33 = -2147418113;
      v34 = 263;
LABEL_105:
      sub_18004BD84((int)retaddr, v34, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v33);
      goto LABEL_154;
    }
    v35 = (unsigned int *)CoTaskMemAlloc(0x130uLL);
    v30 = v35;
    v84 = v35;
    if ( !v35 )
    {
      v32 = -2147024882;
      v33 = -2147024882;
      v34 = 268;
      goto LABEL_105;
    }
    memset(v35, 0, 0x130uLL);
    v30[34] = v26;
    v30[40] = 1 << v30[50];
    *(_OWORD *)&v30[4 * v30[50]++ + 72] = xmmword_1801606C8;
    v30[1] = 1;
    goto LABEL_92;
  }
  if ( !v27 && (a5 & 0xFFFFFFFC) == 0 && a5 != 1 )
  {
    v80 = 0LL;
    v36 = 0;
    LODWORD(v78) = 0;
    if ( a5 != 2 )
    {
      v79 = 0LL;
      if ( (unsigned int)sub_180022F30(v28, a5) )
      {
        rclsid = *v86;
        v37 = sub_1800374C8(v28, (__int128 *)&rclsid, 0, a5, &v79, 0LL, 0LL);
        v32 = v37;
        if ( v37 < 0 )
        {
          v38 = 302;
LABEL_17:
          sub_18004BD84(
            (int)retaddr,
            v38,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            v37);
          sub_18000F708((__int64 *)&v79);
LABEL_63:
          v52 = (void **)&v80;
LABEL_64:
          sub_180044818(v52, 0LL);
          goto LABEL_154;
        }
      }
      else
      {
        v37 = sub_18011C754(v28, a5, &v79, 0LL);
        v32 = v37;
        if ( v37 < 0 )
        {
          v38 = 307;
          goto LABEL_17;
        }
      }
      if ( v79 )
      {
        *(_QWORD *)&rclsid.Data1 = &v80;
        *(_QWORD *)rclsid.Data4 = 0LL;
        v88 = 1;
        (*(void (__fastcall **)(_OWORD *, __int64 *, unsigned __int8 *))(*(_QWORD *)v79 + 32LL))(
          v79,
          &v78,
          rclsid.Data4);
        if ( v88 )
          sub_180044818(*(void ***)&rclsid.Data1, *(void **)rclsid.Data4);
      }
      sub_18000F708((__int64 *)&v79);
      v36 = v78;
    }
    if ( (_DWORD)v82 )
    {
      if ( (_DWORD)v82 != 1 )
      {
        if ( (_DWORD)v82 != 2 )
        {
          v32 = -2147024809;
          v39 = 439;
LABEL_62:
          sub_18004BD84(
            (int)retaddr,
            v39,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            v32);
          goto LABEL_63;
        }
        v40 = 3;
        v41 = (unsigned int *)CoTaskMemAlloc(0x150uLL);
        v30 = v41;
        v84 = v41;
        if ( !v41 )
        {
          v32 = -2147024882;
          v39 = 422;
          goto LABEL_62;
        }
        memset(v41, 0, 0x150uLL);
        *v30 = (a5 != 2) + 1;
        v30[34] = v26;
        v30[50] = 3;
        *((_OWORD *)v30 + 18) = xmmword_1801606A8;
        *((_OWORD *)v30 + 19) = xmmword_180160190;
        *((_OWORD *)v30 + 20) = xmmword_180160688;
        v30[40] = 0;
        goto LABEL_59;
      }
      v40 = v36 + 2;
      v42 = 16 * ((unsigned int)(v36 + 2) + 18LL);
      v43 = (unsigned int *)CoTaskMemAlloc(v42);
      v30 = v43;
      v84 = v43;
      if ( !v43 )
      {
        v32 = -2147024882;
        v39 = 387;
        goto LABEL_62;
      }
      memset(v43, 0, v42);
      *v30 = 1;
      v30[34] = v26;
      *((_QWORD *)v30 + 18) = 0LL;
      v30[40] = 0;
      v30[50] = 0;
      *((_QWORD *)v30 + 34) = a23;
      *((_QWORD *)v30 + 35) = a24;
      if ( a22 )
        *((_QWORD *)v30 + 33) = a19;
      v44 = 0;
      if ( (_DWORD)v78 )
      {
        v45 = 0;
        while ( v45 <= 0x1F )
        {
          v30[40] |= 1 << v45;
          *(_OWORD *)&v30[4 * v30[50] + 72] = v80[v44];
          v45 = v30[50] + 1;
          v30[50] = v45;
          if ( ++v44 >= (unsigned int)v78 )
            goto LABEL_37;
        }
        v39 = 403;
LABEL_61:
        v32 = -2147418113;
        goto LABEL_62;
      }
LABEL_37:
      *(_OWORD *)&v30[4 * v30[50]++ + 72] = xmmword_180160190;
      v46 = xmmword_180160688;
    }
    else
    {
      v40 = v36 + 4;
      v47 = 16 * ((unsigned int)(v36 + 4) + 18LL);
      v48 = (unsigned int *)CoTaskMemAlloc(v47);
      v30 = v48;
      v84 = v48;
      if ( !v48 )
      {
        v32 = -2147024882;
        v39 = 321;
        goto LABEL_62;
      }
      memset(v48, 0, v47);
      *v30 = 0;
      v30[34] = v26;
      *((_QWORD *)v30 + 18) = 0LL;
      v30[50] = 0;
      v30[40] = 0;
      if ( a21 )
      {
        v30[40] = 1;
        *(_OWORD *)&v30[4 * v30[50]++ + 72] = xmmword_1801606B8;
      }
      else
      {
        v49 = 0;
        if ( (_DWORD)v78 )
        {
          while ( 1 )
          {
            if ( *(_QWORD *)&v80[v49] != 0x4F23C73B4BE8A061LL
              || *((_QWORD *)&v80[v49] + 1) != 0x98863EAE7A311481uLL
              || !sub_18006C4AC()
              || RpcImpersonateClient(0LL) < 0
              || (v50 = IsVirtualSurroundAllowedForProcess(a9), RpcRevertToSelf(), v50) )
            {
              v51 = v30[50];
              if ( v51 > 0x1F )
              {
                v39 = 356;
                goto LABEL_61;
              }
              v30[40] |= 1 << v51;
              *(_OWORD *)&v30[4 * v30[50]++ + 72] = v80[v49];
            }
            if ( ++v49 >= (unsigned int)v78 )
            {
              v29 = (IID *)v89;
              break;
            }
          }
        }
        v26 = v85;
      }
      *(_OWORD *)&v30[4 * v30[50]++ + 72] = xmmword_180160190;
      *(_OWORD *)&v30[4 * v30[50]++ + 72] = xmmword_180160688;
      *(_OWORD *)&v30[4 * v30[50]++ + 72] = xmmword_1801606A8;
      if ( a21 || !a20 || CoGetPSClsid(&stru_18015E080, &pClsid) < 0 )
        goto LABEL_59;
      v46 = xmmword_180160698;
    }
    *(_OWORD *)&v30[4 * v30[50]++ + 72] = v46;
LABEL_59:
    v30[1] = v26 >> 31;
    if ( v30[50] > v40 )
    {
      v39 = 443;
      goto LABEL_61;
    }
    sub_180044818((void **)&v80, 0LL);
    v27 = v83;
    goto LABEL_92;
  }
  v79 = 0LL;
  LODWORD(v78) = 0;
  if ( a5 != 1 || v27 )
  {
    v61 = (unsigned int *)CoTaskMemAlloc(0x130uLL);
    v30 = v61;
    v84 = v61;
    if ( !v61 )
    {
      v32 = -2147024882;
      sub_18004BD84(
        (int)retaddr,
        486,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        -2147024882);
      goto LABEL_89;
    }
    memset(v61, 0, 0x130uLL);
    *v30 = v82;
    v30[34] = v26;
  }
  else
  {
    rclsid = *v86;
    v80 = 0LL;
    v53 = sub_1800374C8(v28, (__int128 *)&rclsid, 0, a5, &v80, 0LL, 0LL);
    v32 = v53;
    if ( v53 < 0 )
    {
      v54 = v53;
      v55 = 452;
LABEL_84:
      sub_18004BD84((int)retaddr, v55, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v54);
      sub_18000F708((__int64 *)&v80);
LABEL_89:
      v52 = (void **)&v79;
      goto LABEL_64;
    }
    if ( v80 )
    {
      *(_QWORD *)&pClsid.Data1 = &v79;
      *(_QWORD *)pClsid.Data4 = 0LL;
      v95 = 1;
      (*(void (__fastcall **)(_OWORD *, __int64 *, unsigned __int8 *))(*(_QWORD *)v80 + 32LL))(v80, &v78, pClsid.Data4);
      if ( v95 )
        sub_180044818(*(void ***)&pClsid.Data1, *(void **)pClsid.Data4);
    }
    v56 = v78;
    v57 = 16 * ((unsigned int)v78 + 18LL);
    v58 = (unsigned int *)CoTaskMemAlloc(v57);
    v30 = v58;
    v84 = v58;
    if ( !v58 )
    {
      v32 = -2147024882;
      v55 = 459;
LABEL_83:
      v54 = v32;
      goto LABEL_84;
    }
    memset(v58, 0, v57);
    *v30 = 0;
    v30[34] = v26;
    *((_QWORD *)v30 + 18) = 0LL;
    v30[50] = 0;
    v30[40] = 0;
    v59 = 0;
    if ( (_DWORD)v78 )
    {
      v60 = 0;
      while ( v60 <= 0x1F )
      {
        v30[40] |= 1 << v60;
        *(_OWORD *)&v30[4 * v30[50] + 72] = v79[v59];
        v60 = v30[50] + 1;
        v30[50] = v60;
        if ( ++v59 >= (unsigned int)v78 )
          goto LABEL_80;
      }
      v55 = 470;
      goto LABEL_82;
    }
LABEL_80:
    v30[1] = 0;
    if ( v30[50] > v56 )
    {
      v55 = 478;
LABEL_82:
      v32 = -2147418113;
      goto LABEL_83;
    }
    sub_18000F708((__int64 *)&v80);
    v29 = (IID *)v89;
  }
  sub_180044818((void **)&v79, 0LL);
LABEL_92:
  *(IID *)(v30 + 41) = *v86;
  *(_OWORD *)(v30 + 45) = *a8;
  v30[2] = a5;
  *((_QWORD *)v30 + 16) = a10;
  v30[30] = *(unsigned __int16 *)(a10 + 16) + 18;
  *((_QWORD *)v30 + 3) = a12;
  *((_QWORD *)v30 + 4) = a13;
  v30[3] = a9;
  *((_QWORD *)v30 + 2) = a14;
  v62 = &xmmword_18015B730;
  if ( a17 )
    v62 = a17;
  *((_OWORD *)v30 + 3) = *v62;
  *((_OWORD *)v30 + 13) = *(_OWORD *)a18;
  *((_OWORD *)v30 + 14) = *(_OWORD *)(a18 + 16);
  *((_OWORD *)v30 + 15) = *(_OWORD *)(a18 + 32);
  *((_QWORD *)v30 + 32) = *(_QWORD *)(a18 + 48);
  *((_QWORD *)v30 + 14) = a19;
  *((_OWORD *)v30 + 4) = xmmword_18015B730;
  if ( v29 && (*(_QWORD *)&v29->Data1 || *(_QWORD *)v29->Data4) )
  {
    rclsid = *v29;
    v63 = sub_1800EC128(&rclsid);
    v32 = v63;
    if ( v63 < 0 )
    {
      v34 = 513;
LABEL_104:
      v33 = v63;
      goto LABEL_105;
    }
  }
  *((_OWORD *)v30 + 5) = xmmword_18015B730;
  if ( v29 && (*(_QWORD *)&v29->Data1 || *(_QWORD *)v29->Data4) )
  {
    rclsid = *v29;
    v63 = sub_1800EC128(&rclsid);
    v32 = v63;
    if ( v63 < 0 )
    {
      v34 = 520;
      goto LABEL_104;
    }
  }
  if ( a16 && (*(_QWORD *)a16 || *(_QWORD *)(a16 + 8)) )
    *((_OWORD *)v30 + 6) = *(_OWORD *)a16;
  v28 = v81;
LABEL_111:
  v64 = (_QWORD *)v90;
  if ( v90 )
  {
    v79 = 0LL;
    LODWORD(v78) = 0;
    rclsid = *v86;
    v80 = 0LL;
    v83 = 0LL;
    v65 = sub_180037744(v28, (__int128 *)&rclsid, 0, a5, &v83, &v80, 0LL);
    v32 = v65;
    if ( v65 < 0 )
    {
      v66 = v65;
      v67 = 535;
LABEL_140:
      sub_18004BD84((int)retaddr, v67, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v66);
LABEL_145:
      sub_18000F708((__int64 *)&v80);
      sub_180044818((void **)&v79, 0LL);
      sub_18000F708(&v83);
      goto LABEL_154;
    }
    if ( v83 )
    {
      *(_QWORD *)&pClsid.Data1 = &v79;
      *(_QWORD *)pClsid.Data4 = 0LL;
      v95 = 1;
      (*(void (__fastcall **)(__int64, __int64 *, unsigned __int8 *))(*(_QWORD *)v83 + 32LL))(v83, &v78, pClsid.Data4);
      if ( v95 )
        sub_180044818(*(void ***)&pClsid.Data1, *(void **)pClsid.Data4);
    }
    if ( (v26 & 0x800000) != 0 )
    {
      if ( v27 )
      {
        v67 = 545;
LABEL_138:
        v32 = -2147418113;
        goto LABEL_139;
      }
    }
    else if ( !v27 && (a5 & 0xFFFFFFFC) == 0 && a5 != 2 )
    {
      v68 = v82;
      if ( (_DWORD)v82 != 2
        && *a6 == 0x4FD1B4939E90EA20LL
        && a6[1] == 0xCF56A961137EA8A1uLL
        && (unsigned int)sub_180020B94((__int64)v81, a5) )
      {
        v69 = 1;
        if ( (unsigned int)v78 > 1 )
          v69 = v78;
        v70 = 16LL * v69;
        v71 = (char *)CoTaskMemAlloc(v70 + 60);
        v31 = v71;
        v93 = v71;
        if ( !v71 )
        {
          v32 = -2147024882;
          v67 = 568;
LABEL_139:
          v66 = v32;
          goto LABEL_140;
        }
        memset(v71, 0, v70 + 60);
        *(_DWORD *)v31 = v68;
        *((_DWORD *)v31 + 1) = 0;
        *((_DWORD *)v31 + 14) = 0;
        v72 = 0;
        if ( (_DWORD)v78 )
        {
          v73 = 0;
          while ( v73 <= 0x1F )
          {
            *((_DWORD *)v31 + 8) |= 1 << v73;
            *(_OWORD *)&v31[16 * *((unsigned int *)v31 + 14) + 60] = v79[v72];
            v73 = *((_DWORD *)v31 + 14) + 1;
            *((_DWORD *)v31 + 14) = v73;
            if ( ++v72 >= (unsigned int)v78 )
              goto LABEL_135;
          }
          v67 = 576;
          goto LABEL_138;
        }
LABEL_135:
        *(IID *)(v31 + 36) = *v86;
        if ( v80 )
        {
          (**(void (__fastcall ***)(_OWORD *, __int64 *, __int64 *))v80)(v80, &qword_18015B830, (__int64 *)&v81);
          v74 = (__int64)v81;
        }
        else
        {
          v74 = 0LL;
          v81 = 0LL;
        }
        *((_DWORD *)v31 + 13) = v74 != 0;
        if ( *((_DWORD *)v31 + 14) > v69 )
        {
          v32 = -2147418113;
          sub_18004BD84(
            (int)retaddr,
            587,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            -2147418113);
          if ( v81 )
            (*(void (__fastcall **)(_QWORD *))(*v81 + 16LL))(v81);
          goto LABEL_145;
        }
        *((_QWORD *)v31 + 2) = a11;
        *((_DWORD *)v31 + 2) = *(unsigned __int16 *)(a11 + 16) + 18;
        if ( v81 )
          (*(void (__fastcall **)(_QWORD *))(*v81 + 16LL))(v81);
      }
    }
    sub_18000F708((__int64 *)&v80);
    sub_180044818((void **)&v79, 0LL);
    sub_18000F708(&v83);
    v64 = (_QWORD *)v90;
  }
  if ( v91 )
  {
    v75 = v30;
    v30 = 0LL;
    *v91 = v75;
  }
  if ( v64 )
  {
    v76 = v31;
    v31 = 0LL;
    *v64 = v76;
  }
  v32 = 0;
LABEL_154:
  if ( v31 )
    CoTaskMemFree(v31);
  if ( v30 )
    CoTaskMemFree(v30);
  sub_18000F708(&v92);
  return v32;
}
