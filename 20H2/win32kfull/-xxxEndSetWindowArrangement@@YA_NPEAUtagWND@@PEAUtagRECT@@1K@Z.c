/*
 * XREFs of ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C00942E4 (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C0094B7C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00C9768 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015CAEC (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015CB58 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C020A344 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C020A42C (-ArrangementStyleFromOverlap@@YAKK@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C020A9FC (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C020AB10 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C020B2D8 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C020B378 (-IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C020C22C (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CA90 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D1FC (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020E8B4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C023D10C (-ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023D268 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

bool __fastcall xxxEndSetWindowArrangement(struct tagWND *a1, struct tagRECT *a2, struct tagRECT *a3, char a4)
{
  unsigned int v4; // r12d
  const struct tagWND *v8; // rax
  bool v9; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  __int64 v16; // rax
  struct tagRECT *MonitorWorkRectForWindow; // rax
  char OverlapCoordinatesForArrangement; // al
  int v19; // eax
  int v20; // ebx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r9
  struct tagMONITOR *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // r9
  __int64 v36; // rbx
  unsigned int v37; // r8d
  struct tagRECT *Prop; // rax
  struct tagWND *v39; // rdx
  bool v40; // r8
  bool v42; // [rsp+40h] [rbp-C0h]
  char v43; // [rsp+41h] [rbp-BFh]
  unsigned int v44; // [rsp+44h] [rbp-BCh]
  int v45; // [rsp+48h] [rbp-B8h]
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  const struct tagWND *v49; // [rsp+60h] [rbp-A0h]
  _BYTE v50[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+70h] [rbp-90h]
  struct tagRECT *v52; // [rsp+78h] [rbp-88h]
  struct tagRECT v53; // [rsp+80h] [rbp-80h] BYREF
  __int128 v54; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-60h]
  __int128 v56; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-48h]
  _QWORD v58[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v59; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v60[44]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v61; // [rsp+250h] [rbp+150h] BYREF
  __int128 v62; // [rsp+260h] [rbp+160h] BYREF
  __int128 v63; // [rsp+270h] [rbp+170h] BYREF

  v4 = 2;
  v52 = a2;
  v48 = gptiCurrent;
  v8 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL);
  v49 = v8;
  if ( (a4 & 4) != 0 )
  {
    v9 = 0;
    v43 = 1;
    v42 = 0;
  }
  else
  {
    v43 = 0;
    v9 = !(a4 & 1);
    v42 = (a4 & 2) == 0;
  }
  v58[2] = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  if ( !v8 )
    return (char)v8;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v58[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v58;
  v58[1] = v49;
  HMLockObject(v49);
  if ( !*(_QWORD *)(v48 + 672) )
  {
    if ( v43 )
    {
      LOBYTE(v12) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3;
      if ( (_BYTE)v12 )
      {
        if ( (_BYTE)v12 != 3 )
        {
LABEL_12:
          v4 = 0;
          goto LABEL_58;
        }
        v15 = 19;
      }
      else
      {
        v15 = 18;
      }
      xxxArrangeWindow((__int64)a1, v15);
      goto LABEL_12;
    }
    v16 = MonitorFromRect(a2, 0LL, 18LL, v14);
    v48 = v16;
    if ( !v16 )
      goto LABEL_58;
    MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(&v59, v16, v49);
    v62 = 0LL;
    v53 = *MonitorWorkRectForWindow;
    if ( !(unsigned int)IntersectRect(&v62, &a2->left, &v53.left) )
      goto LABEL_58;
    v12 = v62 - *(_QWORD *)&a2->left;
    if ( (_QWORD)v62 == *(_QWORD *)&a2->left )
      v12 = *((_QWORD *)&v62 + 1) - *(_QWORD *)&a2->right;
    if ( v12 )
      goto LABEL_58;
    OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(&v53, a2, 1);
    v19 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
    v45 = v19;
    v20 = v19;
    if ( !v19 )
      goto LABEL_58;
    if ( v19 == 55555 )
      goto LABEL_58;
    v47 = (v19 != 55553) + 4;
    if ( !(unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v47) )
      goto LABEL_58;
    v44 = EvaluateArrangeState((__int64)a1);
    if ( v44 == 6 )
      goto LABEL_58;
    v12 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v12 + 31) & 0x10) == 0 )
      goto LABEL_58;
    if ( a3 )
    {
      v63 = 0LL;
      if ( !(unsigned int)IntersectRect(&v63, &a3->left, &v53.left) )
        goto LABEL_58;
      v12 = v63 - *(_QWORD *)&a3->left;
      if ( (_QWORD)v63 == *(_QWORD *)&a3->left )
        v12 = *((_QWORD *)&v63 + 1) - *(_QWORD *)&a3->right;
      if ( v12 )
        goto LABEL_58;
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v21 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v21 + 224) & 0x20) == 0 )
        {
          v22 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (((unsigned __int16)(v22 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v21) >> 8)) & 0x1FF) != 0
            || ((v23 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL),
                 (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2)
             || (v23 & 0x20000000) == 0
              ? (v24 = 0)
              : (v24 = 1),
                (W32GetCurrentThreadDpiAwarenessContext(v23) & 0xF) != 2
             || (W32GetCurrentThreadDpiAwarenessContext(v25) & 0x20000000) == 0
              ? (v26 = 0)
              : (v26 = 1),
                v24 != v26) )
          {
            if ( !(unsigned int)TransformRectBetweenCoordinateSpaces(a3, a3, a1, v49) )
              goto LABEL_58;
          }
          v20 = v45;
        }
      }
    }
    v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v56 = *(_QWORD *)(v27 + 416);
    *(_QWORD *)(v27 + 416) = &v56;
    *((_QWORD *)&v56 + 1) = v48;
    HMLockObject(v48);
    memset(&v60[2], 0, 0x148uLL);
    v46 = 0;
    v51 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v50[0] = 0;
    CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)v50);
    if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
      __fastfail(3u);
    v60[1] = &gActiveMoveSizeDataList;
    v60[0] = gActiveMoveSizeDataList;
    *(_QWORD *)(gActiveMoveSizeDataList + 8) = v60;
    gActiveMoveSizeDataList = (__int64)v60;
    PushW32ThreadLock((__int64)v60, &v54, (__int64)EditionRemoveFromMsdList);
    xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v47, v44, 1LL, v60, &v46);
    v61 = *v52;
    TransformShellProvidedRectangles((__int64)v60, v48, (v20 != 55553) + 1, &v61, 0LL, (__int64)v49, &v61.left, 0LL);
    v29 = _MonitorFromWindowInternal(a1, 2LL, 0LL, v28);
    if ( (struct tagMONITOR *)v48 == v29 )
    {
      if ( v44 == 2 && v20 == 55553 || v44 == 3 && v20 != 55553 )
      {
        if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v61) )
          xxxSetWindowPos(
            a1,
            0LL,
            (unsigned int)v61.left,
            (unsigned int)v61.top,
            v61.right - v61.left,
            v61.bottom - v61.top,
            16 * !v9 + 3146244);
        goto LABEL_49;
      }
    }
    else
    {
      v60[29] = v48;
    }
    *(struct tagRECT *)&v60[31] = v61;
    if ( !v9 )
      HIDWORD(v60[42]) |= 0x20u;
    xxxApplyArrangeAction(a1, v44, v47, v46, (struct _MOVESIZEDATA *)v60);
LABEL_49:
    ThreadUnlock1(v31, v30, v32);
    v33 = *((_QWORD *)a1 + 5);
    if ( *(char *)(v33 + 20) >= 0 )
    {
      v34 = *(_BYTE *)(v33 + 233) & 3;
      if ( v34 != 3 )
      {
        if ( v34 )
        {
          if ( v9 )
            xxxSetForegroundWindowWithOptions((__int64)a1, 6LL, 0LL, 1LL);
          if ( IsLeftOrRightArranged(a1) )
          {
            SetOrClrWF(1, (__int64)a1, 0xDA80u, 1);
            v4 = 0;
          }
        }
      }
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v54);
    if ( v51 )
      CKernelStackSwap::TryEnableStackSwap((CKernelStackSwap *)v50, v11, v13, v35);
  }
LABEL_58:
  v36 = ThreadUnlock1(v12, v11, v13);
  if ( v36 )
  {
    if ( v42 )
      NotifyShell::ArrangementCompleted(*(_QWORD *)a1, v4);
    if ( v9 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v36 + 16), 0);
    if ( !v4 )
    {
      if ( a3 )
      {
        Prop = (struct tagRECT *)GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
        if ( Prop )
          *Prop = *a3;
      }
    }
    if ( ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement **)a1, (struct tagWND *)0x10, v37) )
    {
      LOBYTE(v39) = 1;
      NotifyShell::TrackedWindowPosChanged(a1, v39, v40);
    }
  }
  LOBYTE(v8) = v4 == 0;
  return (char)v8;
}
