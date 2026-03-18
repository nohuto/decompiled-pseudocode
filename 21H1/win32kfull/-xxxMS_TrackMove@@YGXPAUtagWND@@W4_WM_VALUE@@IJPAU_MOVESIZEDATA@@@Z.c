/*
 * XREFs of ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748
 * Callers:
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 * Callees:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _WindowRedirectionBitmapMatchesMonitorAdapter@4 @ 0x2026A (_WindowRedirectionBitmapMatchesMonitorAdapter@4.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     __GetMessagePos@0 @ 0xA9662 (__GetMessagePos@0.c)
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     _SetMinimize@8 @ 0xB4ABE (_SetMinimize@8.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _TransformRegionBetweenCoordinateSpaces@12 @ 0x151BB7 (_TransformRegionBetweenCoordinateSpaces@12.c)
 *     ?IsSizingBOTTOM@@YGEH@Z @ 0x171927 (-IsSizingBOTTOM@@YGEH@Z.c)
 *     ?IsSizingLEFT@@YGEH@Z @ 0x17193C (-IsSizingLEFT@@YGEH@Z.c)
 *     ?IsSizingRIGHT@@YGEH@Z @ 0x171950 (-IsSizingRIGHT@@YGEH@Z.c)
 *     ?IsSizingTOP@@YGEH@Z @ 0x171965 (-IsSizingTOP@@YGEH@Z.c)
 *     ?MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z @ 0x1719C0 (-MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z.c)
 *     ?TraceWindowResizeTelemetry@@YGXPAUtagWND@@@Z @ 0x172453 (-TraceWindowResizeTelemetry@@YGXPAUtagWND@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YGXPAU_MOVESIZEDATA@@@Z @ 0x172671 (-UpdateMoveSizeDataForCancelation@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 *     _xxxDrawDragRect@12 @ 0x176759 (_xxxDrawDragRect@12.c)
 *     _TransformVector@20 @ 0x17BC83 (_TransformVector@20.c)
 *     ?WindowArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1857A0 (-WindowArrangementAllowed@@YG_NPAUtagWND@@@Z.c)
 */

