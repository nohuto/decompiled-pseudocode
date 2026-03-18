/*
 * XREFs of _MonitorFromPoint @ 0x1C0025880
 * Callers:
 *     _MonitorFromRect @ 0x1C0024B70 (_MonitorFromRect.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C003B570 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01E5BC0 (GetDPITransformationMonitor.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C01F78C0 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01FA760 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C020B590 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     xxxInitializeMoveSizeData @ 0x1C021285C (xxxInitializeMoveSizeData.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0243B2C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C0023470 (GetMonitorRectForDpiContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(__int64 a1, __int64 a2, unsigned int CurrentThreadDpiAwarenessContext)
{
  unsigned int v4; // esi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DispInfo; // rdi
  __int64 i; // rdi
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rbp
  int v18; // eax
  int v19; // edx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int128 v22; // [rsp+20h] [rbp-68h] BYREF
  __int128 v23; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+40h] [rbp-48h] BYREF
  __int128 v25; // [rsp+50h] [rbp-38h] BYREF
  int v26; // [rsp+94h] [rbp+Ch]

  v26 = HIDWORD(a1);
  v4 = a2;
  v6 = 0LL;
  DispInfo = GetDispInfo(a1, a2);
  if ( **(_DWORD **)DispInfo == 1 && v4 )
    return *(_QWORD *)(GetDispInfo(v8, v7) + 96);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448)
        || (v8 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL),
            (*(_DWORD *)(v8 + 64) & 1) == 0) )
      {
        CurrentThreadDpiAwarenessContext = 18;
      }
    }
  }
  if ( v4 <= 1 )
  {
    for ( i = *(_QWORD *)(DispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      v8 = *(unsigned int *)(*(_QWORD *)(i + 40) + 24LL);
      if ( (v8 & 1) != 0 )
      {
        v22 = *GetMonitorRectForDpiContext(&v25, i, CurrentThreadDpiAwarenessContext);
        if ( (unsigned int)PtInRect(&v22, a1) )
          return i;
      }
    }
    if ( v4 )
      return *(_QWORD *)(GetDispInfo(v8, v7) + 96);
    return 0LL;
  }
  if ( v4 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(v26 + 0x8000) > 0xFFFF )
  {
    i = *(_QWORD *)(DispInfo + 104);
    v17 = -1LL;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v22 = *GetMonitorRectForDpiContext(&v24, i, CurrentThreadDpiAwarenessContext);
        if ( (int)a1 >= (int)v22 )
          v18 = (int)a1 >= SDWORD2(v22) ? a1 - DWORD2(v22) + 1 : 0;
        else
          v18 = v22 - a1;
        if ( v18 < v17 )
        {
          if ( v26 >= SDWORD1(v22) )
          {
            if ( v26 >= SHIDWORD(v22) )
            {
              v19 = v26 - HIDWORD(v22) + 1;
            }
            else
            {
              if ( !v18 )
                return i;
              v19 = 0;
            }
          }
          else
          {
            v19 = DWORD1(v22) - v26;
          }
          v20 = v18 * (__int64)v18;
          if ( v20 < v17 && v19 + v20 < v17 )
          {
            v21 = v19 * (__int64)v19 + v20;
            if ( v21 < v17 )
            {
              v17 = v21;
              v6 = i;
            }
          }
        }
      }
      i = *(_QWORD *)(i + 56);
    }
  }
  else
  {
    i = *(_QWORD *)(DispInfo + 104);
    v12 = -1;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v22 = *GetMonitorRectForDpiContext(&v23, i, CurrentThreadDpiAwarenessContext);
        if ( (int)a1 >= (int)v22 )
          v13 = (int)a1 >= SDWORD2(v22) ? a1 - DWORD2(v22) + 1 : 0;
        else
          v13 = v22 - a1;
        if ( v13 < v12 )
        {
          if ( v26 >= SDWORD1(v22) )
          {
            if ( v26 >= SHIDWORD(v22) )
            {
              v14 = v26 - HIDWORD(v22) + 1;
            }
            else
            {
              if ( !v13 )
                return i;
              v14 = 0;
            }
          }
          else
          {
            v14 = DWORD1(v22) - v26;
          }
          v15 = v13 * v13;
          if ( v15 < v12 && v15 + v14 < v12 )
          {
            v16 = v14 * v14 + v15;
            if ( v16 < v12 )
            {
              v12 = v16;
              v6 = i;
            }
          }
        }
      }
      i = *(_QWORD *)(i + 56);
    }
  }
  return v6;
}
