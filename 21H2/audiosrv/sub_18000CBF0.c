/*
 * XREFs of sub_18000CBF0 @ 0x18000CBF0
 * Callers:
 *     sub_1800DEF80 @ 0x1800DEF80 (sub_1800DEF80.c)
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18000F730 @ 0x18000F730 (sub_18000F730.c)
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_1800340B0 @ 0x1800340B0 (sub_1800340B0.c)
 *     sub_180043DB0 @ 0x180043DB0 (sub_180043DB0.c)
 *     sub_180043E38 @ 0x180043E38 (sub_180043E38.c)
 *     sub_1800445F8 @ 0x1800445F8 (sub_1800445F8.c)
 *     sub_18004A758 @ 0x18004A758 (sub_18004A758.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sprintf_s @ 0x18006ACB4 (sprintf_s.c)
 *     sub_18006CFE4 @ 0x18006CFE4 (sub_18006CFE4.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BDAAC @ 0x1800BDAAC (sub_1800BDAAC.c)
 *     sub_1800C2A48 @ 0x1800C2A48 (sub_1800C2A48.c)
 *     sub_1800C4FD8 @ 0x1800C4FD8 (sub_1800C4FD8.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 *     sub_1800D672C @ 0x1800D672C (sub_1800D672C.c)
 *     sub_1800DA9D4 @ 0x1800DA9D4 (sub_1800DA9D4.c)
 *     sub_1800DAE04 @ 0x1800DAE04 (sub_1800DAE04.c)
 *     sub_1800DB7BC @ 0x1800DB7BC (sub_1800DB7BC.c)
 *     sub_1800DC4F8 @ 0x1800DC4F8 (sub_1800DC4F8.c)
 */

