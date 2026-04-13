/*
 * XREFs of ??R_lambda_6cabec790fcbd4832d90c2925fd9d572_@@QEBAJXZ @ 0x18005AFA4
 * Callers:
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x18005AE50 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005C12C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18006092C (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppInstallItem@Ins.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _lambda_6cabec790fcbd4832d90c2925fd9d572_::operator()(__int64 a1)
{
  int AppInstallManager; // eax
  int v3; // edi
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  char v14; // [rsp+28h] [rbp-58h]
  char v15; // [rsp+30h] [rbp-50h]
  char v16; // [rsp+30h] [rbp-50h]
  char v17; // [rsp+38h] [rbp-48h]
  char v18; // [rsp+38h] [rbp-48h]
  char v19; // [rsp+40h] [rbp-40h]
  char v20; // [rsp+40h] [rbp-40h]
  char v21; // [rsp+48h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v23; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v24; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+50h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v26; // [rsp+D8h] [rbp+58h] BYREF

  v26 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(*(ContentManagement::AppManager **)a1, &v26);
  v3 = AppInstallManager;
  v4 = v26;
  if ( AppInstallManager >= 0 )
  {
    v24 = 0LL;
    v5 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD **))v26)(
           v26,
           &GUID_e5362e53_1657_4c6c_b537_ddb132eb14de,
           &v24);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v23 = 0LL;
      v6 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
      v7 = *v24;
      if ( v6 )
      {
        v21 = 0;
        v20 = **(_BYTE **)(a1 + 48);
        v18 = **(_BYTE **)(a1 + 40);
        v16 = 0;
        v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 *))(v7 + 64))(
               v24,
               v6,
               **(_QWORD **)(a1 + 8),
               **(_QWORD **)(a1 + 16),
               **(_QWORD **)(a1 + 24),
               **(_QWORD **)(a1 + 32),
               v16,
               v18,
               v20,
               v21,
               **(_QWORD **)(a1 + 56),
               0LL,
               &v23);
      }
      else
      {
        v19 = 0;
        v17 = **(_BYTE **)(a1 + 48);
        v15 = **(_BYTE **)(a1 + 40);
        v14 = 0;
        v8 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 *))(v7 + 56))(
               v24,
               **(_QWORD **)(a1 + 8),
               **(_QWORD **)(a1 + 16),
               **(_QWORD **)(a1 + 24),
               **(_QWORD **)(a1 + 32),
               v14,
               v15,
               v17,
               v19,
               **(_QWORD **)(a1 + 56),
               0LL,
               &v23);
      }
      v3 = v8;
      if ( v8 >= 0 )
      {
        v25 = 0LL;
        v9 = v23;
        v3 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>>(v23);
        if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 64LL))(v9, &v25), v3 < 0) )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x13F,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v3);
        else
          v3 = 0;
        v10 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13F,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v8);
      }
      v11 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v5);
    }
    v12 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
