/*
 * XREFs of ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x18005A740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180051668 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180059904 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005C7AC (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::GetIsApplicable(
        ContentManagement::AppManager *this,
        HSTRING a2,
        bool *a3,
        unsigned __int8 *a4)
{
  int AppInstallManager; // eax
  unsigned int v9; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v11; // rbx
  DWORD v12; // edx
  int v13; // edi
  int v14; // r8d
  __int64 v15; // rdx
  void (__fastcall ***v16)(__int64, GUID *, __int64 *); // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  void (__fastcall ***v22)(__int64, GUID *, __int64 *); // rsi
  void (__fastcall ***v23)(__int64, GUID *, __int64 *); // rcx
  int v24[2]; // [rsp+30h] [rbp-20h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v25[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v27; // [rsp+98h] [rbp+48h] BYREF

  v25[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  *a4 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", (unsigned __int16 *)&v27, a3) < 0
    || !(_BYTE)v27 )
  {
    return 2147942405LL;
  }
  v25[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        v25);
  v9 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    if ( v25[0] )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
    return v9;
  }
  *(_QWORD *)v24 = 0LL;
  v11 = v25[0];
  if ( *((_QWORD *)this + 4) )
  {
    v27 = 0LL;
    v17 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v25[0])(
            v25[0],
            &GUID_95b24b17_e96a_4d0e_84e1_c8cb417a0178,
            &v27);
    v13 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v17);
      v18 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_13;
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, bool *, int *))(*(_QWORD *)v27 + 96LL))(
            v27,
            *((_QWORD *)this + 4),
            a2,
            a3,
            v24);
    v13 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v19);
      v20 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_11;
    }
    v21 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, bool *, int *))(*(_QWORD *)v25[0] + 144LL))(
            v25[0],
            a2,
            a3,
            v24);
    if ( v13 < 0 )
    {
      v15 = 122LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_11:
      v16 = *(void (__fastcall ****)(__int64, GUID *, __int64 *))v24;
      if ( *(_QWORD *)v24 )
      {
        *(_QWORD *)v24 = 0LL;
        ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v16)[2])(v16);
      }
LABEL_13:
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
      return (unsigned int)v13;
    }
  }
  v22 = *(void (__fastcall ****)(__int64, GUID *, __int64 *))v24;
  v13 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(
          *(void (__fastcall ****)(__int64, GUID *, __int64 *))v24,
          v12,
          v14);
  if ( v13 >= 0 )
    v13 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), unsigned __int8 *))(*v22)[8])(
            v22,
            a4);
  if ( v13 < 0 )
  {
    v15 = 136LL;
    goto LABEL_10;
  }
  v23 = *(void (__fastcall ****)(__int64, GUID *, __int64 *))v24;
  if ( *(_QWORD *)v24 )
  {
    *(_QWORD *)v24 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v23)[2])(v23);
  }
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
