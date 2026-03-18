/*
 * XREFs of _MonitorFromPoint @ 0x1C003C200
 * Callers:
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00C0A48 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     GetDPITransformationMonitor @ 0x1C01E4F00 (GetDPITransformationMonitor.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C01F6A50 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01F98F0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C020A710 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     xxxInitializeMoveSizeData @ 0x1C02119DC (xxxInitializeMoveSizeData.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C024288C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C003DDC8 (GetMonitorRectForDpiContext.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // r14d
  unsigned int v5; // esi
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DispInfo; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rdi
  unsigned int v15; // ebp
  unsigned int v16; // ecx
  int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rbp
  int v21; // eax
  int v22; // edx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int128 v25; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v26[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v27[16]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-38h] BYREF
  int v29; // [rsp+94h] [rbp+Ch]

  v29 = HIDWORD(a1);
  CurrentThreadDpiAwarenessContext = a3;
  v5 = a2;
  v7 = 0LL;
  DispInfo = GetDispInfo(a1, a2, a3, a4);
  if ( **(_DWORD **)DispInfo == 1 && v5 )
    return *(_QWORD *)(GetDispInfo(v9, v8, v11, v12) + 96);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v9, v8, v11, v12);
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456)
        || (v9 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL),
            (*(_DWORD *)(v9 + 64) & 1) == 0) )
      {
        CurrentThreadDpiAwarenessContext = 18;
      }
    }
  }
  if ( v5 <= 1 )
  {
    for ( i = *(_QWORD *)(DispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      v9 = *(unsigned int *)(*(_QWORD *)(i + 40) + 24LL);
      if ( (v9 & 1) != 0 )
      {
        v25 = *(_OWORD *)GetMonitorRectForDpiContext(v28, i, CurrentThreadDpiAwarenessContext);
        if ( (unsigned int)PtInRect(&v25, a1) )
          return i;
      }
    }
    if ( v5 )
      return *(_QWORD *)(GetDispInfo(v9, v8, v11, v12) + 96);
    return 0LL;
  }
  if ( v5 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(v29 + 0x8000) > 0xFFFF )
  {
    i = *(_QWORD *)(DispInfo + 104);
    v20 = -1LL;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v25 = *(_OWORD *)GetMonitorRectForDpiContext(v27, i, CurrentThreadDpiAwarenessContext);
        if ( (int)a1 >= (int)v25 )
          v21 = (int)a1 >= SDWORD2(v25) ? a1 - DWORD2(v25) + 1 : 0;
        else
          v21 = v25 - a1;
        if ( v21 < v20 )
        {
          if ( v29 >= SDWORD1(v25) )
          {
            if ( v29 >= SHIDWORD(v25) )
            {
              v22 = v29 - HIDWORD(v25) + 1;
            }
            else
            {
              if ( !v21 )
                return i;
              v22 = 0;
            }
          }
          else
          {
            v22 = DWORD1(v25) - v29;
          }
          v23 = v21 * (__int64)v21;
          if ( v23 < v20 && v22 + v23 < v20 )
          {
            v24 = v22 * (__int64)v22 + v23;
            if ( v24 < v20 )
            {
              v20 = v24;
              v7 = i;
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
    v15 = -1;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v25 = *(_OWORD *)GetMonitorRectForDpiContext(v26, i, CurrentThreadDpiAwarenessContext);
        if ( (int)a1 >= (int)v25 )
          v16 = (int)a1 >= SDWORD2(v25) ? a1 - DWORD2(v25) + 1 : 0;
        else
          v16 = v25 - a1;
        if ( v16 < v15 )
        {
          if ( v29 >= SDWORD1(v25) )
          {
            if ( v29 >= SHIDWORD(v25) )
            {
              v17 = v29 - HIDWORD(v25) + 1;
            }
            else
            {
              if ( !v16 )
                return i;
              v17 = 0;
            }
          }
          else
          {
            v17 = DWORD1(v25) - v29;
          }
          v18 = v16 * v16;
          if ( v18 < v15 && v18 + v17 < v15 )
          {
            v19 = v17 * v17 + v18;
            if ( v19 < v15 )
            {
              v15 = v19;
              v7 = i;
            }
          }
        }
      }
      i = *(_QWORD *)(i + 56);
    }
  }
  return v7;
}
