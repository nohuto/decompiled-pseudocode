/*
 * XREFs of ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800837DC
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180026F84 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18008286C (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

char __fastcall CLivePreview::_IsTrulyMaximized(CLivePreview *this, HWND *a2)
{
  char v2; // bl
  HMONITOR v4; // rax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)a2 + 609) & 2) != 0 )
  {
    v4 = MonitorFromWindow(a2[5], 0);
    if ( v4 )
    {
      mi.cbSize = 40;
      memset(&mi.rcMonitor, 0, 36);
      if ( GetMonitorInfoW(v4, &mi) )
      {
        v5 = 0;
        if ( mi.rcWork.right - mi.rcWork.left >= 0 )
          v5 = mi.rcWork.right - mi.rcWork.left;
        v6 = 0;
        if ( *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12) >= 0 )
          v6 = *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12);
        if ( v6 >= v5 )
        {
          v7 = 0;
          if ( mi.rcWork.bottom - mi.rcWork.top >= 0 )
            v7 = mi.rcWork.bottom - mi.rcWork.top;
          v8 = 0;
          if ( *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13) >= 0 )
            v8 = *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13);
          if ( v8 >= v7 )
            return 1;
        }
      }
    }
  }
  return v2;
}
