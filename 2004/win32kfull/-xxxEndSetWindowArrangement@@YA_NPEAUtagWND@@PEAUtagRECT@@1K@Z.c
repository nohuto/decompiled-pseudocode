/*
 * XREFs of ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C00AE6F8 (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0024A64 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0024B70 (_MonitorFromRect.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005CDF0 (GetMonitorWorkRectForWindow.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C00ADFEC (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0159114 (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0159180 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C020B1C4 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C020B2AC (-ArrangementStyleFromOverlap@@YAKK@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C020B87C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C020B990 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C020C158 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C020C1F8 (-IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C020D0AC (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020D910 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020E07C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020F734 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C023E3AC (-ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023E508 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
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
  int v14; // edx
  __int64 v15; // rax
  struct tagRECT *MonitorWorkRectForWindow; // rax
  char OverlapCoordinatesForArrangement; // al
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  struct tagMONITOR *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // rbx
  unsigned int v34; // r8d
  struct tagRECT *Prop; // rax
  struct tagWND *v36; // rdx
  bool v37; // r8
  bool v39; // [rsp+40h] [rbp-C0h]
  char v40; // [rsp+41h] [rbp-BFh]
  unsigned int v41; // [rsp+44h] [rbp-BCh]
  int v42; // [rsp+48h] [rbp-B8h]
  int v43; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  const struct tagWND *v46; // [rsp+60h] [rbp-A0h]
  _BYTE v47[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h]
  struct tagRECT *v49; // [rsp+78h] [rbp-88h]
  struct tagRECT v50; // [rsp+80h] [rbp-80h] BYREF
  __int128 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h]
  __int128 v53; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-48h]
  _QWORD v55[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v56; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v57[44]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v58; // [rsp+250h] [rbp+150h] BYREF
  __int128 v59; // [rsp+260h] [rbp+160h] BYREF
  __int128 v60; // [rsp+270h] [rbp+170h] BYREF

  v4 = 2;
  v49 = a2;
  v45 = gptiCurrent;
  v8 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 448LL) + 328LL);
  v46 = v8;
  if ( (a4 & 4) != 0 )
  {
    v9 = 0;
    v40 = 1;
    v39 = 0;
  }
  else
  {
    v40 = 0;
    v9 = !(a4 & 1);
    v39 = (a4 & 2) == 0;
  }
  v55[2] = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  if ( !v8 )
    return (char)v8;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v55[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v55;
  v55[1] = v46;
  HMLockObject(v46);
  if ( !*(_QWORD *)(v45 + 664) )
  {
    if ( v40 )
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
        v14 = 19;
      }
      else
      {
        v14 = 18;
      }
      xxxArrangeWindow((__int64)a1, v14);
      goto LABEL_12;
    }
    v15 = MonitorFromRect(a2, 0LL, 0x12u);
    v45 = v15;
    if ( !v15 )
      goto LABEL_58;
    MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(&v56, v15, v46);
    v59 = 0LL;
    v50 = *MonitorWorkRectForWindow;
    if ( !(unsigned int)IntersectRect(&v59, &a2->left, &v50.left) )
      goto LABEL_58;
    v12 = v59 - *(_QWORD *)&a2->left;
    if ( (_QWORD)v59 == *(_QWORD *)&a2->left )
      v12 = *((_QWORD *)&v59 + 1) - *(_QWORD *)&a2->right;
    if ( v12 )
      goto LABEL_58;
    OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(&v50, a2, 1);
    v18 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
    v42 = v18;
    v19 = v18;
    if ( !v18 )
      goto LABEL_58;
    if ( v18 == 55555 )
      goto LABEL_58;
    v44 = (v18 != 55553) + 4;
    if ( !(unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v44) )
      goto LABEL_58;
    v41 = EvaluateArrangeState((__int64)a1);
    if ( v41 == 6 )
      goto LABEL_58;
    v12 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v12 + 31) & 0x10) == 0 )
      goto LABEL_58;
    if ( a3 )
    {
      v60 = 0LL;
      if ( !(unsigned int)IntersectRect(&v60, &a3->left, &v50.left) )
        goto LABEL_58;
      v12 = v60 - *(_QWORD *)&a3->left;
      if ( (_QWORD)v60 == *(_QWORD *)&a3->left )
        v12 = *((_QWORD *)&v60 + 1) - *(_QWORD *)&a3->right;
      if ( v12 )
        goto LABEL_58;
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 1) == 0 )
      {
        v20 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
        if ( (*(_BYTE *)(v20 + 224) & 0x20) == 0 )
        {
          v21 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (((unsigned __int16)(v21 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v20) >> 8)) & 0x1FF) != 0
            || ((v22 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL),
                 (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2)
             || (v22 & 0x20000000) == 0
              ? (v23 = 0)
              : (v23 = 1),
                (W32GetCurrentThreadDpiAwarenessContext(v22) & 0xF) != 2
             || (W32GetCurrentThreadDpiAwarenessContext(v24) & 0x20000000) == 0
              ? (v25 = 0)
              : (v25 = 1),
                v23 != v25) )
          {
            if ( !(unsigned int)TransformRectBetweenCoordinateSpaces(a3, a3, a1, v46) )
              goto LABEL_58;
          }
          v19 = v42;
        }
      }
    }
    v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v53 = *(_QWORD *)(v26 + 408);
    *(_QWORD *)(v26 + 408) = &v53;
    *((_QWORD *)&v53 + 1) = v45;
    HMLockObject(v45);
    memset(&v57[2], 0, 0x148uLL);
    v43 = 0;
    v48 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v47[0] = 0;
    CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)v47);
    if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
      __fastfail(3u);
    v57[1] = &gActiveMoveSizeDataList;
    v57[0] = gActiveMoveSizeDataList;
    *(_QWORD *)(gActiveMoveSizeDataList + 8) = v57;
    gActiveMoveSizeDataList = (__int64)v57;
    PushW32ThreadLock((__int64)v57, &v51, (__int64)EditionRemoveFromMsdList);
    xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v44, v41, 1LL, v57, &v43);
    v58 = *v49;
    TransformShellProvidedRectangles((__int64)v57, v45, (v19 != 55553) + 1, &v58, 0LL, (__int64)v46, &v58.left, 0LL);
    v27 = _MonitorFromWindowInternal(a1, 2LL, 0);
    if ( (struct tagMONITOR *)v45 == v27 )
    {
      if ( v41 == 2 && v19 == 55553 || v41 == 3 && v19 != 55553 )
      {
        if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v58) )
          xxxSetWindowPos(
            a1,
            0LL,
            (unsigned int)v58.left,
            (unsigned int)v58.top,
            v58.right - v58.left,
            v58.bottom - v58.top,
            16 * !v9 + 3146244);
        goto LABEL_49;
      }
    }
    else
    {
      v57[29] = v45;
    }
    *(struct tagRECT *)&v57[31] = v58;
    if ( !v9 )
      HIDWORD(v57[42]) |= 0x20u;
    xxxApplyArrangeAction(a1, v41, v44, v43, (struct _MOVESIZEDATA *)v57);
LABEL_49:
    ThreadUnlock1(v29, v28, v30);
    v31 = *((_QWORD *)a1 + 5);
    if ( *(char *)(v31 + 20) >= 0 )
    {
      v32 = *(_BYTE *)(v31 + 233) & 3;
      if ( v32 != 3 )
      {
        if ( v32 )
        {
          if ( v9 )
            xxxSetForegroundWindowWithOptions(a1, 6LL, 0LL, 1LL);
          if ( IsLeftOrRightArranged(a1) )
          {
            SetOrClrWF(1, (__int64)a1, 0xDA80u, 1);
            v4 = 0;
          }
        }
      }
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v51);
    if ( v48 )
      CKernelStackSwap::TryEnableStackSwap((CKernelStackSwap *)v47);
  }
LABEL_58:
  v33 = ThreadUnlock1(v12, v11, v13);
  if ( v33 )
  {
    if ( v39 )
      NotifyShell::ArrangementCompleted(*(_QWORD *)a1, v4);
    if ( v9 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v33 + 16), 0);
    if ( !v4 )
    {
      if ( a3 )
      {
        Prop = (struct tagRECT *)GetProp((__int64)a1, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL);
        if ( Prop )
          *Prop = *a3;
      }
    }
    if ( ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement **)a1, (struct tagWND *)0x10, v34) )
    {
      LOBYTE(v36) = 1;
      NotifyShell::TrackedWindowPosChanged(a1, v36, v37);
    }
  }
  LOBYTE(v8) = v4 == 0;
  return (char)v8;
}
