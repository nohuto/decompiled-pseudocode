/*
 * XREFs of xxxFreeWindow @ 0x1C00D094C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00D204C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C000B7A4 (IPostQuitMessage.c)
 *     FreeTimer @ 0x1C000C100 (FreeTimer.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C000F13C (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 *     DecPaintCount @ 0x1C001B304 (DecPaintCount.c)
 *     xxxResetTooltip @ 0x1C001B604 (xxxResetTooltip.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C002EB80 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     _DestroyMenu @ 0x1C0035170 (_DestroyMenu.c)
 *     xxxReleaseCapture @ 0x1C0038EA0 (xxxReleaseCapture.c)
 *     InvalidateDCE @ 0x1C00413EC (InvalidateDCE.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     SfnDWORD @ 0x1C004CB10 (SfnDWORD.c)
 *     FindQMsg @ 0x1C0052180 (FindQMsg.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     CleanupIAMAccess @ 0x1C007F870 (CleanupIAMAccess.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C007F9B0 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C0080AA4 (DwmAsyncShellWindowChange.c)
 *     DwmAsyncChildDestroy @ 0x1C0081B48 (DwmAsyncChildDestroy.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetClassPtr @ 0x1C00BA260 (GetClassPtr.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00BCC2C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     UnsetLayeredWindow @ 0x1C00C0BC4 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00C11EC (UnsetRedirectedWindow.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00C2554 (zzzInputFocusLostWindowEvent.c)
 *     DwmAsyncOwnerChange @ 0x1C00C5734 (DwmAsyncOwnerChange.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ClearHungFlag @ 0x1C00D1F84 (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00D204C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowGCData @ 0x1C00D21DC (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1C00D22AC (FreeWindowMessageFilter.c)
 *     UpdatePointerRedirIsAlive @ 0x1C00D22F8 (UpdatePointerRedirIsAlive.c)
 *     _FindActivationFilterWindow @ 0x1C00D2344 (_FindActivationFilterWindow.c)
 *     DereferenceClass @ 0x1C00D2C70 (DereferenceClass.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C00D36FC (GreDeleteSpriteOverlapPresent.c)
 *     ClearSendMessages @ 0x1C00D37C8 (ClearSendMessages.c)
 *     MagpFindThreadContext @ 0x1C00D39A4 (MagpFindThreadContext.c)
 *     DestroyWindowSmIcon @ 0x1C00D39BC (DestroyWindowSmIcon.c)
 *     xxxRemoveFullScreen @ 0x1C00D3E5C (xxxRemoveFullScreen.c)
 *     xxxRemoveShadow @ 0x1C00D3F2C (xxxRemoveShadow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00D442C (xxxClientFreeWindowClassExtraBytes.c)
 *     DeleteHrgnClip @ 0x1C00E7530 (DeleteHrgnClip.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0104474 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C011B100 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C011B2E0 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C011CA90 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     _DeregisterShellHookWindow @ 0x1C01289B0 (_DeregisterShellHookWindow.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C015CBE4 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C015CD78 (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CC2D0 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ChangeComposableCursor @ 0x1C01D3BE8 (ChangeComposableCursor.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D415C (safe_cast_fnid_to_PSWITCHWND.c)
 *     _NotifyOverlayWindow @ 0x1C01D7450 (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F3970 (RemoveSwitchWindowInfo.c)
 *     ?UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z @ 0x1C01F5480 (-UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z.c)
 *     FindSpb @ 0x1C0219E64 (FindSpb.c)
 *     FreeSpb @ 0x1C0219E94 (FreeSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C021D0E8 (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C021E270 (xxxDeferredDesktopRotation.c)
 *     NullifyLookasideRef @ 0x1C0221300 (NullifyLookasideRef.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C0222AC8 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DwmAsyncMagnDestroy @ 0x1C0273C7C (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C0286D50 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxFreeWindow(struct tagWND *a1, struct tagSwitchWndInfo *a2)
{
  __int64 v2; // r8
  int v4; // esi
  __int64 v5; // rcx
  __int64 **v6; // rcx
  __int64 v7; // rbx
  void *v8; // rax
  struct tagWND **v9; // rcx
  struct tagWND **v10; // rcx
  struct tagWND **v11; // rcx
  __int64 v12; // rcx
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  struct tagWND **v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  struct tagINPUTTRANSFORMENTRY **i; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  struct tagWND **v33; // rax
  __int64 v34; // rcx
  struct tagTOOLTIPWND *v35; // rax
  struct tagTOOLTIPWND *v36; // rbx
  __int64 v37; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct tagSHADOW *v42; // rbx
  struct tagSHADOW **v43; // rcx
  struct tagSHADOW **v44; // rax
  __int64 Prop; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rbx
  TOKEN_TYPE v53; // eax
  void *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 ThreadContext; // rax
  __int64 v58; // rbx
  _QWORD *LensContext; // rax
  _QWORD *v60; // rsi
  __int64 v61; // rcx
  _QWORD *v62; // rax
  int v63; // eax
  void *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rcx
  _DWORD *v67; // rax
  _DWORD *v68; // rcx
  _DWORD *v69; // rax
  _DWORD *v70; // rcx
  __int64 v71; // rcx
  __int64 *QMsg; // rax
  __int64 v73; // rbx
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  EWNDOBJ *v79; // rbx
  __int64 *v80; // rsi
  __int64 v81; // rbx
  int v82; // edx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 Spb; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  void *v88; // r8
  void *v89; // r8
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  char *v93; // r14
  __int64 v94; // rdx
  int v95; // eax
  __int64 v96; // rcx
  void *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rbx
  __int64 v104; // r8
  __int64 v105; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rbx
  struct tagWND **v108; // r15
  struct _LIST_ENTRY *v109; // rsi
  struct _LIST_ENTRY *v110; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // rax
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rdx
  _DWORD *v120; // rcx
  _DWORD *v121; // rbx
  __int64 v122; // rbx
  _QWORD *v123; // rax
  __int64 v124; // rcx
  int v125; // edx
  __int64 v126; // rcx
  __int64 v127; // rcx
  void *v128; // rax
  __int64 v129; // r15
  __int64 v130; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v132; // rcx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v138; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v140; // rax
  void *v141; // rcx
  __int64 v142; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *ClassPtr; // rax
  __int64 v145; // [rsp+48h] [rbp-69h] BYREF
  __int128 v146; // [rsp+58h] [rbp-59h] BYREF
  __int64 (*v147)(void); // [rsp+68h] [rbp-49h]
  __int128 v148; // [rsp+70h] [rbp-41h] BYREF
  __int64 v149; // [rsp+80h] [rbp-31h]
  _QWORD v150[2]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v151[2]; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v152[4]; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v153; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v154; // [rsp+D8h] [rbp+27h] BYREF
  struct tagSwitchWndInfo *v155; // [rsp+120h] [rbp+6Fh] BYREF

  v155 = a2;
  v2 = *((_QWORD *)a1 + 3);
  v147 = 0LL;
  v4 = 0;
  v146 = 0LL;
  if ( !v2 )
    goto LABEL_30;
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(v2 + 8) + 168LL) )
  {
    CleanupIAMAccess((struct tagDESKTOP *)v2);
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
    *(_QWORD *)(*(_QWORD *)v5 + 24LL) = 0LL;
    HMAssignmentUnlock(v5 + 168);
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v6 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 8LL);
      v7 = **v6;
      v8 = (void *)ReferenceDwmApiPort(v6);
      DwmAsyncShellWindowChange(v8, 0LL, v7);
    }
    v2 = *((_QWORD *)a1 + 3);
    if ( (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 2) != 0 )
      v4 = 1;
  }
  v9 = (struct tagWND **)(*(_QWORD *)(v2 + 8) + 184LL);
  if ( *v9 == a1 )
  {
    HMAssignmentUnlock(v9);
    v2 = *((_QWORD *)a1 + 3);
  }
  v10 = (struct tagWND **)(*(_QWORD *)(v2 + 8) + 192LL);
  if ( *v10 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v2 + 8) + 24LL) = 0LL;
    HMAssignmentUnlock(v10);
    v2 = *((_QWORD *)a1 + 3);
  }
  v11 = (struct tagWND **)(*(_QWORD *)(v2 + 8) + 200LL);
  if ( *v11 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v2 + 8) + 40LL) = 0LL;
    HMAssignmentUnlock(v11);
    v2 = *((_QWORD *)a1 + 3);
  }
  v12 = v2 + 304;
  if ( *(struct tagWND **)(v2 + 304) == a1 )
  {
LABEL_17:
    HMAssignmentUnlock(v12);
    goto LABEL_22;
  }
  if ( *(struct tagWND **)(v2 + 328) != a1 )
  {
    v12 = v2 + 296;
    if ( a1 != *(struct tagWND **)(v2 + 296) )
    {
      ActivationFilterWindow = (_QWORD *)FindActivationFilterWindow(a1);
      v14 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v15 = *ActivationFilterWindow;
        if ( *(_QWORD **)(v15 + 8) != v14 )
          goto LABEL_261;
        v16 = (_QWORD *)v14[1];
        if ( (_QWORD *)*v16 != v14 )
          goto LABEL_261;
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        HMAssignmentUnlock(v14 + 2);
        Win32FreePool(v14);
      }
      goto LABEL_22;
    }
    goto LABEL_17;
  }
  ShellWindowManagement::SetWindow((ShellWindowManagement *)v2, 0LL, (struct tagWND *)v2);
LABEL_22:
  v17 = *((_QWORD *)a1 + 3);
  if ( *(struct tagWND **)(v17 + 248) == a1 )
  {
    HMAssignmentUnlock(v17 + 248);
    v17 = *((_QWORD *)a1 + 3);
  }
  UpdatePointerRedirIsAlive(*(_QWORD *)(v17 + 8));
  v18 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 232LL);
  if ( *v18 == a1 )
    HMAssignmentUnlock(v18);
  v19 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v19 + 23) & 0x40) != 0 )
  {
    DeregisterShellHookWindow(a1);
    v19 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v19 + 16) & 0x20) != 0 )
  {
    v20 = **(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
    --*(_DWORD *)(v20 + 48);
    SetOrClrWF(0, (__int64)a1, 0x20u, 1);
  }
LABEL_30:
  if ( *((_DWORD *)a1 + 65) )
    CleanupInputDelegation(a1);
  v21 = *((_QWORD *)a1 + 34);
  if ( v21 )
  {
    for ( i = (struct tagINPUTTRANSFORMENTRY **)(v21 + 8); *i != (struct tagINPUTTRANSFORMENTRY *)i; UnlinkAndFreeEntry(*i) )
      ;
    v23 = *((_QWORD *)a1 + 34);
    if ( *(_QWORD *)(v23 + 96) )
    {
      CompositionObject::Release(*(CompositionObject **)(v23 + 96));
      *(_QWORD *)(*((_QWORD *)a1 + 34) + 96LL) = 0LL;
      v23 = *((_QWORD *)a1 + 34);
    }
    Win32FreePool(v23);
    *((_QWORD *)a1 + 34) = 0LL;
  }
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 && gptiCurrent != *((_QWORD *)a1 + 2) )
    HMChangeOwnerThread(a1, gptiCurrent);
  if ( v4 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage((unsigned __int64)a1, 0x82u, 0LL, 0LL);
  xxxRemoveFullScreen(a1);
  v24 = *((_QWORD *)a1 + 5);
  v27 = 12287LL;
  v25 = *(unsigned __int16 *)(v24 + 42);
  v26 = 672LL;
  LOWORD(v27) = v25 & 0x2FFF;
  if ( ((unsigned __int16)v25 & 0x2FFFu) >= 0x29A && (v25 & 0x4000) == 0 )
  {
    if ( (unsigned __int16)v27 > 0x2A0u )
    {
      if ( (unsigned __int16)v27 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
        SfnDWORD((__int64 *)a1, 112, 0LL, 0LL, 0LL, *(_QWORD *)(gpsi + 8LL * (unsigned __int16)v27 - 4608));
    }
    else
    {
      ((void (__fastcall *)(struct tagWND *, __int64, _QWORD))mpFnidPfn[((_BYTE)v25 + 6) & 0x1F])(a1, 112LL, 0LL);
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= 0x4000u;
    v24 = *((_QWORD *)a1 + 5);
  }
  *(_WORD *)(v24 + 42) |= 0x8000u;
  v28 = *((_QWORD *)a1 + 5);
  v29 = *(_QWORD *)(v28 + 296);
  if ( (unsigned __int64)(v29 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (*(_DWORD *)(v28 + 232) & 0x800) != 0 )
    {
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, (PVOID)(v29 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL)));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 296LL) = 0LL;
    }
    else
    {
      *(_QWORD *)(v28 + 296) = 0LL;
      if ( (*(_DWORD *)(PsGetCurrentProcess(v28, v27, v25) + 1124) & 0x40000008) == 0
        && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
      {
        xxxClientFreeWindowClassExtraBytes(a1, v29);
      }
    }
  }
  v30 = *((_QWORD *)a1 + 15);
  if ( v30 )
  {
    v27 = v30 + 200;
    if ( *(struct tagWND **)(v30 + 200) == a1 )
    {
      v31 = *(_QWORD *)(v30 + 40);
      if ( *(char *)(v31 + 19) < 0 || *(char *)(v31 + 20) < 0 )
        v30 = 0LL;
      v150[0] = v27;
      v150[1] = v30;
      HMAssignmentLock(v150);
      v153 = *(_OWORD *)LockPointer(&v154, *((_QWORD *)a1 + 15) + 200LL, *(_QWORD *)(*((_QWORD *)a1 + 15) + 200LL));
      HMAssignmentLock(&v153);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *(struct tagWND **)(gptiCurrent + 784LL) )
    HMAssignmentUnlock(gptiCurrent + 784LL);
  if ( *(struct tagWND **)(gptiCurrent + 1392LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1392LL);
  if ( *(struct tagWND **)(gptiCurrent + 1464LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1464LL);
  v32 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( a1 == *(struct tagWND **)(v32 + 112) )
  {
    HMAssignmentUnlock(v32 + 112);
    v32 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( v32 == gpqForeground )
    {
      zzzInputFocusLostWindowEvent((__int64)a1);
      v32 = *(_QWORD *)(gptiCurrent + 432LL);
    }
  }
  if ( a1 == *(struct tagWND **)(v32 + 128) )
  {
    HMAssignmentUnlock(v32 + 128);
    v32 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  if ( a1 == *(struct tagWND **)(v32 + 120) )
  {
    HMAssignmentUnlock(v32 + 120);
    v32 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  if ( a1 == *(struct tagWND **)(v32 + 136) )
  {
    HMAssignmentUnlock(v32 + 136);
    *(_BYTE *)(v32 + 144) = 0;
  }
  if ( a1 == gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( a1 == gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v33 = (struct tagWND **)*((_QWORD *)a1 + 3);
  if ( v33 )
  {
    if ( a1 == v33[11] )
    {
      HMAssignmentUnlock(v33 + 11);
      v33 = (struct tagWND **)*((_QWORD *)a1 + 3);
    }
    if ( a1 == v33[12] )
    {
      HMAssignmentUnlock(v33 + 12);
      v33 = (struct tagWND **)*((_QWORD *)a1 + 3);
    }
    if ( a1 == v33[23] )
    {
      NotifyShell::WindowBorderExitIfEntered(a1, (struct tagWND *)v27);
      v34 = *((_QWORD *)a1 + 3);
      if ( (*(_DWORD *)(v34 + 48) & 0x200) != 0 )
      {
        v35 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v34 + 112));
        v36 = v35;
        if ( v35 )
        {
          v37 = *(_QWORD *)v35;
          if ( *(_QWORD *)v35 )
          {
            v152[2] = 0LL;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v152[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v152;
            v152[1] = v37;
            HMLockObject(v37);
            xxxResetTooltip(v36);
            ThreadUnlock1(v40, v39, v41);
          }
        }
      }
      HMAssignmentUnlock(*((_QWORD *)a1 + 3) + 184LL);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFFA3F;
    }
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) )
    xxxReleaseCapture();
  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == gatomShadow )
  {
    v42 = gpshadowFirst;
    v43 = &gpshadowFirst;
    while ( v42 )
    {
      v44 = (struct tagSHADOW **)((char *)v42 + 16);
      if ( *((struct tagWND **)v42 + 1) == a1 )
      {
        *v43 = *v44;
        HMAssignmentUnlock(v42);
        HMAssignmentUnlock((char *)v42 + 8);
        Win32FreePool(v42);
        break;
      }
      v42 = *v44;
      v43 = v44;
    }
  }
  else
  {
    xxxRemoveShadow(a1);
  }
  DestroyWindowSmIcon(a1, v27, v25, v26);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = 0LL;
  if ( *((_QWORD *)a1 + 18) )
  {
    v149 = 0LL;
    v148 = 0LL;
    Prop = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      *(_QWORD *)&v148 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v148;
      *((_QWORD *)&v148 + 1) = Prop;
      HMLockObject(Prop);
      xxxDDETrackWindowDying(a1, Prop);
      ThreadUnlock1(v47, v46, v48);
    }
    v49 = (unsigned __int16)atomDDEImp;
    v50 = *((_QWORD *)a1 + 18);
    if ( atomDDEImp == word_1C0339F54 )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    v51 = RealInternalRemoveProp(v50, v49, 1LL);
    v52 = v51;
    if ( v51 )
    {
      *(_WORD *)(v51 + 88) = 0;
      if ( !*(_WORD *)(v51 + 90) )
      {
        v53 = SeTokenType(*(PACCESS_TOKEN *)(v51 + 32));
        v54 = *(void **)(v52 + 32);
        if ( v53 == TokenPrimary || v54 )
          ObfDereferenceObject(v54);
        Win32FreePool(v52);
      }
    }
    v55 = (unsigned __int16)gatomMonitorInheritance;
    v56 = *((_QWORD *)a1 + 18);
    if ( gatomMonitorInheritance == word_1C0339F54 )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    RealInternalRemoveProp(v56, v55, 1LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x12u, *(_QWORD *)a1);
  HandleFullWindowDestruction(a1);
  if ( a1 == (struct tagWND *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( a1 == (struct tagWND *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  ThreadContext = MagpFindThreadContext(*(_QWORD *)&gMagnContext, gptiCurrent);
  v58 = ThreadContext;
  if ( ThreadContext )
  {
    LensContext = (_QWORD *)MagpFindLensContext(ThreadContext, a1, 2LL);
    v60 = LensContext;
    if ( LensContext )
    {
      v61 = *LensContext;
      if ( *(_QWORD **)(*LensContext + 8LL) == LensContext )
      {
        v62 = (_QWORD *)LensContext[1];
        if ( (_QWORD *)*v62 == v60 )
        {
          *v62 = v61;
          *(_QWORD *)(v61 + 8) = v62;
          v63 = *((_DWORD *)v60 + 4);
          if ( (v63 & 0x40) != 0 )
          {
            ChangeComposableCursor(0LL);
            *((_DWORD *)v60 + 4) &= ~0x40u;
            v63 = *((_DWORD *)v60 + 4);
          }
          if ( (v63 & 0x20) == 0 )
          {
            v64 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v58 + 16) + 456LL) + 8LL));
            DwmAsyncMagnDestroy(v64);
          }
          if ( (unsigned __int64)(v60[3] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
            HMAssignmentUnlock(v60 + 3);
          v65 = v60[29];
          if ( v65 )
            Win32FreePool(v65);
          v66 = v60[32];
          if ( v66 )
            Win32FreePool(v66);
          Win32FreePool(v60);
          goto LABEL_140;
        }
      }
LABEL_261:
      __fastfail(3u);
    }
  }
LABEL_140:
  HKRemoveMatchingHotkeys(0LL, (__int64)a1, 0, 1);
  v67 = (_DWORD *)*((_QWORD *)a1 + 36);
  if ( v67 )
  {
    --*v67;
    v68 = (_DWORD *)*((_QWORD *)a1 + 36);
    if ( !*v68 )
      Win32FreePool(v68);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  v69 = (_DWORD *)*((_QWORD *)a1 + 37);
  if ( v69 )
  {
    --*v69;
    v70 = (_DWORD *)*((_QWORD *)a1 + 37);
    if ( !*v70 )
      Win32FreePool(v70);
    *((_QWORD *)a1 + 37) = 0LL;
  }
  if ( !gbInSMSCleanup )
    ClearSendMessages(a1);
  v71 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v71 + 26) & 8) != 0 )
  {
    UnsetLayeredWindow(a1, 1);
    v71 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v71 + 27) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1, 2);
    SetOrClrWF(0, (__int64)a1, 0xB02u, 1);
    v71 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v71 + 232) & 4) != 0 )
  {
    UnsetRedirectedWindow(a1, 8);
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~4u;
    v71 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v71 + 136) || (*(_BYTE *)(v71 + 17) & 0x10) != 0 )
  {
    DecPaintCount((__int64)a1);
    DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
    SetOrClrWF(0, (__int64)a1, 0x110u, 1);
    v71 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v71 + 17) & 0xA) != 0 )
  {
    SetOrClrWF(0, (__int64)a1, 0x108u, 1);
    SetOrClrWF(0, (__int64)a1, 0x102u, 1);
  }
  ClearHungFlag(a1);
  ClearHungFlag(a1);
  if ( *(_QWORD *)(gptiCurrent + 808LL) )
  {
    QMsg = FindQMsg(gptiCurrent, (struct tagMLIST *)(gptiCurrent + 808LL), (__int64 *)a1, 0x12u, 0x12u, 1);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *((_DWORD *)QMsg + 8));
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v73 = *((_QWORD *)a1 + 21);
    if ( v73 )
    {
      if ( UnlockWndMenuWorker(a1, 0) )
        DestroyMenu(v73);
    }
  }
  v74 = *((_QWORD *)a1 + 20);
  if ( v74 )
  {
    if ( v74 == *(_QWORD *)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenuWorker(a1, 1);
    }
    else if ( UnlockWndMenuWorker(a1, 1) )
    {
      DestroyMenu(v74);
    }
  }
  v75 = *((_QWORD *)a1 + 3);
  if ( v75 )
  {
    if ( (v76 = *(_QWORD *)(v75 + 56)) != 0 && a1 == *(struct tagWND **)(v76 + 80)
      || (v76 = *(_QWORD *)(v75 + 64)) != 0 && a1 == *(struct tagWND **)(v76 + 80) )
    {
      UnlockNotifyWindow((struct tagMENU *)v76);
    }
  }
  if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
  {
    v77 = (unsigned __int16)atomWndObj;
    v78 = *((_QWORD *)a1 + 18);
    if ( atomWndObj == word_1C0339F54 )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    v79 = (EWNDOBJ *)RealInternalRemoveProp(v78, v77, 1LL);
    if ( v79 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteWnd(v79);
      --HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v80 = (__int64 *)(gpDispInfo + 24LL);
  v81 = *(_QWORD *)(gpDispInfo + 24LL);
  if ( v81 )
  {
    do
    {
      v82 = *(_DWORD *)(v81 + 64);
      if ( (v82 & 0x400800) != 0 )
      {
LABEL_197:
        v84 = *(_QWORD *)v81;
        v80 = (__int64 *)v81;
        goto LABEL_198;
      }
      v83 = *(_QWORD *)(v81 + 16);
      if ( (struct tagWND *)v83 == a1 || *(struct tagWND **)(v81 + 24) == a1 || *(struct tagWND **)(v81 + 32) == a1 )
      {
        if ( (v82 & 2) == 0 )
        {
          if ( v81 == *(_QWORD *)(*(_QWORD *)(v83 + 136) + 40LL) || v81 != *(_QWORD *)(v83 + 248) )
          {
            if ( (v82 & 0xC0) != 0 )
              DeleteHrgnClip(v81);
LABEL_195:
            InvalidateDCE(v81);
            goto LABEL_196;
          }
          *(_QWORD *)(v83 + 248) = 0LL;
          goto LABEL_227;
        }
        if ( (v82 & 0x1000) != 0 )
        {
          if ( *(_QWORD *)(v81 + 72) == gptiCurrent )
          {
            v95 = ReleaseCacheDC(*(_QWORD *)(v81 + 8), 0LL);
          }
          else
          {
            DestroyCacheDC(v80, *(_QWORD *)(v81 + 8));
            v95 = 1;
          }
        }
        else
        {
          if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v81 + 8), 2147483666LL, 0LL, 0LL) )
            goto LABEL_195;
          v95 = 2;
        }
        if ( v95 != 1 )
        {
          if ( v95 != 2 )
            goto LABEL_195;
LABEL_227:
          DestroyCacheDC(v80, *(_QWORD *)(v81 + 8));
        }
      }
LABEL_196:
      v84 = *v80;
      if ( v81 == *v80 )
        goto LABEL_197;
LABEL_198:
      v81 = v84;
    }
    while ( v84 );
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 == gspwndLockUpdate )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  v86 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v86 + 16) < 0 )
  {
    v87 = FindSpb(a1);
    FreeSpb(v87);
    v86 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v86 + 168) && (*(_BYTE *)(v86 + 21) & 8) == 0 && (*(_WORD *)(v86 + 42) & 0x2FFF) != 0x29D )
  {
    GreDeleteObject(*(_QWORD *)(v86 + 168));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) = 0LL;
  }
  v88 = (void *)*((_QWORD *)a1 + 19);
  if ( v88 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v88);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
    *((_QWORD *)a1 + 19) = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x400) != 0 )
    NotifyOverlayWindow(a1, 0LL);
  v89 = (void *)*((_QWORD *)a1 + 23);
  if ( v89 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v89);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 192LL) = 0LL;
    *((_QWORD *)a1 + 23) = 0LL;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
  }
  v90 = *((_QWORD *)a1 + 27);
  if ( v90 )
  {
    Win32FreePool(v90);
    *((_QWORD *)a1 + 27) = 0LL;
  }
  v91 = *((_QWORD *)a1 + 3);
  if ( !v91 || (v92 = *(_QWORD *)(*(_QWORD *)(v91 + 8) + 24LL), a1 == (struct tagWND *)v92) )
  {
    v93 = (char *)a1 + 104;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 104);
  }
  else
  {
    v93 = (char *)a1 + 104;
    if ( v92 )
      v94 = *(_QWORD *)(v92 + 48);
    else
      v94 = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = v94;
    v151[1] = v92;
    v151[0] = (char *)a1 + 104;
    HMAssignmentLock(v151);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 112);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 120);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 176LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 200);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v97 = (void *)ReferenceDwmApiPort(v96);
    DwmAsyncOwnerChange(v97, *(_QWORD *)a1, 0LL);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL));
  HMMarkObjectDestroy(a1);
  v98 = _HMPheFromObject(a1);
  *(_BYTE *)(v98 + 25) |= 2u;
  v103 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v100, v99, v101) + 664);
  if ( v103 )
  {
    if ( *(struct tagWND **)(v103 + 96) == a1 )
    {
      HMAssignmentUnlock(v103 + 96);
      *(_QWORD *)(v103 + 80) = 0LL;
    }
    if ( *(struct tagWND **)(v103 + 112) == a1 )
      HMAssignmentUnlock(v103 + 112);
    if ( *(struct tagWND **)(v103 + 104) == a1 )
      HMAssignmentUnlock(v103 + 104);
  }
  v105 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
  if ( (v105 & 1) != 0 )
    _RemoveClipboardFormatListener(a1, v102);
  result = ThreadUnlock1(v105, v102, v104);
  if ( result )
  {
    Flink = gPointerDeviceClients.Flink;
    while ( Flink != &gPointerDeviceClients )
    {
      v108 = (struct tagWND **)&Flink[-1];
      v109 = Flink;
      Flink = Flink->Flink;
      if ( a1 == *v108 )
      {
        HMAssignmentUnlock(v108);
        v110 = v109->Flink;
        if ( v109->Flink->Blink != v109 )
          goto LABEL_261;
        Blink = v109->Blink;
        if ( Blink->Flink != v109 )
          goto LABEL_261;
        Blink->Flink = v110;
        v110->Blink = Blink;
        Win32FreePool(v108);
      }
    }
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 18) )
        DeleteProperties(a1);
      if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2A0 )
      {
        v115 = safe_cast_fnid_to_PSWITCHWND(a1);
        v116 = v115;
        if ( v115 )
        {
          v155 = *(struct tagSwitchWndInfo **)(v115 + 8);
          if ( v155 )
          {
            RemoveSwitchWindowInfo(&v155);
            *(_QWORD *)(v116 + 8) = 0LL;
          }
        }
      }
      v117 = safe_cast_fnid_to_PMENUWND(a1);
      v118 = v117;
      if ( v117 )
      {
        v119 = *(_QWORD *)(v117 + 16);
        if ( v119 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v145, v119);
          v120 = *(_DWORD **)v145;
          if ( (**(_DWORD **)v145 & 0x20000000) != 0 )
          {
            *v120 &= ~0x40000000u;
          }
          else if ( v120 == gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
            NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
          }
          else
          {
            v121 = *(_DWORD **)v145;
            NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v145 + 88LL));
            UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v121);
            *(_QWORD *)(v118 + 16) = 0LL;
          }
          v122 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          if ( v145 != gSmartObjNullRef && !--*(_DWORD *)(v145 + 8) )
          {
            if ( *(_BYTE *)(v145 + 12) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v145);
          }
          v123 = *(_QWORD **)(v122 + 1472);
          if ( v123 )
            *(_QWORD *)(v122 + 1472) = *v123;
        }
      }
      v124 = *((_QWORD *)a1 + 35);
      if ( v124 )
      {
        Win32FreePool(v124);
        *((_QWORD *)a1 + 35) = 0LL;
      }
      --*(_DWORD *)(gptiCurrent + 896LL);
      if ( (unsigned __int8)tagWND::HasState(a1) )
      {
        *((_DWORD *)a1 + 81) &= ~0x20000000u;
        *(_DWORD *)(gptiCurrent + 904LL) += v125;
      }
      if ( (unsigned int)IsWindowDesktopComposed(v126) )
      {
        v128 = (void *)ReferenceDwmApiPort(v127);
        DwmAsyncChildDestroy(v128, *(_QWORD *)a1);
      }
      *(_QWORD *)(*((_QWORD *)v93 - 8) + 48LL) = 0LL;
      HMAssignmentUnlock(v93);
      v129 = *((_QWORD *)a1 + 3);
      v130 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v132)
        || (CurrentProcess = PsGetCurrentProcess(v134, v133, v135),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v138),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        v140 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v140 )
          v130 = *v140;
      }
      *(_QWORD *)&v146 = *(_QWORD *)(v130 + 16);
      *(_QWORD *)(v130 + 16) = &v146;
      v141 = (void *)*((_QWORD *)a1 + 3);
      *((_QWORD *)&v146 + 1) = v129;
      v147 = (__int64 (*)(void))UserDereferenceObject;
      if ( v141 )
        ObfReferenceObject(v141);
      tagObjLock::LockUnInitializeThreadCreator((struct tagWND *)((char *)a1 + 56));
      HMFreeObject(a1);
      result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(result + 16) = v146;
      if ( *((_QWORD *)&v146 + 1) )
        return v147();
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = 0LL;
      v142 = *((_QWORD *)a1 + 3);
      if ( v142 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v142 + 40) + 56LL) + 16LL) + 424LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v113, v112, v114);
      ClassPtr = (_QWORD *)GetClassPtr(*(unsigned __int16 *)(gpsi + 910LL), CurrentProcessWin32Process, hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)a1 + 136, *ClassPtr);
      ++*(_DWORD *)(*((_QWORD *)a1 + 17) + 72LL);
      SetOrClrWF(1, (__int64)a1, 0x204u, 1);
      SetOrClrWF(0, (__int64)a1, 0x220u, 1);
      SetOrClrWF(0, (__int64)a1, 0xFC0u, 1);
      SetOrClrWF(1, (__int64)a1, 0xF00u, 1);
      result = *((_QWORD *)a1 + 5);
      *(_QWORD *)(result + 152) = 0LL;
      *((_QWORD *)a1 + 21) = 0LL;
    }
  }
  return result;
}
