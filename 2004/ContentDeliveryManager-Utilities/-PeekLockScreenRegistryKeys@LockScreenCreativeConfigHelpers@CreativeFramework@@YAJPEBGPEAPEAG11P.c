/*
 * XREFs of ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x18002DC18
 * Callers:
 *     ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x180032020 (-PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180016348 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180029C74 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18002D5B8 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18003CAD8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 **a2,
        DWORD *a3,
        unsigned __int16 **a4,
        unsigned __int16 **a5)
{
  DWORD *v5; // r13
  DWORD *v6; // r12
  HKEY v7; // rdi
  int CurrentUserSidString; // eax
  int v9; // esi
  void *v10; // rcx
  void *v11; // rbx
  int v12; // eax
  WCHAR *v13; // rcx
  WCHAR *v14; // r14
  LSTATUS v15; // eax
  unsigned int InfoKeyW; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  DWORD v19; // esi
  unsigned __int64 v20; // rax
  int v21; // eax
  WCHAR *v22; // r15
  __int64 v23; // r14
  LSTATUS ValueW; // eax
  __int64 v25; // rdx
  __int64 v26; // r9
  int v27; // eax
  unsigned __int64 v28; // r9
  LSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r9
  int v32; // eax
  LSTATUS v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  _BYTE *v36; // r14
  LSTATUS v37; // eax
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-98h] BYREF
  DWORD cSubKeys[2]; // [rsp+78h] [rbp-90h] BYREF
  WCHAR *v42; // [rsp+80h] [rbp-88h] BYREF
  __int64 v43; // [rsp+88h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-78h]
  HKEY v45; // [rsp+98h] [rbp-70h]
  unsigned __int16 **v46; // [rsp+A0h] [rbp-68h]
  unsigned __int16 **v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  wchar_t Name[264]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v48 = -2LL;
  v46 = a4;
  v5 = a3;
  v6 = (DWORD *)a2;
  v47 = a5;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *(_QWORD *)a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *(_BYTE *)a5 = 0;
  v7 = 0LL;
  v45 = 0LL;
  pv = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)&pv,
                           a2);
  v9 = CurrentUserSidString;
  if ( CurrentUserSidString < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
      (const char *)(unsigned int)CurrentUserSidString);
    v10 = pv;
    if ( !pv )
      goto LABEL_29;
    goto LABEL_11;
  }
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v11 = pv;
  v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&v42,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
          pv);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A5,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
      (const char *)(unsigned int)v12);
    v13 = v42;
    if ( !v42 )
      goto LABEL_15;
    goto LABEL_14;
  }
  hKey = 0LL;
  v14 = v42;
  v15 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, v42, 0, 0x2001Fu, &hKey);
  if ( !v15 )
  {
    v7 = hKey;
    hKey = 0LL;
    v45 = v7;
    if ( v14 )
      CoTaskMemFree(v14);
    if ( v11 )
      CoTaskMemFree(v11);
    v9 = 0;
    goto LABEL_29;
  }
  v9 = (unsigned __int16)v15 | 0x80070000;
  if ( v15 <= 0 )
    v9 = v15;
  if ( hKey )
    RegCloseKey(hKey);
  if ( v14 )
  {
    v13 = v14;
LABEL_14:
    CoTaskMemFree(v13);
  }
LABEL_15:
  if ( v11 )
  {
    v10 = v11;
LABEL_11:
    CoTaskMemFree(v10);
  }
LABEL_29:
  if ( v9 < 0 )
    goto LABEL_84;
  InfoKeyW = RegQueryInfoKeyW(v7, 0LL, 0LL, 0LL, cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !InfoKeyW )
  {
    v18 = 0LL;
    v19 = 0;
    if ( !cSubKeys[0] )
    {
LABEL_83:
      v9 = -2147024894;
      goto LABEL_84;
    }
    do
    {
      LODWORD(pv) = 256;
      InfoKeyW = RegEnumKeyExW(v7, v19, Name, (LPDWORD)&pv, 0LL, 0LL, 0LL, 0LL);
      if ( InfoKeyW )
      {
        v17 = 447LL;
        goto LABEL_82;
      }
      v20 = _wcstoui64(Name, 0LL, 10);
      if ( v20 > v18 )
        v18 = v20;
      ++v19;
    }
    while ( v19 < cSubKeys[0] );
    if ( !v18 )
      goto LABEL_83;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v21 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&v42,
            L"%llu",
            v18);
    v9 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CB,
        (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
        (const char *)(unsigned int)v21);
      v22 = v42;
      goto LABEL_79;
    }
    v23 = -1LL;
    v22 = v42;
    if ( !v6 )
      goto LABEL_89;
    LODWORD(pv) = 522;
    ValueW = RegGetValueW(v7, v42, L"contentId", 0x20000002u, 0LL, Name, (LPDWORD)&pv);
    v9 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v9 = ValueW;
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
    {
      v25 = 465LL;
LABEL_75:
      v28 = (unsigned int)v9;
      goto LABEL_76;
    }
    v26 = -1LL;
    do
      ++v26;
    while ( Name[v26] );
    v27 = _AllocStringWorker<CTCoAllocPolicy>(0LL, 0x80000000LL, Name);
    v9 = v27;
    v6 = 0LL;
    if ( v27 < 0 )
    {
      v28 = (unsigned int)v27;
      v25 = 466LL;
    }
    else
    {
LABEL_89:
      if ( !v5 )
        goto LABEL_90;
      LODWORD(pv) = 522;
      v29 = RegGetValueW(v7, v22, L"landscapeImage", 0x20000002u, v6, Name, (LPDWORD)&pv);
      v9 = (unsigned __int16)v29 | 0x80070000;
      if ( v29 <= 0 )
        v9 = v29;
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
      {
        v25 = 473LL;
        goto LABEL_75;
      }
      v31 = -1LL;
      do
        ++v31;
      while ( Name[v31] != (_WORD)v6 );
      v32 = _AllocStringWorker<CTCoAllocPolicy>(0x80000000LL, v30, Name);
      v9 = v32;
      v5 = 0LL;
      if ( v32 < 0 )
      {
        v28 = (unsigned int)v32;
        v25 = 474LL;
      }
      else
      {
LABEL_90:
        if ( !v46 )
          goto LABEL_69;
        LODWORD(pv) = 522;
        v33 = RegGetValueW(v7, v22, L"portraitImage", 0x20000002u, v5, Name, (LPDWORD)&pv);
        v9 = (unsigned __int16)v33 | 0x80070000;
        if ( v33 <= 0 )
          v9 = v33;
        if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
        {
          v25 = 481LL;
          goto LABEL_75;
        }
        do
          ++v23;
        while ( Name[v23] != (_WORD)v5 );
        v35 = _AllocStringWorker<CTCoAllocPolicy>(0x80000000LL, v34, Name);
        v9 = v35;
        if ( v35 >= 0 )
        {
LABEL_69:
          v36 = v47;
          if ( v47 )
          {
            LODWORD(pv) = (_DWORD)v5;
            LODWORD(hKey) = 4;
            v37 = RegGetValueW(v7, v22, L"showImageOnSecureLock", 0x20000010u, v5, &pv, (LPDWORD)&hKey);
            v9 = (unsigned __int16)v37 | 0x80070000;
            if ( v37 <= 0 )
              v9 = v37;
            if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
            {
              v25 = 489LL;
              goto LABEL_75;
            }
            *v36 = (_DWORD)pv != (_DWORD)v5;
          }
          v9 = (int)v5;
LABEL_79:
          if ( v22 )
            CoTaskMemFree(v22);
          goto LABEL_84;
        }
        v28 = (unsigned int)v35;
        v25 = 482LL;
      }
    }
LABEL_76:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
      (const char *)v28);
    goto LABEL_79;
  }
  v17 = 441LL;
LABEL_82:
  v9 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)v17,
         (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
         (const char *)InfoKeyW);
LABEL_84:
  if ( v7 )
    RegCloseKey(v7);
  return (unsigned int)v9;
}
