/*
 * XREFs of ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18005AA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180059904 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005C7AC (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::MoveAppInstallToFrontOfQueue(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3)
{
  int AppInstallManager; // eax
  bool *v6; // r8
  unsigned int v7; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v9; // rbx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned __int16 v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  v14[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  v14[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        v14);
  v7 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    if ( v14[0] )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, _QWORD))(*(_QWORD *)v14[0] + 16LL))(
        v14[0],
        *(_QWORD *)v14[0]);
    return v7;
  }
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", &v16, v6) >= 0 && (_BYTE)v16 )
  {
    v17 = 0LL;
    v9 = v14[0];
    v10 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v14[0])(
            v14[0],
            &GUID_95b24b17_e96a_4d0e_84e1_c8cb417a0178,
            &v17);
    if ( v10 < 0 )
    {
      v11 = 148LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v10);
      v12 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v9 + 16LL))(v9);
      return (unsigned int)v10;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING))(*(_QWORD *)v17 + 104LL))(v17, a2, a3);
    if ( v10 < 0 )
    {
      v11 = 150LL;
      goto LABEL_9;
    }
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v9 + 16LL))(v9);
    return 0LL;
  }
  else
  {
    if ( v14[0] )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
    return 2147942405LL;
  }
}
