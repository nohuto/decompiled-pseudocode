/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x180369C1C
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x1803581F8 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180092F7C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIPWSLayoutItemInternal@@UIPenWorkspaceLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180138F50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Ch_ea_180138F50.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139F2C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x18035E40C (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x180367E38 (--0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x180369120 (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x18036A644 (-UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize(volatile int **this)
{
  KeyboardHosting::PositionAndSizeOptionsProvider **v2; // rbx
  void *v3; // rax
  int v4; // ebx
  __int64 v5; // rdx
  KeyboardHosting::PositionAndSizeOptionsProvider *v7; // rax
  volatile int *v8; // rdx
  KeyboardHosting::PositionAndSizeOptionsProvider *v9; // r10
  _DWORD *v10; // rax
  __int64 v11; // rbx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+20h]
  void *v14; // [rsp+50h] [rbp+28h] BYREF
  void *v15; // [rsp+58h] [rbp+30h] BYREF
  KeyboardHosting::PositionAndSizeOptionsProvider *v16; // [rsp+60h] [rbp+38h] BYREF
  volatile int *v17; // [rsp+68h] [rbp+40h] BYREF

  v2 = (KeyboardHosting::PositionAndSizeOptionsProvider **)(this + 27);
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(this + 27);
  *v2 = 0LL;
  v3 = operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v3;
  v15 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
    v4 = -2147024882;
    v5 = 29LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v16 = (KeyboardHosting::PositionAndSizeOptionsProvider *)v3;
  v7 = KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider((KeyboardHosting::PositionAndSizeOptionsProvider *)v3);
  v9 = v7;
  v16 = v7;
  v14 = 0LL;
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
      (__int64)v7,
      v8);
  *v2 = v9;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((volatile int **)&v16);
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(this + 28);
  this[28] = 0LL;
  v10 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = (__int64)v10;
  v15 = v10;
  if ( v10 )
  {
    v10[3] = 1;
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IViewRectProvider>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v11 = &KeyboardHosting::ViewRectProvider::`vftable';
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_OWORD *)(v11 + 24) = 0LL;
    *(_OWORD *)(v11 + 40) = 0LL;
    *(_DWORD *)(v11 + 56) = 100;
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_OWORD *)(v11 + 72) = 0LL;
    *(_OWORD *)(v11 + 88) = 0LL;
    *(_DWORD *)(v11 + 104) = 100;
    *(_QWORD *)(v11 + 112) = 0LL;
    *(_OWORD *)(v11 + 120) = 0LL;
    *(_OWORD *)(v11 + 136) = 0LL;
    *(_DWORD *)(v11 + 152) = 100;
    v17 = (volatile int *)v11;
    v15 = 0LL;
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::AddRef(v11);
    this[28] = (volatile int *)v11;
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v17);
    v4 = 0;
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
  if ( v4 < 0 )
  {
    v5 = 30LL;
    goto LABEL_3;
  }
  v4 = KeyboardHosting::TabTipAdapterPolicy::InitializeMonitors((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( v4 < 0 )
  {
    v5 = 31LL;
    goto LABEL_3;
  }
  updated = KeyboardHosting::TabTipAdapterPolicy::UpdatePinState((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
