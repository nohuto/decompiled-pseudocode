/*
 * XREFs of __MonitorFromRect@12 @ 0x336E0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 *     _CitGetWindowInfo@8 @ 0xA7234 (_CitGetWindowInfo@8.c)
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     _CkptUpdate@12 @ 0xB48F4 (_CkptUpdate@12.c)
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z @ 0x13F619 (-ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z.c)
 *     _DetectNewMonitor@8 @ 0x150BE3 (_DetectNewMonitor@8.c)
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 *     _xxxSetInternalWindowPos@16 @ 0x16F556 (_xxxSetInternalWindowPos@16.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 * Callees:
 *     __MonitorFromPoint@16 @ 0x25420 (__MonitorFromPoint@16.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _GetScreenRectForDpiContext@4 @ 0x338A8 (_GetScreenRectForDpiContext@4.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall _MonitorFromRect(int *a1, int a2, int a3)
{
  unsigned int v3; // edx
  INT *ScreenRectForDpiContext; // esi
  int v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // ecx
  INT *MonitorRectForDpiContext; // eax
  int result; // eax
  int v11; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v13; // eax
  int i; // ecx
  INT *v15; // esi
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  int v25; // ecx
  INT *v26; // esi
  int v27; // eax
  int v28; // esi
  int v29; // esi
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rax
  int v35; // esi
  unsigned __int64 v36; // kr08_8
  int v37; // [esp+10h] [ebp-50h]
  int v38; // [esp+10h] [ebp-50h]
  int v39; // [esp+10h] [ebp-50h]
  int v40; // [esp+14h] [ebp-4Ch]
  unsigned int v41; // [esp+14h] [ebp-4Ch]
  int v42; // [esp+14h] [ebp-4Ch]
  int v43; // [esp+18h] [ebp-48h]
  int DispInfo; // [esp+1Ch] [ebp-44h]
  int v45; // [esp+1Ch] [ebp-44h]
  unsigned int CurrentThreadDpiAwarenessContext; // [esp+20h] [ebp-40h]
  INT v47; // [esp+24h] [ebp-3Ch] BYREF
  int v48; // [esp+28h] [ebp-38h]
  INT v49; // [esp+2Ch] [ebp-34h]
  int v50; // [esp+30h] [ebp-30h]
  unsigned int v51; // [esp+34h] [ebp-2Ch]
  INT v52[5]; // [esp+38h] [ebp-28h] BYREF
  int v53; // [esp+4Ch] [ebp-14h] BYREF
  int v54; // [esp+50h] [ebp-10h]
  int v55; // [esp+54h] [ebp-Ch]
  int v56; // [esp+58h] [ebp-8h]

  v43 = 0;
  CurrentThreadDpiAwarenessContext = a3;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo != 1 || !a2 )
  {
    if ( ERECTL::bWrapped((ERECTL *)a1) )
      return _MonitorFromPoint(*a1, a1[1], v3, a3);
    if ( !a3 )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 248)
          || (v13 = KeGetCurrentThread(),
              (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v13) + 248) + 4) + 32) & 1) == 0) )
        {
          CurrentThreadDpiAwarenessContext = 18;
        }
      }
    }
    ScreenRectForDpiContext = (INT *)GetScreenRectForDpiContext(v52);
    v5 = *a1;
    v47 = *ScreenRectForDpiContext++;
    v48 = *ScreenRectForDpiContext++;
    v49 = *ScreenRectForDpiContext;
    v50 = ScreenRectForDpiContext[1];
    if ( v5 <= v47 && a1[1] <= v48 && a1[2] >= v49 && a1[3] >= v50 )
    {
LABEL_24:
      v11 = GetDispInfo();
      return *(_DWORD *)(v11 + 52);
    }
    v6 = DispInfo;
    v7 = 0;
    v40 = 0;
    v8 = *(_DWORD *)(DispInfo + 56);
    v37 = v8;
    if ( !v8 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(v8 + 20) + 12) & 1) == 0 )
        goto LABEL_27;
      MonitorRectForDpiContext = GetMonitorRectForDpiContext(v8, CurrentThreadDpiAwarenessContext, v52);
      v47 = *MonitorRectForDpiContext;
      v48 = MonitorRectForDpiContext[1];
      v49 = MonitorRectForDpiContext[2];
      v50 = MonitorRectForDpiContext[3];
      if ( !IntersectRect(&v47) )
        break;
      if ( EqualRectInl(&v53, a1) )
        return v37;
      v7 = v40;
      if ( (v55 - v53) * (v56 - v54) <= v40 )
        goto LABEL_26;
      v7 = (v55 - v53) * (v56 - v54);
      v8 = v37;
      result = v37;
      v40 = v7;
      v43 = v37;
LABEL_12:
      v8 = *(_DWORD *)(v8 + 28);
      v37 = v8;
      if ( !v8 )
      {
        if ( v7 > 0 )
          return result;
        v6 = DispInfo;
LABEL_15:
        if ( !a2 )
          return 0;
        if ( a2 == 1 )
          goto LABEL_24;
        if ( a2 != 2 )
          return 0;
        if ( (unsigned int)(*a1 + 0x8000) <= 0xFFFF
          && (unsigned int)(a1[1] + 0x8000) <= 0xFFFF
          && (unsigned int)(a1[2] + 0x8000) <= 0xFFFF
          && (unsigned int)(a1[3] + 0x8000) <= 0xFFFF )
        {
          v41 = -1;
          for ( i = *(_DWORD *)(DispInfo + 56); ; i = *(_DWORD *)(i + 28) )
          {
            v38 = i;
            if ( !i )
              return v43;
            if ( (*(_BYTE *)(*(_DWORD *)(i + 20) + 12) & 1) != 0 )
              break;
LABEL_59:
            ;
          }
          v15 = GetMonitorRectForDpiContext(i, CurrentThreadDpiAwarenessContext, v52);
          v16 = a1[2];
          v47 = *v15++;
          v48 = *v15++;
          v49 = *v15;
          v50 = v15[1];
          if ( v16 <= v47 )
          {
            v17 = v47 - v16;
            goto LABEL_46;
          }
          if ( *a1 >= v49 )
          {
            v17 = *a1 - v49;
LABEL_46:
            v18 = v17 + 1;
          }
          else
          {
            v18 = 0;
          }
          if ( v18 < v41 )
          {
            v19 = a1[3];
            if ( v19 <= v48 )
            {
              v20 = v48 - v19;
              goto LABEL_53;
            }
            v21 = a1[1];
            if ( v21 >= v50 )
            {
              v20 = v21 - v50;
LABEL_53:
              v22 = v20 + 1;
            }
            else
            {
              v22 = 0;
            }
            v23 = v18 * v18;
            if ( v23 < v41 && v23 + v22 < v41 )
            {
              v24 = v22 * v22 + v23;
              if ( v24 < v41 )
              {
                v41 = v24;
                i = v38;
                v43 = v38;
                goto LABEL_59;
              }
            }
          }
          i = v38;
          goto LABEL_59;
        }
        v25 = *(_DWORD *)(v6 + 56);
        v45 = -1;
        v42 = -1;
        while ( 2 )
        {
          v39 = v25;
          if ( !v25 )
            return v43;
          if ( (*(_BYTE *)(*(_DWORD *)(v25 + 20) + 12) & 1) != 0 )
          {
            v26 = GetMonitorRectForDpiContext(v25, CurrentThreadDpiAwarenessContext, v52);
            v27 = a1[2];
            v47 = *v26++;
            v48 = *v26++;
            v49 = *v26;
            v50 = v26[1];
            if ( v27 <= v47 )
            {
              v28 = v47 - v27;
              goto LABEL_69;
            }
            if ( *a1 >= v49 )
            {
              v28 = *a1 - v49;
LABEL_69:
              v29 = v28 + 1;
            }
            else
            {
              v29 = 0;
            }
            if ( v29 >= __PAIR64__(v42, v45) )
              goto LABEL_81;
            v30 = a1[3];
            if ( v30 <= v48 )
            {
              v31 = v48 - v30;
              goto LABEL_76;
            }
            v32 = a1[1];
            if ( v32 >= v50 )
            {
              v31 = v32 - v50;
LABEL_76:
              v33 = v31 + 1;
            }
            else
            {
              v33 = 0;
            }
            v34 = v29 * (__int64)v29;
            v35 = v29 * v29;
            v51 = HIDWORD(v34);
            if ( __PAIR64__(HIDWORD(v34), v35) >= __PAIR64__(v42, v45)
              || __PAIR64__(v51, v35) + v33 >= __PAIR64__(v42, v45)
              || (v36 = v33 * (__int64)v33 + __PAIR64__(v51, v35), v36 >= __PAIR64__(v42, v45)) )
            {
LABEL_81:
              v25 = v39;
            }
            else
            {
              v25 = v39;
              v42 = HIDWORD(v36);
              v45 = v36;
              v43 = v39;
            }
          }
          v25 = *(_DWORD *)(v25 + 28);
          continue;
        }
      }
    }
    v7 = v40;
LABEL_26:
    v8 = v37;
LABEL_27:
    result = v43;
    goto LABEL_12;
  }
  v11 = GetDispInfo();
  return *(_DWORD *)(v11 + 52);
}
