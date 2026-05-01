/*
 * XREFs of ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x180440420
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18042FE08 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180092F7C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139F1C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1804055F0 (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopAnimationSyncNotificationServicePrivate@@UIVirtualDesktopAnimationSyncNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopAnimationSyncNotificationServicePrivate@@UIVirtualDesktopAnimationSyncNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18043FA1C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$_ea_18043FA1C.c)
 *     ??0VirtualDesktopAnimationSyncNotifications@@QEAA@XZ @ 0x18043FCC8 (--0VirtualDesktopAnimationSyncNotifications@@QEAA@XZ.c)
 */

__int64 __fastcall VirtualDesktopAnimationSyncNotifications_CreateInstance(int a1, const struct _GUID *a2, void **a3)
{
  VirtualDesktopAnimationSyncNotifications *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  VirtualDesktopAnimationSyncNotifications *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // r10
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF
  VirtualDesktopAnimationSyncNotifications *v16; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v15);
  v15 = 0LL;
  v5 = (VirtualDesktopAnimationSyncNotifications *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v16);
    v6 = -2147024882;
    v7 = 149LL;
    v8 = 2147942414LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
      (const char *)v8);
    goto LABEL_6;
  }
  v9 = VirtualDesktopAnimationSyncNotifications::VirtualDesktopAnimationSyncNotifications(v5);
  v16 = v9;
  *((_DWORD *)v9 + 22) = a1;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
    (__int64)v9,
    v10);
  v15 = v11;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v16);
  v12 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopAnimationSyncNotificationServicePrivate,IVirtualDesktopAnimationSyncNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>>(
          v15,
          &GUID_5c757a3f_6157_41b3_a760_926c0b131916,
          a3);
  v6 = v12;
  if ( v12 < 0 )
  {
    v8 = (unsigned int)v12;
    v7 = 150LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v15);
  return v6;
}
