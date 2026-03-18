/*
 * XREFs of xxxFreeWindow @ 0x1C008B600
 * Callers:
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C008CD2C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     DwmAsyncChildDestroy @ 0x1C000ED30 (DwmAsyncChildDestroy.c)
 *     GetClassPtr @ 0x1C001E2B0 (GetClassPtr.c)
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0032AA8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     DwmAsyncOwnerChange @ 0x1C0033524 (DwmAsyncOwnerChange.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00350E4 (zzzInputFocusLostWindowEvent.c)
 *     xxxReleaseCapture @ 0x1C00359E0 (xxxReleaseCapture.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C003D390 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     UnsetLayeredWindow @ 0x1C004EA28 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     xxxResetTooltip @ 0x1C00570C0 (xxxResetTooltip.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0057164 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C00582F4 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     ClearHungFlag @ 0x1C008CC64 (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C008CD2C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowGCData @ 0x1C008CEBC (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1C008CF8C (FreeWindowMessageFilter.c)
 *     UpdatePointerRedirIsAlive @ 0x1C008CFD8 (UpdatePointerRedirIsAlive.c)
 *     _FindActivationFilterWindow @ 0x1C008D024 (_FindActivationFilterWindow.c)
 *     DereferenceClass @ 0x1C008D950 (DereferenceClass.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C008E35C (GreDeleteSpriteOverlapPresent.c)
 *     ClearSendMessages @ 0x1C008E428 (ClearSendMessages.c)
 *     MagpFindThreadContext @ 0x1C008E604 (MagpFindThreadContext.c)
 *     DestroyWindowSmIcon @ 0x1C008E61C (DestroyWindowSmIcon.c)
 *     xxxRemoveFullScreen @ 0x1C008EABC (xxxRemoveFullScreen.c)
 *     xxxRemoveShadow @ 0x1C008EB8C (xxxRemoveShadow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C008F2E4 (xxxClientFreeWindowClassExtraBytes.c)
 *     FindQMsg @ 0x1C00964B0 (FindQMsg.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     SfnDWORD @ 0x1C00A3480 (SfnDWORD.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _DestroyMenu @ 0x1C00AF380 (_DestroyMenu.c)
 *     CleanupIAMAccess @ 0x1C00BF4E0 (CleanupIAMAccess.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C00BF620 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C00BFAE0 (DwmAsyncShellWindowChange.c)
 *     IPostQuitMessage @ 0x1C00C0274 (IPostQuitMessage.c)
 *     FreeTimer @ 0x1C00C0BD0 (FreeTimer.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00C3A0C (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DeleteHrgnClip @ 0x1C00E8490 (DeleteHrgnClip.c)
 *     InvalidateDCE @ 0x1C00E87D8 (InvalidateDCE.c)
 *     DecPaintCount @ 0x1C00F0544 (DecPaintCount.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0103F34 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C011A250 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     _DeregisterShellHookWindow @ 0x1C0126FF0 (_DeregisterShellHookWindow.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C015920C (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C0159410 (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     Feature_Servicing_2109c_34956946__private_IsEnabled @ 0x1C0159424 (Feature_Servicing_2109c_34956946__private_IsEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CD0E4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ChangeComposableCursor @ 0x1C01D49F8 (ChangeComposableCursor.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D4ED8 (safe_cast_fnid_to_PSWITCHWND.c)
 *     _NotifyOverlayWindow @ 0x1C01D8110 (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F45E0 (RemoveSwitchWindowInfo.c)
 *     ?UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z @ 0x1C01F62E8 (-UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z.c)
 *     FindSpb @ 0x1C021ACF4 (FindSpb.c)
 *     FreeSpb @ 0x1C021AD24 (FreeSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C021DF78 (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C021F100 (xxxDeferredDesktopRotation.c)
 *     NullifyLookasideRef @ 0x1C0222190 (NullifyLookasideRef.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C0223958 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DwmAsyncMagnDestroy @ 0x1C02751E4 (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C02882C0 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxFreeWindow(NotifyShell *this, struct tagSwitchWndInfo *a2)
{
  __int64 v2; // r8
  int v4; // esi
  __int64 v5; // rcx
  void *v6; // rax
  NotifyShell **v7; // rcx
  NotifyShell **v8; // rcx
  NotifyShell **v9; // rcx
  __int64 v10; // rcx
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  NotifyShell **v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  struct tagINPUTTRANSFORMENTRY **i; // rbx
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  NotifyShell **v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  struct tagTOOLTIPWND *v35; // rax
  struct tagTOOLTIPWND *v36; // rbx
  __int64 v37; // r9
  __int64 v38; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct tagSHADOW *v43; // rbx
  struct tagSHADOW **v44; // rcx
  struct tagSHADOW **v45; // rax
  __int64 Prop; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rbx
  TOKEN_TYPE v54; // eax
  void *v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 ThreadContext; // rax
  __int64 v59; // rbx
  _QWORD *LensContext; // rax
  _QWORD *v61; // rsi
  __int64 v62; // rcx
  _QWORD *v63; // rax
  int v64; // eax
  void *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rcx
  _DWORD *v68; // rax
  _DWORD *v69; // rcx
  _DWORD *v70; // rax
  _DWORD *v71; // rcx
  __int64 v72; // rcx
  __int64 QMsg; // rax
  __int64 v74; // rbx
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  EWNDOBJ *v80; // rbx
  __int64 **v81; // rsi
  __int64 *v82; // rbx
  int v83; // edx
  NotifyShell *v84; // rcx
  __int64 *v85; // rax
  __int64 Spb; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  void *v89; // r8
  void *v90; // r8
  __int64 v91; // rcx
  __int64 v92; // rax
  NotifyShell *v93; // rcx
  char *v94; // r14
  __int64 v95; // rdx
  int v96; // eax
  __int64 v97; // rcx
  void *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rbx
  __int64 v103; // r8
  __int64 v104; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rbx
  NotifyShell **v107; // r15
  struct _LIST_ENTRY *v108; // rsi
  struct _LIST_ENTRY *v109; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rsi
  __int64 v116; // rdx
  _DWORD *v117; // rcx
  _DWORD *v118; // rbx
  __int64 v119; // rbx
  _QWORD *v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rcx
  void *v123; // rax
  __int64 v124; // r15
  __int64 v125; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v133; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v135; // rax
  void *v136; // rcx
  __int64 v137; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *ClassPtr; // rax
  __int64 v140; // [rsp+48h] [rbp-69h] BYREF
  __int128 v141; // [rsp+58h] [rbp-59h] BYREF
  __int64 (*v142)(void); // [rsp+68h] [rbp-49h]
  __int128 v143; // [rsp+70h] [rbp-41h] BYREF
  __int64 v144; // [rsp+80h] [rbp-31h]
  _QWORD v145[2]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v146[2]; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v147[4]; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v148; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v149; // [rsp+D8h] [rbp+27h] BYREF
  struct tagSwitchWndInfo *v150; // [rsp+120h] [rbp+6Fh] BYREF

  v150 = a2;
  v2 = *((_QWORD *)this + 3);
  v142 = 0LL;
  v4 = 0;
  v141 = 0LL;
  if ( !v2 )
    goto LABEL_30;
  if ( this == *(NotifyShell **)(*(_QWORD *)(v2 + 8) + 168LL) )
  {
    CleanupIAMAccess((struct tagDESKTOP *)v2);
    v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL);
    *(_QWORD *)(*(_QWORD *)v5 + 24LL) = 0LL;
    HMAssignmentUnlock(v5 + 168);
    if ( (unsigned int)IsWindowDesktopComposed(this) )
    {
      v6 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL));
      DwmAsyncShellWindowChange(v6);
    }
    v2 = *((_QWORD *)this + 3);
    if ( (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 2) != 0 )
      v4 = 1;
  }
  v7 = (NotifyShell **)(*(_QWORD *)(v2 + 8) + 184LL);
  if ( *v7 == this )
  {
    HMAssignmentUnlock(v7);
    v2 = *((_QWORD *)this + 3);
  }
  v8 = (NotifyShell **)(*(_QWORD *)(v2 + 8) + 192LL);
  if ( *v8 == this )
  {
    *(_QWORD *)(**(_QWORD **)(v2 + 8) + 24LL) = 0LL;
    HMAssignmentUnlock(v8);
    v2 = *((_QWORD *)this + 3);
  }
  v9 = (NotifyShell **)(*(_QWORD *)(v2 + 8) + 200LL);
  if ( *v9 == this )
  {
    *(_QWORD *)(**(_QWORD **)(v2 + 8) + 40LL) = 0LL;
    HMAssignmentUnlock(v9);
    v2 = *((_QWORD *)this + 3);
  }
  v10 = v2 + 304;
  if ( *(NotifyShell **)(v2 + 304) == this )
  {
LABEL_17:
    HMAssignmentUnlock(v10);
    goto LABEL_22;
  }
  if ( *(NotifyShell **)(v2 + 328) != this )
  {
    v10 = v2 + 296;
    if ( this != *(NotifyShell **)(v2 + 296) )
    {
      ActivationFilterWindow = (_QWORD *)FindActivationFilterWindow(this);
      v12 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v13 = *ActivationFilterWindow;
        if ( *(_QWORD **)(v13 + 8) != v12 )
          goto LABEL_264;
        v14 = (_QWORD *)v12[1];
        if ( (_QWORD *)*v14 != v12 )
          goto LABEL_264;
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        HMAssignmentUnlock(v12 + 2);
        Win32FreePool(v12);
      }
      goto LABEL_22;
    }
    goto LABEL_17;
  }
  ShellWindowManagement::SetWindow((ShellWindowManagement *)v2, 0LL, (struct tagWND *)v2);
LABEL_22:
  v15 = *((_QWORD *)this + 3);
  if ( *(NotifyShell **)(v15 + 248) == this )
  {
    HMAssignmentUnlock(v15 + 248);
    v15 = *((_QWORD *)this + 3);
  }
  UpdatePointerRedirIsAlive(*(_QWORD *)(v15 + 8));
  v16 = (NotifyShell **)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 232LL);
  if ( *v16 == this )
    HMAssignmentUnlock(v16);
  v17 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v17 + 23) & 0x40) != 0 )
  {
    DeregisterShellHookWindow(this);
    v17 = *((_QWORD *)this + 5);
  }
  if ( (*(_BYTE *)(v17 + 16) & 0x20) != 0 )
  {
    v18 = **(_QWORD **)(*((_QWORD *)this + 3) + 8LL);
    --*(_DWORD *)(v18 + 48);
    SetOrClrWF(0LL, this, 32LL, 1LL);
  }
LABEL_30:
  if ( *((_DWORD *)this + 65) )
    CleanupInputDelegation(this);
  v19 = *((_QWORD *)this + 34);
  if ( v19 )
  {
    for ( i = (struct tagINPUTTRANSFORMENTRY **)(v19 + 8); *i != (struct tagINPUTTRANSFORMENTRY *)i; UnlinkAndFreeEntry(*i) )
      ;
    v21 = *((_QWORD *)this + 34);
    if ( *(_QWORD *)(v21 + 96) )
    {
      CompositionObject::Release(*(CompositionObject **)(v21 + 96));
      *(_QWORD *)(*((_QWORD *)this + 34) + 96LL) = 0LL;
      v21 = *((_QWORD *)this + 34);
    }
    Win32FreePool(v21);
    *((_QWORD *)this + 34) = 0LL;
  }
  FreeWindowMessageFilter(this);
  FreeWindowGCData(this);
  if ( (unsigned int)Feature_Servicing_2109c_34956946__private_IsEnabled() )
  {
    if ( (*(_BYTE *)(_HMPheFromObject(this) + 25) & 1) == 0 )
      goto LABEL_45;
    v22 = gptiCurrent == *((_QWORD *)this + 2);
  }
  else
  {
    v22 = (*(_BYTE *)(_HMPheFromObject(this) + 25) & 1) == 0;
  }
  if ( !v22 )
    HMChangeOwnerThread(this, gptiCurrent);
LABEL_45:
  if ( v4 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(this);
  xxxSendMessage(this, 130LL, 0LL, 0LL);
  xxxRemoveFullScreen(this);
  v23 = *((_QWORD *)this + 5);
  v26 = 0x3FFFLL;
  v24 = *(unsigned __int16 *)(v23 + 42);
  v25 = 672LL;
  LOWORD(v26) = v24 & 0x3FFF;
  if ( ((unsigned __int16)v24 & 0x3FFFu) >= 0x29A && (v24 & 0x4000) == 0 )
  {
    if ( (unsigned __int16)v26 > 0x2A0u )
    {
      if ( (unsigned __int16)v26 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
        SfnDWORD((_DWORD)this, 112, 0, 0, 0LL, *(_QWORD *)(gpsi + 8LL * (unsigned __int16)v26 - 4608));
    }
    else
    {
      ((void (__fastcall *)(NotifyShell *, __int64, _QWORD))mpFnidPfn[((_BYTE)v24 + 6) & 0x1F])(this, 112LL, 0LL);
    }
    *(_WORD *)(*((_QWORD *)this + 5) + 42LL) |= 0x4000u;
    v23 = *((_QWORD *)this + 5);
  }
  *(_WORD *)(v23 + 42) |= 0x8000u;
  v27 = *((_QWORD *)this + 5);
  v28 = *(_QWORD *)(v27 + 296);
  if ( (unsigned __int64)(v28 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (*(_DWORD *)(v27 + 232) & 0x800) != 0 )
    {
      RtlFreeHeap(
        *(PVOID *)(*((_QWORD *)this + 3) + 128LL),
        0,
        (PVOID)(*(_QWORD *)(*((_QWORD *)this + 3) + 128LL) + v28));
      *(_QWORD *)(*((_QWORD *)this + 5) + 296LL) = 0LL;
    }
    else
    {
      *(_QWORD *)(v27 + 296) = 0LL;
      if ( (*(_DWORD *)(PsGetCurrentProcess(v27, v26, v24) + 1124) & 0x40000008) == 0
        && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
      {
        xxxClientFreeWindowClassExtraBytes(this, v28);
      }
    }
  }
  v29 = *((_QWORD *)this + 15);
  if ( v29 )
  {
    v26 = v29 + 200;
    if ( *(NotifyShell **)(v29 + 200) == this )
    {
      v30 = *(_QWORD *)(v29 + 40);
      if ( *(char *)(v30 + 19) < 0 || *(char *)(v30 + 20) < 0 )
        v29 = 0LL;
      v145[0] = v26;
      v145[1] = v29;
      HMAssignmentLock(v145);
      v148 = *(_OWORD *)LockPointer(&v149, *((_QWORD *)this + 15) + 200LL, *(_QWORD *)(*((_QWORD *)this + 15) + 200LL));
      HMAssignmentLock(&v148);
    }
  }
  if ( (*gpsi & 4) != 0 && this == *(NotifyShell **)(gptiCurrent + 776LL) )
    HMAssignmentUnlock(gptiCurrent + 776LL);
  if ( *(NotifyShell **)(gptiCurrent + 1384LL) == this )
    HMAssignmentUnlock(gptiCurrent + 1384LL);
  if ( *(NotifyShell **)(gptiCurrent + 1456LL) == this )
    HMAssignmentUnlock(gptiCurrent + 1456LL);
  v31 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( this == *(NotifyShell **)(v31 + 112) )
  {
    HMAssignmentUnlock(v31 + 112);
    v31 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( v31 == gpqForeground )
    {
      zzzInputFocusLostWindowEvent((__int64)this);
      v31 = *(_QWORD *)(gptiCurrent + 424LL);
    }
  }
  if ( this == *(NotifyShell **)(v31 + 128) )
  {
    HMAssignmentUnlock(v31 + 128);
    v31 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  if ( this == *(NotifyShell **)(v31 + 120) )
  {
    HMAssignmentUnlock(v31 + 120);
    v31 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  if ( this == *(NotifyShell **)(v31 + 136) )
  {
    HMAssignmentUnlock(v31 + 136);
    *(_BYTE *)(v31 + 144) = 0;
  }
  if ( this == gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( this == gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v32 = (NotifyShell **)*((_QWORD *)this + 3);
  if ( v32 )
  {
    if ( this == v32[11] )
    {
      HMAssignmentUnlock(v32 + 11);
      v32 = (NotifyShell **)*((_QWORD *)this + 3);
    }
    if ( this == v32[12] )
    {
      HMAssignmentUnlock(v32 + 12);
      v32 = (NotifyShell **)*((_QWORD *)this + 3);
    }
    if ( this == v32[23] )
    {
      NotifyShell::WindowBorderExitIfEntered(this, (struct tagWND *)v26);
      v33 = *((_QWORD *)this + 3);
      v34 = v33;
      if ( (*(_DWORD *)(v33 + 48) & 0x200) != 0 )
      {
        v35 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v33 + 112));
        v36 = v35;
        v34 = v37;
        if ( v35 )
        {
          v38 = *(_QWORD *)v35;
          if ( *(_QWORD *)v35 )
          {
            v147[2] = 0LL;
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v147[0] = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = v147;
            v147[1] = v38;
            HMLockObject(v38);
            xxxResetTooltip(v36);
            ThreadUnlock1(v41, v40, v42);
            v34 = *((_QWORD *)this + 3);
          }
        }
      }
      HMAssignmentUnlock(v34 + 184);
      *(_DWORD *)(*((_QWORD *)this + 3) + 48LL) &= 0xFFFFFA3F;
    }
  }
  if ( this == *(NotifyShell **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) )
    xxxReleaseCapture();
  if ( **(_WORD **)(*((_QWORD *)this + 17) + 8LL) == gatomShadow )
  {
    v43 = gpshadowFirst;
    v44 = &gpshadowFirst;
    while ( v43 )
    {
      v45 = (struct tagSHADOW **)((char *)v43 + 16);
      if ( *((NotifyShell **)v43 + 1) == this )
      {
        *v44 = *v45;
        HMAssignmentUnlock(v43);
        HMAssignmentUnlock((char *)v43 + 8);
        Win32FreePool(v43);
        break;
      }
      v43 = *v45;
      v44 = v45;
    }
  }
  else
  {
    xxxRemoveShadow(this);
  }
  DestroyWindowSmIcon(this, v26, v24, v25);
  *(_QWORD *)(*((_QWORD *)this + 5) + 272LL) = 0LL;
  if ( *((_QWORD *)this + 18) )
  {
    v144 = 0LL;
    v143 = 0LL;
    Prop = GetProp((__int64)this, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      *(_QWORD *)&v143 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v143;
      *((_QWORD *)&v143 + 1) = Prop;
      HMLockObject(Prop);
      xxxDDETrackWindowDying(this, Prop);
      ThreadUnlock1(v48, v47, v49);
    }
    v50 = (unsigned __int16)atomDDEImp;
    v51 = *((_QWORD *)this + 18);
    if ( atomDDEImp == word_1C033AF24 )
      *(_QWORD *)(*((_QWORD *)this + 5) + 312LL) = 0LL;
    v52 = RealInternalRemoveProp(v51, v50, 1LL);
    v53 = v52;
    if ( v52 )
    {
      *(_WORD *)(v52 + 88) = 0;
      if ( !*(_WORD *)(v52 + 90) )
      {
        v54 = SeTokenType(*(PACCESS_TOKEN *)(v52 + 32));
        v55 = *(void **)(v53 + 32);
        if ( v54 == TokenPrimary || v55 )
          ObfDereferenceObject(v55);
        Win32FreePool(v53);
      }
    }
    v56 = (unsigned __int16)gatomMonitorInheritance;
    v57 = *((_QWORD *)this + 18);
    if ( gatomMonitorInheritance == word_1C033AF24 )
      *(_QWORD *)(*((_QWORD *)this + 5) + 312LL) = 0LL;
    RealInternalRemoveProp(v57, v56, 1LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 234LL) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x12u, *(_QWORD *)this);
  HandleFullWindowDestruction(this);
  if ( this == (NotifyShell *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( this == (NotifyShell *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  ThreadContext = MagpFindThreadContext(*(_QWORD *)&gMagnContext, gptiCurrent);
  v59 = ThreadContext;
  if ( ThreadContext )
  {
    LensContext = (_QWORD *)MagpFindLensContext(ThreadContext, this, 2LL);
    v61 = LensContext;
    if ( LensContext )
    {
      v62 = *LensContext;
      if ( *(_QWORD **)(*LensContext + 8LL) == LensContext )
      {
        v63 = (_QWORD *)LensContext[1];
        if ( (_QWORD *)*v63 == v61 )
        {
          *v63 = v62;
          *(_QWORD *)(v62 + 8) = v63;
          v64 = *((_DWORD *)v61 + 4);
          if ( (v64 & 0x40) != 0 )
          {
            ChangeComposableCursor(0LL);
            *((_DWORD *)v61 + 4) &= ~0x40u;
            v64 = *((_DWORD *)v61 + 4);
          }
          if ( (v64 & 0x20) == 0 )
          {
            v65 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v59 + 16) + 448LL) + 8LL));
            DwmAsyncMagnDestroy(v65);
          }
          if ( (unsigned __int64)(v61[3] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
            HMAssignmentUnlock(v61 + 3);
          v66 = v61[29];
          if ( v66 )
            Win32FreePool(v66);
          v67 = v61[32];
          if ( v67 )
            Win32FreePool(v67);
          Win32FreePool(v61);
          goto LABEL_143;
        }
      }
LABEL_264:
      __fastfail(3u);
    }
  }
LABEL_143:
  HKRemoveMatchingHotkeys(0LL, (__int64)this, 0, 1);
  v68 = (_DWORD *)*((_QWORD *)this + 36);
  if ( v68 )
  {
    --*v68;
    v69 = (_DWORD *)*((_QWORD *)this + 36);
    if ( !*v69 )
      Win32FreePool(v69);
    *((_QWORD *)this + 36) = 0LL;
  }
  v70 = (_DWORD *)*((_QWORD *)this + 37);
  if ( v70 )
  {
    --*v70;
    v71 = (_DWORD *)*((_QWORD *)this + 37);
    if ( !*v71 )
      Win32FreePool(v71);
    *((_QWORD *)this + 37) = 0LL;
  }
  if ( !gbInSMSCleanup )
    ClearSendMessages(this);
  v72 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v72 + 26) & 8) != 0 )
  {
    UnsetLayeredWindow(this, 1);
    v72 = *((_QWORD *)this + 5);
  }
  if ( (*(_BYTE *)(v72 + 27) & 2) != 0 )
  {
    UnsetRedirectedWindow(this, 2);
    SetOrClrWF(0LL, this, 2818LL, 1LL);
    v72 = *((_QWORD *)this + 5);
  }
  if ( (*(_DWORD *)(v72 + 232) & 4) != 0 )
  {
    UnsetRedirectedWindow(this, 8);
    *(_DWORD *)(*((_QWORD *)this + 5) + 232LL) &= ~4u;
    v72 = *((_QWORD *)this + 5);
  }
  if ( *(_QWORD *)(v72 + 136) || (*(_BYTE *)(v72 + 17) & 0x10) != 0 )
  {
    DecPaintCount(this);
    DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)this + 5) + 136LL));
    *(_QWORD *)(*((_QWORD *)this + 5) + 136LL) = 0LL;
    SetOrClrWF(0LL, this, 272LL, 1LL);
    v72 = *((_QWORD *)this + 5);
  }
  if ( (*(_BYTE *)(v72 + 17) & 0xA) != 0 )
  {
    SetOrClrWF(0LL, this, 264LL, 1LL);
    SetOrClrWF(0LL, this, 258LL, 1LL);
  }
  ClearHungFlag(this);
  ClearHungFlag(this);
  if ( *(_QWORD *)(gptiCurrent + 800LL) )
  {
    QMsg = FindQMsg(gptiCurrent, gptiCurrent + 800LL, this);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *(unsigned int *)(QMsg + 32));
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v74 = *((_QWORD *)this + 21);
    if ( v74 )
    {
      if ( UnlockWndMenuWorker(this, 0) )
        DestroyMenu(v74);
    }
  }
  v75 = *((_QWORD *)this + 20);
  if ( v75 )
  {
    if ( v75 == *(_QWORD *)(*((_QWORD *)this + 3) + 64LL) )
    {
      UnlockWndMenuWorker(this, 1);
    }
    else if ( UnlockWndMenuWorker(this, 1) )
    {
      DestroyMenu(v75);
    }
  }
  v76 = *((_QWORD *)this + 3);
  if ( v76 )
  {
    if ( (v77 = *(_QWORD *)(v76 + 56)) != 0 && this == *(NotifyShell **)(v77 + 80)
      || (v77 = *(_QWORD *)(v76 + 64)) != 0 && this == *(NotifyShell **)(v77 + 80) )
    {
      UnlockNotifyWindow((struct tagMENU *)v77);
    }
  }
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
  {
    v78 = (unsigned __int16)atomWndObj;
    v79 = *((_QWORD *)this + 18);
    if ( atomWndObj == word_1C033AF24 )
      *(_QWORD *)(*((_QWORD *)this + 5) + 312LL) = 0LL;
    v80 = (EWNDOBJ *)RealInternalRemoveProp(v79, v78, 1LL);
    if ( v80 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteWnd(v80);
      --LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)this);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v81 = (__int64 **)(gpDispInfo + 24LL);
  v82 = *(__int64 **)(gpDispInfo + 24LL);
  if ( v82 )
  {
    do
    {
      v83 = *((_DWORD *)v82 + 16);
      if ( (v83 & 0x400800) != 0 )
      {
LABEL_200:
        v85 = (__int64 *)*v82;
        v81 = (__int64 **)v82;
        goto LABEL_201;
      }
      v84 = (NotifyShell *)v82[2];
      if ( v84 == this || (NotifyShell *)v82[3] == this || (NotifyShell *)v82[4] == this )
      {
        if ( (v83 & 2) == 0 )
        {
          if ( v82 == *(__int64 **)(*((_QWORD *)v84 + 17) + 40LL) || v82 != *((__int64 **)v84 + 31) )
          {
            if ( (v83 & 0xC0) != 0 )
              DeleteHrgnClip(v82);
LABEL_198:
            InvalidateDCE(v82);
            goto LABEL_199;
          }
          *((_QWORD *)v84 + 31) = 0LL;
          goto LABEL_230;
        }
        if ( (v83 & 0x1000) != 0 )
        {
          if ( v82[9] == gptiCurrent )
          {
            v96 = ReleaseCacheDC(v82[1], 0LL);
          }
          else
          {
            DestroyCacheDC(v81, v82[1]);
            v96 = 1;
          }
        }
        else
        {
          if ( (unsigned int)GreSetDCOwnerEx(v82[1], 2147483666LL, 0LL, 0LL) )
            goto LABEL_198;
          v96 = 2;
        }
        if ( v96 != 1 )
        {
          if ( v96 != 2 )
            goto LABEL_198;
LABEL_230:
          DestroyCacheDC(v81, v82[1]);
        }
      }
LABEL_199:
      v85 = *v81;
      if ( v82 == *v81 )
        goto LABEL_200;
LABEL_201:
      v82 = v85;
    }
    while ( v85 );
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( this == gspwndLockUpdate )
  {
    Spb = FindSpb(this);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  v87 = *((_QWORD *)this + 5);
  if ( *(char *)(v87 + 16) < 0 )
  {
    v88 = FindSpb(this);
    FreeSpb(v88);
    v87 = *((_QWORD *)this + 5);
  }
  if ( *(_QWORD *)(v87 + 168) && (*(_BYTE *)(v87 + 21) & 8) == 0 && (*(_WORD *)(v87 + 42) & 0x3FFF) != 0x29D )
  {
    GreDeleteObject(*(_QWORD *)(v87 + 168));
    *(_QWORD *)(*((_QWORD *)this + 5) + 168LL) = 0LL;
  }
  v89 = (void *)*((_QWORD *)this + 19);
  if ( v89 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)this + 3) + 128LL), 0, v89);
    *(_QWORD *)(*((_QWORD *)this + 5) + 144LL) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 232LL) & 0x400) != 0 )
    NotifyOverlayWindow(this, 0LL);
  v90 = (void *)*((_QWORD *)this + 23);
  if ( v90 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)this + 3) + 128LL), 0, v90);
    *(_QWORD *)(*((_QWORD *)this + 5) + 192LL) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *(_DWORD *)(*((_QWORD *)this + 5) + 184LL) = 0;
  }
  v91 = *((_QWORD *)this + 27);
  if ( v91 )
  {
    Win32FreePool(v91);
    *((_QWORD *)this + 27) = 0LL;
  }
  v92 = *((_QWORD *)this + 3);
  if ( !v92 || (v93 = *(NotifyShell **)(*(_QWORD *)(v92 + 8) + 24LL), this == v93) )
  {
    v94 = (char *)this + 104;
    *(_QWORD *)(*((_QWORD *)this + 5) + 48LL) = 0LL;
    HMAssignmentUnlock((char *)this + 104);
  }
  else
  {
    v94 = (char *)this + 104;
    if ( v93 )
      v95 = *((_QWORD *)v93 + 6);
    else
      v95 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 5) + 48LL) = v95;
    v146[1] = v93;
    v146[0] = (char *)this + 104;
    HMAssignmentLock(v146);
  }
  *(_QWORD *)(*((_QWORD *)this + 5) + 56LL) = 0LL;
  HMAssignmentUnlock((char *)this + 112);
  *(_QWORD *)(*((_QWORD *)this + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)this + 120);
  *(_QWORD *)(*((_QWORD *)this + 5) + 176LL) = 0LL;
  HMAssignmentUnlock((char *)this + 200);
  if ( (unsigned int)IsWindowDesktopComposed(this) )
  {
    v98 = (void *)ReferenceDwmApiPort(v97);
    DwmAsyncOwnerChange(v98, *(_QWORD *)this, 0LL);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 416LL));
  HMMarkObjectDestroy(this);
  v99 = _HMPheFromObject(this);
  *(_BYTE *)(v99 + 25) |= 2u;
  v102 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v100) + 664);
  if ( v102 )
  {
    if ( *(NotifyShell **)(v102 + 96) == this )
    {
      HMAssignmentUnlock(v102 + 96);
      *(_QWORD *)(v102 + 80) = 0LL;
    }
    if ( *(NotifyShell **)(v102 + 112) == this )
      HMAssignmentUnlock(v102 + 112);
    if ( *(NotifyShell **)(v102 + 104) == this )
      HMAssignmentUnlock(v102 + 104);
  }
  v104 = *(unsigned int *)(*((_QWORD *)this + 5) + 232LL);
  if ( (v104 & 1) != 0 )
    _RemoveClipboardFormatListener(this);
  result = ThreadUnlock1(v104, v101, v103);
  if ( result )
  {
    Flink = gPointerDeviceClients.Flink;
    while ( Flink != &gPointerDeviceClients )
    {
      v107 = (NotifyShell **)&Flink[-1];
      v108 = Flink;
      Flink = Flink->Flink;
      if ( this == *v107 )
      {
        HMAssignmentUnlock(v107);
        v109 = v108->Flink;
        if ( v108->Flink->Blink != v108 )
          goto LABEL_264;
        Blink = v108->Blink;
        if ( Blink->Flink != v108 )
          goto LABEL_264;
        Blink->Flink = v109;
        v109->Blink = Blink;
        Win32FreePool(v107);
      }
    }
    if ( (unsigned int)HMMarkObjectDestroy(this) )
    {
      if ( *((_QWORD *)this + 18) )
        DeleteProperties(this);
      if ( (*(_WORD *)(*((_QWORD *)this + 5) + 42LL) & 0x3FFF) == 0x2A0 )
      {
        v112 = safe_cast_fnid_to_PSWITCHWND(this);
        v113 = v112;
        if ( v112 )
        {
          v150 = *(struct tagSwitchWndInfo **)(v112 + 8);
          if ( v150 )
          {
            RemoveSwitchWindowInfo(&v150);
            *(_QWORD *)(v113 + 8) = 0LL;
          }
        }
      }
      v114 = safe_cast_fnid_to_PMENUWND(this);
      v115 = v114;
      if ( v114 )
      {
        v116 = *(_QWORD *)(v114 + 16);
        if ( v116 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v140, v116);
          v117 = *(_DWORD **)v140;
          if ( (**(_DWORD **)v140 & 0x20000000) != 0 )
          {
            *v117 &= ~0x40000000u;
          }
          else if ( v117 == gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
            NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
          }
          else
          {
            v118 = *(_DWORD **)v140;
            NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v140 + 88LL));
            UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v118);
            *(_QWORD *)(v115 + 16) = 0LL;
          }
          v119 = W32GetThreadWin32Thread(KeGetCurrentThread());
          if ( v140 != gSmartObjNullRef && !--*(_DWORD *)(v140 + 8) )
          {
            if ( *(_BYTE *)(v140 + 12) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v140);
          }
          v120 = *(_QWORD **)(v119 + 1464);
          if ( v120 )
            *(_QWORD *)(v119 + 1464) = *v120;
        }
      }
      v121 = *((_QWORD *)this + 35);
      if ( v121 )
      {
        Win32FreePool(v121);
        *((_QWORD *)this + 35) = 0LL;
      }
      --*(_DWORD *)(gptiCurrent + 888LL);
      if ( (unsigned int)Feature_Servicing_2109c_34956946__private_IsEnabled()
        && (unsigned __int8)tagWND::HasState(this) )
      {
        *((_DWORD *)this + 81) &= ~0x20000000u;
        --*(_DWORD *)(gptiCurrent + 896LL);
      }
      if ( (unsigned int)IsWindowDesktopComposed(this) )
      {
        v123 = (void *)ReferenceDwmApiPort(v122);
        DwmAsyncChildDestroy(v123, *(_QWORD *)this);
      }
      *(_QWORD *)(*((_QWORD *)v94 - 8) + 48LL) = 0LL;
      HMAssignmentUnlock(v94);
      v124 = *((_QWORD *)this + 3);
      v125 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v127)
        || (CurrentProcess = PsGetCurrentProcess(v129, v128, v130),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v133),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        v135 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v135 )
          v125 = *v135;
      }
      *(_QWORD *)&v141 = *(_QWORD *)(v125 + 16);
      *(_QWORD *)(v125 + 16) = &v141;
      v136 = (void *)*((_QWORD *)this + 3);
      *((_QWORD *)&v141 + 1) = v124;
      v142 = (__int64 (*)(void))UserDereferenceObject;
      if ( v136 )
        ObfReferenceObject(v136);
      tagObjLock::LockUnInitializeThreadCreator((NotifyShell *)((char *)this + 56));
      HMFreeObject(this);
      result = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)(result + 16) = v141;
      if ( *((_QWORD *)&v141 + 1) )
        return v142();
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 120LL) = 0LL;
      v137 = *((_QWORD *)this + 3);
      if ( v137 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v137 + 40) + 56LL) + 16LL) + 416LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v111);
      ClassPtr = (_QWORD *)GetClassPtr(*(unsigned __int16 *)(gpsi + 910LL), CurrentProcessWin32Process);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)this + 136, *ClassPtr);
      ++*(_DWORD *)(*((_QWORD *)this + 17) + 72LL);
      SetOrClrWF(1LL, this, 516LL, 1LL);
      SetOrClrWF(0LL, this, 544LL, 1LL);
      SetOrClrWF(0LL, this, 4032LL, 1LL);
      SetOrClrWF(1LL, this, 3840LL, 1LL);
      result = *((_QWORD *)this + 5);
      *(_QWORD *)(result + 152) = 0LL;
      *((_QWORD *)this + 21) = 0LL;
    }
  }
  return result;
}
