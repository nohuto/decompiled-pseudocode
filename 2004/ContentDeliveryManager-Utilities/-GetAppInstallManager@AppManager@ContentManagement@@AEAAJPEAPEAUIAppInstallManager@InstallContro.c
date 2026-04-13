/*
 * XREFs of ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005C12C
 * Callers:
 *     ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x180059BD0 (-IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180059E00 (-IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x18005A0C0 (-GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18005A390 (-MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18005A5C0 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 *     ??R_lambda_6cabec790fcbd4832d90c2925fd9d572_@@QEBAJXZ @ 0x18005AFA4 (--R_lambda_6cabec790fcbd4832d90c2925fd9d572_@@QEBAJXZ.c)
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x18005B408 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007228 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::GetAppInstallManager(
        RTL_SRWLOCK *this,
        struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager **a2)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // r14
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *Ptr; // rbx
  HRESULT v6; // eax
  int v7; // esi
  __int64 (__fastcall ***v8)(_QWORD, GUID *, RTL_SRWLOCK *); // rbx
  PVOID v9; // rcx
  __int64 (__fastcall *v10)(_QWORD, GUID *, RTL_SRWLOCK *); // rsi
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v15; // rcx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, RTL_SRWLOCK *); // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  *a2 = 0LL;
  v2 = this + 11;
  v3 = this + 9;
  AcquireSRWLockShared(this + 11);
  Ptr = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)v3->Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( !Ptr )
  {
    AcquireSRWLockExclusive(v2);
    if ( !v3->Ptr )
    {
      v18 = 0LL;
      string = 0LL;
      v6 = WindowsCreateStringReference(
             L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
             0x47u,
             &hstringHeader,
             &string);
      if ( v6 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
        JUMPOUT(0x18005C370LL);
      }
      v7 = RoActivateInstance(string, &v19);
      if ( v7 < 0
        || (*(_QWORD *)&GUID_9353e170_8441_4b45_bd72_7c2fa925beee.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
         || *(_QWORD *)GUID_9353e170_8441_4b45_bd72_7c2fa925beee.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
          ? (v7 = (**v19)(v19, &GUID_9353e170_8441_4b45_bd72_7c2fa925beee, &v18),
             ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v19)[2])(v19),
             v8 = v18)
          : (v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, RTL_SRWLOCK *))v19,
             v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, RTL_SRWLOCK *))v19),
            v7 < 0) )
      {
        v12 = (unsigned int)v7;
        v13 = 499LL;
        goto LABEL_24;
      }
      v9 = v3->Ptr;
      v10 = **v8;
      if ( v3->Ptr )
      {
        v3->Ptr = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v11 = v10(v8, &GUID_9353e170_8441_4b45_bd72_7c2fa925beee, v3);
      v7 = v11;
      if ( v11 < 0 )
      {
        v12 = (unsigned int)v11;
        v13 = 500LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)v12);
        v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
        if ( v18 )
        {
          v18 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v17)[2])(v17);
        }
        if ( v2 )
          ReleaseSRWLockExclusive(v2);
        return (unsigned int)v7;
      }
      v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
      if ( v18 )
      {
        v18 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v14)[2])(v14);
      }
    }
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  v15 = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)v3->Ptr;
  if ( v3->Ptr )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v15 + 8LL))(v15);
    v15 = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)v3->Ptr;
  }
  *a2 = v15;
  return 0LL;
}
