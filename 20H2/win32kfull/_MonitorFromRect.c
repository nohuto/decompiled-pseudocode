/*
 * XREFs of _MonitorFromRect @ 0x1C00C9880
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     _GetWindowPlacement @ 0x1C003A648 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C003AA98 (CkptUpdate.c)
 *     GetNewMonitor @ 0x1C004A5B0 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00C9768 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     xxxCheckFullScreen @ 0x1C00D3A38 (xxxCheckFullScreen.c)
 *     xxxSetWindowPlacement @ 0x1C0112068 (xxxSetWindowPlacement.c)
 *     CitGetWindowInfo @ 0x1C01125F0 (CitGetWindowInfo.c)
 *     CreateSpb @ 0x1C0156560 (CreateSpb.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01CF98C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     DetectNewMonitor @ 0x1C01E4964 (DetectNewMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E68A8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C0208ED8 (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D400 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235E74 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C003C200 (_MonitorFromPoint.c)
 *     GetScreenRectForDpiContext @ 0x1C003DB40 (GetScreenRectForDpiContext.c)
 *     GetMonitorRectForDpiContext @ 0x1C003DDC8 (GetMonitorRectForDpiContext.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(struct tagRECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // r15d
  unsigned int v5; // esi
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 DispInfo; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i *ScreenRectForDpiContext; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // r14d
  unsigned int v22; // esi
  __int64 v23; // rdi
  unsigned int v24; // esi
  __int128 v25; // xmm0
  LONG right; // eax
  int v27; // ecx
  unsigned int v28; // ecx
  LONG bottom; // eax
  int v30; // edx
  LONG top; // eax
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  __int128 *MonitorRectForDpiContext; // rax
  LONG v37; // ecx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  LONG v41; // eax
  int v42; // edx
  LONG v43; // eax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  __int128 v46; // [rsp+20h] [rbp-59h] BYREF
  __m128i v47; // [rsp+30h] [rbp-49h]
  __m128i v48; // [rsp+40h] [rbp-39h] BYREF
  __int128 v49; // [rsp+50h] [rbp-29h] BYREF
  __int128 v50; // [rsp+60h] [rbp-19h] BYREF
  __int128 v51; // [rsp+70h] [rbp-9h] BYREF
  __int128 v52; // [rsp+80h] [rbp+7h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  v52 = 0LL;
  v5 = a2;
  v7 = 0LL;
  DispInfo = GetDispInfo(a1, a2, a3, a4);
  if ( **(_DWORD **)DispInfo == 1 && v5 )
    return *(_QWORD *)(GetDispInfo(v9, v8, v10, v11) + 96);
  if ( (unsigned int)IsRectEmptyInl(a1) )
    return MonitorFromPoint(*(_QWORD *)&a1->left, v5, CurrentThreadDpiAwarenessContext, v16);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v14);
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                     + 64LL) & 1) == 0) )
    {
      CurrentThreadDpiAwarenessContext = 18;
    }
  }
  ScreenRectForDpiContext = GetScreenRectForDpiContext(&v48, CurrentThreadDpiAwarenessContext, v15, v16);
  v18 = *ScreenRectForDpiContext;
  v19 = ScreenRectForDpiContext->m128i_i64[0];
  v47 = v18;
  if ( a1->left <= (int)v19
    && a1->top <= SHIDWORD(v19)
    && a1->right >= v47.m128i_i32[2]
    && a1->bottom >= v47.m128i_i32[3] )
  {
    return *(_QWORD *)(GetDispInfo(v9, v8, v10, v11) + 96);
  }
  v20 = *(_QWORD *)(DispInfo + 104);
  v21 = 0;
  if ( v20 )
  {
    do
    {
      v9 = *(unsigned int *)(*(_QWORD *)(v20 + 40) + 24LL);
      if ( (v9 & 1) != 0 )
      {
        v46 = *GetMonitorRectForDpiContext(&v49, v20, CurrentThreadDpiAwarenessContext);
        if ( (unsigned int)IntersectRect(&v52, &a1->left, (int *)&v46) )
        {
          v9 = v52 - *(_QWORD *)&a1->left;
          if ( (_QWORD)v52 == *(_QWORD *)&a1->left )
            v9 = *((_QWORD *)&v52 + 1) - *(_QWORD *)&a1->right;
          if ( !v9 )
            return v20;
          v8 = (unsigned int)(DWORD2(v52) - v52);
          if ( (int)v8 * (HIDWORD(v52) - DWORD1(v52)) > v21 )
          {
            v21 = v8 * (HIDWORD(v52) - DWORD1(v52));
            v7 = v20;
          }
        }
      }
      v20 = *(_QWORD *)(v20 + 56);
    }
    while ( v20 );
    if ( v21 > 0 )
      return v7;
  }
  if ( v5 )
  {
    v22 = v5 - 1;
    if ( v22 )
    {
      if ( v22 != 1 )
        return 0LL;
      if ( (unsigned int)(a1->left + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->top + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->right + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->bottom + 0x8000) <= 0xFFFF )
      {
        v23 = *(_QWORD *)(DispInfo + 104);
        v24 = -1;
        while ( 1 )
        {
          if ( !v23 )
            return v7;
          if ( (*(_DWORD *)(*(_QWORD *)(v23 + 40) + 24LL) & 1) != 0 )
            break;
LABEL_54:
          v23 = *(_QWORD *)(v23 + 56);
        }
        v25 = *GetMonitorRectForDpiContext(&v50, v23, CurrentThreadDpiAwarenessContext);
        right = a1->right;
        v46 = v25;
        if ( right > (int)v25 )
        {
          if ( a1->left < SDWORD2(v25) )
          {
            v28 = 0;
            goto LABEL_44;
          }
          v27 = a1->left - DWORD2(v25);
        }
        else
        {
          v27 = v25 - right;
        }
        v28 = v27 + 1;
LABEL_44:
        if ( v28 < v24 )
        {
          bottom = a1->bottom;
          if ( bottom > SDWORD1(v25) )
          {
            top = a1->top;
            if ( top >= SHIDWORD(v25) )
              v30 = top - HIDWORD(v25) + 1;
            else
              v30 = 0;
          }
          else
          {
            v30 = DWORD1(v25) - bottom + 1;
          }
          v32 = v28 * v28;
          if ( v32 < v24 && v32 + v30 < v24 )
          {
            v33 = v30 * v30 + v32;
            if ( v33 < v24 )
            {
              v24 = v33;
              v7 = v23;
            }
          }
        }
        goto LABEL_54;
      }
      v34 = *(_QWORD *)(DispInfo + 104);
      v35 = -1LL;
      while ( 1 )
      {
        if ( !v34 )
          return v7;
        if ( (*(_DWORD *)(*(_QWORD *)(v34 + 40) + 24LL) & 1) != 0 )
          break;
LABEL_75:
        v34 = *(_QWORD *)(v34 + 56);
      }
      MonitorRectForDpiContext = GetMonitorRectForDpiContext(&v51, v34, CurrentThreadDpiAwarenessContext);
      v37 = a1->right;
      v46 = *MonitorRectForDpiContext;
      if ( v37 > (int)v46 )
      {
        if ( a1->left < SDWORD2(v46) )
        {
          v39 = 0;
LABEL_65:
          v40 = v39;
          if ( v39 < v35 )
          {
            v41 = a1->bottom;
            if ( v41 > SDWORD1(v46) )
            {
              v43 = a1->top;
              v42 = v43 >= SHIDWORD(v46) ? v43 - HIDWORD(v46) + 1 : 0;
            }
            else
            {
              v42 = DWORD1(v46) - v41 + 1;
            }
            v44 = v40 * v40;
            if ( v44 < v35 && v42 + v44 < v35 )
            {
              v45 = v42 * (__int64)v42 + v44;
              if ( v45 < v35 )
              {
                v35 = v45;
                v7 = v34;
              }
            }
          }
          goto LABEL_75;
        }
        v38 = a1->left - DWORD2(v46);
      }
      else
      {
        v38 = v46 - v37;
      }
      v39 = v38 + 1;
      goto LABEL_65;
    }
    return *(_QWORD *)(GetDispInfo(v9, v8, v10, v11) + 96);
  }
  return 0LL;
}
