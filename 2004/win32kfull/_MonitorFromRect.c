/*
 * XREFs of _MonitorFromRect @ 0x1C0024B70
 * Callers:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0024A64 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     CkptUpdate @ 0x1C00257AC (CkptUpdate.c)
 *     _GetWindowPlacement @ 0x1C00278AC (_GetWindowPlacement.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     GetNewMonitor @ 0x1C006A920 (GetNewMonitor.c)
 *     xxxCheckFullScreen @ 0x1C008E698 (xxxCheckFullScreen.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxSetWindowPlacement @ 0x1C0110D38 (xxxSetWindowPlacement.c)
 *     CitGetWindowInfo @ 0x1C01112C0 (CitGetWindowInfo.c)
 *     CreateSpb @ 0x1C0153C30 (CreateSpb.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01D079C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     DetectNewMonitor @ 0x1C01E5624 (DetectNewMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E7568 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C0209D60 (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020E280 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236D04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     GetScreenRectForDpiContext @ 0x1C0023174 (GetScreenRectForDpiContext.c)
 *     GetMonitorRectForDpiContext @ 0x1C0023470 (GetMonitorRectForDpiContext.c)
 *     _MonitorFromPoint @ 0x1C0025880 (_MonitorFromPoint.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0068010 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(struct tagRECT *a1, __int64 a2, unsigned int CurrentThreadDpiAwarenessContext)
{
  unsigned int v4; // esi
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DispInfo; // r12
  __m128i *ScreenRectForDpiContext; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // r14d
  unsigned int v16; // esi
  __int64 v17; // rdi
  unsigned int v18; // esi
  __int128 v19; // xmm0
  LONG right; // eax
  int v21; // ecx
  unsigned int v22; // ecx
  LONG bottom; // eax
  int v24; // edx
  LONG top; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  __int64 v28; // rdi
  unsigned __int64 v29; // rsi
  __int128 *MonitorRectForDpiContext; // rax
  LONG v31; // ecx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rcx
  LONG v35; // eax
  int v36; // edx
  LONG v37; // eax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int128 v40; // [rsp+20h] [rbp-59h] BYREF
  __m128i v41; // [rsp+30h] [rbp-49h]
  __m128i v42; // [rsp+40h] [rbp-39h] BYREF
  __int128 v43; // [rsp+50h] [rbp-29h] BYREF
  __int128 v44; // [rsp+60h] [rbp-19h] BYREF
  __int128 v45; // [rsp+70h] [rbp-9h] BYREF
  __int128 v46; // [rsp+80h] [rbp+7h] BYREF

  v46 = 0LL;
  v4 = a2;
  v6 = 0LL;
  DispInfo = GetDispInfo(a1, a2);
  if ( **(_DWORD **)DispInfo == 1 && v4 )
    return *(_QWORD *)(GetDispInfo(v8, v7) + 96);
  if ( (unsigned int)IsRectEmptyInl(a1) )
    return MonitorFromPoint(*(_QWORD *)&a1->left, v4, CurrentThreadDpiAwarenessContext);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
      && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) == 0) )
    {
      CurrentThreadDpiAwarenessContext = 18;
    }
  }
  ScreenRectForDpiContext = GetScreenRectForDpiContext(&v42, CurrentThreadDpiAwarenessContext);
  v12 = *ScreenRectForDpiContext;
  v13 = ScreenRectForDpiContext->m128i_i64[0];
  v41 = v12;
  if ( a1->left <= (int)v13
    && a1->top <= SHIDWORD(v13)
    && a1->right >= v41.m128i_i32[2]
    && a1->bottom >= v41.m128i_i32[3] )
  {
    return *(_QWORD *)(GetDispInfo(v8, v7) + 96);
  }
  v14 = *(_QWORD *)(DispInfo + 104);
  v15 = 0;
  if ( v14 )
  {
    do
    {
      v8 = *(unsigned int *)(*(_QWORD *)(v14 + 40) + 24LL);
      if ( (v8 & 1) != 0 )
      {
        v40 = *GetMonitorRectForDpiContext(&v43, v14, CurrentThreadDpiAwarenessContext);
        if ( (unsigned int)IntersectRect(&v46, a1, &v40) )
        {
          v8 = v46 - *(_QWORD *)&a1->left;
          if ( (_QWORD)v46 == *(_QWORD *)&a1->left )
            v8 = *((_QWORD *)&v46 + 1) - *(_QWORD *)&a1->right;
          if ( !v8 )
            return v14;
          v7 = (unsigned int)(DWORD2(v46) - v46);
          if ( (int)v7 * (HIDWORD(v46) - DWORD1(v46)) > v15 )
          {
            v15 = v7 * (HIDWORD(v46) - DWORD1(v46));
            v6 = v14;
          }
        }
      }
      v14 = *(_QWORD *)(v14 + 56);
    }
    while ( v14 );
    if ( v15 > 0 )
      return v6;
  }
  if ( v4 )
  {
    v16 = v4 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
        return 0LL;
      if ( (unsigned int)(a1->left + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->top + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->right + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->bottom + 0x8000) <= 0xFFFF )
      {
        v17 = *(_QWORD *)(DispInfo + 104);
        v18 = -1;
        while ( 1 )
        {
          if ( !v17 )
            return v6;
          if ( (*(_DWORD *)(*(_QWORD *)(v17 + 40) + 24LL) & 1) != 0 )
            break;
LABEL_54:
          v17 = *(_QWORD *)(v17 + 56);
        }
        v19 = *GetMonitorRectForDpiContext(&v44, v17, CurrentThreadDpiAwarenessContext);
        right = a1->right;
        v40 = v19;
        if ( right > (int)v19 )
        {
          if ( a1->left < SDWORD2(v19) )
          {
            v22 = 0;
            goto LABEL_44;
          }
          v21 = a1->left - DWORD2(v19);
        }
        else
        {
          v21 = v19 - right;
        }
        v22 = v21 + 1;
LABEL_44:
        if ( v22 < v18 )
        {
          bottom = a1->bottom;
          if ( bottom > SDWORD1(v19) )
          {
            top = a1->top;
            if ( top >= SHIDWORD(v19) )
              v24 = top - HIDWORD(v19) + 1;
            else
              v24 = 0;
          }
          else
          {
            v24 = DWORD1(v19) - bottom + 1;
          }
          v26 = v22 * v22;
          if ( v26 < v18 && v26 + v24 < v18 )
          {
            v27 = v24 * v24 + v26;
            if ( v27 < v18 )
            {
              v18 = v27;
              v6 = v17;
            }
          }
        }
        goto LABEL_54;
      }
      v28 = *(_QWORD *)(DispInfo + 104);
      v29 = -1LL;
      while ( 1 )
      {
        if ( !v28 )
          return v6;
        if ( (*(_DWORD *)(*(_QWORD *)(v28 + 40) + 24LL) & 1) != 0 )
          break;
LABEL_75:
        v28 = *(_QWORD *)(v28 + 56);
      }
      MonitorRectForDpiContext = GetMonitorRectForDpiContext(&v45, v28, CurrentThreadDpiAwarenessContext);
      v31 = a1->right;
      v40 = *MonitorRectForDpiContext;
      if ( v31 > (int)v40 )
      {
        if ( a1->left < SDWORD2(v40) )
        {
          v33 = 0;
LABEL_65:
          v34 = v33;
          if ( v33 < v29 )
          {
            v35 = a1->bottom;
            if ( v35 > SDWORD1(v40) )
            {
              v37 = a1->top;
              v36 = v37 >= SHIDWORD(v40) ? v37 - HIDWORD(v40) + 1 : 0;
            }
            else
            {
              v36 = DWORD1(v40) - v35 + 1;
            }
            v38 = v34 * v34;
            if ( v38 < v29 && v36 + v38 < v29 )
            {
              v39 = v36 * (__int64)v36 + v38;
              if ( v39 < v29 )
              {
                v29 = v39;
                v6 = v28;
              }
            }
          }
          goto LABEL_75;
        }
        v32 = a1->left - DWORD2(v40);
      }
      else
      {
        v32 = v40 - v31;
      }
      v33 = v32 + 1;
      goto LABEL_65;
    }
    return *(_QWORD *)(GetDispInfo(v8, v7) + 96);
  }
  return 0LL;
}
