/*
 * XREFs of ?TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x18003837C
 * Callers:
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x1800382D4 (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180038414 (-GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     memset_0 @ 0x1800563D2 (memset_0.c)
 */

__int64 __fastcall TryGetPathInfoFromHMonitor(HMONITOR hMonitor, struct DISPLAYCONFIG_PATH_INFO *a2)
{
  BOOL MonitorInfoW; // eax
  bool v5; // dl
  unsigned int v6; // ebx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 v9[36]; // [rsp+48h] [rbp-60h] BYREF

  memset_0(&mi.rcMonitor, 0, 0x64uLL);
  mi.cbSize = 104;
  MonitorInfoW = GetMonitorInfoW(hMonitor, &mi);
  v6 = 0;
  if ( MonitorInfoW )
    return (int)GetPathInfo(v9, v5, a2) >= 0;
  return v6;
}
