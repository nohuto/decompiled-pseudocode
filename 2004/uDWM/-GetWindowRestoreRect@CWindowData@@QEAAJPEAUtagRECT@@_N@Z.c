/*
 * XREFs of ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180098088
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800269B4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180043CD8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180089770 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180094758 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x18009A908 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x180023EC8 (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     floor_0 @ 0x18005603A (floor_0.c)
 */

__int64 __fastcall CWindowData::GetWindowRestoreRect(CWindowData *this, struct tagRECT *a2, char a3)
{
  unsigned int v3; // edi
  CWindowList *v7; // rcx
  signed int LastError; // eax
  int v9; // eax
  LONG bottom; // ebx
  double v11; // xmm0_8
  int v12; // ebx
  int v13; // eax
  double v14; // xmm0_8
  HMONITOR v15; // rbx
  RECT rcWork; // xmm0
  __int64 v17; // rcx
  HMONITOR v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-49h]
  int v21; // [rsp+30h] [rbp-39h] BYREF
  int v22; // [rsp+34h] [rbp-35h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+38h] [rbp-31h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp-1h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 25) & 0x20000000) == 0 )
  {
    *a2 = *((struct tagRECT *)this + 3);
    return v3;
  }
  wndpl.length = 44;
  memset(&wndpl.flags, 0, 40);
  SetLastError(0);
  if ( GetWindowPlacement(*((HWND *)this + 5), &wndpl) )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 76) - 1.0) & _xmm) >= 0.0000011920929 )
    {
      CWindowList::GetPhysicalPtFromLogical(v7, this, &wndpl.rcNormalPosition, &v21, &v22);
      v9 = 0;
      bottom = wndpl.rcNormalPosition.bottom;
      if ( wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left >= 0 )
        v9 = wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left;
      v11 = floor_0((float)((float)v9 * *((float *)this + 76)) + 0.5);
      v12 = bottom - wndpl.rcNormalPosition.top;
      wndpl.rcNormalPosition.left = v21 + (int)v11;
      v13 = 0;
      if ( v12 >= 0 )
        v13 = v12;
      v14 = floor_0((float)((float)v13 * *((float *)this + 76)) + 0.5);
      wndpl.rcNormalPosition.right = v22 + (int)v14;
    }
    SetLastError(0);
    v15 = MonitorFromRect(&wndpl.rcNormalPosition, 1u);
    if ( v15 )
    {
      if ( (wndpl.flags & 2) != 0 )
      {
        mi.cbSize = 40;
        SetLastError(0);
        if ( !GetMonitorInfoW(v15, &mi) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v20 = 0x2000;
          goto LABEL_7;
        }
        rcWork = mi.rcWork;
      }
      else
      {
        *a2 = wndpl.rcNormalPosition;
        if ( !a3 )
          return v3;
        v17 = *((_QWORD *)this + 52);
        if ( !v17 )
          return v3;
        v18 = MonitorFromRect((LPCRECT)(*(_QWORD *)(v17 + 32) + 48LL), 0);
        if ( !v18 || v18 != v15 )
          return v3;
        rcWork = *(RECT *)(*(_QWORD *)(*((_QWORD *)this + 52) + 32LL) + 48LL);
      }
      *a2 = rcWork;
      return v3;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v20 = 8186;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v20 = 8159;
  }
LABEL_7:
  if ( LastError >= 0 )
    LastError = -2003304445;
  v3 = LastError;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, v20);
  return v3;
}
