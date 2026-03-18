/*
 * XREFs of ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     ?xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z @ 0x9256E (-xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QAEXXZ @ 0x4505C (-DisableStackSwap@CKernelStackSwap@@QAEXXZ.c)
 *     ?TryEnableStackSwap@CKernelStackSwap@@QAEXXZ @ 0x450C6 (-TryEnableStackSwap@CKernelStackSwap@@QAEXXZ.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     ?IsVerticallyMaximized@@YG_NPBUtagWND@@@Z @ 0xB4A40 (-IsVerticallyMaximized@@YG_NPBUtagWND@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z @ 0xF4F26 (-WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YGHPAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x170BFD (-ArrangeActionCompatibleWithStyle@@YGHPAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?ArrangementStyleFromOverlap@@YGKK@Z @ 0x170C7D (-ArrangementStyleFromOverlap@@YGKK@Z.c)
 *     ?EvaluateArrangeState@@YG?AW4_WARR_STATES@@PAUtagWND@@@Z @ 0x1710C7 (-EvaluateArrangeState@@YG-AW4_WARR_STATES@@PAUtagWND@@@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YGKQBUtagRECT@@0H@Z @ 0x171195 (-GetOverlapCoordinatesForArrangement@@YGKQBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YGHPAUtagWND@@QBUtagRECT@@@Z @ 0x17184A (-IsEqualRectToArrangedWindow@@YGHPAUtagWND@@QBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YG_NPBUtagWND@@@Z @ 0x1718C2 (-IsLeftOrRightArranged@@YG_NPBUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@3PAUtagWND@@33@Z @ 0x172538 (-TransformShellProvidedRectangles@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIREC.c)
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YGXPAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PAU_MOVESIZEDATA@@PAJ@Z @ 0x174574 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YGXPAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES.c)
 *     ?ArrangementCompleted@NotifyShell@@YG_NPAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x19C248 (-ArrangementCompleted@NotifyShell@@YG_NPAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z @ 0x19C335 (-TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z.c)
 */