__int64 __fastcall sub_18000CBF0(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        __int128 *a4,
        unsigned __int16 *Src,
        _QWORD *a6)
{
  __int128 v6; // xmm0
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  DWORD CurrentThreadId; // eax
  int v14; // r8d
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v16; // rax
  bool v17; // zf
  int v18; // ecx
  const wchar_t *v19; // rax
  int v20; // edi
  __int64 v21; // rdx
  HRESULT v22; // eax
  int v23; // ebx
  LSTATUS v24; // eax
  int v25; // eax
  __int64 v26; // rbx
  unsigned int v27; // r8d
  unsigned int v28; // r8d
  __int64 v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // r14
  int v32; // eax
  int v33; // ebx
  int v34; // eax
  __int64 v35; // r8
  void *v36; // rdx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rdx
  void *v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  void *v46; // rcx
  int v47; // r12d
  unsigned int v48; // r15d
  int v49; // eax
  int v50; // eax
  int v51; // eax
  void *v52; // rcx
  __int16 v54; // [rsp+84h] [rbp-7Ch]
  _QWORD *v55; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v56[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+98h] [rbp-68h] BYREF
  LPOLESTR lpsz; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v60; // [rsp+B0h] [rbp-50h] BYREF
  int v61; // [rsp+B8h] [rbp-48h]
  unsigned int *v62; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-38h] BYREF
  WINBOOL fPending; // [rsp+D0h] [rbp-30h] BYREF
  int v65; // [rsp+D8h] [rbp-28h] BYREF
  int v66; // [rsp+E0h] [rbp-20h] BYREF
  int v67; // [rsp+E8h] [rbp-18h] BYREF
  int v68; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v69; // [rsp+F4h] [rbp-Ch]
  int v70; // [rsp+F8h] [rbp-8h] BYREF
  __int16 v71; // [rsp+FCh] [rbp-4h]
  int v72; // [rsp+100h] [rbp+0h] BYREF
  LPVOID Context; // [rsp+108h] [rbp+8h] BYREF
  HKEY hKey; // [rsp+110h] [rbp+10h] BYREF
  __int64 v75; // [rsp+118h] [rbp+18h] BYREF
  __int64 v76; // [rsp+120h] [rbp+20h] BYREF
  __int64 v77; // [rsp+128h] [rbp+28h] BYREF
  __int64 v78; // [rsp+130h] [rbp+30h] BYREF
  struct _FILETIME pftDueTime; // [rsp+138h] [rbp+38h] BYREF
  __int64 v80; // [rsp+140h] [rbp+40h]
  __int64 v81; // [rsp+148h] [rbp+48h] BYREF
  void **v82; // [rsp+150h] [rbp+50h]
  void *v83; // [rsp+158h] [rbp+58h] BYREF
  char v84; // [rsp+160h] [rbp+60h]
  void **v85; // [rsp+168h] [rbp+68h]
  void *v86; // [rsp+170h] [rbp+70h]
  char v87; // [rsp+178h] [rbp+78h]
  void **v88; // [rsp+180h] [rbp+80h]
  void *v89; // [rsp+188h] [rbp+88h] BYREF
  char v90; // [rsp+190h] [rbp+90h]
  void **v91; // [rsp+198h] [rbp+98h]
  void *v92; // [rsp+1A0h] [rbp+A0h]
  char v93; // [rsp+1A8h] [rbp+A8h]
  _QWORD pv[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  DWORD v95; // [rsp+1C0h] [rbp+C0h]
  const wchar_t *v96; // [rsp+1C8h] [rbp+C8h]
  __int64 v97; // [rsp+1D0h] [rbp+D0h]
  char v98; // [rsp+1D8h] [rbp+D8h]
  __int64 v99; // [rsp+1DCh] [rbp+DCh]
  IID rclsid; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v101; // [rsp+200h] [rbp+100h] BYREF
  __int128 v102; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v103[8]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v104[8]; // [rsp+228h] [rbp+128h] BYREF
  __int128 v105; // [rsp+230h] [rbp+130h] BYREF
  __int128 v106; // [rsp+240h] [rbp+140h] BYREF
  __int128 v107; // [rsp+250h] [rbp+150h] BYREF
  __int128 v108; // [rsp+260h] [rbp+160h] BYREF
  __int128 v109; // [rsp+270h] [rbp+170h] BYREF
  __int128 v110; // [rsp+280h] [rbp+180h] BYREF
  __int128 v111; // [rsp+290h] [rbp+190h] BYREF
  __int128 v112; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v113; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int128 v114; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v115[16]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int128 v116; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int128 v117; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v118[16]; // [rsp+300h] [rbp+200h] BYREF
  const wchar_t *v119; // [rsp+310h] [rbp+210h]
  int v120; // [rsp+318h] [rbp+218h]
  int v121; // [rsp+31Ch] [rbp+21Ch]
  int *v122; // [rsp+320h] [rbp+220h]
  __int64 v123; // [rsp+328h] [rbp+228h]
  int *v124; // [rsp+330h] [rbp+230h]
  __int64 v125; // [rsp+338h] [rbp+238h]
  int *v126; // [rsp+340h] [rbp+240h]
  __int64 v127; // [rsp+348h] [rbp+248h]
  int *v128; // [rsp+350h] [rbp+250h]
  __int64 v129; // [rsp+358h] [rbp+258h]
  WCHAR SubKey[264]; // [rsp+360h] [rbp+260h] BYREF
  void *retaddr; // [rsp+5B8h] [rbp+4B8h]

  v6 = *a4;
  v80 = a1;
  v61 = a3;
  v116 = v6;
  v117 = v6;
  EtwEventActivityIdControl(4LL, &v117);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v10 = qword_18019E5F0;
  v11 = (unsigned int)dword_18019D9F4;
  v12 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v12;
  CurrentThreadId = GetCurrentThreadId();
  v97 = v10;
  v95 = CurrentThreadId;
  v96 = L"AudioServerIsFormatSupported";
  v98 = 0;
  v99 = 0LL;
  if ( (unsigned int)v11 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v11 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v11 / 3, 0);
    }
  }
  if ( (byte_18019F980 & 0x20) != 0 )
  {
    v72 = *((_DWORD *)a4 + 13);
    v67 = *((_DWORD *)a4 + 17);
    v66 = *((_DWORD *)a4 + 14);
    v65 = *((_DWORD *)a4 + 12);
    if ( a2 )
    {
      v16 = -1LL;
      do
        v17 = a2[++v16] == 0;
      while ( !v17 );
      v18 = 2 * v16 + 2;
      v19 = a2;
    }
    else
    {
      v18 = 10;
      v19 = L"NULL";
    }
    v119 = v19;
    v120 = v18;
    v122 = &v65;
    v121 = 0;
    v124 = &v66;
    v126 = &v67;
    v128 = &v72;
    v123 = 4LL;
    v125 = 4LL;
    v127 = 4LL;
    v129 = 4LL;
    sub_18000F730(v18, (unsigned int)&unk_18015DDA8, v14, 6, (__int64)v118);
  }
  v56[1] = 1;
  if ( a3 || a6 )
  {
    if ( *((_DWORD *)a4 + 12) >= 0x15u )
    {
      v21 = 1391LL;
LABEL_38:
      v20 = -2147024809;
      sub_18004BD84(retaddr, v21, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942487LL);
      sub_18004BD84(retaddr, 3942LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942487LL);
      goto LABEL_136;
    }
    rclsid = (IID)a4[1];
    if ( *(_QWORD *)&rclsid.Data1 || *(_QWORD *)rclsid.Data4 )
    {
      lpsz = 0LL;
      sub_18002A504(&lpsz, 0LL);
      v22 = StringFromCLSID(&rclsid, &lpsz);
      v23 = v22;
      if ( v22 >= 0 )
      {
        if ( sprintf_s(
               (char *const)SubKey,
               0x104uLL,
               L"%s\\%s",
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\",
               lpsz) == -1 )
        {
          sub_18004BD84(retaddr, 1379LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942522LL);
          sub_1800BDAAC(&lpsz);
          v21 = 1393LL;
          goto LABEL_38;
        }
        hKey = 0LL;
        v24 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey);
        v23 = v24;
        if ( v24 >= 0 )
        {
          if ( hKey )
            RegCloseKey(hKey);
          if ( lpsz )
            CoTaskMemFree(lpsz);
          goto LABEL_36;
        }
        sub_18004BD84(retaddr, 1382LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v24);
        if ( hKey )
          RegCloseKey(hKey);
        if ( lpsz )
          CoTaskMemFree(lpsz);
      }
      else
      {
        sub_18004BD84(retaddr, 1376LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v22);
        sub_1800BDAAC(&lpsz);
      }
      if ( v23 < 0 )
      {
        v21 = 1393LL;
        goto LABEL_38;
      }
    }
