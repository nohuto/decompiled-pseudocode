/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C00058A0 (xxxSetModernAppWindow.c)
 *     xxxResetTooltip @ 0x1C001B604 (xxxResetTooltip.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     NtUserSetParent @ 0x1C0110E70 (NtUserSetParent.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0208BFC (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C0208D68 (xxxSetBridgeWindowChild.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0242A70 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C00010A4 (TraceChildWindowDpiTelemetry.c)
 *     ResetWindowTransform @ 0x1C000F604 (ResetWindowTransform.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00133EC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C001355C (SetWindowSubtreeCoreWindowStatus.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00135E4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     _ScreenToClient @ 0x1C001360C (_ScreenToClient.c)
 *     IsImmersiveAppIORestricted @ 0x1C0013648 (IsImmersiveAppIORestricted.c)
 *     IsWindowShellCloaked @ 0x1C0013E60 (IsWindowShellCloaked.c)
 *     CalcForegroundInsertAfter @ 0x1C0014058 (CalcForegroundInsertAfter.c)
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetStyleWindow @ 0x1C00457D0 (GetStyleWindow.c)
 *     LinkWindow @ 0x1C0046760 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0047020 (BuildWindowListWithDpiBoundaryInfo.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     CalcWindowFullScreen @ 0x1C00906E4 (CalcWindowFullScreen.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0091758 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C0091808 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C0091AD0 (RedirectDCEs.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     zzzAttachThreadInput @ 0x1C00BF544 (zzzAttachThreadInput.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C2A48 (DecomposeWindowIfNeeded.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     ValidateNewParent @ 0x1C00C9DE4 (ValidateNewParent.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     UnlinkWindow @ 0x1C00CEAA8 (UnlinkWindow.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00F9B10 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0109A78 (IsChildWindowDpiIsolationEnabled.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5CFC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E606C (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxTurnOffCompositing @ 0x1C01E7D50 (xxxTurnOffCompositing.c)
 *     HasMessageRootWindow @ 0x1C0208CD8 (HasMessageRootWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *__fastcall xxxSetParentWorker(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3, int a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  struct tagWND *DesktopWindow; // r15
  struct tagWND *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v16; // esi
  int v17; // eax
  __int64 StyleWindow; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  _DWORD *v21; // r9
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // r12
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  int v32; // r9d
  struct tagFREELIST *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // r8d
  __int64 v48; // rcx
  __int64 v49; // r9
  int v50; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v51[2]; // [rsp+50h] [rbp-71h] BYREF
  struct tagFREELIST *v52; // [rsp+58h] [rbp-69h]
  int v53; // [rsp+60h] [rbp-61h]
  __int128 v54; // [rsp+68h] [rbp-59h] BYREF
  __int64 v55; // [rsp+78h] [rbp-49h]
  __int64 v56; // [rsp+80h] [rbp-41h]
  _BYTE v57[8]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v58[3]; // [rsp+90h] [rbp-31h] BYREF
  _QWORD v59[4]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v60; // [rsp+C8h] [rbp+7h] BYREF
  _BYTE v61[64]; // [rsp+D8h] [rbp+17h] BYREF
  int v62; // [rsp+128h] [rbp+67h]

  v59[2] = 0LL;
  v58[2] = 0LL;
  v55 = 0LL;
  v52 = 0LL;
  v50 = 0;
  v62 = 5;
  v54 = 0LL;
  DesktopWindow = (struct tagWND *)GetDesktopWindow(a1);
  v8 = 0LL;
  v9 = *((_QWORD *)a1 + 3);
  if ( v9 )
    v8 = *(struct tagWND **)(v9 + 104);
  if ( a1 == DesktopWindow || a1 == v8 )
    goto LABEL_99;
  v10 = (__int64)DesktopWindow;
  if ( v5 )
    v10 = v5;
  if ( v6 && (*(_QWORD *)(v6 + 104) != v10 || (struct tagWND *)v6 == a1) )
    return 0LL;
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 424LL))
    && (unsigned int)HasMessageRootWindow(a1)
    && !(unsigned int)HasMessageRootWindow(v10) )
  {
LABEL_99:
    v48 = 5LL;
LABEL_100:
    UserSetLastError(v48);
    return 0LL;
  }
  if ( (struct tagWND *)v10 != DesktopWindow
    && (struct tagWND *)v10 != v8
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL)
    && (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)(v10 + 40) + 288LL)) & 0xF) != 0
    && !(unsigned int)IsChildWindowDpiIsolationEnabled(a1, v10) )
  {
    TraceChildWindowDpiTelemetry((__int64)a1, v10, 1);
    v48 = 5023LL;
    goto LABEL_100;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v58[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v58;
  v58[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  if ( !(unsigned int)ValidateNewParent(a1, v10)
    || (v15 = xxxShowWindowEx(a1, 0, 0),
        v13 = *((_QWORD *)a1 + 5),
        v16 = v15,
        v53 = v15,
        (*(_BYTE *)(v13 + 31) & 0x10) != 0) )
  {
LABEL_107:
    ThreadUnlock1(v13, v12, v14);
    return 0LL;
  }
  if ( (*(_DWORD *)(v13 + 232) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  v17 = ValidateNewParent(a1, v10);
  v13 = 0LL;
  if ( !v17 )
  {
    if ( v16 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxShowWindowEx(a1, 1u, 0);
    goto LABEL_107;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v57);
  StyleWindow = GetStyleWindow(a1, 2848LL);
  v19 = *((_QWORD *)a1 + 13);
  v56 = StyleWindow;
  v20 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v59[0] = *(_QWORD *)(v20 + 416);
  *(_QWORD *)(v20 + 416) = v59;
  v59[1] = v19;
  if ( v19 )
    HMLockObject(v19);
  v21 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 26LL) & 0x40) != 0 )
    v22 = v21[24];
  else
    v22 = v21[22];
  v51[0] = v22;
  v51[1] = v21[23];
  ScreenToClient(v19, v51);
  if ( *(_DWORD *)(v23 + 236) != 1 && ((struct tagWND *)v10 == DesktopWindow || (struct tagWND *)v10 == v8) )
    SetOrClrWF(1LL, a1, 2056LL, 1LL);
  if ( (struct tagWND *)v10 == DesktopWindow )
  {
    if ( (struct tagWND *)v19 != DesktopWindow )
    {
      if ( (unsigned int)IsWindowShellCloaked((struct tagWND *)v19) )
      {
        LODWORD(v54) = 1;
        zzzSetWindowCompositionCloak(a1, &v54, 2LL);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 820) & 0x30) == 0x10 && (GetWindowCloakState(a1) & 1) != 0 )
      {
        LODWORD(v54) = 0;
        zzzSetWindowCompositionCloak(a1, &v54, 1LL);
      }
      v43 = *((_QWORD *)a1 + 5);
      v44 = *(_DWORD *)(v43 + 232);
      if ( (v44 & 0x8000) != 0 )
      {
        *(_DWORD *)(v43 + 232) = v44 & 0xFFFF7FFF;
        PostShellHookMessages(54LL, *(_QWORD *)a1);
      }
    }
  }
  else if ( (struct tagWND *)v19 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1) )
      zzzSetWindowCompositionCloak(a1, &v54, 2LL);
    ResetWindowTransform((__int64)a1);
  }
  UnlinkWindow(a1, v19);
  v60 = *(_OWORD *)LockPointer(v61, (char *)a1 + 104, v10);
  HMAssignmentLock(&v60);
  if ( v10 )
    v24 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(v10 + 40) + 232LL), 25);
  else
    v24 = 0LL;
  SetWindowSubtreeCoreWindowStatus(a1, v24);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    v25 = *((_QWORD *)a1 + 15);
    if ( v25 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 24LL) & 8) != 0 )
        SetOrClrWF(1LL, a1, 2056LL, 1LL);
    }
  }
  if ( v10 == GetDesktopWindow(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) == 0 )
  {
    CalcWindowFullScreen(a1);
    CalcForegroundInsertAfter(a1);
  }
  LinkWindow(a1);
  if ( a2 == (struct tagWND *)-3LL && !(unsigned int)IsWindowShellCloaked(a1) )
  {
    LODWORD(v54) = 1;
    zzzSetWindowCompositionCloak(a1, &v54, 2LL);
  }
  v26 = GetStyleWindow(a1, 2848LL);
  if ( v56 )
  {
    if ( v26 )
    {
      if ( v56 != v26 )
        ChangeRedirectionParentInDCEs(a1);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v26 )
  {
    RedirectDCEs(a1);
  }
  if ( v10 == GetDesktopWindow(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4) == 0 )
  {
    SetOrClrWF(1LL, a1, 3844LL, 1LL);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    v27 = (_QWORD *)((char *)a1 + 104);
    if ( *((_QWORD *)a1 + 13) != GetDesktopWindow(a1) )
    {
      v28 = *((_QWORD *)a1 + 2);
      v29 = *(_QWORD *)(v19 + 16);
      if ( v28 != v29 )
        zzzAttachThreadInput(v28, v29, 0LL);
    }
    if ( v10 != GetDesktopWindow(a1) )
    {
      v30 = *((_QWORD *)a1 + 2);
      v31 = *(_QWORD *)(v10 + 16);
      if ( v30 == v31 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 235LL) & 1) != 0
          && (unsigned int)IsTopLevelWindow(v10)
          && (unsigned int)IsDesktopApp(*(_QWORD *)(v49 + 424)) )
        {
          *(_DWORD *)(v10 + 324) |= 8u;
        }
      }
      else
      {
        zzzAttachThreadInput(v30, v31, a4 != 0 ? 32769 : 1);
      }
    }
  }
  else
  {
    v27 = (_QWORD *)((char *)a1 + 104);
  }
  if ( (struct tagWND *)v10 == v8 || (struct tagWND *)v19 == v8 )
  {
    v32 = 21;
    v62 = 21;
  }
  else
  {
    v32 = 5;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 40) + 232LL) & 0x10000000) != 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10000000) != 0 )
  {
    v45 = *((_QWORD *)a1 + 5);
    v46 = v45;
    v47 = *(_DWORD *)(v45 + 288);
    if ( (v47 & 0xF) == 2 && (v47 & 0xF0) == 0x10 )
    {
      *(_DWORD *)(v45 + 232) &= ~0x10000000u;
      v46 = *((_QWORD *)a1 + 5);
    }
    *(_DWORD *)(v46 + 232) &= ~0x8000000u;
    v62 = v32 | 0x20;
  }
  IsTopLevelWindow(a1);
  SetDeferredDpiStateForWindowAndChildren(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v57);
  zzzEndDeferWinEventNotify();
  if ( GetStyleWindow(*v27, 2818LL) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, 1u);
  if ( !v10 || (struct tagWND *)v10 == DesktopWindow || (struct tagWND *)v19 == DesktopWindow )
  {
    v33 = 0LL;
    goto LABEL_57;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v19 + 40) + 256LL) == *(_QWORD *)(*(_QWORD *)(v10 + 40) + 256LL) )
  {
    v33 = v52;
LABEL_57:
    xxxSetWindowPos(a1, 0, 0, v62);
    goto LABEL_58;
  }
  v33 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, v19, 0LL, &v50);
  if ( !v50 )
    goto LABEL_57;
LABEL_58:
  v34 = *v27;
  if ( !*v27
    || (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)(v34 + 40) + 288LL)) & 0xF) == 0
    || (struct tagWND *)v34 == DesktopWindow
    || (struct tagWND *)v34 == v8
    || (unsigned int)IsChildWindowDpiIsolationEnabled(a1, v34) )
  {
    xxxInheritWindowMonitor(a1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a1, *(_DWORD *)(*(_QWORD *)(*v27 + 40LL) + 288LL));
  }
  if ( v33 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v33);
    FreeListFree(v33);
  }
  if ( v53 )
    xxxShowWindowEx(a1, 1u, 0);
  v38 = ThreadUnlock1(v36, v35, v37);
  ThreadUnlock1(v40, v39, v41);
  return (struct tagWND *)v38;
}
