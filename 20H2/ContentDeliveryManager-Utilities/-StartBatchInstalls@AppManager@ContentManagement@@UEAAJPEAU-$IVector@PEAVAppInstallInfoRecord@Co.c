/*
 * XREFs of ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18005A170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CC90 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x18005B304 (-ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVector@PEAVAppInstallInfoRecord.c)
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18005B838 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005BCDC (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AppInstallBatching@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C6DC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AppInstallBatching@@@det.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18005FF7C (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVInstallAppInfo@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::StartBatchInstalls(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // r8d
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edi
  int AppInstallManager; // eax
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  int v28; // [rsp+20h] [rbp-60h]
  int v29; // [rsp+28h] [rbp-58h]
  __int64 v30; // [rsp+50h] [rbp-30h] BYREF
  __int64 v31; // [rsp+58h] [rbp-28h] BYREF
  _QWORD *v32; // [rsp+60h] [rbp-20h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v33[2]; // [rsp+68h] [rbp-18h] BYREF
  char v34[8]; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v36; // [rsp+C0h] [rbp+40h] BYREF
  char v37; // [rsp+C4h] [rbp+44h]
  __int64 v38; // [rsp+C8h] [rbp+48h] BYREF

  v33[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  *a3 = 0LL;
  v6 = `wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v33[0] = *(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AppInstallBatching>::GetCachedFeatureEnabledState(&`wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetImpl'::`2'::impl, v34);
    v6 = (unsigned int)v33[0];
  }
  v36 = 0;
  v37 = 3;
  wil::details::ReportUsageToService(
    (signed __int32 *)&unk_180199460,
    0x68C9CDu,
    (v6 >> 8) & 1,
    (v6 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v36,
    1,
    3);
  v32 = 0LL;
  v8 = ContentManagement::AppManager::ConvertToStoreRecords(v7, a2, &v32);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_33:
    v27 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v27 + 16LL))(v27, *v27);
    }
    return (unsigned int)v9;
  }
  v33[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)(a1 - 48),
                        v33);
  v9 = AppInstallManager;
  v11 = v33[0];
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
LABEL_31:
    if ( v11 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
    goto LABEL_33;
  }
  v31 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v33[0])(
          v33[0],
          &GUID_e5362e53_1657_4c6c_b537_ddb132eb14de,
          &v31);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_29:
    v26 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    goto LABEL_31;
  }
  v30 = 0LL;
  LOBYTE(v29) = 0;
  LOBYTE(v28) = 0;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD, int, int, _QWORD, __int64 *))(*(_QWORD *)v31 + 72LL))(
          v31,
          v32,
          0LL,
          0LL,
          v28,
          v29,
          0LL,
          &v30);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_27:
    v25 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_29;
  }
  v38 = 0LL;
  v14 = v30;
  v9 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>>(v30);
  if ( v9 < 0 || (v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 64LL))(v14, &v38), v9 < 0) )
  {
    v17 = (unsigned int)v9;
    v18 = 216LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v17);
    v24 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    goto LABEL_27;
  }
  v16 = ContentManagement::AppManager::ConvertFromStoreRecords(v15, v38, a3);
  v9 = v16;
  if ( v16 < 0 )
  {
    v17 = (unsigned int)v16;
    v18 = 218LL;
    goto LABEL_25;
  }
  v19 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
  v22 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
  }
  return 0LL;
}
