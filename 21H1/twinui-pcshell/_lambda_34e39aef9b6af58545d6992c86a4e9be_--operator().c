/*
 * XREFs of _lambda_34e39aef9b6af58545d6992c86a4e9be_::operator() @ 0x180062E60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e37245ba3da4cfceb895db72247556f4___::Run @ 0x180062DD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e37245ba3da4cfceb895db72247556f4___--Run.c)
 * Callees:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x180032A58 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18012AB18 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?value@?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@QEGAAAEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@XZ @ 0x180135980 (-value@-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@QEGAAAEAUAPPLICATION_FRAME_CHROME.c)
 *     ?value@?$optional@UAppTitlebarConfiguration@@@std@@QEGAAAEAUAppTitlebarConfiguration@@XZ @ 0x1801359C0 (-value@-$optional@UAppTitlebarConfiguration@@@std@@QEGAAAEAUAppTitlebarConfiguration@@XZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall lambda_34e39aef9b6af58545d6992c86a4e9be_::operator()(struct IImmersiveApplication **a1)
{
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v2; // rdx
  unsigned __int64 v3; // r14
  int NormalDisplayNameWithTitleSafe; // eax
  void *v5; // rdi
  char v6; // bl
  __int64 v7; // r8
  void *v8; // rcx
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, GUID *, __int64 *); // rsi
  __int64 v12; // rcx
  int v13; // edx
  unsigned int v14; // r8d
  __int64 v15; // rdi
  int (__fastcall *v16)(__int64, HSTRING, void **); // rsi
  unsigned __int64 v17; // rax
  HRESULT v18; // eax
  int v19; // edx
  unsigned int v20; // r8d
  int v21; // edx
  unsigned int v22; // r8d
  char v23; // al
  __int64 v24; // rdi
  int (__fastcall *v25)(__int64, HSTRING, void **); // rsi
  HRESULT v26; // eax
  int v27; // edx
  unsigned int v28; // r8d
  char v29; // al
  __int64 v30; // rcx
  struct IImmersiveApplication *v31; // rsi
  __int64 (__fastcall *v32)(struct IImmersiveApplication *, __int64); // rdi
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // eax
  struct IImmersiveApplication *v36; // rsi
  __int64 (__fastcall *v37)(struct IImmersiveApplication *, _QWORD); // rdi
  _QWORD *v38; // rax
  int v39; // eax
  void *v40; // [rsp+20h] [rbp-39h] BYREF
  __int16 v41; // [rsp+28h] [rbp-31h] BYREF
  char v42; // [rsp+2Ah] [rbp-2Fh]
  __int64 v43; // [rsp+30h] [rbp-29h] BYREF
  __int64 v44; // [rsp+38h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-19h] BYREF
  __int64 v46; // [rsp+48h] [rbp-11h]
  __int64 v47; // [rsp+50h] [rbp-9h]
  PSRWLOCK v48; // [rsp+58h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+7h] BYREF
  HSTRING string; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v43 = 0LL;
  v3 = -1LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)*a1 + 15) + 144LL))(*((_QWORD *)*a1 + 15), &v43) >= 0 )
  {
    pv = 0LL;
    v46 = -1LL;
    v47 = -1LL;
    NormalDisplayNameWithTitleSafe = IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(
                                       a1[1],
                                       v2,
                                       (unsigned __int16 **)&pv);
    v5 = pv;
    if ( NormalDisplayNameWithTitleSafe >= 0 )
      (*(void (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v43 + 24LL))(v43, pv);
    v40 = 0LL;
    if ( (**(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, void **))a1[1])(
           a1[1],
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v40) >= 0 )
    {
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v6 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v40 + 216LL))(v40);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v6 )
        v7 = 128LL;
      else
        v7 = 0LL;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v43 + 88LL))(v43, 128LL, v7);
    }
    v8 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v5 )
    {
      CoTaskMemFree(v5);
      pv = 0LL;
    }
    v46 = 0LL;
    v47 = 0LL;
  }
  v44 = 0LL;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  v48 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = **((_QWORD **)*a1 + 13);
  if ( v10 )
  {
    v11 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v10 + 40LL);
    v12 = v44;
    v44 = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11(v10, &GUID_f4a53d68_890b_4931_bdbf_71158377eece, &v44) >= 0 )
    {
      v15 = v44;
      if ( v44 )
      {
        v16 = *(int (__fastcall **)(__int64, HSTRING, void **))(*(_QWORD *)v44 + 408LL);
        string = 0LL;
        v17 = -1LL;
        do
          ++v17;
        while ( aTitlebarvisibl[v17] );
        if ( v17 > 0xFFFFFFFF )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v13, v14);
          __debugbreak();
        }
        if ( (int)v17 + 1 < (unsigned int)v17 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v13, v14);
          __debugbreak();
        }
        v18 = WindowsCreateStringReference(L"TitleBarVisible", v17, &hstringHeader, &string);
        if ( v18 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18, v19, v20);
        }
        else if ( v16(v15, string, &v40) < 0 )
        {
          v23 = 0;
          goto LABEL_25;
        }
        v23 = 1;
LABEL_25:
        string = 0LL;
        if ( v23 )
        {
          LOBYTE(v40) = (_DWORD)v40 == 1;
          BYTE1(v40) = (_BYTE)v40;
          v41 = (__int16)v40;
          v42 = 1;
          v31 = *a1;
          v32 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)*a1 + 176LL);
          v33 = std::optional<AppTitlebarConfiguration>::value(&v41);
          v34 = v32(v31, v33);
          if ( v34 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x612,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
              (const char *)(unsigned int)v34,
              (int)v40);
        }
        else
        {
          v41 = 0;
          v42 = 0;
        }
        v24 = v44;
        v25 = *(int (__fastcall **)(__int64, HSTRING, void **))(*(_QWORD *)v44 + 408LL);
        string = 0LL;
        do
          ++v3;
        while ( aWindowframesty[v3] );
        if ( v3 > 0xFFFFFFFF )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v21, v22);
          __debugbreak();
        }
        if ( (int)v3 + 1 < (unsigned int)v3 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v21, v22);
          __debugbreak();
        }
        v26 = WindowsCreateStringReference(L"WindowFrameStyle", v3, &hstringHeader, &string);
        if ( v26 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26, v27, v28);
        }
        else if ( v25(v24, string, &v40) < 0 )
        {
          v29 = 0;
          goto LABEL_34;
        }
        v29 = 1;
LABEL_34:
        string = 0LL;
        if ( v29 )
        {
          v35 = 0;
          if ( (_DWORD)v40 == 1 )
            v35 = 129;
          v40 = (void *)(v35 | 0x8000000000LL);
          pv = v40;
          LOBYTE(v46) = 1;
          v36 = *a1;
          v37 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, _QWORD))(*(_QWORD *)*a1 + 160LL);
          v38 = (_QWORD *)std::optional<APPLICATION_FRAME_CHROME_CHANGE_DATA>::value(&pv);
          v39 = v37(v36, *v38);
          if ( v39 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x618,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
              (const char *)(unsigned int)v39,
              (int)v40);
        }
      }
    }
  }
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  v30 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
}
