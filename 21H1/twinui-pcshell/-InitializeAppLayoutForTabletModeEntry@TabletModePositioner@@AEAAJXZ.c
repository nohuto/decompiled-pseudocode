/*
 * XREFs of ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1803D7D94
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803D4860 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?TabletModeChanged@TabletModePositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1803DE7A0 (-TabletModeChanged@TabletModePositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1803D4588 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x1803D5870 (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803D69BC (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x1803D9E88 (-SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x1803DA6A4 (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1803DE504 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::InitializeAppLayoutForTabletModeEntry(IUnknown **this)
{
  int CurrentLayoutEnvironment; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct IAppLayout *v10; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[40]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CurrentLayoutEnvironment = TabletModePositioner::GetCurrentLayoutEnvironment(
                               this,
                               (struct LAYOUT_ENVIRONMENT_DETAILS *)v11);
  v3 = CurrentLayoutEnvironment;
  if ( CurrentLayoutEnvironment >= 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    v4 = TabletModePositioner::CreateEmptyAppLayout((const struct LAYOUT_ENVIRONMENT_DETAILS *)v11, &v10);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v4 = TabletModePositioner::SetAppLayout((TabletModePositioner *)this, v10);
      v3 = v4;
      if ( v4 >= 0 )
      {
        ((void (__fastcall *)(IUnknown *, __int64))this[39]->lpVtbl[2].QueryInterface)(this[39], 17LL);
        v6 = TabletModePositioner::SwitchToSanitizedAppLayout(this, 1LL);
        if ( v6 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x6C6,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v6);
          v7 = TabletModePositioner::CleanupBackgroundViews((__int64)this, 0LL, 1);
          if ( v7 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x6C9,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v7);
          v8 = TabletModePositioner::ShowLauncher((TabletModePositioner *)this, 0);
          if ( v8 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x6CA,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v8);
        }
        v3 = 0;
        goto LABEL_14;
      }
      v5 = 1729LL;
    }
    else
    {
      v5 = 1728LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v4);
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    return v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6BE,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)CurrentLayoutEnvironment);
  return v3;
}
