/*
 * XREFs of ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x1803F99BC
 * Callers:
 *     ?DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803F6C50 (-DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 *     ?ScaleFactorChanged@TabletModePositioner@@UEAAXXZ @ 0x1803FB3A0 (-ScaleFactorChanged@TabletModePositioner@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803F52A0 (-ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803F7CBC (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::LayoutEnvironmentChanged(IUnknown *this)
{
  int CurrentLayoutEnvironment; // ebx
  __int64 v3; // rdx
  _BYTE v5[40]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v6[40]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  (*((void (__fastcall **)(struct IUnknownVtbl *, _BYTE *))this[31].lpVtbl->QueryInterface + 3))(this[31].lpVtbl, v6);
  CurrentLayoutEnvironment = TabletModePositioner::GetCurrentLayoutEnvironment(
                               (IUnknown **)this,
                               (struct LAYOUT_ENVIRONMENT_DETAILS *)v5);
  if ( CurrentLayoutEnvironment < 0 )
  {
    v3 = 1956LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)CurrentLayoutEnvironment);
    return (unsigned int)CurrentLayoutEnvironment;
  }
  CurrentLayoutEnvironment = TabletModePositioner::ChangeLayoutEnvironmentHelper(
                               this,
                               (const struct LAYOUT_ENVIRONMENT_DETAILS *)v5);
  if ( CurrentLayoutEnvironment < 0 )
  {
    v3 = 1967LL;
    goto LABEL_3;
  }
  return 0LL;
}
