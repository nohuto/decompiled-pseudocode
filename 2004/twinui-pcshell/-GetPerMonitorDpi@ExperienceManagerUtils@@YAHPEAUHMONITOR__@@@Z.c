/*
 * XREFs of ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18001BD94
 * Callers:
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180019928 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001BAF0 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001BB24 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C51C4 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     InitDPI @ 0x18046D008 (InitDPI.c)
 */

__int64 __fastcall ExperienceManagerUtils::GetPerMonitorDpi(ExperienceManagerUtils *this, HMONITOR a2, __int64 a3)
{
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( this && (int)GetDpiForMonitor(this, 0LL, &v4, &v5) >= 0 )
    return v4;
  InitDPI(this, a2, a3);
  return (unsigned int)dword_1805CBBF0;
}