LABEL_36:
    if ( *((_DWORD *)a4 + 13) > 3u )
    {
      v21 = 1395LL;
      goto LABEL_38;
    }
    if ( a6 )
      *a6 = 0LL;
    if ( *Src == 0xFFFE && Src[8] < 0x16u )
    {
      v20 = -2147024809;
      sub_18004BD84(retaddr, 3949LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942487LL);
      goto LABEL_136;
    }
    v55 = 0LL;
    v25 = (*(__int64 (__fastcall **)(PVOID, const wchar_t *, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)::pv + 24LL))(
            ::pv,
            a2,
            0LL,
            0LL,
            &v55);
    v20 = v25;
    if ( v25 < 0 )
    {
      sub_18004BD84(retaddr, 3954LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v25);
LABEL_135:
      sub_18000F708(&v55);
      goto LABEL_136;
    }
    v81 = v55[2];
    v26 = v81;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
    if ( Src[1] > 2u && ((*Src - 1) & 0xFFFD) == 0 )
    {
      v20 = -2004287480;
      sub_18004BD84(retaddr, 3961LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2290679816LL);
LABEL_134:
      sub_18000F708(&v81);
      goto LABEL_135;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD *))(*v55 + 56LL))(v55) && Src[1] > 2u )
    {
      v27 = dword_18019EDD8;
      if ( (dword_18019EDD8 & 4) == 0 )
      {
        v60 = *(_QWORD **)sub_1800340B0(&dword_18019EDD8, v103);
        v27 = (unsigned int)v60;
      }
      LOBYTE(v54) = 3;
      v69 = v54;
      v68 = 0;
      sub_18006CFE4(&unk_18019EDE0, 11831216LL, (v27 >> 10) & 1, (v27 >> 11) & 1, &v68, 1, 0);
      v28 = dword_18019EDD8;
      if ( (dword_18019EDD8 & 4) == 0 )
      {
        v60 = *(_QWORD **)sub_1800340B0(&dword_18019EDD8, v104);
        v28 = (unsigned int)v60;
      }
      LOBYTE(v54) = 3;
      v71 = v54;
      v70 = 0;
      sub_18006CFE4(&unk_18019EDE0, 11831216LL, (v28 >> 10) & 1, (v28 >> 11) & 1, &v70, 1, 2);
      v26 = v81;
    }
    v29 = Src[8];
    v30 = CoTaskMemAlloc(v29 + 18);
    v31 = v30;
    if ( v30 )
    {
      memcpy(v30, Src, v29 + 18);
      v17 = *((_DWORD *)a4 + 13) == 1;
      v60 = v31;
      if ( v17 )
      {
        v57 = 0LL;
        sub_1800CB144(&v57);
        v32 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
                qword_18019E618,
                v80,
                &v57);
        v20 = v32;
        if ( v32 >= 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019EE60 + 80LL))(
                 qword_18019EE60,
                 v57)
            && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v57 + 144LL))(
                 v57,
                 *((unsigned int *)a4 + 12),
                 0LL) )
          {
            v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 120LL))(v57);
            v34 = sub_18006E5E0(
                    *((_DWORD *)a4 + 12),
                    *((_DWORD *)a4 + 14),
                    *((_DWORD *)a4 + 32),
                    (_DWORD)v55,
                    0,
                    v61,
                    1,
                    0LL,
                    0,
                    0,
                    (__int64)&v107,
                    (__int64)&v105,
                    (__int64)v115,
                    0LL,
                    0LL);
            v20 = v34;
            if ( v34 >= 0 )
            {
              v85 = (void **)&v75;
              v75 = 0LL;
              v106 = v105;
              v86 = 0LL;
              v87 = 1;
              v20 = sub_1800D672C(v55, v31, v35, &v106);
              if ( v87 )
              {
                v36 = *v85;
                *v85 = v86;
                if ( v36 )
                  CoTaskMemFree(v36);
              }
              if ( v20 >= 0 )
              {
                v108 = v107;
                v37 = (*(__int64 (__fastcall **)(_QWORD *))(*v55 + 56LL))(v55);
                if ( (unsigned int)sub_1800DAE04(
                                     (_DWORD)a2,
                                     v37,
                                     (unsigned int)&v108,
                                     *((_DWORD *)a4 + 13),
                                     *((_DWORD *)a4 + 12),
                                     v33) )
                {
                  sub_1800C2A48(&v75);
                  sub_18000F708(&v57);
                  v20 = 0;
                  goto LABEL_133;
                }
                v20 = -2004287480;
                sub_18004BD84(retaddr, 4016LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2290679816LL);
              }
              sub_1800C2A48(&v75);
              sub_18000F708(&v57);
            }
            else
            {
              sub_18004BD84(
                retaddr,
                4006LL,
                "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (unsigned int)v34);
              sub_18000F708(&v57);
            }
          }
          else
          {
            v20 = 1;
            sub_18000F708(&v57);
          }
        }
        else
        {
          sub_18004BD84(retaddr, 3976LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v32);
          sub_18000F708(&v57);
        }
