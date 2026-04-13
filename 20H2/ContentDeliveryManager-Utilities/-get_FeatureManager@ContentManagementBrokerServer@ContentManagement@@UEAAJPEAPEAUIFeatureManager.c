/*
 * XREFs of ?get_FeatureManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIFeatureManager@2@@Z @ 0x180013D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000727C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180007F24 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_FeatureManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IFeatureManager **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v5; // edi
  _QWORD *v6; // rdi
  const unsigned __int16 *const *v7; // rdx
  CreativeFramework::LockScreenCategoryConfig *v8; // rcx
  int IsCallerInAllowedAppList; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct ContentManagement::IFeatureManager **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct ContentManagement::IFeatureManager **); // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp+18h]
  _QWORD *v18; // [rsp+68h] [rbp+20h]

  *a2 = 0LL;
  v16 = 0LL;
  v3 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v17 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_9:
    v10 = (unsigned int)v5;
    v11 = 1105LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v10);
    goto LABEL_14;
  }
  v6 = v3 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 1));
  v4[8] = 1LL;
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IFeatureManager>::`vftable'{for `IInspectable'};
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IFeatureManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IFeatureManager>'};
  v4[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IFeatureManager>::`vftable'{for `IWeakReferenceSource'};
  v4[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IFeatureManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IFeatureManager>'};
  v8 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v4 = &ContentManagement::FeatureManager::`vftable'{for `IInspectable'};
  *v6 = &ContentManagement::FeatureManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IFeatureManager>'};
  v4[5] = &ContentManagement::FeatureManager::`vftable'{for `IWeakReferenceSource'};
  v4[6] = &ContentManagement::FeatureManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IFeatureManager>'};
  v18 = v4;
  v17 = 0LL;
  IsCallerInAllowedAppList = CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(v8, v7);
  v5 = IsCallerInAllowedAppList;
  if ( IsCallerInAllowedAppList >= 0 )
    v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD))*v4)(v4, &GUID_5d4caaca_ed77_419a_84d8_ca25341824bf, &v16);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)IsCallerInAllowedAppList);
  (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  if ( v5 < 0 )
    goto LABEL_9;
  v12 = (**v16)(v16, &GUID_5d4caaca_ed77_419a_84d8_ca25341824bf, a2);
  v5 = v12;
  if ( v12 < 0 )
  {
    v10 = (unsigned int)v12;
    v11 = 1106LL;
    goto LABEL_12;
  }
  v5 = 0;
LABEL_14:
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IFeatureManager **)))(*v13)[2])(v13);
  }
  return (unsigned int)v5;
}
