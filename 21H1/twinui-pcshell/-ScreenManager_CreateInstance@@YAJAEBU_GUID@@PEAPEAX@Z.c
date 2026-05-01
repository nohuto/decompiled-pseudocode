/*
 * XREFs of ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E3AE4
 * Callers:
 *     ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x1803D9D10 (-RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801158FC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ??1?$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180362EA4 (--1-$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0ScreenManager@@QEAA@XZ @ 0x1803E2AC8 (--0ScreenManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803E2DF4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerM.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1803E3650 (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ScreenManager_CreateInstance(const struct _GUID *a1, ScreenManager **a2)
{
  ScreenManager *v3; // rax
  __int64 v4; // rdx
  int CanCastTo; // ebx
  ScreenManager *v6; // rax
  volatile int *v7; // rdx
  ScreenManager *v8; // r10
  _DWORD *v9; // rcx
  _DWORD *v10; // r9
  _DWORD *v11; // rcx
  ScreenManager *v12; // r8
  _DWORD *v13; // r9
  ScreenManager *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  ScreenManager *v17; // [rsp+30h] [rbp+10h] BYREF
  ScreenManager *v18; // [rsp+38h] [rbp+18h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v17);
  v17 = 0LL;
  v3 = (ScreenManager *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CAppTransitionTargetManager>::~MakeAllocator<CAppTransitionTargetManager>((void **)&v18);
    v4 = 334LL;
    CanCastTo = -2147024882;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)(unsigned int)CanCastTo);
    goto LABEL_17;
  }
  v6 = ScreenManager::ScreenManager(v3);
  v18 = v6;
  v8 = v6;
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      (__int64)v6,
      v7);
  v17 = v8;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v18);
  *a2 = 0LL;
  if ( !InlineIsEqualGUID(&GUID_d14291a4_8dc6_4788_b850_8b00ca5c80e0, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v9, v10) )
    {
      *a2 = v17;
    }
    else
    {
      if ( !InlineIsEqualGUID(v11, &GUID_859cc9da_cb27_4a90_b8fa_749bb1944473) )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>::CanCastTo(
                      (__int64)v12 + 8,
                      v13);
        if ( CanCastTo < 0 )
          goto LABEL_14;
        goto LABEL_12;
      }
      *a2 = v12;
    }
    CanCastTo = 0;
LABEL_12:
    (*(void (__fastcall **)(ScreenManager *))(*(_QWORD *)*a2 + 8LL))(*a2);
    goto LABEL_14;
  }
  v14 = v17;
  *a2 = v17;
  (*(void (__fastcall **)(ScreenManager *))(*(_QWORD *)v14 + 8LL))(v14);
  CanCastTo = 0;
LABEL_14:
  if ( CanCastTo < 0 )
  {
    v4 = 335LL;
    goto LABEL_16;
  }
LABEL_17:
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v17);
  return (unsigned int)CanCastTo;
}
