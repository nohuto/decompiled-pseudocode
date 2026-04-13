/*
 * XREFs of ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180059628
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180057F60 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000728C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014210 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdentityManager@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800142B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdent.c)
 *     ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ @ 0x18002245C (--0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ.c)
 *     ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180022590 (-put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800226A0 (-put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800269D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_1800269D0.c)
 *     ?GetView@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@345@@Z @ 0x18005AED0 (-GetView@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 *     ?InsertAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@_N@Z @ 0x18005C69C (-InsertAtInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredica.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB364 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertFromStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  volatile signed __int64 *v5; // rdi
  int v6; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int View; // eax
  unsigned int v12; // r14d
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HSTRING *); // rsi
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, HSTRING *); // rsi
  int v19; // eax
  ContentManagement::AppInstallInfoRecordImpl *v20; // rax
  ContentManagement::AppInstallInfoRecordImpl *v21; // rax
  volatile signed __int64 *v22; // rbx
  int v23; // eax
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  volatile signed __int64 *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdx
  volatile signed __int64 *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v35; // [rsp+20h] [rbp-30h] BYREF
  HSTRING string; // [rsp+28h] [rbp-28h] BYREF
  HSTRING v37; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-18h]
  __int64 v39; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v41; // [rsp+90h] [rbp+40h] BYREF
  int v42; // [rsp+A0h] [rbp+50h] BYREF
  volatile signed __int64 *v43; // [rsp+A8h] [rbp+58h]

  v41 = a1;
  v39 = -2LL;
  *a3 = 0LL;
  v5 = 0LL;
  v38 = 0LL;
  v6 = 0;
  v7 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = &Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>::`vftable';
    v7[2] = &Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 3));
    v8[8] = 1LL;
    *v8 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
    v8[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
    v8[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
    v8[3] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v8 = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>'};
    v8[1] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>'};
    v8[2] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>'};
    v8[3] = &Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v8[9] = 0LL;
    *((_DWORD *)v8 + 20) = 0;
    v8[11] = 0LL;
    v42 = 1;
    *((_DWORD *)v8 + 26) = 0;
    InitializeSRWLock((PSRWLOCK)v8 + 14);
    *((_DWORD *)v8 + 30) = 0;
    *((_DWORD *)v8 + 32) = 0;
  }
  else
  {
    v6 = -2147024882;
    v8 = 0LL;
  }
  if ( v6 >= 0 )
  {
    v5 = v8;
    v38 = v8;
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  if ( v6 < 0 )
  {
    v9 = (unsigned int)v6;
    v10 = 450LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v9);
    goto LABEL_52;
  }
  View = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v41);
  v6 = View;
  if ( View < 0 )
  {
    v10 = 453LL;
LABEL_34:
    v9 = (unsigned int)View;
    goto LABEL_35;
  }
  v12 = 0;
  if ( (_DWORD)v41 )
  {
    while ( 1 )
    {
      v35 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v12, &v35);
      v6 = v13;
      if ( v13 < 0 )
        break;
      v37 = 0LL;
      v14 = v35;
      v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v35 + 48LL);
      WindowsDeleteString(0LL);
      v37 = 0LL;
      v16 = v15(v14, &v37);
      v6 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_47;
      }
      string = 0LL;
      v17 = v35;
      v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v35 + 96LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v19 = v18(v17, &string);
      v6 = v19;
      if ( v19 < 0 )
      {
        v32 = 463LL;
        goto LABEL_44;
      }
      v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 120LL))(v35, &v42);
      v6 = v19;
      if ( v19 < 0 )
      {
        v32 = 466LL;
LABEL_44:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v32,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v19);
        goto LABEL_45;
      }
      v43 = 0LL;
      v20 = (ContentManagement::AppInstallInfoRecordImpl *)operator new(
                                                             0x70uLL,
                                                             (const struct std::nothrow_t *)&std::nothrow);
      if ( !v20 )
      {
        v6 = -2147024882;
        v29 = 2147942414LL;
        v30 = 469LL;
        goto LABEL_40;
      }
      v21 = ContentManagement::AppInstallInfoRecordImpl::AppInstallInfoRecordImpl(v20);
      v22 = (volatile signed __int64 *)v21;
      if ( v21 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::AddRef((__int64)v21);
      v43 = v22;
      if ( v22 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v22);
        v22 = v43;
      }
      v23 = ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
              (ContentManagement::AppInstallInfoRecordImpl *)(v22 + 6),
              v37);
      v6 = v23;
      if ( v23 < 0 )
      {
        v29 = (unsigned int)v23;
        v30 = 470LL;
        goto LABEL_40;
      }
      v24 = ContentManagement::AppInstallInfoRecordImpl::put_SkuId(
              (ContentManagement::AppInstallInfoRecordImpl *)(v43 + 6),
              string);
      v6 = v24;
      if ( v24 < 0 )
      {
        v29 = (unsigned int)v24;
        v30 = 471LL;
        goto LABEL_40;
      }
      *((_DWORD *)v43 + 26) = v42;
      LOBYTE(v25) = 1;
      v26 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::InsertAtInternal(
              v5,
              0LL,
              (unsigned __int64)(v43 + 6) & -(__int64)(v43 != 0LL),
              v25);
      v6 = v26;
      if ( v26 < 0 )
      {
        v29 = (unsigned int)v26;
        v30 = 474LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v30,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)v29);
        v31 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v31);
        }
LABEL_45:
        WindowsDeleteString(string);
        string = 0LL;
LABEL_47:
        WindowsDeleteString(v37);
        v37 = 0LL;
        goto LABEL_49;
      }
      v27 = v43;
      if ( v43 )
      {
        v43 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v27);
      }
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v37);
      v37 = 0LL;
      v28 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      if ( ++v12 >= (unsigned int)v41 )
        goto LABEL_32;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_49:
    v33 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
  }
  else
  {
LABEL_32:
    View = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetView(
             v5,
             a3);
    v6 = View;
    if ( View < 0 )
    {
      v10 = 477LL;
      goto LABEL_34;
    }
    v6 = 0;
  }
LABEL_52:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v5);
  return (unsigned int)v6;
}
