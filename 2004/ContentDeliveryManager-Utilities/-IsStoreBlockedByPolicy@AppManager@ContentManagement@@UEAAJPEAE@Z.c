/*
 * XREFs of ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x180059BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007228 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180050FE8 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180059284 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005C12C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::IsStoreBlockedByPolicy(
        ContentManagement::AppManager *this,
        unsigned __int8 *a2,
        bool *a3)
{
  int AppInstallManager; // eax
  unsigned int v6; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v8; // rbx
  __int64 (__fastcall *v9)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, HSTRING, void (__fastcall ****)(__int64, GUID *, __int64 *)); // rsi
  HRESULT v10; // eax
  HSTRING v11; // rdi
  HRESULT v12; // eax
  DWORD v13; // edx
  int v14; // edi
  int v15; // r8d
  __int64 v16; // rdx
  void (__fastcall ***v17)(__int64, GUID *, __int64 *); // rcx
  void (__fastcall ***v18)(__int64, GUID *, __int64 *); // rsi
  void (__fastcall ***v19)(__int64, GUID *, __int64 *); // rcx
  unsigned __int16 v20; // [rsp+38h] [rbp-29h] BYREF
  void (__fastcall ***v21)(__int64, GUID *, __int64 *); // [rsp+40h] [rbp-21h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v22[2]; // [rsp+48h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-9h] BYREF
  HSTRING string; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING_HEADER v25; // [rsp+78h] [rbp+17h] BYREF
  HSTRING v26; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v22[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  *a2 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", &v20, a3) < 0 || !(_BYTE)v20 )
    return 2147942405LL;
  v22[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        v22);
  v6 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    if ( v22[0] )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
    return v6;
  }
  v21 = 0LL;
  v8 = v22[0];
  v9 = *(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, HSTRING, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v22[0] + 184LL);
  string = 0LL;
  v10 = WindowsCreateStringReference(
          L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US",
          0x50u,
          &hstringHeader,
          &string);
  if ( v10 < 0 )
  {
LABEL_24:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    JUMPOUT(0x180059DF7LL);
  }
  v11 = string;
  v26 = 0LL;
  v12 = WindowsCreateStringReference(L"Microsoft.WindowsStore", 0x16u, &v25, &v26);
  if ( v12 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    goto LABEL_24;
  }
  v14 = v9(v8, v26, v11, &v21);
  if ( v14 < 0 )
  {
    v16 = 68LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v14);
    v17 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v17)[2])(v17);
    }
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v8 + 16LL))(v8);
    return (unsigned int)v14;
  }
  v18 = v21;
  v14 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v21, v13, v15);
  if ( v14 >= 0 )
    v14 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), unsigned __int8 *))(*v18)[8])(
            v18,
            a2);
  if ( v14 < 0 )
  {
    v16 = 70LL;
    goto LABEL_11;
  }
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v19)[2])(v19);
  }
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v8 + 16LL))(v8);
  return 0LL;
}
