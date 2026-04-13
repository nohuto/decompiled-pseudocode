/*
 * XREFs of ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x18002FC90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001A080 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@PEAVIn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800276AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@System@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180030890 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Pr.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18007D188 (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18007E6A4 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB364 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::ContentManagementService::QueueActionAfterUnlock(
        ContentManagement::ContentManagementService *this,
        struct IInspectable *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx
  int v5; // edi
  int v6; // eax
  __int64 v7; // rdx
  int LockAppHost; // eax
  __int64 (__fastcall **v9)(struct ILockAppHost *, GUID *, _QWORD **); // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int SharedExtendedExecutionSession; // eax
  __int64 v15; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  _QWORD *v17; // [rsp+60h] [rbp+30h] BYREF
  struct ILockAppHost *v18; // [rsp+68h] [rbp+38h] BYREF

  v15 = 0LL;
  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (__int64)v3;
  v17 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_12:
    v7 = 911LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_36;
  }
  v3[3] = 1LL;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Windows::System::Private::IPendingLaunch'};
  v3[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v4 = &UnlockActionHelper::`vftable'{for `Windows::System::Private::IPendingLaunch'};
  *(_QWORD *)(v4 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  v18 = (struct ILockAppHost *)v4;
  v17 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_d75b691e_6cd6_4ca0_9d8f_4728b0b7e6b6,
         v4 + 32);
  v5 = v6;
  if ( v6 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v6);
  if ( v5 >= 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::AddRef(v4);
    v15 = v4;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v4);
    v5 = 0;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v4);
  }
  if ( v5 < 0 )
    goto LABEL_12;
  v18 = 0LL;
  LockAppHost = GetLockAppHost(&v18);
  v5 = LockAppHost;
  if ( LockAppHost < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)LockAppHost);
LABEL_15:
    if ( v18 )
      (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v18 + 16LL))(v18);
    goto LABEL_32;
  }
  v17 = 0LL;
  v9 = *(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, _QWORD **))v18;
  v17 = 0LL;
  v10 = (*v9)(v18, &GUID_f2f2e6cf_4806_4728_954a_ef83a6301791, &v17);
  v5 = v10;
  if ( v10 < 0 )
  {
    v11 = 48LL;
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(v15 + 40);
  *(_QWORD *)(v15 + 40) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  SharedExtendedExecutionSession = UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession((struct IInspectable **)(v15 + 40));
  if ( SharedExtendedExecutionSession < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)SharedExtendedExecutionSession);
  v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v17 + 32LL))(v17, v15);
  v5 = v10;
  if ( v10 < 0 )
  {
    v11 = 55LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v10);
    if ( v17 )
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
    goto LABEL_15;
  }
  if ( v17 )
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v18 + 16LL))(v18);
  v5 = 0;
LABEL_32:
  if ( v5 < 0 )
  {
    v7 = 912LL;
    goto LABEL_34;
  }
  v5 = 0;
LABEL_36:
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v15);
  return (unsigned int)v5;
}
