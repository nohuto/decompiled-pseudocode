/*
 * XREFs of sub_1800055B0 @ 0x1800055B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800059AC @ 0x1800059AC (sub_1800059AC.c)
 *     sub_180005AF0 @ 0x180005AF0 (sub_180005AF0.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall sub_1800055B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        UUID *a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        __int64 a21)
{
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rbx
  int v28; // eax
  WCHAR **v29; // r13
  int cchWideChar; // r12d
  WCHAR *lpWideCharStr; // rdx
  WCHAR *v32; // rcx
  __int64 v33; // rbx
  int v34; // ebx
  WCHAR **v35; // r13
  int v36; // r12d
  WCHAR *v37; // rcx
  WCHAR *v38; // rcx
  __int64 v39; // r12
  UUID *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // eax
  unsigned int v43; // eax
  HRESULT v44; // eax
  unsigned int v45; // ebx
  int v46; // eax
  unsigned int v47; // ebx
  int v48; // eax
  unsigned int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 result; // rax
  _BYTE *v53; // rdx
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  _BYTE *v57; // rdx
  int v58; // ecx
  int v59; // r8d
  int v60; // r9d
  _QWORD *v61; // rdx
  __int64 v62; // rax
  _BYTE v63[32]; // [rsp+0h] [rbp-A8h] BYREF
  int v64; // [rsp+30h] [rbp-78h]
  unsigned int v65; // [rsp+38h] [rbp-70h]
  __int64 v66; // [rsp+40h] [rbp-68h] BYREF
  __int64 v67; // [rsp+48h] [rbp-60h] BYREF
  __int64 v68; // [rsp+50h] [rbp-58h]
  __int64 v69; // [rsp+58h] [rbp-50h]
  ATL::CAtlException *v70; // [rsp+60h] [rbp-48h] BYREF
  ATL::CAtlException *v71; // [rsp+68h] [rbp-40h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]

  v69 = a1;
  v68 = a1;
  v66 = a2;
  v65 = a4;
  try
  {
    v67 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    if ( *(_QWORD *)(a1 + 792) == *(_QWORD *)(a1 + 784) )
    {
      sub_1800059AC(a1 + 776, *(_QWORD *)(a1 + 784), &v67);
    }
    else
    {
      v61 = *(_QWORD **)(a1 + 784);
      v62 = v67;
      v67 = 0LL;
      *v61 = v62;
      *(_QWORD *)(a1 + 784) += 8LL;
    }
    if ( v67 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
    *(_BYTE *)(a1 + 800) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2) != 0;
    v25 = sub_180005AF0(a1 + 656, a3);
    v26 = v25;
    if ( v25 < 0 )
    {
      sub_18004BD84(retaddr, 2039LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v25);
      return v26;
    }
    v27 = *(_QWORD *)(a1 + 728);
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    *(_QWORD *)(a1 + 936) = v27;
    *(_DWORD *)(a1 + 944) = v28;
    *(_BYTE *)(a1 + 303) = (a4 & 1) != 0;
    if ( (a4 & 1) != 0 )
      *(_DWORD *)(a1 + 312) = 2000;
    if ( (a4 & 4) != 0 )
    {
      v64 = 0;
      try
      {
        sub_18002BB70(a1 + 320, L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202", 40LL);
      }
      catch ( ATL::CAtlException *v70 )
      {
        v53 = v63;
        if ( *(_DWORD *)v70 == -1073741571 )
          o__resetstkoflw();
        return sub_18007E917(
                 v54,
                 (_DWORD)v53,
                 v55,
                 v56,
                 a5,
                 a6,
                 (_DWORD)a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18,
                 a19,
                 a20,
                 a21);
      }
      v64 = 0;
      try
      {
        sub_18002BB70(a1 + 328, L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203", 40LL);
      }
      catch ( ATL::CAtlException *v71 )
      {
        v57 = v63;
        if ( *(_DWORD *)v71 == -1073741571 )
          o__resetstkoflw();
        return sub_18007E959(
                 v58,
                 (_DWORD)v57,
                 v59,
                 v60,
                 a5,
                 a6,
                 (_DWORD)a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17,
                 a18,
                 a19,
                 a20,
                 a21);
      }
      *(_BYTE *)(a1 + 302) = 1;
      *(_DWORD *)(a1 + 312) = 5000;
      v34 = 1;
    }
    else
    {
      v29 = (WCHAR **)(a1 + 320);
      cchWideChar = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
      lpWideCharStr = *(WCHAR **)(a1 + 320);
      if ( cchWideChar > 0 )
      {
        v34 = 1;
        if ( ((1 - *((_DWORD *)lpWideCharStr - 2)) | (*((_DWORD *)lpWideCharStr - 3) - cchWideChar)) < 0 )
        {
          sub_18001B550(a1 + 320, (unsigned int)cchWideChar);
          lpWideCharStr = *v29;
        }
        MultiByteToWideChar(3u, 0, MultiByteStr, -1, lpWideCharStr, cchWideChar);
        sub_1800448E4(a1 + 320, (unsigned int)cchWideChar);
      }
      else
      {
        v32 = lpWideCharStr - 12;
        v33 = *((_QWORD *)lpWideCharStr - 3);
        if ( *((_DWORD *)lpWideCharStr - 4) )
        {
          if ( *((int *)v32 + 4) >= 0 )
          {
            sub_180006A30(v32);
            *v29 = (WCHAR *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 24LL))(v33) + 24);
          }
          else
          {
            sub_1800448E4(a1 + 320, 0LL);
          }
        }
        v34 = 1;
      }
      v35 = (WCHAR **)(a1 + 328);
      v36 = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
      v37 = *(WCHAR **)(a1 + 328);
      if ( v36 > 0 )
      {
        if ( ((1 - *((_DWORD *)v37 - 2)) | (*((_DWORD *)v37 - 3) - v36)) < 0 )
        {
          sub_18001B550(a1 + 328, (unsigned int)v36);
          v37 = *v35;
        }
        MultiByteToWideChar(3u, 0, MultiByteStr, -1, v37, v36);
        sub_1800448E4(a1 + 328, (unsigned int)v36);
      }
      else
      {
        v38 = v37 - 12;
        v39 = *(_QWORD *)v38;
        if ( *((_DWORD *)v38 + 2) )
        {
          if ( *((int *)v38 + 4) >= 0 )
          {
            sub_180006A30(v38);
            *v35 = (WCHAR *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 24LL))(v39) + 24);
          }
          else
          {
            sub_1800448E4(a1 + 328, 0LL);
          }
        }
      }
    }
    if ( (a4 & 0x20) == 0 )
      v34 = 0;
    *(_DWORD *)(a1 + 480) = v34;
    *(_DWORD *)(a1 + 304) = a5;
    *(_DWORD *)(a1 + 308) = a4;
    *(_DWORD *)(a1 + 276) = a6;
    v40 = (UUID *)(v68 + 284);
    v41 = *(_QWORD *)&a7->Data1;
    if ( !*(_QWORD *)&a7->Data1 )
      v41 = *(_QWORD *)a7->Data4;
    if ( v41 )
    {
      *v40 = *a7;
      *(_BYTE *)(a1 + 300) = 1;
    }
    else
    {
      v42 = UuidCreate(v40);
      if ( v42 )
        return sub_1800CA660(retaddr, 2087LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", v42);
    }
    v43 = UuidCreate((UUID *)(a1 + 336));
    if ( v43 )
    {
      result = sub_1800CA660(retaddr, 2096LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", v43);
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
      v68 = a1 + 808;
      *(_DWORD *)(a1 + 848) = 1065353216;
      if ( a1 != -808 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
      v44 = PSCreateMemoryPropertyStore(&riid, (void **)(a1 + 488));
      v45 = v44;
      if ( v44 < 0 )
      {
        sub_18004BD84(retaddr, 2103LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v44);
        result = v45;
      }
      else
      {
        v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 248LL))(a1, a4);
        v47 = v46;
        if ( v46 < 0 )
        {
          sub_18004BD84(
            retaddr,
            2105LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (unsigned int)v46);
          result = v47;
        }
        else
        {
          v48 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, a1);
          v49 = v48;
          if ( v48 < 0 )
          {
            sub_18004BD84(
              retaddr,
              2108LL,
              "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (unsigned int)v48);
            result = v49;
          }
          else
          {
            v50 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64))(*(_QWORD *)qword_18019E640
                                                                                        + 8LL))(
                    qword_18019E640,
                    sub_1800523E0,
                    a1);
            *(_QWORD *)(a1 + 600) = v50;
            if ( v50 )
            {
              v51 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64))(*(_QWORD *)qword_18019E640
                                                                                          + 56LL))(
                      qword_18019E640,
                      sub_180032C50,
                      a1);
              *(_QWORD *)(a1 + 608) = v51;
              if ( v51 )
              {
                v68 = -10000LL * *(unsigned int *)(a1 + 312);
                v66 = v68;
                (*(void (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD, int))(*(_QWORD *)qword_18019E640 + 24LL))(
                  qword_18019E640,
                  *(_QWORD *)(a1 + 600),
                  &v66,
                  0LL,
                  100);
                result = 0LL;
              }
              else
              {
                result = sub_1800B5768(retaddr, 2115LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp");
              }
            }
            else
            {
              result = sub_1800B5768(retaddr, 2112LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp");
            }
          }
        }
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(retaddr, 2124LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp");
  }
  return result;
}
