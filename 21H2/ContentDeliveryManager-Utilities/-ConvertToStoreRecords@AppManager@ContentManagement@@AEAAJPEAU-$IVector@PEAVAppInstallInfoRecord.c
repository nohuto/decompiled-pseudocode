/*
 * XREFs of ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x18005BDD4
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x18005AC40 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007258 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CFA74 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertToStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rdi
  int v6; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  HRESULT ApartmentType; // eax
  APTTYPE v10; // ecx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // r14d
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING *); // rsi
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, APTTYPE *); // rsi
  int v21; // eax
  HRESULT v22; // eax
  HSTRING v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+28h] [rbp-49h] BYREF
  APTTYPE pAptType[2]; // [rsp+30h] [rbp-41h] BYREF
  HSTRING v40; // [rsp+38h] [rbp-39h] BYREF
  __int64 v41; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-29h] BYREF
  __int64 v43; // [rsp+50h] [rbp-21h] BYREF
  _QWORD *v44; // [rsp+58h] [rbp-19h]
  __int64 v45; // [rsp+60h] [rbp-11h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-9h] BYREF
  HSTRING string; // [rsp+80h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v45 = -2LL;
  *a3 = 0LL;
  v5 = 0LL;
  v44 = 0LL;
  v6 = 0;
  v7 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7[4] = 1LL;
    *v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable';
    v7[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `IWeakReferenceSource'};
    v7[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v8 = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable';
    v8[1] = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `IWeakReferenceSource'};
    v8[2] = &Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>'};
    v8[5] = 0LL;
    *((_DWORD *)v8 + 12) = 0;
    v8[7] = 0LL;
    ApartmentType = CoGetApartmentType(pAptType, pAptQualifier);
    v10 = pAptType[0];
    if ( ApartmentType < 0 )
      v10 = APTTYPE_MTA;
    pAptType[0] = v10;
    if ( v10 == APTTYPE_MAINSTA || v10 == APTTYPE_STA )
    {
      *((_DWORD *)v8 + 18) = 1;
      *((_DWORD *)v8 + 20) = 0;
    }
    else
    {
      *((_DWORD *)v8 + 18) = 0;
      InitializeSRWLock((PSRWLOCK)v8 + 10);
    }
    *((_DWORD *)v8 + 22) = 0;
    *((_DWORD *)v8 + 24) = 0;
  }
  else
  {
    v6 = -2147024882;
    v8 = 0LL;
  }
  if ( v6 >= 0 )
  {
    v5 = v8;
    v44 = v8;
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  if ( v6 < 0 )
  {
    v11 = (unsigned int)v6;
    v12 = 419LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v11);
    goto LABEL_59;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v42);
  v6 = v13;
  if ( v13 < 0 )
  {
    v12 = 422LL;
LABEL_43:
    v11 = (unsigned int)v13;
    goto LABEL_44;
  }
  v14 = 0;
  if ( v42 )
  {
    while ( 1 )
    {
      v41 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v14, &v41);
      v6 = v15;
      if ( v15 < 0 )
        break;
      v40 = 0LL;
      v16 = v41;
      v17 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41 + 48LL);
      WindowsDeleteString(0LL);
      v40 = 0LL;
      v18 = v17(v16, &v40);
      v6 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v18);
        goto LABEL_54;
      }
      *(_QWORD *)pAptType = 0LL;
      v19 = v41;
      v20 = *(__int64 (__fastcall **)(__int64, APTTYPE *))(*(_QWORD *)v41 + 64LL);
      WindowsDeleteString(0LL);
      *(_QWORD *)pAptType = 0LL;
      v21 = v20(v19, pAptType);
      v6 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AE,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v21);
        goto LABEL_52;
      }
      *(_QWORD *)pAptQualifier = 0LL;
      string = 0LL;
      v22 = WindowsCreateStringReference(
              L"Windows.ApplicationModel.Store.Preview.InstallControl.Internal.InstallAppInfo",
              0x4Du,
              &hstringHeader,
              &string);
      if ( v22 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
        JUMPOUT(0x18005C301LL);
      }
      v23 = string;
      v24 = *(_QWORD *)pAptQualifier;
      if ( *(_QWORD *)pAptQualifier )
      {
        *(_QWORD *)pAptQualifier = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      *(_QWORD *)pAptQualifier = 0LL;
      v6 = RoActivateInstance(v23, &v43);
      if ( v6 < 0
        || (*(_QWORD *)&GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
         || *(_QWORD *)GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
          ? (v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, APTTYPEQUALIFIER *))v43)(
                    v43,
                    &GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e,
                    pAptQualifier),
             (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43),
             v25 = *(_QWORD *)pAptQualifier)
          : (v25 = v43, *(_QWORD *)pAptQualifier = v43),
            v6 < 0) )
      {
        v33 = (unsigned int)v6;
        v34 = 433LL;
        goto LABEL_49;
      }
      v26 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v25 + 56LL))(v25, v40);
      v6 = v26;
      if ( v26 < 0 )
      {
        v33 = (unsigned int)v26;
        v34 = 434LL;
        goto LABEL_49;
      }
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)pAptQualifier + 104LL))(
              *(_QWORD *)pAptQualifier,
              *(_QWORD *)pAptType);
      v6 = v27;
      if ( v27 < 0 )
      {
        v33 = (unsigned int)v27;
        v34 = 435LL;
        goto LABEL_49;
      }
      v28 = *v5;
      v29 = *(_QWORD *)pAptQualifier;
      *(_QWORD *)pAptQualifier = 0LL;
      v30 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(v28 + 104))(v5, v29);
      v6 = v30;
      if ( v30 < 0 )
      {
        v33 = (unsigned int)v30;
        v34 = 437LL;
LABEL_49:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v34,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)v33);
        v35 = *(_QWORD *)pAptQualifier;
        if ( *(_QWORD *)pAptQualifier )
        {
          *(_QWORD *)pAptQualifier = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
LABEL_52:
        WindowsDeleteString(*(HSTRING *)pAptType);
        *(_QWORD *)pAptType = 0LL;
LABEL_54:
        WindowsDeleteString(v40);
        v40 = 0LL;
        goto LABEL_56;
      }
      v31 = *(_QWORD *)pAptQualifier;
      if ( *(_QWORD *)pAptQualifier )
      {
        *(_QWORD *)pAptQualifier = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      WindowsDeleteString(*(HSTRING *)pAptType);
      *(_QWORD *)pAptType = 0LL;
      WindowsDeleteString(v40);
      v40 = 0LL;
      v32 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      if ( ++v14 >= v42 )
        goto LABEL_41;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_56:
    v36 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
  }
  else
  {
LABEL_41:
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v5 + 64LL))(v5, a3);
    v6 = v13;
    if ( v13 < 0 )
    {
      v12 = 440LL;
      goto LABEL_43;
    }
    v6 = 0;
  }
LABEL_59:
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return (unsigned int)v6;
}
