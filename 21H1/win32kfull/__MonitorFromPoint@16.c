/*
 * XREFs of __MonitorFromPoint@16 @ 0x25420
 * Callers:
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE (-UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z.c)
 *     _GetDPITransformationMonitor@12 @ 0x1510B9 (_GetDPITransformationMonitor@12.c)
 *     _NtUserCalculatePopupWindowPosition@20 @ 0x15FC6D (_NtUserCalculatePopupWindowPosition@20.c)
 *     _NtUserGetHimetricScaleFactorFromPixelLocation@20 @ 0x162E74 (_NtUserGetHimetricScaleFactorFromPixelLocation@20.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YGXQBU_MOVESIZEDATA@@PAUtagPOINT@@PAPAUtagMONITOR@@PAUtagRECT@@@Z @ 0x170EAA (-ComputeSourceRectAndMonitorWithPrecision@@YGXQBU_MOVESIZEDATA@@PAUtagPOINT@@PAPAUtagMONITOR@@PA.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     ?xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z @ 0x1A0DCF (-xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall _MonitorFromPoint(int a1, int a2, unsigned int a3, int a4)
{
  int DispInfo; // ebx
  int i; // ebx
  _DWORD *MonitorRectForDpiContext; // eax
  int v8; // ecx
  int v9; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v11; // eax
  int v12; // edi
  int v13; // esi
  unsigned int v14; // ebx
  _DWORD *v15; // eax
  int v16; // edx
  unsigned int v17; // ecx
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  _DWORD *v21; // eax
  int v22; // edi
  int v23; // edx
  int v24; // ecx
  int v25; // edi
  __int64 v26; // rax
  int v27; // ecx
  int v28; // [esp+Ch] [ebp-34h]
  unsigned __int64 j; // [esp+Ch] [ebp-34h]
  int v30; // [esp+10h] [ebp-30h]
  int v31; // [esp+14h] [ebp-2Ch]
  int v32; // [esp+14h] [ebp-2Ch]
  _DWORD v33[4]; // [esp+18h] [ebp-28h] BYREF
  _BYTE v34[20]; // [esp+28h] [ebp-18h] BYREF

  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 && a3 )
    return *(_DWORD *)(GetDispInfo() + 52);
  if ( !a4 && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 248) )
    {
      v11 = KeGetCurrentThread();
      W32GetThreadWin32Thread(v11);
    }
  }
  if ( a3 <= 1 )
  {
    for ( i = *(_DWORD *)(DispInfo + 56); i; i = *(_DWORD *)(i + 28) )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(i + 20) + 12) & 1) != 0 )
      {
        MonitorRectForDpiContext = (_DWORD *)GetMonitorRectForDpiContext(v34);
        v33[0] = *MonitorRectForDpiContext;
        v33[1] = MonitorRectForDpiContext[1];
        v8 = MonitorRectForDpiContext[2];
        v9 = MonitorRectForDpiContext[3];
        v33[2] = v8;
        v33[3] = v9;
        if ( PtInRect(a1, a2) )
          return i;
      }
    }
    if ( a3 )
      return *(_DWORD *)(GetDispInfo() + 52);
    return 0;
  }
  if ( a3 != 2 )
    return 0;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(a2 + 0x8000) > 0xFFFF )
  {
    i = *(_DWORD *)(DispInfo + 56);
    v13 = 0;
    for ( j = -1LL; i; i = *(_DWORD *)(i + 28) )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(i + 20) + 12) & 1) != 0 )
      {
        v21 = (_DWORD *)GetMonitorRectForDpiContext(v33);
        v22 = v21[1];
        v23 = v21[2];
        v32 = v21[3];
        if ( a1 >= *v21 )
          v24 = a1 >= v23 ? a1 - v23 + 1 : 0;
        else
          v24 = *v21 - a1;
        if ( v24 < j )
        {
          if ( a2 >= v22 )
          {
            if ( a2 >= v32 )
            {
              v25 = a2 - v32 + 1;
            }
            else
            {
              if ( !v24 )
                return i;
              v25 = 0;
            }
          }
          else
          {
            v25 = v22 - a2;
          }
          v26 = v24 * (__int64)v24;
          v27 = v24 * v24;
          if ( __PAIR64__(HIDWORD(v26), v27) < j
            && __PAIR64__(HIDWORD(v26), v27) + v25 < j
            && v25 * (__int64)v25 + __PAIR64__(HIDWORD(v26), v27) < j )
          {
            j = v25 * (__int64)v25 + __PAIR64__(HIDWORD(v26), v27);
            v13 = i;
          }
        }
      }
    }
  }
  else
  {
    v12 = *(_DWORD *)(DispInfo + 56);
    v13 = 0;
    v31 = v12;
    if ( v12 )
    {
      v14 = -1;
      do
      {
        if ( (*(_BYTE *)(*(_DWORD *)(v12 + 20) + 12) & 1) != 0 )
        {
          v15 = (_DWORD *)GetMonitorRectForDpiContext(v33);
          v16 = v15[1];
          v28 = v15[3];
          v30 = v15[2];
          v12 = v31;
          if ( a1 >= *v15 )
            v17 = a1 >= v30 ? a1 - v30 + 1 : 0;
          else
            v17 = *v15 - a1;
          if ( v17 < v14 )
          {
            if ( a2 >= v16 )
            {
              if ( a2 >= v28 )
              {
                v18 = a2 - v28 + 1;
              }
              else
              {
                if ( !v17 )
                  return v31;
                v18 = 0;
              }
            }
            else
            {
              v18 = v16 - a2;
            }
            v19 = v17 * v17;
            if ( v19 < v14 && v19 + v18 < v14 )
            {
              v20 = v18 * v18 + v19;
              if ( v20 < v14 )
              {
                v14 = v20;
                v13 = v31;
              }
            }
          }
        }
        v12 = *(_DWORD *)(v12 + 28);
        v31 = v12;
      }
      while ( v12 );
    }
  }
  return v13;
}
