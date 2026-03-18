/*
 * XREFs of zzzComposeDesktop @ 0x1C004AD48
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C000DF88 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 * Callees:
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C000F0A8 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C000F0D8 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C000F13C (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C000FE44 (GreRemoveDisplayDriverRealizations.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C001F05C (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C0020B9C (ComposeWindowIfNeeded.c)
 *     IsDesktopWindow @ 0x1C0020E80 (IsDesktopWindow.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C0022C94 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     IsWindowContentProtected @ 0x1C0022F38 (IsWindowContentProtected.c)
 *     MapDesktop @ 0x1C0026340 (MapDesktop.c)
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C004B038 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C004B090 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C004B598 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x1C004CCD0 (zzzEnableDwmPointerSupport.c)
 *     ComposeWindow @ 0x1C004E8F0 (ComposeWindow.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0053B00 (GreTransferSpriteStateToDwmState.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0072450 (GreUpdateSpriteVisRgn.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     DwmAsyncShellWindowChange @ 0x1C00BFAE0 (DwmAsyncShellWindowChange.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C01054E0 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C010F998 (-FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C0118634 (DwmAsyncCreateDCompositionHwndTarget.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0150D90 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0248E20 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C027510C (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0275294 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C02758BC (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C02759BC (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C0275ACC (DwmAsyncMagnSetWindowSharedTextures.c)
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
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1)) )
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
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
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
              *(struct tagQ **)(*(_QWORD *)(v13 + 16) + 424LL),
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
          if ( CWindowProp::GetProp<CVisRgnTrackerProp>(v13, (__int64 *)&v31) )
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
    zzzEnableDwmPointerSupport(0LL, 0LL);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1));
    goto LABEL_11;
  }
  v18 = (void *)ReferenceDwmApiPort(v7);
  DwmAsyncShellWindowChange(v18);
  return 0LL;
}