bool __userpurge xxxEndSetWindowArrangement@<al>(
        int *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        unsigned int a6)
{
  int v7; // esi
  int v8; // eax
  _DWORD *v9; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v13; // ecx
  int v14; // eax
  int *MonitorWorkRectForWindow; // eax
  int *v16; // esi
  char OverlapCoordinatesForArrangement; // al
  int v18; // eax
  int *v19; // esi
  PKTHREAD v20; // eax
  PKTHREAD v21; // eax
  unsigned int v22; // esi
  int v23; // esi
  int v24; // eax
  PKTHREAD v25; // eax
  int v26; // eax
  int v27; // edi
  struct tagMONITOR *v28; // eax
  struct _MOVESIZEDATA *v29; // ecx
  _DWORD *v30; // ecx
  unsigned int *v31; // ecx
  int v32; // edi
  int *v33; // edi
  int *Prop; // eax
  struct tagRECT *v35; // [esp+0h] [ebp-1D0h]
  struct tagWND *v36; // [esp+4h] [ebp-1CCh]
  bool v37; // [esp+8h] [ebp-1C8h]
  int v38; // [esp+10h] [ebp-1C0h] BYREF
  int v39; // [esp+14h] [ebp-1BCh]
  int v40; // [esp+18h] [ebp-1B8h]
  _DWORD v41[3]; // [esp+1Ch] [ebp-1B4h] BYREF
  _DWORD v42[3]; // [esp+28h] [ebp-1A8h] BYREF
  int v43; // [esp+34h] [ebp-19Ch]
  int v44; // [esp+38h] [ebp-198h] BYREF
  int v45[2]; // [esp+3Ch] [ebp-194h] BYREF
  int v46; // [esp+44h] [ebp-18Ch] BYREF
  int v47; // [esp+48h] [ebp-188h]
  int v48; // [esp+4Ch] [ebp-184h]
  int *v49; // [esp+50h] [ebp-180h]
  int v50; // [esp+54h] [ebp-17Ch]
  struct tagMONITOR *v51; // [esp+58h] [ebp-178h]
  _DWORD *v52; // [esp+5Ch] [ebp-174h]
  int *v53; // [esp+60h] [ebp-170h]
  int v54; // [esp+64h] [ebp-16Ch]
  BOOL v55; // [esp+68h] [ebp-168h]
  char v56; // [esp+6Eh] [ebp-162h]
  char v57; // [esp+6Fh] [ebp-161h]
  _DWORD v58[78]; // [esp+70h] [ebp-160h] BYREF
  int v59; // [esp+1A8h] [ebp-28h] BYREF
  int v60; // [esp+1ACh] [ebp-24h]
  int v61; // [esp+1B0h] [ebp-20h]
  int v62; // [esp+1B4h] [ebp-1Ch]
  int v63; // [esp+1BCh] [ebp-14h] BYREF
  int v64; // [esp+1C0h] [ebp-10h]
  int v65; // [esp+1C4h] [ebp-Ch]
  int v66; // [esp+1C8h] [ebp-8h]

  v49 = (int *)a3;
  v54 = _gptiCurrent;
  v7 = 2;
  v8 = *(_DWORD *)(_gptiCurrent + 248);
  v53 = a1;
  v48 = 2;
  v52 = *(_DWORD **)(v8 + 200);
  if ( ((unsigned __int8)a4 & 4) != 0 )
  {
    v56 = 1;
    LOBYTE(v55) = 0;
LABEL_6:
    v57 = 0;
    goto LABEL_7;
  }
  v56 = 0;
  v55 = !((unsigned __int8)a4 & 1);
  if ( ((unsigned __int8)a4 & 2) != 0 )
  {
    v55 = !((unsigned __int8)a4 & 1);
    goto LABEL_6;
  }
  v57 = 1;
LABEL_7:
  v41[2] = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v9 = v52;
  if ( !v52 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v41[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v41;
  v41[1] = v9;
  HMLockObject(v9);
  if ( !*(_DWORD *)(v54 + 368) )
  {
    if ( v56 )
    {
      if ( (*(_BYTE *)(a2[5] + 145) & 3) != 0 )
      {
        if ( IsVerticallyMaximized(a2) )
          xxxArrangeWindow(v13, 19);
      }
      else
      {
        xxxArrangeWindow(a2, 18);
      }
      v7 = 0;
      v48 = 0;
      goto LABEL_64;
    }
    v14 = _MonitorFromRect(v53, 0, 18);
    v51 = (struct tagMONITOR *)v14;
    if ( v14 )
    {
      MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(v14, v9, &v59);
      v45[0] = *MonitorWorkRectForWindow;
      v45[1] = MonitorWorkRectForWindow[1];
      v46 = MonitorWorkRectForWindow[2];
      v47 = MonitorWorkRectForWindow[3];
      v16 = v53;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v62 = 0;
      if ( IntersectRect(&v59, v53, v45) )
      {
        if ( EqualRectInl(&v59, v16) )
        {
          OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(
                                               v16,
                                               v45,
                                               (const struct tagRECT *const)1,
                                               v35,
                                               (int)v36);
          v18 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
          v43 = v18;
          if ( v18 )
          {
            if ( v18 != 35075 )
            {
              v54 = (v18 != 35073) + 4;
              if ( ArrangeActionCompatibleWithStyle(a2, v54) )
              {
                v50 = EvaluateArrangeState(a2);
                if ( v50 != 6 && (*(_BYTE *)(a2[5] + 23) & 0x10) != 0 )
                {
                  v19 = v49;
                  if ( !v49 )
                    goto LABEL_40;
                  v59 = 0;
                  v60 = 0;
                  v61 = 0;
                  v62 = 0;
                  if ( IntersectRect(&v59, v49, v45) )
                  {
                    if ( EqualRectInl(&v59, v19) )
                    {
                      if ( (v20 = KeGetCurrentThread(),
                            (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v20) + 260) + 148) & 1) != 0)
                        || (v21 = KeGetCurrentThread(),
                            (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v21) + 260) + 148) & 0x20) != 0)
                        || (v22 = *(_DWORD *)(a2[5] + 184),
                            (((v22 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) == 0)
                        && ((*(_DWORD *)(a2[5] + 184) & 0xF) != 2 || (*(_DWORD *)(a2[5] + 184) & 0x20000000) == 0
                          ? (v23 = 0)
                          : (v23 = 1),
                            (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
                         || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0
                          ? (v24 = 0)
                          : (v24 = 1),
                            v23 == v24)
                        || TransformRectBetweenCoordinateSpaces(v49, v49, a2, v52) )
                      {
LABEL_40:
                        v25 = KeGetCurrentThread();
                        v26 = W32GetThreadWin32Thread(v25);
                        v38 = *(_DWORD *)(v26 + 228);
                        *(_DWORD *)(v26 + 228) = &v38;
                        v39 = (int)v51;
                        HMLockObject(v51);
                        memset(&v58[2], 0, 0x130u);
                        memset(v42, 0, sizeof(v42));
                        v44 = 0;
                        LOBYTE(v46) = 0;
                        v47 = 0;
                        CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)&v46);
                        if ( *(int **)(gActiveMoveSizeDataList + 4) != &gActiveMoveSizeDataList )
                          __fastfail(3u);
                        v58[0] = gActiveMoveSizeDataList;
                        v58[1] = &gActiveMoveSizeDataList;
                        *(_DWORD *)(gActiveMoveSizeDataList + 4) = v58;
                        gActiveMoveSizeDataList = (int)v58;
                        PushW32ThreadLock((int)v58, v42, (int)EditionRemoveFromMsdList);
                        xxxInitializeMoveSizeDataProgrammaticArrangement(a2, v54, v50, 1, v58, &v44);
                        v63 = *v53;
                        v64 = v53[1];
                        v65 = v53[2];
                        v66 = v53[3];
                        v27 = v43;
                        TransformShellProvidedRectangles(v58, (int)v51, (v43 != 35073) + 1, &v63, 0, (int)v52, &v63, 0);
                        v7 = 2;
                        v28 = _MonitorFromWindowInternal(2, (int)a2, 0, (unsigned int)v35, (int)v36);
                        if ( v51 == v28 )
                        {
                          v29 = (struct _MOVESIZEDATA *)v50;
                          if ( v50 == 2 && v27 == 35073 || v50 == 3 && v27 != 35073 )
                          {
                            if ( !IsEqualRectToArrangedWindow((int)a2, &v63) )
                              xxxSetWindowPos((int)a2, 0, v63, v64, v65 - v63, v66 - v64, 16 * !v55 + 3146244);
                            goto LABEL_54;
                          }
                          v58[54] = v63;
                          v58[55] = v64;
                          v58[56] = v65;
                          v58[57] = v66;
                        }
                        else
                        {
                          v58[54] = v63;
                          v58[55] = v64;
                          v58[56] = v65;
                          v58[57] = v66;
                          v58[51] = v51;
                          v29 = (struct _MOVESIZEDATA *)v50;
                        }
                        if ( !v55 )
                          v58[77] |= 0x20u;
                        xxxApplyArrangeAction((ULONG_PTR)a2, v29, v54, v44, v58);
                        v7 = 2;
LABEL_54:
                        ThreadUnlock1();
                        if ( *(char *)(a2[5] + 12) >= 0 && !IsVerticallyMaximized(a2) && IsSemiMaximized(v30) )
                        {
                          if ( v55 )
                            xxxSetForegroundWindowWithOptions(v31, 6, 0, 1);
                          if ( IsLeftOrRightArranged(a2) )
                          {
                            SetOrClrWF(1, (int)a2, 0x8A80u, 1);
                            v7 = 0;
                            v48 = 0;
                          }
                        }
                        PopAndFreeAlwaysW32ThreadLock((int)v42);
                        if ( v47 )
                          CKernelStackSwap::TryEnableStackSwap((CKernelStackSwap *)&v46);
                        goto LABEL_64;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v7 = 2;
    }
  }
LABEL_64:
  v32 = ThreadUnlock1();
  if ( v32 )
  {
    if ( v57 )
      NotifyShell::ArrangementCompleted(*a2, v7);
    if ( v55 )
      CInputGlobals::SetPtiLastWoken(_gpInputGlobals, *(struct tagTHREADINFO **)(v32 + 8), 0);
    if ( !v7 )
    {
      v33 = v49;
      if ( v49 )
      {
        Prop = (int *)_GetProp((int)a2, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
        if ( Prop )
        {
          *Prop = *v33;
          Prop[1] = v33[1];
          Prop[2] = v33[2];
          Prop[3] = v33[3];
          v7 = v48;
        }
      }
    }
    if ( ShellWindowManagement::WindowSubjectToBehavior((int)a2, 0x10u) )
      NotifyShell::TrackedWindowPosChanged((NotifyShell *)v35, v36, v37);
  }
  return v7 == 0;
}
