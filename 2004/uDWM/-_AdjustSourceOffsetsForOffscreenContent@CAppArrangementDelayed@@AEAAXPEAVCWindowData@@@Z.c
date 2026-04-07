/*
 * XREFs of ?_AdjustSourceOffsetsForOffscreenContent@CAppArrangementDelayed@@AEAAXPEAVCWindowData@@@Z @ 0x1800B08C4
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B2620 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x1800045F4 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180038F40 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

void __fastcall CAppArrangementDelayed::_AdjustSourceOffsetsForOffscreenContent(
        CAppArrangementDelayed *this,
        struct CWindowData *a2)
{
  struct tagRECT v2; // xmm0
  HWND v4; // rdx
  int v5; // edi
  int v6; // esi
  int SystemMetrics; // esi
  int v8; // edi
  HMONITOR v9; // rax
  int v10; // eax
  struct tagSIZE v11; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-38h] BYREF

  v2 = (struct tagRECT)*((_OWORD *)a2 + 3);
  v4 = (HWND)*((_QWORD *)a2 + 5);
  rc = v2;
  if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
              v4,
              (struct tagPOINT *)&v11) >= 0 )
    OffsetRect(&rc, v11.cx - rc.left, v11.cy - rc.top);
  if ( (int)CWindowPropertyTracker::GetWindowEndSize(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
              *((HWND *)a2 + 5),
              &v11) >= 0 )
  {
    rc.right = rc.left + v11.cx;
    rc.bottom = rc.top + v11.cy;
  }
  if ( (*((_DWORD *)a2 + 154) & 0x800000) != 0 )
  {
    v5 = *((_DWORD *)a2 + 167) - rc.left;
    v6 = *((_DWORD *)a2 + 168) - rc.top;
  }
  else
  {
    SystemMetrics = GetSystemMetrics(92);
    v6 = GetSystemMetrics(33) + SystemMetrics;
    v8 = GetSystemMetrics(92);
    v5 = GetSystemMetrics(32) + v8;
    v9 = MonitorFromRect(&rc, 2u);
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( GetMonitorInfoW(v9, &mi) )
    {
      if ( mi.rcMonitor.top >= rc.top )
        v6 = mi.rcMonitor.top - rc.top;
      if ( mi.rcMonitor.left >= rc.left )
        v5 = mi.rcMonitor.left - rc.left;
    }
  }
  v10 = *((_DWORD *)a2 + 154);
  if ( (v10 & 0x1000000) != 0 )
  {
    OffsetRect((LPRECT)((char *)a2 + 620), v5 - *((_DWORD *)a2 + 155), v6 - *((_DWORD *)a2 + 156));
    v10 = *((_DWORD *)a2 + 154);
  }
  if ( (v10 & 0x800000) != 0 )
    OffsetRect((LPRECT)((char *)a2 + 652), v5 - *((_DWORD *)a2 + 163), v6 - *((_DWORD *)a2 + 164));
}
