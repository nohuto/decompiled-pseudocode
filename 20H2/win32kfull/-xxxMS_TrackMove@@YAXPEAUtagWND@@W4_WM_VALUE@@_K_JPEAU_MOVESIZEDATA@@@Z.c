/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8
 * Callers:
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 * Callees:
 *     SetMinimize @ 0x1C001878C (SetMinimize.c)
 *     bSetDevDragRect @ 0x1C002A4E0 (bSetDevDragRect.c)
 *     xxxReleaseCapture @ 0x1C0038EA0 (xxxReleaseCapture.c)
 *     CkptRestore @ 0x1C003A9C0 (CkptRestore.c)
 *     GetMonitorWorkRect @ 0x1C003AE18 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     zzzLockWindowUpdate2 @ 0x1C00BF2BC (zzzLockWindowUpdate2.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00C0948 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
 *     _GetMessagePos @ 0x1C0106FF0 (_GetMessagePos.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C0110620 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01E58D4 (TransformRegionBetweenCoordinateSpaces.c)
 *     ?IsSizingLEFT@@YAEH@Z @ 0x1C020B39C (-IsSizingLEFT@@YAEH@Z.c)
 *     ?IsSizingRIGHT@@YAEH@Z @ 0x1C020B3BC (-IsSizingRIGHT@@YAEH@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C020B424 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C020C0E8 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020C3BC (-UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D400 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C02103FC (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRect @ 0x1C02110B8 (xxxDrawDragRect.c)
 *     TransformVector @ 0x1C021714C (TransformVector.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02236F8 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxMS_TrackMove(
        unsigned __int64 *a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct _MOVESIZEDATA *a5)
{
  int v7; // r14d
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  __int128 v12; // xmm1
  unsigned int v13; // edx
  int v14; // r12d
  int v15; // r13d
  _BOOL8 v16; // rcx
  bool v17; // zf
  unsigned int v18; // eax
  unsigned int DpiForSystem; // eax
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // r9d
  unsigned __int64 v24; // r15
  unsigned int MessagePos; // eax
  __int64 v26; // r8
  __int16 v27; // ax
  __int64 v28; // rdx
  int v29; // eax
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // edi
  __int64 v35; // rcx
  int v36; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v38; // ecx
  LONG y; // edx
  int v40; // r9d
  int v41; // r8d
  int v42; // eax
  __int64 DesktopWindow; // rax
  __int64 v44; // rdx
  int v45; // r15d
  int v46; // r12d
  __int64 v47; // rax
  struct tagRECT *v48; // r13
  __int64 v49; // rcx
  char v50; // cl
  char v51; // al
  _DWORD *v52; // rax
  struct tagRECT v53; // xmm0
  __int128 *v54; // rbx
  __int64 v55; // rcx
  int v56; // eax
  int v57; // ecx
  int v58; // r15d
  bool v59; // al
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx
  int v63; // r12d
  unsigned int v64; // eax
  int DpiDependentMetric; // r12d
  unsigned int v66; // eax
  __int64 v67; // r14
  struct tagRECT v68; // xmm0
  unsigned __int64 v69; // r11
  int v70; // ecx
  int v71; // r9d
  int v72; // r11d
  int v73; // r9d
  int v74; // r11d
  __int64 v75; // rax
  __int64 v76; // r13
  unsigned __int64 v77; // r15
  int v78; // eax
  __int64 v79; // r8
  __int64 v80; // r9
  _OWORD *v81; // rax
  int v82; // ecx
  int v83; // eax
  _OWORD *MonitorWorkRect; // rax
  __int64 v85; // rcx
  unsigned __int64 v86; // rdx
  int v87; // ecx
  int v88; // eax
  _OWORD *MonitorRect; // rax
  int v90; // ecx
  __int64 v91; // rax
  int v92; // eax
  unsigned int v93; // ecx
  int v94; // ecx
  int v95; // [rsp+20h] [rbp-51h]
  int v96; // [rsp+20h] [rbp-51h]
  unsigned __int64 v97; // [rsp+30h] [rbp-41h] BYREF
  int v98; // [rsp+38h] [rbp-39h]
  unsigned __int64 v99; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v100; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v101; // [rsp+50h] [rbp-21h] BYREF
  __int128 v102; // [rsp+60h] [rbp-11h] BYREF
  __int128 v103; // [rsp+70h] [rbp-1h] BYREF

  *(_QWORD *)&v102 = a3;
  v97 = a4;
  LODWORD(v100) = (__int16)a4;
  HIDWORD(v100) = SWORD1(a4);
  v103 = 0LL;
  v7 = 1;
  v8 = a2 - 256;
  if ( v8 )
  {
    v9 = v8 - 4;
    if ( v9 )
    {
      v10 = v9 - 252;
      if ( v10 )
      {
        if ( v10 != 2 )
          return;
        xxxTM_MoveDragRect(a5, a4);
        v11 = *((_DWORD *)a5 + 49);
        if ( (v11 & 0x2000000) != 0 )
        {
          v12 = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 40) = *(_OWORD *)((char *)a5 + 72);
          *(_OWORD *)((char *)a5 + 24) = v12;
        }
        *((_DWORD *)a5 + 49) = v11 & 0xFFFFFFFD;
        goto LABEL_71;
      }
      v13 = a4;
LABEL_9:
      xxxTM_MoveDragRect(a5, v13);
      return;
    }
  }
  v14 = 0;
  v15 = 0;
  v16 = (_GetKeyState(17LL) & 0x8000u) != 0LL;
  if ( a3 > 0x28 )
    return;
  if ( (_DWORD)a3 != 13 )
  {
    if ( (_DWORD)a3 == 27 )
    {
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
      {
        xxxDrawDragRect(a5, 0LL, 2LL);
        *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
      }
      UpdateMoveSizeDataForCancelation(a5);
      goto LABEL_76;
    }
    if ( (_DWORD)a3 != 37 )
    {
      if ( (_DWORD)a3 == 38 )
      {
LABEL_17:
        if ( !*((_DWORD *)a5 + 46) )
        {
          v17 = *((_DWORD *)a5 + 45) == 0;
          *((_DWORD *)a5 + 46) = dword_1C02F4CC4[a3];
LABEL_27:
          if ( !v17 )
          {
            v20 = *((_DWORD *)a5 + 49);
            *((_DWORD *)a5 + 70) &= ~2u;
            *((_DWORD *)a5 + 60) = 4;
            *((_DWORD *)a5 + 49) = v20 & 0xFFFFF8FF;
            MakeArrangedStateObservable(a5);
          }
          *((_QWORD *)a5 + 21) = 0LL;
          goto LABEL_36;
        }
        if ( v16 || (v18 = GetDpiForSystem(v16), (int)GetDpiDependentMetric(13LL, v18) / 2 <= 1) )
        {
          v14 = 1;
        }
        else
        {
          DpiForSystem = GetDpiForSystem(v16);
          v14 = (int)GetDpiDependentMetric(13LL, DpiForSystem) / 2;
        }
        if ( a3 == 38 )
          v14 = -v14;
        goto LABEL_36;
      }
      if ( (_DWORD)a3 != 39 )
      {
        if ( (_DWORD)a3 != 40 )
          return;
        goto LABEL_17;
      }
    }
    if ( !*((_DWORD *)a5 + 45) )
    {
      v17 = *((_DWORD *)a5 + 46) == 0;
      *((_DWORD *)a5 + 45) = dword_1C02F4CC4[a3];
      goto LABEL_27;
    }
    if ( v16 || (v21 = GetDpiForSystem(v16), (int)GetDpiDependentMetric(12LL, v21) / 2 <= 1) )
    {
      v15 = 1;
    }
    else
    {
      v22 = GetDpiForSystem(v16);
      v15 = (int)GetDpiDependentMetric(12LL, v22) / 2;
    }
    if ( a3 == 37 )
      v15 = -v15;
LABEL_36:
    if ( *((_DWORD *)a5 + 44) == 9 )
    {
      v23 = 9;
      v24 = *((unsigned __int16 *)a5 + 12) | ((unsigned __int64)*((unsigned __int16 *)a5 + 14) << 16);
    }
    else
    {
      MessagePos = GetMessagePos(v16);
      v23 = *((_DWORD *)a5 + 44);
      v24 = MessagePos;
    }
    v26 = *((int *)a5 + 45);
    v97 = v24;
    if ( (_DWORD)v26 )
    {
      v27 = v15 + *((_WORD *)a5 + 2 * dword_1C02F4D28[v26] + 20);
      LOWORD(v97) = v27;
      LODWORD(v24) = v97;
    }
    else
    {
      v27 = v97;
    }
    v28 = *((int *)a5 + 46);
    LOWORD(v98) = v27;
    if ( (_DWORD)v28 )
    {
      WORD1(v97) = v14 + *((_WORD *)a5 + 2 * dword_1C02F4CF8[v28] + 20);
      LODWORD(v24) = v97;
    }
    if ( v23 != 9 )
    {
      v29 = v26 + v28;
      v30 = 0LL;
      *((_DWORD *)a5 + 44) = v29;
      if ( a1 )
        v30 = *a1;
      xxxSendMessage(
        (unsigned __int64)a1,
        0x20u,
        v30,
        (struct _LARGE_STRING *)((unsigned __int16)(v29 + 9) | 0x2000000LL));
    }
    LODWORD(v100) = (__int16)v98 - *((_DWORD *)a5 + 42);
    HIDWORD(v100) = SWORD1(v24) - *((_DWORD *)a5 + 43);
    v31 = a1[13];
    v32 = v100;
    v99 = v100;
    v33 = *(_QWORD *)(v31 + 40);
    if ( *(_QWORD *)(v33 + 168) )
    {
      v97 = *(_QWORD *)(v33 + 168);
      v34 = TransformRegionBetweenCoordinateSpaces((__int64)a1, v31, (__int64 *)&v97);
      v36 = GrePtInRegion(v97, (unsigned int)v32, HIDWORD(v99));
      if ( v34 )
        GreDeleteObject(v97);
      if ( !v36 )
        goto LABEL_66;
      v32 = v100;
    }
    else if ( !PtInRect((_DWORD *)a5 + 22, v100) )
    {
LABEL_66:
      v13 = v24;
      goto LABEL_9;
    }
    v99 = *((_QWORD *)a5 + 26);
    v97 = v32;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v35);
    LogicalToPhysicalDPIPoint(&v97, &v100, CurrentThreadDpiAwarenessContext, &v99);
    if ( (((_QWORD)v102 - 38LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v38 = v97;
      if ( (((_QWORD)v102 - 37LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        y = HIDWORD(v97);
      }
      else
      {
        y = gptCursorAsync->y;
        HIDWORD(v97) = y;
        if ( (_DWORD)v97 == (_DWORD)gptCursorAsync )
        {
          if ( v15 <= 0 )
            v7 = -1;
          v38 = v7 + v97;
          LODWORD(v97) = v7 + v97;
        }
      }
    }
    else
    {
      y = HIDWORD(v97);
      v38 = (unsigned int)gptCursorAsync;
      LODWORD(v97) = (_DWORD)gptCursorAsync;
      if ( HIDWORD(v97) == gptCursorAsync->y )
      {
        if ( v14 <= 0 )
          v7 = -1;
        y = v7 + HIDWORD(v97);
        HIDWORD(v97) += v7;
      }
    }
    zzzInternalSetCursorPos(v38, y, 2, 0);
    goto LABEL_66;
  }
  GetMessagePos(v16);
LABEL_71:
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  v40 = *(_DWORD *)(gptiCurrent + 488LL);
  if ( (v40 & 0x10) != 0 )
  {
    v41 = *((_DWORD *)a5 + 49);
    if ( (v41 & 0x800) == 0 || (((v41 & 0x20) != 0) & *(_BYTE *)(a1[5] + 31)) == 0 )
    {
      xxxDrawDragRect(a5, 0LL, ((v41 & 0xFE000000) << 6) | 1);
      v40 = *(_DWORD *)(gptiCurrent + 488LL);
    }
    *(_DWORD *)(gptiCurrent + 488LL) = v40 & 0xFFFFFFEF;
  }
LABEL_76:
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1);
  xxxReleaseCapture();
  v42 = *((_DWORD *)a5 + 49) | 8;
  *((_DWORD *)a5 + 49) = v42;
  if ( (v42 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v44 == DesktopWindow )
  {
    v45 = 0;
    v46 = 0;
  }
  else
  {
    v47 = *(_QWORD *)(v44 + 40);
    v46 = *(_DWORD *)(v47 + 104);
    v45 = *(_DWORD *)(v47 + 108);
  }
  v48 = (struct tagRECT *)((char *)a5 + 24);
  v49 = *((_QWORD *)a5 + 3) - *((_QWORD *)a5 + 17);
  if ( !v49 )
    v49 = *((_QWORD *)a5 + 4) - *((_QWORD *)a5 + 18);
  if ( v49 )
  {
    if ( (unsigned int)xxxCallHook(0, *a1, (__int64)a5 + 24, 5) )
    {
      v53 = *(struct tagRECT *)((char *)a5 + 136);
      *((_QWORD *)a5 + 26) = *((_QWORD *)a5 + 27);
      *v48 = v53;
    }
    else
    {
      v50 = *(_BYTE *)(a1[5] + 31);
      v51 = v50 & 0x20;
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( v51 )
        {
          LODWORD(v102) = *((_DWORD *)a5 + 34) - v46;
          DWORD2(v102) = *((_DWORD *)a5 + 36) - v46;
          DWORD1(v102) = *((_DWORD *)a5 + 35) - v45;
          HIDWORD(v102) = *((_DWORD *)a5 + 37) - v45;
          v52 = CkptRestore((__int64)a1, &v102);
          if ( v52 )
            v52[12] |= 1u;
        }
      }
      else if ( v51 )
      {
        LODWORD(v102) = *((_DWORD *)a5 + 34) - v46;
        DWORD2(v102) = *((_DWORD *)a5 + 36) - v46;
        DWORD1(v102) = *((_DWORD *)a5 + 35) - v45;
        HIDWORD(v102) = *((_DWORD *)a5 + 37) - v45;
        CkptRestore((__int64)a1, &v102);
        SetMinimize((__int64)a1, 0);
      }
      else if ( (v50 & 1) != 0 )
      {
        SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
      }
    }
  }
  v54 = (__int128 *)((char *)a5 + 24);
  v55 = *(_QWORD *)(a1[13] + 40);
  if ( (*(_BYTE *)(v55 + 26) & 0x40) != 0 )
  {
    v56 = *(_DWORD *)(v55 + 112);
    *(_DWORD *)v54 -= v56;
    *((_DWORD *)a5 + 8) -= v56;
    *((_DWORD *)a5 + 9) -= v45;
    *((_DWORD *)a5 + 7) -= v45;
    v57 = -*(_DWORD *)v54;
    v48->left = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 8) = v57;
  }
  else
  {
    *(_DWORD *)v54 -= v46;
    *((_DWORD *)a5 + 8) -= v46;
    *((_DWORD *)a5 + 9) -= v45;
    *((_DWORD *)a5 + 7) -= v45;
  }
  if ( a1[13] == GetDesktopWindow((__int64)a1) )
  {
    v58 = *(_BYTE *)(a1[5] + 24) & 0x88;
    v98 = v58;
    v59 = WindowArrangementAllowed((struct tagWND *)a1);
    v62 = a1[5];
    v63 = *(char *)(v62 + 24);
    if ( v59 )
    {
      if ( (v63 & 0x80u) == 0 )
      {
        DpiDependentMetric = 0;
      }
      else
      {
        v66 = GetDpiForSystem(v62);
        DpiDependentMetric = GetDpiDependentMetric(22LL, v66);
      }
    }
    else
    {
      v64 = GetDpiForSystem(v62);
      DpiDependentMetric = GetDpiDependentMetric(((v63 >> 7) & 0x14u) + 2, v64) - 1;
    }
    *(_QWORD *)&v102 = gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v68 = *v48;
      v69 = a1[27];
      v70 = DpiDependentMetric + *((_DWORD *)a5 + 7);
      LODWORD(v99) = v70;
      v101 = v68;
      if ( v69 )
      {
        LODWORD(v97) = 0;
        TransformVector(v69, (unsigned int)&v97, (unsigned int)&v99, 0, 0);
        TransformVector(v72, (unsigned int)&v101, (unsigned int)&v101.top, v71, v71 & v95);
        TransformVector(v74, (unsigned int)&v101.right, (unsigned int)&v101.bottom, v73, v73 & v96);
        v70 = v99;
      }
      v75 = *(_QWORD *)(v102 + 104);
      v97 = v75;
      if ( v75 )
      {
        do
        {
          v76 = *(_QWORD *)(v75 + 40);
          if ( (*(_DWORD *)(v76 + 24) & 1) != 0 )
          {
            v77 = -(__int64)(v58 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v70 >= *(_DWORD *)(v77 + v76 + 48) && v70 < *(_DWORD *)(v77 + v76 + 56) )
            {
              if ( !WindowArrangementAllowed((struct tagWND *)a1) )
                goto LABEL_136;
              v78 = *(_DWORD *)(v77 + v76 + 44);
              if ( v101.right >= v78 && v101.right < *(_DWORD *)(v77 + v76 + 52) )
                goto LABEL_136;
              if ( v101.left >= v78 && v101.left < *(_DWORD *)(v77 + v76 + 52) )
                goto LABEL_136;
            }
            v58 = v98;
          }
          v70 = v99;
          v75 = *(_QWORD *)(v97 + 56);
          v97 = v75;
        }
        while ( v75 );
        v48 = (struct tagRECT *)((char *)a5 + 24);
      }
      v67 = MonitorFromRect(v48, 2LL, 0LL, v61);
    }
    else
    {
      v67 = *(_QWORD *)(GetDispInfo(v62, 0LL, v60, v61) + 96);
    }
    if ( WindowArrangementAllowed((struct tagWND *)a1) )
    {
      v85 = *(_QWORD *)(a1[5] + 168);
      if ( v85 && (unsigned int)GreGetRgnBox(v85, &v103) )
      {
        v86 = a1[5];
        v54 = &v103;
        v87 = *((_DWORD *)a5 + 7);
        LODWORD(v103) = v48->left;
        v88 = *((_DWORD *)a5 + 8);
        DWORD1(v103) += v87 - *(_DWORD *)(v86 + 92);
        DWORD2(v103) = v88;
        HIDWORD(v103) = *((_DWORD *)a5 + 9) + *(_DWORD *)(v86 + 100) - HIDWORD(v103);
      }
      if ( v58 )
        MonitorRect = GetMonitorRect(&v101, v67, v79, v80);
      else
        MonitorRect = GetMonitorWorkRect(&v101, v67);
      v90 = *((_DWORD *)v54 + 1);
      v91 = HIDWORD(*(_QWORD *)MonitorRect);
      if ( v90 < (int)v91 )
      {
        v92 = v91 - v90;
        *((_DWORD *)a5 + 7) += v92;
        *((_DWORD *)a5 + 9) += v92;
      }
    }
    else
    {
      if ( v58 )
      {
        v81 = GetMonitorRect(&v101, v67, v79, v80);
        v82 = *((_DWORD *)a5 + 7);
        v83 = HIDWORD(*(_QWORD *)v81) - DpiDependentMetric;
        if ( v82 <= v83 )
          v82 = v83;
      }
      else
      {
        MonitorWorkRect = GetMonitorWorkRect(&v101, v67);
        v82 = *((_DWORD *)a5 + 7);
        if ( v82 <= (int)(HIDWORD(*(_QWORD *)MonitorWorkRect) - DpiDependentMetric) )
          v82 = HIDWORD(*(_QWORD *)GetMonitorWorkRect(&v102, v67)) - DpiDependentMetric;
      }
      *((_DWORD *)a5 + 7) = v82;
    }
  }
LABEL_136:
  if ( IsSizingLEFT(*((_DWORD *)a5 + 44)) || v93 - 3 <= 2 || IsSizingRIGHT(v93) || (unsigned int)(v94 - 6) <= 2 )
    TraceWindowResizeTelemetry((HWND *)a1);
  xxxCommitMoveSize((struct tagWND *)a1, a5);
  if ( !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)a1) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(a1[5] + 232) &= ~0x80000u;
    RecreateRedirectionBitmap((void **)a1, 0, 0, 0, 0, 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
