/*
 * XREFs of ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x180059244
 * Callers:
 *     ?SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z @ 0x1800591B0 (-SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180059610 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 *     ?SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z @ 0x1802AFB70 (-SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1802AFD60 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180072400 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LightweightPropertySet::SetProperty(
        LightweightPropertySet *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HWND a4)
{
  unsigned __int64 v5; // r12
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  PCWSTR StringRawBuffer; // rax
  HSTRING v11; // rax
  HSTRING v12; // rbx
  HRESULT v13; // esi
  HSTRING v14; // rcx
  HSTRING v15; // rdi
  __int64 v16; // rdx
  HSTRING v17; // rdx
  HSTRING *v18; // r8
  __int64 v20; // rdx
  const WCHAR *v21; // rax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v24; // [rsp+38h] [rbp-C8h]
  WCHAR sourceString[256]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v5 = a3;
  v24 = 0LL;
  v8 = 0LL;
  v9 = -1LL;
  if ( !*((_QWORD *)this + 1) )
    goto LABEL_4;
  while ( 1 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)this + 8 * v8) + 8LL), 0LL);
    if ( CompareStringOrdinal(StringRawBuffer + 20, -1, a2, -1, 1) == 2 )
      break;
    if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 1) )
      goto LABEL_4;
  }
  v12 = *(HSTRING *)(*(_QWORD *)this + 8 * v8);
  if ( !v12 )
  {
LABEL_4:
    v11 = (HSTRING)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      *((_QWORD *)v11 + 2) = 0LL;
      *((_QWORD *)v11 + 1) = 0LL;
      *((_DWORD *)v11 + 4) = 0;
      *(_QWORD *)v11 = &CRefCountedObject<LightweightPropertySet::LightweightProperty>::`vftable';
      *((_DWORD *)v11 + 6) = 0;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 8LL))(v12);
    v24 = v12;
    if ( !v12 )
    {
      v13 = -2147024882;
      v20 = 57LL;
      goto LABEL_37;
    }
    _o_wcscpy_s(sourceString, 256LL, L"LightweightProperty_");
    _o_wcscat_s(sourceString, 256LL, a2);
    string = 0LL;
    do
      ++v9;
    while ( sourceString[v9] );
    if ( v9 > 0xFFFFFFFF )
    {
      v13 = -2147024362;
    }
    else
    {
      v13 = WindowsCreateString(sourceString, v9, &string);
      if ( v13 >= 0 )
      {
        v14 = (HSTRING)*((_QWORD *)v12 + 1);
        *((_QWORD *)v12 + 1) = string;
        WindowsDeleteString(v14);
        goto LABEL_14;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v13,
      bIgnoreCase);
LABEL_14:
    if ( v13 < 0 )
    {
      v20 = 59LL;
    }
    else
    {
      v15 = v12;
      string = v12;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = 0;
      v16 = *((_QWORD *)this + 1);
      if ( v16 != *((_QWORD *)this + 3)
        || (v13 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                    this,
                    v16 + 1),
            v17 = v12,
            v13 >= 0) )
      {
        v17 = v12;
        v18 = (HSTRING *)(*(_QWORD *)this + 8 * (*((_QWORD *)this + 1))++);
        if ( v18 )
        {
          *v18 = 0LL;
          if ( v18 != &string )
          {
            *v18 = v12;
            v15 = 0LL;
            v17 = 0LL;
          }
        }
      }
      if ( v17 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v13 >= 0 )
        goto LABEL_23;
      v20 = 60LL;
    }
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v13,
      bIgnoreCase);
    goto LABEL_26;
  }
  string = *(HSTRING *)(*(_QWORD *)this + 8 * v8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&string);
LABEL_23:
  *((_DWORD *)v12 + 4) = v5;
  if ( a4 )
  {
    v21 = WindowsGetStringRawBuffer(*((HSTRING *)v12 + 1), 0LL);
    SetPropW(a4, v21, (HANDLE)v5);
  }
  v13 = 0;
LABEL_26:
  if ( v12 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v13;
}
