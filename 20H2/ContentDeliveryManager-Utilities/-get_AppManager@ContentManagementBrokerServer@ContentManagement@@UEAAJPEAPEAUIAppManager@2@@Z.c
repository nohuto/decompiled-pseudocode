/*
 * XREFs of ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x180013370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000727C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180058E34 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_AppManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IAppManager **a2,
        bool *a3)
{
  int v4; // eax
  int v5; // ebx
  RTL_SRWLOCK *v7; // rax
  RTL_SRWLOCK *v8; // rbx
  int v9; // edi
  RTL_SRWLOCK *v10; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v11; // rcx
  PVOID Ptr; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // rcx
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 (__fastcall ***v19)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // [rsp+38h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", (const unsigned __int16 *)&v19, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !(_BYTE)v19 )
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
        (void *)0x418,
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
  v19 = 0LL;
  v7 = (RTL_SRWLOCK *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_15:
    v13 = (unsigned int)v9;
    v14 = 518LL;
    goto LABEL_16;
  }
  v10 = v7 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&v7[1]);
  v11 = Microsoft::WRL::Details::ModuleBase::module_;
  v8->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `IInspectable'};
  v10->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IAppManager>'};
  v8[5].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `IWeakReferenceSource'};
  v8[6].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IAppManager>'};
  v8[8].Ptr = (PVOID)1;
  if ( v11 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v11 + 8LL))(v11);
  v8->Ptr = &ContentManagement::AppManager::`vftable'{for `IInspectable'};
  v8[9].Ptr = 0LL;
  v8[10].Ptr = 0LL;
  v10->Ptr = &ContentManagement::AppManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IAppManager>'};
  v8[5].Ptr = &ContentManagement::AppManager::`vftable'{for `IWeakReferenceSource'};
  v8[6].Ptr = &ContentManagement::AppManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IAppManager>'};
  InitializeSRWLock(v8 + 11);
  Ptr = v8[10].Ptr;
  if ( Ptr )
  {
    v8[10].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  v9 = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, _QWORD))v8->Ptr)(
         v8,
         &GUID_8c1d35c6_1c6c_4e16_9799_12b4f4b195b2,
         &v19);
  (*((void (__fastcall **)(RTL_SRWLOCK *))v8->Ptr + 2))(v8);
  if ( v9 < 0 )
    goto LABEL_15;
  v16 = (**v19)(v19, &GUID_8c1d35c6_1c6c_4e16_9799_12b4f4b195b2, a2);
  v9 = v16;
  if ( v16 >= 0 )
  {
    v17 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IAppManager **)))(*v17)[2])(v17);
    }
    v9 = 0;
    goto LABEL_23;
  }
  v13 = (unsigned int)v16;
  v14 = 519LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)v13);
  v15 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IAppManager **)))(*v15)[2])(v15);
  }
LABEL_23:
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41A,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
