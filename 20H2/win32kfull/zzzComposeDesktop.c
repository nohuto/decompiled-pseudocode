/*
 * XREFs of zzzComposeDesktop @ 0x1C00801A8
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     zzzDwmStartRedirection @ 0x1C007FCE0 (zzzDwmStartRedirection.c)
 * Callees:
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C001B414 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C001C184 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C001C1B4 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C001CEF4 (GreRemoveDisplayDriverRealizations.c)
 *     zzzEnableDwmPointerSupport @ 0x1C002AEDC (zzzEnableDwmPointerSupport.c)
 *     MapDesktop @ 0x1C003E670 (MapDesktop.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0043840 (GreUpdateSpriteVisRgn.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0080498 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00804F0 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00809F8 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C0080AA4 (DwmAsyncShellWindowChange.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0080B34 (GreTransferSpriteStateToDwmState.c)
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C0081CE8 (-FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C00915C4 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C00918CC (ComposeWindowIfNeeded.c)
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ComposeWindow @ 0x1C00C2AD0 (ComposeWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00C9B94 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     IsWindowContentProtected @ 0x1C00C9FF8 (IsWindowContentProtected.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00CB428 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C0119484 (DwmAsyncCreateDCompositionHwndTarget.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0153490 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0247870 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C0273BA4 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0273D2C (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C0274354 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C0274454 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C0274564 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1)
{
  int v2; // r12d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // r14d
  struct tagWND **v9; // rax
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v13; // rdi
  struct tagDESKTOP *v14; // rax
  __int64 v15; // rcx
  struct tagWND *v16; // rcx
  ULONG v17; // eax
  void *v18; // rax
  __int64 v19; // r13
  CompositionObject *v20; // rcx
  __int64 v21; // rcx
  void *v22; // rax
  CompositionObject *v23; // rcx
  __int64 v24; // rcx
  void *v25; // rax
  struct tagWND *v26; // r9
  void *v27; // rax
  _QWORD v28[3]; // [rsp+40h] [rbp-20h] BYREF
  int v29; // [rsp+58h] [rbp-8h]
  int v30; // [rsp+5Ch] [rbp-4h]
  CVisRgnTrackerProp *v31; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+48h] BYREF

  v2 = -1073741823;
  v3 = **((_QWORD **)a1 + 1);
  v4 = *(_DWORD *)(v3 + 64);
  if ( (v4 & 1) != 0 )
    return 0;
  *(_DWORD *)(v3 + 64) = v4 | 1;
  v5 = ReferenceDwmProcess();
  v6 = v5;
  if ( v5 )
  {
    v28[0] = 1LL;
    v28[1] = v5;
    v28[2] = a1;
    v29 = 0;
    v30 = 1;
    v2 = MapDesktop((__int64)v28);
    if ( v2 < 0 )
    {
      v17 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v17);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
      DereferenceDwmProcess(v6);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v6);
  }
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(gpDispInfo + 40LL)) )
  {
    v2 = -1073741823;
LABEL_11:
    v9 = (struct tagWND **)*((_QWORD *)a1 + 1);
    if ( v2 < 0 )
    {
      *((_DWORD *)*v9 + 16) &= ~1u;
    }
    else
    {
      ReorderChildrenSpriteList(v9[3], 0LL);
      v10 = *((_QWORD *)a1 + 29);
      v32 = *(_QWORD *)&gMagnContext;
      if ( v10 )
      {
        v27 = (void *)ReferenceDwmApiPort(**((_QWORD **)a1 + 1));
        DwmAsyncMagnSetDesktopColorTransform(v27);
      }
      BroadcastCompositionChange(a1);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 >= 0 )
    {
      v11 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 1));
      DwmAsyncShellWindowChange(v11);
    }
    return (unsigned int)v2;
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(32LL * v8 + gSharedInfo[1] + 24) == 1 )
      {
        v13 = *(_QWORD *)(gpKernelHandleTable + 24LL * v8);
        if ( (unsigned int)ShouldComposeWindow((struct tagWND *const)v13, a1) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 1) != 0 )
            PostEventMessageEx(
              *(struct tagTHREADINFO **)(v13 + 16),
              *(struct tagQ **)(*(_QWORD *)(v13 + 16) + 432LL),
              0x10u,
              (struct tagWND *)v13,
              0,
              0LL,
              0LL,
              0LL);
          IsDesktopWindow(v13);
          v2 = ComposeWindow(v16);
          if ( v2 < 0 )
            break;
        }
        if ( (unsigned int)IsWindowContentProtected(v13) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 27LL) & 0x20) == 0 )
            ComposeWindowIfNeeded((struct tagWND *)v13);
          ChangeWindowTreeProtection((struct tagWND *)v13, 1u);
        }
        v14 = *(struct tagDESKTOP **)(v13 + 24);
        if ( v14 && v14 == a1 && !(unsigned int)IsWindowBeingDestroyed(v13) )
        {
          v32 = 0LL;
          if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(v15, &v32) )
          {
            v19 = v32;
            v31 = 0LL;
            v20 = *(CompositionObject **)(v32 + 16);
            if ( v20 && (int)CompositionObject::OpenDwmHandle(v20, (void **)&v31) >= 0 )
            {
              v22 = (void *)ReferenceDwmApiPort(v21);
              DwmAsyncCreateDCompositionHwndTarget(v22);
            }
            v23 = *(CompositionObject **)(v19 + 48);
            if ( v23 && (int)CompositionObject::OpenDwmHandle(v23, (void **)&v31) >= 0 )
            {
              v25 = (void *)ReferenceDwmApiPort(v24);
              DwmAsyncCreateDCompositionHwndTarget(v25);
            }
          }
          if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
            || (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
          {
            v31 = 0LL;
            if ( (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v13, &v31) )
              CSwapChainProp::NotifyDwm(v31, (struct tagWND *const)v13);
          }
          v31 = 0LL;
          if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>(v13, &v31) )
          {
            CVisRgnTrackerProp::FreeTrackedRegions(v31);
            CVisRgnTrackerProp::MarkDirty(v31);
          }
        }
        if ( v2 < 0 )
          break;
      }
      if ( ++v8 > giheLast )
      {
        if ( v2 >= 0 )
          goto LABEL_11;
        break;
      }
    }
    while ( v8 <= giheLast )
    {
      if ( *(_BYTE *)(32LL * v8 + gSharedInfo[1] + 24) == 1
        && IsWindowComposedOnDesktop(*(struct tagWND *const *)(gpKernelHandleTable + 24LL * v8), a1) )
      {
        ComposeWindow(v26);
      }
      --v8;
    }
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1));
    goto LABEL_11;
  }
  v18 = (void *)ReferenceDwmApiPort(v7);
  DwmAsyncShellWindowChange(v18);
  return 0LL;
}
