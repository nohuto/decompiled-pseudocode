/*
 * XREFs of ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18005A480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180051668 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180059904 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005C7AC (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::IsAppAllowedToInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        bool *a3)
{
  int AppInstallManager; // eax
  unsigned int v7; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v9; // rbx
  DWORD v10; // edx
  int v11; // edi
  int v12; // r8d
  __int64 v13; // rdx
  void (__fastcall ***v14)(__int64, GUID *, __int64 *); // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, HSTRING, _QWORD, _QWORD, _QWORD, void (__fastcall ****)(__int64, GUID *, __int64 *)); // r12
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  void (__fastcall ***v22)(__int64, GUID *, __int64 *); // rsi
  void (__fastcall ***v23)(__int64, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v24[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v26; // [rsp+A0h] [rbp+50h] BYREF
  void (__fastcall ***v27)(__int64, GUID *, __int64 *); // [rsp+A8h] [rbp+58h] BYREF

  v24[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  *a3 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", (unsigned __int16 *)&v26, a3) < 0
    || !(_BYTE)v26 )
  {
    return 2147942405LL;
  }
  v24[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        v24);
  v7 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    if ( v24[0] )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v24[0] + 16LL))(v24[0]);
    return v7;
  }
  v27 = 0LL;
  v9 = v24[0];
  if ( *((_QWORD *)this + 4) )
  {
    v26 = 0LL;
    v15 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v24[0])(
            v24[0],
            &GUID_95b24b17_e96a_4d0e_84e1_c8cb417a0178,
            &v26);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v15);
      v16 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v14 = v27;
      if ( !v27 )
        goto LABEL_14;
      goto LABEL_13;
    }
    v17 = v26;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, _QWORD, _QWORD, _QWORD, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v26 + 88LL);
    if ( v27 )
      ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v27)[2])(v27);
    v19 = v18(v17, *((_QWORD *)this + 4), a2, 0LL, 0LL, 0LL, &v27);
    v11 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v19);
      v20 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_11;
    }
    v21 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, _QWORD))(*(_QWORD *)v24[0] + 192LL))(
            v24[0],
            a2,
            &v27);
    if ( v11 < 0 )
    {
      v13 = 88LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_11:
      v14 = v27;
      if ( !v27 )
      {
LABEL_14:
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v9 + 16LL))(v9);
        return (unsigned int)v11;
      }
      v27 = 0LL;
LABEL_13:
      ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v14)[2])(v14);
      goto LABEL_14;
    }
  }
  v22 = v27;
  v11 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v27, v10, v12);
  if ( v11 >= 0 )
    v11 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), bool *))(*v22)[8])(v22, a3);
  if ( v11 < 0 )
  {
    v13 = 103LL;
    goto LABEL_10;
  }
  v23 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v23)[2])(v23);
  }
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
