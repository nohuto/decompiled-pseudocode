/*
 * XREFs of ?NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z @ 0x1800A7628
 * Callers:
 *     ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A7B48 (-OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A7E1C (-OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A8408 (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ??$ShellFeedsDesktopExperienceView_NotifyTrayOfFlyoutVisibility@AEA_N@ShellFeedsTelemetry@@SAXAEA_N@Z @ 0x1800A5248 (--$ShellFeedsDesktopExperienceView_NotifyTrayOfFlyoutVisibility@AEA_N@ShellFeedsTelemetry@@SAXAE.c)
 *     ?GetTrayWindowFromLastActivatedMonitor@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1800A6BDC (-GetTrayWindowFromLastActivatedMonitor@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::NotifyTrayOfFlyoutVisibility(UINT *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  HWND TrayWindowFromLastActivatedMonitor; // rax
  HWND v5; // rsi
  unsigned __int8 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = a2;
  if ( *((_BYTE *)this + 157) != a2 )
  {
    ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_NotifyTrayOfFlyoutVisibility<bool &>((char *)&v7);
    TrayWindowFromLastActivatedMonitor = ShellFeedsDesktopExperienceView::GetTrayWindowFromLastActivatedMonitor((ShellFeedsDesktopExperienceView *)this);
    v5 = TrayWindowFromLastActivatedMonitor;
    if ( TrayWindowFromLastActivatedMonitor )
    {
      PostMessageW(TrayWindowFromLastActivatedMonitor, 0x4F6u, v2, 0LL);
      PostMessageW(v5, this[40], 6LL - ((_BYTE)v2 != 0), *((unsigned __int8 *)this + 158));
      *((_BYTE *)this + 157) = v2;
    }
  }
  return 0LL;
}
