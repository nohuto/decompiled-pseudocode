/*
 * XREFs of ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x18005BA88
 * Callers:
 *     ?GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z @ 0x18005A1F0 (-GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x18005A034 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005C7AC (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005D0F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_N.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800611FC (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ContentManagement::AppManager::GetEntitlementInternal(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        unsigned __int8 a6,
        HSTRING a7)
{
  int AppInstallManager; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int Entitlement; // edi
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v14; // rbx
  HSTRING *v15; // r9
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rsi
  int v23; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  int v33[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-20h] BYREF
  __int64 v36; // [rsp+58h] [rbp-18h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v37[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  HSTRING v39; // [rsp+B8h] [rbp+48h] BYREF

  v39 = a4;
  v37[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  v37[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this, v37);
  Entitlement = AppInstallManager;
  v14 = v37[0];
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    goto LABEL_38;
  }
  LOBYTE(v12) = 3;
  LOBYTE(v11) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallAttribution>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetImpl'::`2'::impl,
    v11,
    v12);
  WindowsDeleteString(0LL);
  string = 0LL;
  v16 = CreativeFramework::StoreHelpers::GenerateStoreId(a2, a3, &string, v15);
  Entitlement = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v16);
LABEL_37:
    WindowsDeleteString(string);
    goto LABEL_38;
  }
  v34 = 0LL;
  v17 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD **))v14)(
          v14,
          &GUID_260a2a16_5a9e_4ebd_b944_f2ba75c31159,
          &v34);
  Entitlement = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x160,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v17);
LABEL_35:
    v31 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
    }
    goto LABEL_37;
  }
  *(_QWORD *)v33 = 0LL;
  v18 = *v34;
  if ( a6 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))(v18 + 64))(v34, string, a7, a5, v33);
    Entitlement = v19;
    if ( v19 < 0 )
    {
      v20 = 357LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v19);
LABEL_33:
      v30 = *(_QWORD *)v33;
      if ( *(_QWORD *)v33 )
      {
        *(_QWORD *)v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      goto LABEL_35;
    }
  }
  else
  {
    v21 = *((_QWORD *)this + 10);
    if ( v21 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD *, __int64, HSTRING, HSTRING, HSTRING, int *))(v18 + 56))(
              v34,
              v21,
              string,
              a7,
              a5,
              v33);
      Entitlement = v19;
      if ( v19 < 0 )
      {
        v20 = 367LL;
        goto LABEL_15;
      }
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))(v18 + 48))(v34, string, a7, a5, v33);
      Entitlement = v19;
      if ( v19 < 0 )
      {
        v20 = 363LL;
        goto LABEL_15;
      }
    }
  }
  v36 = 0LL;
  v22 = *(_QWORD *)v33;
  Entitlement = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>>(*(_QWORD *)v33);
  if ( Entitlement < 0
    || (Entitlement = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 64LL))(v22, &v36), Entitlement < 0) )
  {
    v25 = 372LL;
    goto LABEL_30;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v36 + 48LL))(v36, &v39);
  Entitlement = v23;
  if ( v23 < 0 )
  {
    v24 = (unsigned int)v23;
    v25 = 375LL;
    goto LABEL_31;
  }
  if ( (_DWORD)v39 )
  {
    Entitlement = -2147467259;
    v25 = 376LL;
LABEL_30:
    v24 = (unsigned int)Entitlement;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v24);
    v29 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    goto LABEL_33;
  }
  v26 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = *(_QWORD *)v33;
  if ( *(_QWORD *)v33 )
  {
    *(_QWORD *)v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
  }
  WindowsDeleteString(string);
  Entitlement = 0;
LABEL_38:
  if ( v14 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)Entitlement;
}
