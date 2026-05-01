/*
 * XREFs of ?EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@@Z @ 0x1804345B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180058E00 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801414B0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180142108 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x1802AAB60 (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopRegistryHelpers::EnumKeys(__int64 a1, unsigned __int8 a2, const WCHAR *a3, _QWORD *a4)
{
  __int64 v6; // rsi
  bool v8; // zf
  LSTATUS v10; // eax
  int v11; // ebx
  DWORD v12; // esi
  DWORD i; // edx
  int v14; // eax
  void *v15; // r8
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  LPVOID v18; // rax
  unsigned int v19; // eax
  const char *v20; // r9
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  HKEY phkResult; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID v24; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+38h] [rbp-C8h]
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  v6 = a2;
  if ( a2 )
    v8 = *(_QWORD *)(a1 + 24) == 0LL;
  else
    v8 = *(_QWORD *)(a1 + 16) == 0LL;
  if ( v8 )
    return 0LL;
  phkResult = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &phkResult,
    0LL);
  v10 = RegOpenKeyW(*(HKEY *)(a1 + 8 * v6 + 16), a3, &phkResult);
  v11 = v10;
  if ( v10 )
  {
    if ( v10 > 0 )
      v11 = (unsigned __int16)v10 | 0x80070000;
  }
  else
  {
    v12 = 0;
    for ( i = 0; ; i = v12 )
    {
      v19 = RegEnumKeyW(phkResult, i, Name, 0x104u);
      if ( v19 )
        break;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              &v24,
              (__int64)Name,
              0xFFFFFFFFFFFFFFFFuLL);
      v11 = v14;
      if ( v14 < 0 )
      {
        v21 = (unsigned int)v14;
        v22 = 100LL;
        goto LABEL_23;
      }
      v16 = a4[1];
      if ( v16 == a4[3] )
      {
        v11 = CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
                (__int64)a4,
                v16 + 1,
                v15);
        if ( v11 < 0 )
        {
          v21 = (unsigned int)v11;
          v22 = 101LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v22,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
            (const char *)v21);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
          goto LABEL_25;
        }
      }
      v17 = (_QWORD *)(*a4 + 24 * a4[1]++);
      if ( v17 )
      {
        v17[1] = v25;
        v17[2] = v26;
        v18 = v24;
        v24 = 0LL;
        v26 = 0LL;
        v25 = 0LL;
        *v17 = v18;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
      ++v12;
    }
    v20 = 0LL;
    if ( v19 != 259 )
      v20 = (const char *)v19;
    if ( (_DWORD)v20 )
      v11 = wil::details::in1diag3::Return_Win32(
              retaddr,
              108LL,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
              v20);
    else
      v11 = 0;
  }
LABEL_25:
  if ( phkResult )
    RegCloseKey(phkResult);
  return (unsigned int)v11;
}
