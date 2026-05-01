/*
 * XREFs of ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1803F876C
 * Callers:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1803F86AC (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1803F4A30 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x1803F5F28 (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803F739C (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x1803FAAB8 (-SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x1803FB44C (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1803FF688 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::InitializeAppLayoutForStartup(IUnknown **this)
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
        *((_DWORD *)this + 58) = 1;
        if ( *((_DWORD *)this + 59) == 1 )
        {
          v6 = TabletModePositioner::SwitchToSanitizedAppLayout(this, 0LL);
          if ( v6 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x6B9,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v6);
            v7 = TabletModePositioner::CleanupBackgroundViews((__int64)this, 0LL, 0);
            if ( v7 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x6BC,
                (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                (const char *)(unsigned int)v7);
            v8 = TabletModePositioner::ShowLauncher((TabletModePositioner *)this, 0);
            if ( v8 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x6BD,
                (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                (const char *)(unsigned int)v8);
          }
        }
        v3 = 0;
        goto LABEL_15;
      }
      v5 = 1712LL;
    }
    else
    {
      v5 = 1711LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v4);
LABEL_15:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    return v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6AB,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)CurrentLayoutEnvironment);
  return v3;
}
