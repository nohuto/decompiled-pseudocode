/*
 * XREFs of ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180405AC4
 * Callers:
 *     ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x1803FB260 (-RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenManager@@@Z @ 0x18040465C (--$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenManager@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180404D14 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerM.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1804055F0 (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ScreenManager_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  int CanCastTo; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rcx
  void *v10; // r8
  _DWORD *v11; // r9
  ScreenManager *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ScreenManager *v15; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v15);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ScreenManager,ScreenManager,>(&v15);
  CanCastTo = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 334LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)v5);
    goto LABEL_15;
  }
  *a2 = 0LL;
  if ( !InlineIsEqualGUID(&GUID_d14291a4_8dc6_4788_b850_8b00ca5c80e0, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v7, v8) )
    {
      *a2 = v15;
    }
    else
    {
      if ( !InlineIsEqualGUID(v9, &GUID_859cc9da_cb27_4a90_b8fa_749bb1944473) )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>::CanCastTo(
                      (__int64)v10 + 8,
                      v11);
        if ( CanCastTo < 0 )
          goto LABEL_12;
        goto LABEL_10;
      }
      *a2 = v10;
    }
    CanCastTo = 0;
LABEL_10:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    goto LABEL_12;
  }
  v12 = v15;
  *a2 = v15;
  (*(void (__fastcall **)(ScreenManager *))(*(_QWORD *)v12 + 8LL))(v12);
  CanCastTo = 0;
LABEL_12:
  if ( CanCastTo < 0 )
  {
    v5 = (unsigned int)CanCastTo;
    v6 = 335LL;
    goto LABEL_14;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v15);
  return (unsigned int)CanCastTo;
}
