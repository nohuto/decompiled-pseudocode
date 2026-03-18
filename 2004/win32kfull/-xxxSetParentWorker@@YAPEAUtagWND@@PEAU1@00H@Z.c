/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005A00 (xxxSetModernAppWindow.c)
 *     xxxResetTooltip @ 0x1C00570C0 (xxxResetTooltip.c)
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     NtUserSetParent @ 0x1C010FE60 (NtUserSetParent.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0209A6C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C0209BF0 (xxxSetBridgeWindowChild.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0243D10 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C00078DC (TraceChildWindowDpiTelemetry.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00206AC (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C0020AD8 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C0020DA0 (RedirectDCEs.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     ValidateNewParent @ 0x1C0022CCC (ValidateNewParent.c)
 *     CalcWindowFullScreen @ 0x1C00239C8 (CalcWindowFullScreen.c)
 *     PostShellHookMessages @ 0x1C0033A70 (PostShellHookMessages.c)
 *     zzzAttachThreadInput @ 0x1C00381C0 (zzzAttachThreadInput.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C003BDB8 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C003BF28 (SetWindowSubtreeCoreWindowStatus.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C003BFB0 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     _ScreenToClient @ 0x1C003BFD8 (_ScreenToClient.c)
 *     IsImmersiveAppIORestricted @ 0x1C003C014 (IsImmersiveAppIORestricted.c)
 *     IsWindowShellCloaked @ 0x1C003C830 (IsWindowShellCloaked.c)
 *     CalcForegroundInsertAfter @ 0x1C003C8F8 (CalcForegroundInsertAfter.c)
 *     DecomposeWindowIfNeeded @ 0x1C004E868 (DecomposeWindowIfNeeded.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C0051580 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006E75C (BuildWindowListWithDpiBoundaryInfo.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     LinkWindow @ 0x1C006EAD0 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     UnlinkWindow @ 0x1C008A2D8 (UnlinkWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     GetWindowCloakState @ 0x1C00B2AEC (GetWindowCloakState.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0108A50 (IsChildWindowDpiIsolationEnabled.c)
 *     ResetWindowTransform @ 0x1C0127A7C (ResetWindowTransform.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E69BC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E6D2C (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxTurnOffCompositing @ 0x1C01E8A10 (xxxTurnOffCompositing.c)
 *     HasMessageRootWindow @ 0x1C0209B60 (HasMessageRootWindow.c)
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
  __int64 ThreadWin32Thread; // rax
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
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rdx
  int v48; // r8d
  __int64 v49; // rcx
  __int64 v50; // r9
  int v51; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v52[2]; // [rsp+50h] [rbp-71h] BYREF
  struct tagFREELIST *v53; // [rsp+58h] [rbp-69h]
  int v54; // [rsp+60h] [rbp-61h]
  __int128 v55; // [rsp+68h] [rbp-59h] BYREF
  __int64 v56; // [rsp+78h] [rbp-49h]
  __int64 v57; // [rsp+80h] [rbp-41h]
  _BYTE v58[8]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v59[3]; // [rsp+90h] [rbp-31h] BYREF
  _QWORD v60[4]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v61; // [rsp+C8h] [rbp+7h] BYREF
  _BYTE v62[64]; // [rsp+D8h] [rbp+17h] BYREF
  int v63; // [rsp+128h] [rbp+67h]

  v60[2] = 0LL;
  v59[2] = 0LL;
  v56 = 0LL;
  v53 = 0LL;
  v51 = 0;
  v63 = 5;
  v55 = 0LL;
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
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 416LL))
    && (unsigned int)HasMessageRootWindow(a1)
    && !(unsigned int)HasMessageRootWindow(v10) )
  {
LABEL_99:
    v49 = 5LL;
LABEL_100:
    UserSetLastError(v49);
    return 0LL;
  }
  if ( (struct tagWND *)v10 != DesktopWindow
    && (struct tagWND *)v10 != v8
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 416LL)
    && (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)(v10 + 40) + 288LL)) & 0xF) != 0
    && !(unsigned int)IsChildWindowDpiIsolationEnabled(a1, v10) )
  {
    TraceChildWindowDpiTelemetry((__int64)a1, v10, 1);
    v49 = 5023LL;
    goto LABEL_100;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v59[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v59;
  v59[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  if ( !(unsigned int)ValidateNewParent(a1, (_QWORD *)v10)
    || (v15 = xxxShowWindowEx(a1, 0, 0),
        v13 = *((_QWORD *)a1 + 5),
        v16 = v15,
        v54 = v15,
        (*(_BYTE *)(v13 + 31) & 0x10) != 0) )
  {
LABEL_107:
    ThreadUnlock1(v13, v12, v14);
    return 0LL;
  }
  if ( (*(_DWORD *)(v13 + 232) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  v17 = ValidateNewParent(a1, (_QWORD *)v10);
  v13 = 0LL;
  if ( !v17 )
  {
    if ( v16 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxShowWindowEx(a1, 1u, 0);
    goto LABEL_107;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v58);
  StyleWindow = GetStyleWindow(a1, 2848LL);
  v19 = *((_QWORD *)a1 + 13);
  v57 = StyleWindow;
  v20 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v60[0] = *(_QWORD *)(v20 + 408);
  *(_QWORD *)(v20 + 408) = v60;
  v60[1] = v19;
  if ( v19 )
    HMLockObject(v19);
  v21 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 26LL) & 0x40) != 0 )
    v22 = v21[24];
  else
    v22 = v21[22];
  v52[0] = v22;
  v52[1] = v21[23];
  ScreenToClient(v19, v52);
  if ( *(_DWORD *)(v23 + 236) != 1 && ((struct tagWND *)v10 == DesktopWindow || (struct tagWND *)v10 == v8) )
    SetOrClrWF(1LL, a1, 2056LL, 1LL);
  if ( (struct tagWND *)v10 == DesktopWindow )
  {
    if ( (struct tagWND *)v19 != DesktopWindow )
    {
      if ( (unsigned int)IsWindowShellCloaked((struct tagWND *)v19) )
      {
        LODWORD(v55) = 1;
        zzzSetWindowCompositionCloak((__int64)a1, &v55, 2u);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 820) & 0x30) == 0x10
        && (GetWindowCloakState(a1) & 1) != 0 )
      {
        LODWORD(v55) = 0;
        zzzSetWindowCompositionCloak((__int64)a1, &v55, 1u);
      }
      v44 = *((_QWORD *)a1 + 5);
      v45 = *(_DWORD *)(v44 + 232);
      if ( (v45 & 0x8000) != 0 )
      {
        *(_DWORD *)(v44 + 232) = v45 & 0xFFFF7FFF;
        PostShellHookMessages(0x36uLL, *(_QWORD *)a1);
      }
    }
  }
  else if ( (struct tagWND *)v19 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1) )
      zzzSetWindowCompositionCloak((__int64)a1, &v55, 2u);
    ResetWindowTransform(a1);
  }
  UnlinkWindow(a1, v19);
  v61 = *(_OWORD *)LockPointer(v62, (char *)a1 + 104, v10);
  HMAssignmentLock(&v61);
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
    LODWORD(v55) = 1;
    zzzSetWindowCompositionCloak((__int64)a1, &v55, 2u);
  }
  v26 = GetStyleWindow(a1, 2848LL);
  if ( v57 )
  {
    if ( v26 )
    {
      if ( v57 != v26 )
        ChangeRedirectionParentInDCEs(a1, 1u);
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
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    v27 = (_QWORD *)((char *)a1 + 104);
    if ( *((_QWORD *)a1 + 13) != GetDesktopWindow(a1) )
    {
      v28 = *((_QWORD *)a1 + 2);
      v29 = *(_QWORD *)(v19 + 16);
      if ( v28 != v29 )
        zzzAttachThreadInput(v28, v29, 0);
    }
    if ( v10 != GetDesktopWindow(a1) )
    {
      v30 = *((_QWORD *)a1 + 2);
      v31 = *(_QWORD *)(v10 + 16);
      if ( v30 == v31 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 235LL) & 1) != 0
          && (unsigned int)IsTopLevelWindow(v10)
          && (unsigned int)IsDesktopApp(*(_QWORD *)(v50 + 416)) )
        {
          *(_DWORD *)(v10 + 324) |= 8u;
        }
      }
      else
      {
        zzzAttachThreadInput(v30, v31, a4 != 0 ? -32767 : 1);
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
    v63 = 21;
  }
  else
  {
    v32 = 5;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 40) + 232LL) & 0x10000000) != 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10000000) != 0 )
  {
    v46 = *((_QWORD *)a1 + 5);
    v47 = v46;
    v48 = *(_DWORD *)(v46 + 288);
    if ( (v48 & 0xF) == 2 && (v48 & 0xF0) == 0x10 )
    {
      *(_DWORD *)(v46 + 232) &= ~0x10000000u;
      v47 = *((_QWORD *)a1 + 5);
    }
    *(_DWORD *)(v47 + 232) &= ~0x8000000u;
    v63 = v32 | 0x20;
  }
  IsTopLevelWindow(a1);
  SetDeferredDpiStateForWindowAndChildren(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v58);
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
    v33 = v53;
LABEL_57:
    xxxSetWindowPos(a1, 0, 0, v63);
    goto LABEL_58;
  }
  v33 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, v19, 0LL, &v51);
  if ( !v51 )
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
  if ( v54 )
    xxxShowWindowEx(a1, 1u, 0);
  v38 = ThreadUnlock1(v36, v35, v37);
  ThreadUnlock1(v40, v39, v41);
  return (struct tagWND *)v38;
}
