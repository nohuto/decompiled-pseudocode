/*
 * XREFs of ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x18000360C
 * Callers:
 *     ?RuntimeClassInitialize@CAudioSessionStore@@QEAAJPEBG0@Z @ 0x18002AA70 (-RuntimeClassInitialize@CAudioSessionStore@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180003D14 (-OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x18004558C (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x1800517A0 (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x180051CEC (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18005238C (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?ULongLongSub@@YAJ_K0PEA_K@Z @ 0x180052CF4 (-ULongLongSub@@YAJ_K0PEA_K@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180062370 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CB120 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x1800D955C (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800D95B8 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall CAudioSessionStore::LoadPropertyStore(CAudioSessionStore *this, const unsigned __int16 *a2)
{
  CAudioSessionStore *v2; // r13
  __int64 result; // rax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // r15d
  struct _RTL_CRITICAL_SECTION *v7; // r14
  DWORD v8; // r12d
  unsigned int v9; // eax
  HRESULT v10; // eax
  RPC_STATUS v11; // eax
  HKEY v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  WCHAR *v16; // r14
  BYTE *v17; // rdi
  DWORD v18; // ecx
  unsigned int v19; // eax
  char *v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r12
  __int64 v23; // rcx
  SAFEARRAY *v24; // rax
  SAFEARRAY *v25; // r13
  unsigned __int64 v26; // r11
  int v27; // eax
  unsigned int v28; // r10d
  _DWORD *v29; // r11
  int v30; // eax
  DWORD LastError; // ebx
  LPVOID v32; // rax
  const unsigned __int16 *v33; // r12
  int v34; // eax
  LPVOID v35; // rax
  SIZE_T v36; // rdx
  int v37; // eax
  unsigned __int64 v38; // r9
  __int64 v39; // rdx
  const char *v40; // r12
  int v41; // eax
  LPVOID v42; // rax
  SIZE_T v43; // rdx
  int v44; // eax
  BSTR v45; // rax
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  int lpReserved; // [rsp+20h] [rbp-E0h]
  unsigned int lpReserveda; // [rsp+20h] [rbp-E0h]
  unsigned int lpReservedb; // [rsp+20h] [rbp-E0h]
  unsigned int lpReservedc; // [rsp+20h] [rbp-E0h]
  unsigned int lpReservedd; // [rsp+20h] [rbp-E0h]
  DWORD cchName; // [rsp+60h] [rbp-A0h] BYREF
  DWORD cbMaxValueNameLen; // [rsp+64h] [rbp-9Ch] BYREF
  DWORD cbData; // [rsp+68h] [rbp-98h] BYREF
  DWORD v56; // [rsp+6Ch] [rbp-94h]
  RPC_STATUS v57; // [rsp+70h] [rbp-90h]
  HKEY phkResult; // [rsp+78h] [rbp-88h] BYREF
  HKEY hKey; // [rsp+80h] [rbp-80h] BYREF
  DWORD cbMaxValueLen; // [rsp+88h] [rbp-78h] BYREF
  int v61; // [rsp+8Ch] [rbp-74h]
  DWORD v62; // [rsp+90h] [rbp-70h]
  DWORD cValues; // [rsp+94h] [rbp-6Ch] BYREF
  SAFEARRAY *v64; // [rsp+98h] [rbp-68h] BYREF
  BYTE *v65; // [rsp+A0h] [rbp-60h] BYREF
  SAFEARRAYBOUND rgsabound; // [rsp+A8h] [rbp-58h] BYREF
  SIZE_T cb; // [rsp+B0h] [rbp-50h] BYREF
  SIZE_T v68; // [rsp+B8h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v70; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v71; // [rsp+D0h] [rbp-30h]
  CAudioSessionStore *v72; // [rsp+D8h] [rbp-28h]
  GUID pclsid; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR Name[104]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v2 = this;
  v72 = this;
  result = CAudioSessionStore::OpenStoreKey(this, a2);
  v4 = result;
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -2147024891 && (_DWORD)result != -2147024894 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)result,
        lpReserved);
      return v4;
    }
    return result;
  }
  hKey = 0LL;
  v5 = CAudioSessionStore::OpenSessionKey(v2, &hKey);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE10,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v5,
      lpReserved);
    goto LABEL_36;
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 72);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v2 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 72));
  v8 = 0;
  v56 = 0;
  cchName = 100;
  v9 = RegEnumKeyExW(hKey, 0, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
  if ( v9 == 259 )
  {
LABEL_33:
    if ( v7 )
      LeaveCriticalSection(v7);
    v6 = 0;
    goto LABEL_36;
  }
  while ( 1 )
  {
    if ( v9 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0xE1D,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
             (const char *)v9,
             lpReserveda);
      goto LABEL_105;
    }
    v10 = CLSIDFromString(Name, &pclsid);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE20,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v10,
        lpReserveda);
      goto LABEL_105;
    }
    phkResult = 0LL;
    v11 = RpcImpersonateClient(0LL);
    v57 = v11;
    if ( v11 && v11 != 1725 )
    {
      if ( v11 > 0 )
        v6 = (unsigned __int16)v11 | 0x80070000;
      else
        v6 = v11;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE28,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v6,
        lpReserveda);
LABEL_99:
      if ( !v57 )
        RpcRevertToSelf();
      goto LABEL_101;
    }
    v12 = phkResult;
    if ( phkResult )
    {
      LastError = GetLastError();
      RegCloseKey(v12);
      SetLastError(LastError);
    }
    phkResult = 0LL;
    v13 = RegOpenKeyExW(hKey, Name, 0, 0x20019u, &phkResult);
    if ( v13 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0xE2A,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
             (const char *)v13,
             lpReservedb);
      goto LABEL_99;
    }
    if ( !v57 )
      RpcRevertToSelf();
    v14 = RegQueryInfoKeyW(
            phkResult,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            &cValues,
            &cbMaxValueNameLen,
            &cbMaxValueLen,
            0LL,
            0LL);
    if ( v14 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0xE31,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
             (const char *)v14,
             lpReservedc);
      goto LABEL_101;
    }
    v15 = 2LL * ++cbMaxValueNameLen;
    if ( !is_mul_ok(cbMaxValueNameLen, 2uLL) )
      v15 = -1LL;
    v16 = (WCHAR *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v16 )
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE36,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)0x8007000ELL,
        lpReservedc);
      goto LABEL_101;
    }
    v17 = (BYTE *)operator new[](cbMaxValueLen, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v17 )
      break;
    v18 = 0;
    v62 = 0;
    if ( cValues )
    {
      while ( 1 )
      {
        cchName = cbMaxValueNameLen;
        cbData = cbMaxValueLen;
        v19 = RegEnumValueW(phkResult, v18, v16, &cchName, 0LL, 0LL, v17, &cbData);
        if ( v19 == 259 )
        {
LABEL_28:
          v8 = v56;
          goto LABEL_29;
        }
        if ( v19 )
          break;
        v20 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( !v20 )
        {
          v6 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xE46,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x8007000ELL,
            lpReservedd);
          goto LABEL_93;
        }
        *((_QWORD *)v20 + 6) = *((_QWORD *)v2 + 7);
        *((_DWORD *)v20 + 4) = _o__wtoi(v16);
        *(GUID *)v20 = pclsid;
        *(_OWORD *)(v20 + 24) = *(_OWORD *)v17;
        *((_QWORD *)v20 + 5) = *((_QWORD *)v17 + 2);
        switch ( *((_WORD *)v20 + 12) )
        {
          case 8:
            v45 = SysAllocString((const OLECHAR *)&v17[*((_QWORD *)v20 + 4)]);
            *((_QWORD *)v20 + 4) = v45;
            if ( !v45 )
            {
              v39 = 3735LL;
              goto LABEL_70;
            }
            break;
          case 0x1E:
            v40 = (const char *)&v17[*((_QWORD *)v20 + 4)];
            v41 = StringCbLengthA(v40, v21, &v68);
            v6 = v41;
            if ( v41 < 0 )
            {
              v38 = (unsigned int)v41;
              v39 = 3743LL;
              goto LABEL_72;
            }
            v42 = CoTaskMemAlloc(v68);
            if ( !v42 )
            {
              v39 = 3746LL;
LABEL_70:
              v6 = -2147024882;
LABEL_71:
              v38 = v6;
              goto LABEL_72;
            }
            v43 = v68;
            *((_QWORD *)v20 + 4) = v42;
            v44 = StringCchCopyA(0LL, v43, v40);
            v6 = v44;
            if ( v44 < 0 )
            {
              v38 = (unsigned int)v44;
              v39 = 3749LL;
              goto LABEL_72;
            }
            break;
          case 0x1F:
            v33 = (const unsigned __int16 *)&v17[*((_QWORD *)v20 + 4)];
            v34 = StringCbLengthW(v33, 0x7FFFFFFFuLL, &cb);
            v6 = v34;
            if ( v34 < 0 )
            {
              v38 = (unsigned int)v34;
              v39 = 3719LL;
LABEL_72:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v39,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                (const char *)v38,
                lpReservedd);
              goto LABEL_73;
            }
            v35 = CoTaskMemAlloc(cb);
            if ( !v35 )
            {
              v39 = 3722LL;
              goto LABEL_70;
            }
            v36 = cb;
            *((_QWORD *)v20 + 4) = v35;
            v37 = StringCbCopyW(0LL, v36, v33);
            v6 = v37;
            if ( v37 < 0 )
            {
              v38 = (unsigned int)v37;
              v39 = 3725LL;
              goto LABEL_72;
            }
            break;
          case 0x41:
          case 0x46:
            v32 = CoTaskMemAlloc(*((unsigned int *)v20 + 8));
            if ( !v32 )
            {
              v39 = 3669LL;
              goto LABEL_70;
            }
            *((_QWORD *)v20 + 5) = v32;
            memcpy_0(0LL, &v17[(_QWORD)v32], *((unsigned int *)v20 + 8));
            break;
          case 0x2004:
            v22 = ((unsigned __int64)cbData - 24) >> 2;
            if ( (((_BYTE)cbData - 24) & 3) != 0 )
            {
              v6 = -2147024809;
              v39 = 3691LL;
              goto LABEL_71;
            }
            v23 = *((_QWORD *)v20 + 4);
            rgsabound.lLbound = 0;
            v65 = &v17[v23];
            rgsabound.cElements = ((unsigned __int64)cbData - 24) >> 2;
            v24 = SafeArrayCreate(4u, 1u, &rgsabound);
            v64 = v24;
            v25 = v24;
            if ( !v24 )
            {
              v6 = -2147024882;
LABEL_81:
              v47 = 3695LL;
LABEL_82:
              v46 = v6;
LABEL_83:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v47,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                (const char *)v46,
                lpReservedd);
              ATL::CComSafeArray<float,4>::Destroy(&v64);
LABEL_73:
              operator delete(v20, (const struct std::nothrow_t *)0x38);
              goto LABEL_93;
            }
            v6 = SafeArrayLock(v24);
            if ( (v6 & 0x80000000) != 0 )
              goto LABEL_81;
            v61 = 0;
            if ( v22 )
            {
              v26 = (unsigned __int64)v65;
              while ( 1 )
              {
                v71 = v26 + 4;
                if ( v26 + 4 < v26 )
                  break;
                v27 = ULongLongSub(v26 + 4, (unsigned __int64)v17, &v70);
                v6 = v27;
                if ( v27 < 0 )
                {
                  v46 = (unsigned int)v27;
                  v47 = 3702LL;
                  goto LABEL_83;
                }
                if ( v70 > cbData )
                {
                  v6 = -2147024809;
                  v47 = 3704LL;
                  goto LABEL_82;
                }
                LODWORD(v65) = *v29;
                v30 = ATL::CComSafeArray<float,4>::SetAt(&v64, v28, &v65);
                v6 = v30;
                if ( v30 < 0 )
                {
                  v46 = (unsigned int)v30;
                  v47 = 3707LL;
                  goto LABEL_83;
                }
                v26 = v71;
                if ( (unsigned int)++v61 >= v22 )
                  goto LABEL_50;
              }
              v6 = -2147024362;
              v47 = 3700LL;
              goto LABEL_82;
            }
LABEL_50:
            SafeArrayUnlock(v25);
            v64 = 0LL;
            *((_QWORD *)v20 + 4) = v25;
            ATL::CComSafeArray<float,4>::Destroy(&v64);
            v2 = v72;
            break;
        }
        v18 = v62 + 1;
        *((_QWORD *)v2 + 7) = v20;
        v62 = v18;
        if ( v18 >= cValues )
          goto LABEL_28;
      }
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0xE43,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
             (const char *)v19,
             lpReservedd);
      goto LABEL_93;
    }
LABEL_29:
    operator delete(v17, (const struct std::nothrow_t *)1);
    operator delete(v16, (const struct std::nothrow_t *)2);
    if ( phkResult )
      RegCloseKey(phkResult);
    v56 = ++v8;
    cchName = 100;
    v9 = RegEnumKeyExW(hKey, v8, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
    if ( v9 == 259 )
    {
      v7 = lpCriticalSection;
      goto LABEL_33;
    }
  }
  v6 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE39,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x8007000ELL,
    lpReservedc);
LABEL_93:
  if ( v17 )
    operator delete(v17, (const struct std::nothrow_t *)1);
  operator delete(v16, (const struct std::nothrow_t *)2);
LABEL_101:
  if ( phkResult )
    RegCloseKey(phkResult);
LABEL_105:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
LABEL_36:
  if ( hKey )
    RegCloseKey(hKey);
  return v6;
}