LABEL_133:
        sub_1800C2A48(&v60);
        goto LABEL_134;
      }
      if ( v61 )
      {
        v47 = sub_180043DB0(v26) == 0;
        v48 = sub_180043E38(v26);
        if ( v48 && !v47 )
          goto LABEL_112;
        if ( qword_18019E618 )
        {
          v59 = 0LL;
          v49 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
                  qword_18019E618,
                  v80,
                  &v59);
          v20 = v49;
          if ( v49 < 0 )
          {
            sub_18004BD84(retaddr, 4081LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v49);
            sub_18000F708(&v59);
            goto LABEL_133;
          }
          if ( v47 )
            v47 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v59 + 144LL))(
                    v59,
                    *((unsigned int *)a4 + 12),
                    1LL);
          if ( !v48 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v59 + 88LL))(v59) )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019EE60 + 80LL))(
                      qword_18019EE60,
                      v59)
                || (v48 = 0,
                    !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v59 + 144LL))(
                       v59,
                       *((unsigned int *)a4 + 12),
                       0LL)) )
              {
                v48 = 1;
              }
            }
          }
          sub_18000F708(&v59);
        }
        if ( !v47 )
        {
LABEL_112:
          v20 = -2004287474;
          goto LABEL_133;
        }
        if ( !(unsigned int)sub_1800445F8(v31) || !(unsigned int)sub_1800DC4F8(v26) )
        {
          v63 = 0LL;
          v51 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, __int64 *))(*(_QWORD *)v26 + 24LL))(
                  v26,
                  &unk_18015C488,
                  23LL,
                  0LL,
                  &v63);
          v20 = v51;
          if ( v51 >= 0 )
          {
            v62 = 0LL;
            v91 = (void **)&v62;
            v92 = 0LL;
            v93 = 1;
            v20 = sub_18004A758(v31);
            if ( v93 )
            {
              v52 = *v91;
              *v91 = v92;
              if ( v52 )
                CoTaskMemFree(v52);
            }
            if ( v20 >= 0 )
            {
              v78 = 0LL;
              if ( (*(int (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD, unsigned int, __int64 *))(*(_QWORD *)v63 + 80LL))(
                     v63,
                     v62,
                     *v62,
                     0LL,
                     v48,
                     &v78) >= 0 )
              {
                sub_18000F708(&v78);
                sub_1800C2A48(&v62);
                sub_18000F708(&v63);
                v20 = 0;
                goto LABEL_133;
              }
              v20 = -2004287480;
              if ( v78 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
            }
            else
            {
              sub_18004BD84(
                retaddr,
                4113LL,
                "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (unsigned int)v20);
            }
            sub_1800C2A48(&v62);
            sub_18000F708(&v63);
          }
          else
          {
            sub_18004BD84(retaddr, 4110LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v51);
            sub_18000F708(&v63);
          }
          goto LABEL_133;
        }
        v50 = sub_1800DB7BC(v26, v31, 0LL, v48);
        v20 = v50;
        if ( v50 < 0 )
        {
          v40 = (unsigned int)v50;
          v41 = 4104LL;
          goto LABEL_132;
        }
      }
      else
      {
        v38 = (*(__int64 (__fastcall **)(_QWORD *))(*v55 + 56LL))(v55);
        v39 = sub_18006E5E0(
                *((_DWORD *)a4 + 12),
                *((_DWORD *)a4 + 14),
                *((_DWORD *)a4 + 32),
                (_DWORD)v55,
                v38 == 1,
                0,
                *((_DWORD *)a4 + 13),
                0LL,
                0,
                0,
                (__int64)&v114,
                (__int64)&v101,
                (__int64)&v102,
                0LL,
                0LL);
        v20 = v39;
        if ( v39 < 0 )
        {
          v40 = (unsigned int)v39;
          v41 = 4042LL;
LABEL_132:
          sub_18004BD84(retaddr, v41, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v40);
          goto LABEL_133;
        }
        if ( *((_DWORD *)a4 + 17) )
        {
          v45 = *((unsigned int *)a4 + 13);
          v88 = (void **)&v77;
          v111 = v114;
          v77 = 0LL;
          v112 = v101;
          v113 = v102;
          v89 = 0LL;
          v90 = 1;
          v20 = sub_1800D5E18(v55, v45, v31, &v113, &v112, &v111, 1, &v89);
          if ( v90 )
          {
            v46 = *v88;
            *v88 = v89;
            if ( v46 )
              CoTaskMemFree(v46);
          }
          if ( v20 >= 0 )
          {
            sub_1800C2A48(&v77);
            v20 = 0;
          }
          else
          {
            sub_18004BD84(retaddr, 4068LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v20);
            sub_1800C2A48(&v77);
          }
          goto LABEL_133;
        }
        if ( !*((_DWORD *)a4 + 33) )
        {
          v42 = *((unsigned int *)a4 + 13);
          v109 = v102;
          v82 = (void **)&v76;
          v76 = 0LL;
          v83 = 0LL;
          v84 = 1;
          v20 = sub_180020090(v55, v42, &v109, &v83);
          if ( v84 )
          {
            v43 = *v82;
            *v82 = v83;
            if ( v43 )
              CoTaskMemFree(v43);
          }
          if ( v20 >= 0 )
          {
            v44 = *((unsigned int *)a4 + 13);
            v110 = v101;
            v20 = sub_18001E300(v55, &v110, v44, v76, v31, a6);
          }
          else
          {
            sub_18004BD84(retaddr, 4059LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v20);
          }
          sub_1800C2A48(&v76);
          goto LABEL_133;
        }
        if ( (*(_WORD *)v31 != 0xFFFE
           || (v31[3] != 0x10000000000001LL || v31[4] != 0x719B3800AA000080LL)
           && (v31[3] != 0x10000000000003LL || v31[4] != 0x719B3800AA000080LL))
          && ((*(_WORD *)v31 - 1) & 0xFFFD) != 0 )
        {
          v20 = -2004287480;
          v41 = 4053LL;
LABEL_131:
          v40 = (unsigned int)v20;
          goto LABEL_132;
        }
      }
      v20 = 0;
      goto LABEL_133;
    }
    v60 = 0LL;
    v20 = -2147024882;
    v41 = 3971LL;
    goto LABEL_131;
  }
  v20 = -2147024809;
  sub_18004BD84(retaddr, 3940LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942487LL);
LABEL_136:
  sub_1800DA9D4(v56);
  sub_18000F690(pv);
  sub_1800C4FD8(&v116);
  return (unsigned int)v20;
}