void __fastcall xxxMS_TrackMove(struct tagHOOK **a1, int a2, int a3, int a4, int a5)
{
  struct tagHOOK **v5; // esi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  BOOL v10; // ecx
  bool v11; // zf
  INT v12; // eax
  INT DpiForSystem; // eax
  int v14; // eax
  int v15; // eax
  INT v16; // eax
  INT v17; // eax
  int v18; // eax
  int MessagePos; // edi
  int v20; // edx
  __int16 v21; // ax
  int v22; // ecx
  __int16 v23; // ax
  struct tagHOOK *v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  struct tagHOOK **v29; // eax
  int v30; // esi
  int v31; // eax
  int v32; // ecx
  struct tagPOINT *v33; // edx
  int CurrentThreadDpiAwarenessContext; // eax
  struct tagPOINT *v35; // ecx
  int y; // edx
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  struct tagHOOK *v40; // edi
  int v41; // edi
  int v42; // eax
  char v43; // cl
  char v44; // al
  _DWORD *v45; // edx
  struct tagHOOK *v46; // eax
  _DWORD *v47; // edi
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  _DWORD *v52; // eax
  int v53; // eax
  int v54; // eax
  bool v55; // al
  char v56; // cl
  INT v57; // eax
  int DpiDependentMetric; // ecx
  INT v59; // eax
  void *v60; // edi
  _DWORD *v61; // edx
  _DWORD *v62; // eax
  int v63; // eax
  unsigned int v64; // edi
  int v65; // ecx
  int *v66; // eax
  int v67; // ecx
  int *v68; // eax
  int *v69; // eax
  int v70; // eax
  struct tagHOOK *v71; // ecx
  int *MonitorRect; // eax
  int v73; // ecx
  int v74; // eax
  int *MonitorWorkRect; // eax
  int v76; // ecx
  int v77; // eax
  void *v78; // ecx
  void *v79; // ecx
  void *v80; // ecx
  struct _MOVESIZEDATA *v81; // [esp+0h] [ebp-7Ch]
  struct tagWND *v82; // [esp+0h] [ebp-7Ch]
  int v83; // [esp+4h] [ebp-78h]
  _DWORD v84[4]; // [esp+10h] [ebp-6Ch] BYREF
  int v85; // [esp+20h] [ebp-5Ch] BYREF
  int v86; // [esp+24h] [ebp-58h]
  int v87; // [esp+28h] [ebp-54h]
  int v88; // [esp+2Ch] [ebp-50h] BYREF
  int v89; // [esp+30h] [ebp-4Ch]
  int v90; // [esp+34h] [ebp-48h] BYREF
  int v91; // [esp+38h] [ebp-44h]
  struct tagHOOK **v92; // [esp+3Ch] [ebp-40h] BYREF
  _DWORD *i; // [esp+40h] [ebp-3Ch] BYREF
  int v94; // [esp+44h] [ebp-38h] BYREF
  int v95; // [esp+48h] [ebp-34h]
  int v96; // [esp+4Ch] [ebp-30h]
  int v97; // [esp+50h] [ebp-2Ch] BYREF
  int v98; // [esp+54h] [ebp-28h]
  int v99; // [esp+58h] [ebp-24h]
  int v100; // [esp+5Ch] [ebp-20h]
  int v101; // [esp+60h] [ebp-1Ch] BYREF
  int v102; // [esp+64h] [ebp-18h]
  struct tagPOINT *v103; // [esp+68h] [ebp-14h] BYREF
  int v104; // [esp+6Ch] [ebp-10h]

  v5 = a1;
  v94 = _gptiCurrent;
  v92 = a1;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v85 = (__int16)a4;
  v86 = SHIWORD(a4);
  v6 = a2 - 256;
  if ( v6 )
  {
    v7 = v6 - 4;
    if ( v7 )
    {
      v8 = v7 - 252;
      if ( v8 )
      {
        if ( v8 != 2 )
          return;
        xxxTM_MoveDragRect(v81, v83);
        v9 = *(_DWORD *)(a5 + 184);
        if ( (v9 & 0x2000000) != 0 )
        {
          *(_DWORD *)(a5 + 28) = *(_DWORD *)(a5 + 60);
          *(_DWORD *)(a5 + 32) = *(_DWORD *)(a5 + 64);
          *(_DWORD *)(a5 + 36) = *(_DWORD *)(a5 + 68);
          *(_DWORD *)(a5 + 40) = *(_DWORD *)(a5 + 72);
          *(_DWORD *)(a5 + 12) = *(_DWORD *)(a5 + 44);
          *(_DWORD *)(a5 + 16) = *(_DWORD *)(a5 + 48);
          *(_DWORD *)(a5 + 20) = *(_DWORD *)(a5 + 52);
          *(_DWORD *)(a5 + 24) = *(_DWORD *)(a5 + 56);
          v5 = v92;
        }
        *(_DWORD *)(a5 + 184) = v9 & 0xFFFFFFFD;
        goto LABEL_66;
      }
LABEL_8:
      xxxTM_MoveDragRect(v81, v83);
      return;
    }
  }
  v95 = 0;
  v96 = 0;
  v10 = (_GetKeyState(17) & 0x8000u) != 0;
  if ( a3 == 13 )
  {
    _GetMessagePos();
LABEL_66:
    bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
    v37 = *(_DWORD *)(v94 + 264);
    if ( (v37 & 0x10) != 0 )
    {
      v38 = *(_DWORD *)(a5 + 184);
      if ( (v38 & 0x800) == 0 || (*((_BYTE *)v5[5] + 23) & 1) == 0 || (v38 & 0x20) == 0 )
      {
        xxxDrawDragRect(((v38 & 0xFE000000) << 6) | 1);
        v37 = *(_DWORD *)(v94 + 264);
      }
      *(_DWORD *)(v94 + 264) = v37 & 0xFFFFFFEF;
    }
    goto LABEL_72;
  }
  if ( a3 != 27 )
  {
    if ( a3 != 37 )
    {
      if ( a3 == 38 )
      {
LABEL_15:
        if ( !*(_DWORD *)(a5 + 172) )
        {
          v11 = *(_DWORD *)(a5 + 168) == 0;
          *(_DWORD *)(a5 + 172) = dword_25139C[a3];
LABEL_25:
          if ( !v11 )
          {
            v15 = *(_DWORD *)(a5 + 184);
            *(_DWORD *)(a5 + 248) &= ~2u;
            *(_DWORD *)(a5 + 208) = 4;
            *(_DWORD *)(a5 + 184) = v15 & 0xFFFFF8FF;
            MakeArrangedStateObservable((int *)a5);
          }
          *(_DWORD *)(a5 + 160) = 0;
          *(_DWORD *)(a5 + 156) = 0;
          goto LABEL_34;
        }
        if ( v10 || (v12 = GetDpiForSystem(), GetDpiDependentMetric(13, v12) / 2 <= 1) )
        {
          v14 = 1;
        }
        else
        {
          DpiForSystem = GetDpiForSystem();
          v14 = GetDpiDependentMetric(13, DpiForSystem) / 2;
        }
        v95 = v14;
        if ( a3 == 38 )
          v95 = -v14;
        goto LABEL_34;
      }
      if ( a3 != 39 )
      {
        if ( a3 != 40 )
          return;
        goto LABEL_15;
      }
    }
    if ( !*(_DWORD *)(a5 + 168) )
    {
      v11 = *(_DWORD *)(a5 + 172) == 0;
      *(_DWORD *)(a5 + 168) = dword_25139C[a3];
      goto LABEL_25;
    }
    if ( v10 || (v16 = GetDpiForSystem(), GetDpiDependentMetric(12, v16) / 2 <= 1) )
    {
      v18 = 1;
    }
    else
    {
      v17 = GetDpiForSystem();
      v18 = GetDpiDependentMetric(12, v17) / 2;
    }
    v96 = v18;
    if ( a3 == 37 )
      v96 = -v18;
LABEL_34:
    if ( *(_DWORD *)(a5 + 164) == 9 )
    {
      MessagePos = *(unsigned __int16 *)(a5 + 12) | (*(unsigned __int16 *)(a5 + 16) << 16);
      v94 = 9;
    }
    else
    {
      MessagePos = _GetMessagePos();
      v94 = *(_DWORD *)(a5 + 164);
    }
    v20 = *(_DWORD *)(a5 + 168);
    if ( v20 )
      v21 = v96 + *(_WORD *)(a5 + 4 * dword_251404[v20] + 28);
    else
      v21 = MessagePos;
    v22 = *(_DWORD *)(a5 + 172);
    HIWORD(i) = v21;
    if ( v22 )
      HIWORD(MessagePos) = v95 + *(_WORD *)(a5 + 4 * dword_2513D8[v22] + 28);
    if ( v94 != 9 )
    {
      v23 = v20 + v22;
      *(_DWORD *)(a5 + 164) = v20 + v22;
      if ( v5 )
        v24 = *v5;
      else
        v24 = 0;
      xxxSendMessage(v5, (unsigned int)v24, (unsigned __int16)(v23 + 9) | 0x2000000);
    }
    v25 = SHIWORD(i) - *(_DWORD *)(a5 + 156);
    v26 = (int)v5[14];
    v27 = SHIWORD(MessagePos) - *(_DWORD *)(a5 + 160);
    v85 = v25;
    v86 = v27;
    v91 = v26;
    v28 = *(_DWORD *)(v26 + 20);
    i = (_DWORD *)v25;
    v94 = v27;
    v29 = *(struct tagHOOK ***)(v28 + 108);
    if ( v29 )
    {
      v92 = v29;
      v30 = TransformRegionBetweenCoordinateSpaces((int)v5, v91, &v92);
      v31 = GrePtInRegion(v92, i, v94);
      v94 = v31;
      if ( v30 )
      {
        GreDeleteObject(v92);
        v31 = v94;
      }
      if ( !v31 )
        goto LABEL_8;
      v32 = v86;
      v33 = (struct tagPOINT *)v85;
    }
    else
    {
      if ( !PtInRect((_DWORD *)(a5 + 76), v25, v27) )
        goto LABEL_8;
      v32 = v94;
    }
    v94 = *(_DWORD *)(a5 + 192);
    v103 = v33;
    v104 = v32;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    LogicalToPhysicalDPIPoint(&v103, &v85, CurrentThreadDpiAwarenessContext, &v94);
    if ( a3 == 40 || a3 == 38 )
    {
      y = v104;
      v35 = _gptCursorAsync;
      v103 = _gptCursorAsync;
      if ( v104 == _gptCursorAsync->y )
      {
        y = v104 + 2 * (v95 > 0) - 1;
        v104 = y;
      }
    }
    else
    {
      v35 = v103;
      y = _gptCursorAsync->y;
      v104 = y;
      if ( v103 == _gptCursorAsync )
      {
        v35 = (struct tagPOINT *)((char *)v103 + 2 * (v96 > 0) - 1);
        v103 = v35;
      }
    }
    zzzInternalSetCursorPos(v35, y, 2, 0);
    goto LABEL_8;
  }
  bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
  if ( (*(_BYTE *)(v94 + 264) & 0x10) != 0 )
  {
    xxxDrawDragRect(2);
    *(_DWORD *)(v94 + 264) &= ~0x10u;
  }
  UpdateMoveSizeDataForCancelation((_DWORD *)a5);
LABEL_72:
  CCursorClip::ClearClip(_gpCursorClip);
  zzzLockWindowUpdate2(0, 1);
  xxxReleaseCapture();
  v39 = *(_DWORD *)(a5 + 184) | 8;
  *(_DWORD *)(a5 + 184) = v39;
  if ( (v39 & 2) != 0 )
    zzzInternalSetCursorPos(*(struct tagPOINT **)(a5 + 176), *(_DWORD *)(a5 + 180), 1, 0);
  v40 = v5[14];
  if ( v40 == (struct tagHOOK *)_GetDesktopWindow(v5) )
  {
    v41 = 0;
    v95 = 0;
  }
  else
  {
    v42 = *((_DWORD *)v40 + 5);
    v41 = *(_DWORD *)(v42 + 72);
    v95 = *(_DWORD *)(v42 + 68);
  }
  v96 = v41;
  if ( EqualRectInl((const void *)(a5 + 12), (const void *)(a5 + 124)) )
    goto LABEL_82;
  if ( xxxCallHook(*v5, 0, (unsigned int *)(a5 + 12), 5u, (int)v81, v83) )
  {
    v45 = (_DWORD *)(a5 + 12);
    *(_DWORD *)(a5 + 192) = *(_DWORD *)(a5 + 196);
    *(_DWORD *)(a5 + 12) = *(_DWORD *)(a5 + 124);
    *(_DWORD *)(a5 + 16) = *(_DWORD *)(a5 + 128);
    *(_DWORD *)(a5 + 20) = *(_DWORD *)(a5 + 132);
    *(_DWORD *)(a5 + 24) = *(_DWORD *)(a5 + 136);
    v5 = v92;
  }
  else
  {
    v43 = *((_BYTE *)v5[5] + 23);
    v44 = v43 & 0x20;
    if ( *(_DWORD *)(a5 + 164) != 9 )
    {
      if ( v44 )
      {
        v101 = *(_DWORD *)(a5 + 124) - v95;
        v103 = (struct tagPOINT *)(*(_DWORD *)(a5 + 132) - v95);
        v102 = *(_DWORD *)(a5 + 128) - v41;
        v104 = *(_DWORD *)(a5 + 136) - v41;
        CkptRestore((int)v5, (int)&v101);
        SetMinimize(v5, 0);
      }
      else if ( (v43 & 1) != 0 )
      {
        SetOrClrWF(0, (int)v5, 0xF01u, 1);
      }
      goto LABEL_82;
    }
    if ( !v44 )
    {
LABEL_82:
      v45 = (_DWORD *)(a5 + 12);
      goto LABEL_83;
    }
    v101 = *(_DWORD *)(a5 + 124) - v95;
    v103 = (struct tagPOINT *)(*(_DWORD *)(a5 + 132) - v95);
    v102 = *(_DWORD *)(a5 + 128) - v41;
    v104 = *(_DWORD *)(a5 + 136) - v41;
    v52 = CkptRestore((int)v5, (int)&v101);
    v45 = (_DWORD *)(a5 + 12);
    if ( v52 )
      v52[12] |= 1u;
  }
LABEL_83:
  v46 = v5[14];
  v47 = (_DWORD *)(a5 + 12);
  v94 = a5 + 12;
  v48 = *((_DWORD *)v46 + 5);
  if ( (*(_BYTE *)(v48 + 18) & 0x40) != 0 )
  {
    v49 = *(_DWORD *)(v48 + 76);
    *v47 -= v49;
    *(_DWORD *)(a5 + 20) -= v49;
    v50 = v96;
    *(_DWORD *)(a5 + 24) -= v96;
    *(_DWORD *)(a5 + 16) -= v50;
    v51 = -*v47;
    *v45 = -*(_DWORD *)(a5 + 20);
    *(_DWORD *)(a5 + 20) = v51;
  }
  else
  {
    v53 = v95;
    *v47 -= v95;
    *(_DWORD *)(a5 + 20) -= v53;
    v54 = v96;
    *(_DWORD *)(a5 + 24) -= v96;
    *(_DWORD *)(a5 + 16) -= v54;
  }
  if ( v5[14] != (struct tagHOOK *)_GetDesktopWindow(v5) )
    goto LABEL_132;
  v91 = *((_BYTE *)v5[5] + 16) & 0x88;
  v55 = WindowArrangementAllowed(v81);
  v56 = *((_BYTE *)v5[5] + 16);
  HIBYTE(i) = v56;
  if ( !v55 )
  {
    v57 = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(((SHIBYTE(i) >> 7) & 0x14) + 2, v57) - 1;
LABEL_98:
    v95 = DpiDependentMetric;
    goto LABEL_99;
  }
  if ( v56 >= 0 )
  {
    DpiDependentMetric = 0;
    goto LABEL_98;
  }
  v59 = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(22, v59);
  v95 = DpiDependentMetric;
LABEL_99:
  if ( *(_DWORD *)*_gpDispInfo > 1u )
  {
    v61 = (_DWORD *)(DpiDependentMetric + *(_DWORD *)(a5 + 16));
    v87 = *(_DWORD *)(a5 + 12);
    v96 = (int)v61;
    i = v61;
    v88 = *(_DWORD *)(a5 + 16);
    v89 = *(_DWORD *)(a5 + 20);
    v90 = *(_DWORD *)(a5 + 24);
    v5 = v92;
    if ( v92[30] )
    {
      if ( EnterFloatingPointRegion() )
      {
        v96 = 0;
        TransformVector(&i, 0, 0);
        TransformVector(&v88, 0, 0);
        TransformVector(&v90, 0, 0);
        KeRestoreFloatingPointState(_gfsSave);
        v61 = i;
        v96 = (int)i;
      }
      else
      {
        v61 = (_DWORD *)v96;
      }
    }
    v62 = *(_DWORD **)(_gpDispInfo + 56);
    for ( i = v62; v62; i = v62 )
    {
      v63 = v62[5];
      v104 = v63;
      if ( (*(_BYTE *)(v63 + 12) & 1) != 0 )
      {
        v64 = v91 != 0 ? 0xFFFFFFF0 : 0;
        if ( (int)v61 >= *(_DWORD *)(v64 + v63 + 36) && (int)v61 < *(_DWORD *)(v64 + v63 + 44) )
        {
          if ( !WindowArrangementAllowed(v82) )
            goto LABEL_132;
          v65 = *(_DWORD *)(v64 + v104 + 32);
          if ( v89 >= v65 && v89 < *(_DWORD *)(v64 + v104 + 40) )
            goto LABEL_132;
          if ( v87 >= v65 && v87 < *(_DWORD *)(v64 + v104 + 40) )
            goto LABEL_132;
        }
      }
      v61 = (_DWORD *)v96;
      v62 = (_DWORD *)i[7];
    }
    v60 = (void *)_MonitorFromRect((int *)(a5 + 12), 2, 0);
    v96 = (int)v60;
  }
  else
  {
    v60 = *(void **)(GetDispInfo() + 52);
    v96 = (int)v60;
  }
  if ( WindowArrangementAllowed(v82) )
  {
    v70 = *((_DWORD *)v5[5] + 27);
    if ( v70 && GreGetRgnBox(v70, &v97) )
    {
      v71 = v5[5];
      v94 = (int)&v97;
      v97 = *(_DWORD *)(a5 + 12);
      v98 += *(_DWORD *)(a5 + 16) - *((_DWORD *)v71 + 14);
      v99 = *(_DWORD *)(a5 + 20);
      v100 = *(_DWORD *)(a5 + 24) + *((_DWORD *)v71 + 16) - v100;
    }
    if ( v91 )
    {
      MonitorRect = GetMonitorRect(v60, v84);
      v87 = *MonitorRect;
      v73 = *(_DWORD *)(v94 + 4);
      v88 = MonitorRect[1];
      v89 = MonitorRect[2];
      v90 = MonitorRect[3];
      v5 = v92;
      if ( v73 < v88 )
      {
        v74 = v88 - v73;
        *(_DWORD *)(a5 + 16) += v88 - v73;
        *(_DWORD *)(a5 + 24) += v74;
      }
      goto LABEL_132;
    }
    MonitorWorkRect = GetMonitorWorkRect(v60, v84);
    v87 = *MonitorWorkRect;
    v76 = *(_DWORD *)(v94 + 4);
    v88 = MonitorWorkRect[1];
    v89 = MonitorWorkRect[2];
    v90 = MonitorWorkRect[3];
    if ( v76 < v88 )
    {
      v77 = v88 - v76;
      *(_DWORD *)(a5 + 16) += v88 - v76;
      *(_DWORD *)(a5 + 24) += v77;
    }
  }
  else
  {
    if ( v91 )
    {
      v66 = GetMonitorRect(v60, &v101);
      v67 = *(_DWORD *)(a5 + 16);
      v87 = *v66;
      v88 = v66[1];
      v89 = v66[2];
      v90 = v66[3];
      if ( v67 <= v88 - v95 )
        v67 = v88 - v95;
    }
    else
    {
      v68 = GetMonitorWorkRect(v60, &v101);
      v67 = *(_DWORD *)(a5 + 16);
      v87 = *v68;
      v88 = v68[1];
      v89 = v68[2];
      v90 = v68[3];
      if ( v67 <= v88 - v95 )
      {
        v69 = GetMonitorWorkRect((void *)v96, v84);
        v87 = *v69;
        v88 = v69[1];
        v89 = v69[2];
        v90 = v69[3];
        v67 = v88 - v95;
      }
    }
    *(_DWORD *)(a5 + 16) = v67;
  }
  v5 = v92;
LABEL_132:
  if ( IsSizingLEFT(*(void **)(a5 + 164)) || IsSizingTOP(v78) || IsSizingRIGHT(v79) || IsSizingBOTTOM(v80) )
    TraceWindowResizeTelemetry(v5);
  xxxCommitMoveSize((struct tagQ *)v5, a5);
  if ( !WindowRedirectionBitmapMatchesMonitorAdapter(v5) )
  {
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    *((_DWORD *)v5[5] + 36) &= ~0x80000u;
    RecreateRedirectionBitmap((int)v5, 0, 0, 0, 0, 0);
    GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  }
}
