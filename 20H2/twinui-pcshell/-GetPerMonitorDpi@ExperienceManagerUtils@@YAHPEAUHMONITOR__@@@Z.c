/*
 * XREFs of ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x180012974
 * Callers:
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18000FD6C (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180012664 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180012698 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C4D34 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     InitDPI @ 0x18046C908 (InitDPI.c)
 */

__int64 __fastcall ExperienceManagerUtils::GetPerMonitorDpi(ExperienceManagerUtils *this, HMONITOR a2)
{
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  char v4; // [rsp+38h] [rbp+10h] BYREF

  if ( this && (int)GetDpiForMonitor(this, 0LL, &v3, &v4) >= 0 )
    return v3;
  InitDPI(this, a2);
  return (unsigned int)dword_1805CAC30;
}
