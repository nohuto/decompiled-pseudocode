/*
 * XREFs of ?get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@Z @ 0x180014020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000727C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180058E34 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_ActionHelper(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IActionHelper **a2,
        bool *a3)
{
  int v4; // eax
  int v5; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  int v9; // edi
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct ContentManagement::IActionHelper **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct ContentManagement::IActionHelper **); // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", &v16, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !(_BYTE)v16 )
    {
      v5 = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x76,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)0x80070005LL);
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x463,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v5 < 0 )
    goto LABEL_7;
  v17 = 0LL;
  v7 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_13:
    v11 = (unsigned int)v9;
    v12 = 1126LL;
    goto LABEL_16;
  }
  v10 = v7 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 1));
  v8[8] = 1LL;
  *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IActionHelper>::`vftable'{for `IInspectable'};
  *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IActionHelper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IActionHelper>'};
  v8[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IActionHelper>::`vftable'{for `IWeakReferenceSource'};
  v8[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IActionHelper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IActionHelper>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v8 = &ContentManagement::ActionHelper::`vftable'{for `IInspectable'};
  *v10 = &ContentManagement::ActionHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IActionHelper>'};
  v8[5] = &ContentManagement::ActionHelper::`vftable'{for `IWeakReferenceSource'};
  v8[6] = &ContentManagement::ActionHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IActionHelper>'};
  v9 = ((__int64 (__fastcall *)(_QWORD *, GUID *, _QWORD))ContentManagement::ActionHelper::`vftable'{for `IInspectable'})(
         v8,
         &GUID_3de57b85_d574_488b_9d07_81cd7c7e49df,
         &v17);
  (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  if ( v9 < 0 )
    goto LABEL_13;
  v13 = (**v17)(v17, &GUID_3de57b85_d574_488b_9d07_81cd7c7e49df, a2);
  v9 = v13;
  if ( v13 >= 0 )
  {
    v9 = 0;
    goto LABEL_18;
  }
  v11 = (unsigned int)v13;
  v12 = 1127LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v11);
LABEL_18:
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IActionHelper **)))(*v14)[2])(v14);
  }
  return (unsigned int)v9;
}
