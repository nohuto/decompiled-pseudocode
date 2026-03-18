/*
 * XREFs of xxxSwitchDesktop @ 0x1C004CE38
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C004A560 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0053808 (xxxSwitchDesktopWithFade.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     RawInputThread @ 0x1C00C62E0 (RawInputThread.c)
 *     RemoteDisableScreen @ 0x1C011E640 (RemoteDisableScreen.c)
 *     RemoteRedrawScreen @ 0x1C01551C4 (RemoteRedrawScreen.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsNonImmersiveBand @ 0x1C0022AB4 (IsNonImmersiveBand.c)
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C0026A10 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032D80 (WPP_RECORDER_SF_d.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzAttachToQueue @ 0x1C0038AB4 (zzzAttachToQueue.c)
 *     WPP_RECORDER_SF_S @ 0x1C004BCCC (WPP_RECORDER_SF_S.c)
 *     zzzCancelJournalling @ 0x1C004BD98 (zzzCancelJournalling.c)
 *     ResetPointerDevices @ 0x1C004BEA8 (ResetPointerDevices.c)
 *     bSetDevDragRect @ 0x1C004BF00 (bSetDevDragRect.c)
 *     EraseBitmap @ 0x1C004C0A4 (EraseBitmap.c)
 *     DwmSyncDesktopSwitch @ 0x1C004C134 (DwmSyncDesktopSwitch.c)
 *     WPP_RECORDER_SF_SL @ 0x1C004C2D4 (WPP_RECORDER_SF_SL.c)
 *     FreeAllSpbs @ 0x1C004C3C0 (FreeAllSpbs.c)
 *     GreDesktopSwitch @ 0x1C004C3F0 (GreDesktopSwitch.c)
 *     zzzEnableDwmPointerSupport @ 0x1C004CCD0 (zzzEnableDwmPointerSupport.c)
 *     SetPointer @ 0x1C004D9F0 (SetPointer.c)
 *     ComposeWindow @ 0x1C004E8F0 (ComposeWindow.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C0050AB4 (DrvOcclusionStateChangeNotify.c)
 *     ClearKeyboardStates @ 0x1C0050AF8 (ClearKeyboardStates.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C0050B78 (GreLddmProcessDesktopSwitch.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     GetWindowCloakState @ 0x1C00B2AEC (GetWindowCloakState.c)
 *     zzzSetDesktop @ 0x1C00B3880 (zzzSetDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     IPostQuitMessage @ 0x1C00C0274 (IPostQuitMessage.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C01055A0 (xxxBroadcastDisplaySettingsChange.c)
 *     SetTimerCoalescingTolerance @ 0x1C0108CC0 (SetTimerCoalescingTolerance.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     StopFade @ 0x1C01E84B0 (StopFade.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C02081A4 (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3, int a4)
{
  int v4; // r12d
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r13
  _UNKNOWN **v10; // rcx
  __int64 NameInfo; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  const char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  const char *v22; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  struct tagWND *v24; // rcx
  __int128 *v25; // rdx
  _QWORD *i; // rsi
  __int128 *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int128 *v30; // rcx
  int v31; // eax
  __int64 v32; // rbx
  HBRUSH v33; // rcx
  Edgy *v34; // rcx
  struct tagWND **v35; // rdx
  int v36; // r15d
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 **v40; // rdx
  __int64 v41; // rcx
  __int64 **v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  void *v47; // rax
  BOOL v48; // r8d
  __int64 v49; // rcx
  int v50; // ebx
  unsigned int v51; // ebx
  _QWORD *v52; // rbx
  __int64 v53; // rsi
  __int64 v54; // r14
  BOOL v55; // r8d
  int WindowCloakState; // eax
  BOOL v57; // edx
  BOOL v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  _QWORD *j; // rbx
  __int128 *v63; // rcx
  __int128 *v64; // r8
  __int64 v65; // rax
  __int64 v66; // rax
  __int128 *v67; // rdx
  int v68; // eax
  __m128i si128; // xmm0
  int v70; // eax
  int v71; // edx
  int v72; // ecx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  int ObjectType; // [rsp+20h] [rbp-E0h]
  int ObjectTypea; // [rsp+20h] [rbp-E0h]
  void *Handle; // [rsp+50h] [rbp-B0h] BYREF
  PETHREAD Thread; // [rsp+58h] [rbp-A8h]
  __int128 v87; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+70h] [rbp-90h]
  __int128 v89; // [rsp+80h] [rbp-80h] BYREF
  __int64 v90; // [rsp+90h] [rbp-70h]
  __int128 v91; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-50h]
  __int128 v93; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v94; // [rsp+C8h] [rbp-38h]
  __int128 v95; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v96; // [rsp+E0h] [rbp-20h]
  __int128 v97; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v98; // [rsp+F8h] [rbp-8h]
  __int128 v99; // [rsp+100h] [rbp+0h]
  __int64 v100; // [rsp+110h] [rbp+10h]
  __int128 v101; // [rsp+118h] [rbp+18h]
  __int64 v102; // [rsp+128h] [rbp+28h]
  __int128 v103; // [rsp+130h] [rbp+30h]
  __int64 v104; // [rsp+140h] [rbp+40h]
  _QWORD v105[7]; // [rsp+148h] [rbp+48h] BYREF

  v94 = 0LL;
  v4 = 0;
  Handle = 0LL;
  v92 = 0LL;
  v98 = 0LL;
  v6 = a2;
  v7 = a1;
  v93 = 0LL;
  v91 = 0LL;
  v8 = gptiCurrent;
  v96 = 0LL;
  v97 = 0LL;
  v95 = 0LL;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !a1 )
    v7 = *(_QWORD *)(a2 + 40);
  if ( (*(_DWORD *)(v7 + 64) & 4) != 0 )
    return 3221225485LL;
  v9 = *(_QWORD *)(v7 + 56);
  v10 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    NameInfo = ObQueryNameInfo(a2);
    if ( NameInfo )
      NameInfo = ObQueryNameInfo(v6) + 8;
    if ( NameInfo )
    {
      v15 = ObQueryNameInfo(v6);
      if ( v15 )
        v15 = ObQueryNameInfo(v6) + 8;
      v16 = *(const char **)(v15 + 8);
    }
    else
    {
      v16 = 0LL;
    }
    WPP_RECORDER_SF_SL((__int64)v16, v12, v13, v14, ObjectType, v16);
    v10 = &WPP_RECORDER_INITIALIZED;
  }
  if ( grpdeskRitInput && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = ObQueryNameInfo(v6);
    if ( v17 )
      v17 = ObQueryNameInfo(v6) + 8;
    if ( v17 )
    {
      v21 = ObQueryNameInfo(v6);
      if ( v21 )
        v21 = ObQueryNameInfo(v6) + 8;
      v22 = *(const char **)(v21 + 8);
    }
    else
    {
      v22 = 0LL;
    }
    WPP_RECORDER_SF_S((__int64)v22, v18, v19, v20, ObjectType, v22);
  }
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  if ( (PVOID)v6 != gspdeskDisconnect && !PsIsSystemThread(CurrentThread) && (PVOID)v6 != grpdeskLogon )
  {
    LOBYTE(v10) = (*(_BYTE *)(v7 + 64) & 1) != 0;
    if ( ((unsigned __int8)v10 & ((a3 & 2) == 0)) != 0 )
    {
      ThreadProcessId = PsGetThreadProcessId(CurrentThread);
      LODWORD(v10) = gpidLogon;
      if ( ThreadProcessId != (HANDLE)gpidLogon )
        return 3221225506LL;
    }
  }
  if ( gbDesktopLocked && (!gspdeskDisconnect || (PVOID)v6 != gspdeskDisconnect) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_((_DWORD)v10, a2, 8, 28, (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids);
    }
    LockObjectAssignment(gspdeskShouldBeForeground, v6);
    return 0LL;
  }
  PushW32ThreadLock(v6, &v97, UserDereferenceObject);
  ObfReferenceObject((PVOID)v6);
  ObOpenObjectByPointer((PVOID)v6, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  PushW32ThreadLock((__int64)Handle, &v95, (__int64)AllowDesktopDestruction);
  if ( *(_QWORD *)(gptiCurrent + 448LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v24 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v79 = *(_QWORD *)(gptiCurrent + 408LL);
    v88 = 0LL;
    *(_QWORD *)&v87 = v79;
    *(_QWORD *)(gptiCurrent + 408LL) = &v87;
    *((_QWORD *)&v87 + 1) = v24;
    HMLockObject(v24);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((int)gspwndAltTab, 16, 0, 0, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v81, v80, v82);
  }
  v25 = (__int128 *)grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) && gpqForeground )
    {
      *((_QWORD *)&v89 + 1) = *(_QWORD *)(gpqForeground + 120LL);
      *(_QWORD *)&v89 = grpdeskRitInput + 88LL;
      HMAssignmentLock(&v89);
      xxxSetForegroundWindow2(0LL, gptiCurrent, 32);
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
      {
        v27 = (__int128 *)*(i - 39);
        v25 = (__int128 *)gObjDummyLock;
        v28 = *((_QWORD *)v27 + 12);
        if ( v28 )
          v25 = (__int128 *)(v28 + 384);
        v29 = *((_QWORD *)v27 + 11);
        v30 = (__int128 *)gObjDummyLock;
        if ( v29 )
          v30 = (__int128 *)(v29 + 384);
        v31 = *((_DWORD *)v27 + 97);
        v90 = *((_QWORD *)&gpsiLock + 2);
        v100 = *((_QWORD *)v27 + 2);
        v102 = *((_QWORD *)v30 + 2);
        v104 = *((_QWORD *)v25 + 2);
        v89 = gpsiLock;
        v99 = *v27;
        v101 = *v30;
        v103 = *v25;
        if ( (v31 & 1) != 0 )
        {
          PostUpdateKeyStateEvent(v27);
          v31 = *((_DWORD *)v27 + 97);
        }
        *((_DWORD *)v27 + 97) = v31 & 0xFFFFFEFF;
      }
      if ( grpdeskRitInput )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0 )
        {
          if ( gfade[2] )
            StopFade();
          bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0LL);
          ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL));
          v32 = *(_QWORD *)(gpDispInfo + 40LL);
          GreLockDynamicModeChange(v32);
          GreUnlockDynamicModeChange(v32);
          v33 = *(HBRUSH *)(v7 + 120);
          if ( v33 )
            EraseBitmap(v33);
          v4 = 1;
        }
        if ( grpdeskRitInput )
        {
          v34 = *(Edgy **)(grpdeskRitInput + 240LL);
          if ( v34 )
            Edgy::FreeEdgyFrameData(v34, (struct tagEDGY_DATA *)v25);
        }
      }
      v8 = gptiCurrent;
    }
  }
  CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(v105);
  LockObjectAssignment(grpdeskRitInput, v6);
  gdwRitInputDesktopId = ***(_QWORD ***)(grpdeskRitInput + 8LL);
  CitDesktopSwitch();
  v35 = *(struct tagWND ***)(v6 + 8);
  if ( (*((_DWORD *)*v35 + 16) & 1) != 0 )
    ComposeWindow(v35[3]);
  FreeAllSpbs();
  v36 = zzzSetDesktop(gptiRit);
  if ( v36 >= 0 )
  {
    v37 = *(_QWORD *)(v9 + 16);
    v38 = *(_QWORD *)(v9 + 24);
    if ( *(_QWORD *)(v37 + 424) != v38 )
    {
      AllocQueue(0LL, v38);
      ++*(_DWORD *)(*(_QWORD *)(v9 + 24) + 392LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v9 + 16), *(struct tagQ **)(v9 + 24), 0LL, 0);
      v37 = *(_QWORD *)(v9 + 16);
    }
    v36 = zzzSetDesktop((struct tagTHREADINFO *)v37);
    if ( v36 >= 0 )
    {
      v40 = *(__int64 ***)(v6 + 8);
      v41 = *((unsigned int *)*v40 + 16);
      if ( (v41 & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v41, v40, v39);
        v42 = *(__int64 ***)(v6 + 8);
        v43 = **v42;
        v47 = (void *)UserReferenceDwmApiPort(*v42, v44, v45, v46);
        DwmSyncDesktopSwitch(v47, v43, a4);
        EnterCrit(0LL, 1LL);
        v40 = *(__int64 ***)(v6 + 8);
      }
      v48 = v4 && (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0;
      GreDesktopSwitch(*(_QWORD *)(gpDispInfo + 40LL), (*v40)[8] & 1, v48, **v40, ObjectTypea);
      if ( v4 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) )
      {
        SetPointer(0LL);
        SetPointer(1LL);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(v6 + 8) + 64LL) & 1, 0);
      }
      v49 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL);
      *(_QWORD *)&v91 = *(_QWORD *)(v8 + 408);
      *(_QWORD *)(v8 + 408) = &v91;
      *((_QWORD *)&v91 + 1) = v49;
      if ( v49 )
        HMLockObject(v49);
      GreLddmProcessDesktopSwitch();
      if ( !v4 || (v50 = 9, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v50 = 1;
      v51 = (4 * (*(_DWORD *)(**(_QWORD **)(v6 + 8) + 64LL) & 1)) | v50;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v51);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(v6 + 8) + 24LL), 0, 0, 323);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v51);
      v52 = *(_QWORD **)(v6 + 88);
      if ( !v52
        || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v6 + 88)) + 25) & 1) != 0
        || (*(_BYTE *)(v52[5] + 234LL) & 0x20) != 0 && (GetWindowCloakState(v52) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(v6 + 8) + 176LL) == *(_QWORD *)(v52[2] + 416LL)
        && (GetWindowCloakState(v52) & 1) != 0 )
      {
        v52 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL) + 112LL);
        if ( v52 )
        {
          do
          {
            v53 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 176LL);
            v54 = *(_QWORD *)(v52[2] + 416LL);
            if ( !IsNonImmersiveBand((__int64)v52) || v53 == v54 || (*(_BYTE *)(v52[5] + 234LL) & 0x20) != 0 )
            {
              WindowCloakState = GetWindowCloakState(v52);
              v57 = v53 == v54 && (WindowCloakState & 1) != 0;
              v58 = WindowCloakState || (*(_BYTE *)(v52[5] + 27LL) & 8) != 0;
              v55 = v57 || v58;
            }
            if ( (*(_BYTE *)(v52[5] + 31LL) & 0x18) == 0x10 && !v55 )
              break;
            v52 = (_QWORD *)v52[11];
          }
          while ( v52 );
          v8 = gptiCurrent;
        }
      }
      HMAssignmentUnlock(v6 + 88);
      if ( v52 )
      {
        if ( (*(_BYTE *)(v52[5] + 23LL) & 7) == 4 )
        {
          SetOrClrWF(0LL, v52, 1799LL, 1LL);
          SetOrClrWF(1LL, v52, 1793LL, 1LL);
        }
        *(_QWORD *)&v93 = *(_QWORD *)(v8 + 408);
        *(_QWORD *)(v8 + 408) = &v93;
        *((_QWORD *)&v93 + 1) = v52;
        HMLockObject(v52);
        xxxSetForegroundWindow2((__int64)v52, v8, 32);
        ThreadUnlock1(v75, v74, v76);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 32);
      }
      ThreadUnlock1(v60, v59, v61);
      ClearKeyboardStates();
      for ( j = *(_QWORD **)(grpdeskRitInput + 168LL); j != (_QWORD *)(grpdeskRitInput + 168LL); j = (_QWORD *)*j )
      {
        v63 = (__int128 *)*(j - 39);
        v64 = (__int128 *)gObjDummyLock;
        v65 = *((_QWORD *)v63 + 12);
        if ( v65 )
          v64 = (__int128 *)(v65 + 384);
        v66 = *((_QWORD *)v63 + 11);
        v67 = (__int128 *)gObjDummyLock;
        if ( v66 )
          v67 = (__int128 *)(v66 + 384);
        v68 = *((_DWORD *)v63 + 97);
        v104 = *((_QWORD *)&gpsiLock + 2);
        v102 = *((_QWORD *)v63 + 2);
        v100 = *((_QWORD *)v67 + 2);
        v88 = *((_QWORD *)v64 + 2);
        v103 = gpsiLock;
        v101 = *v63;
        v99 = *v67;
        v87 = *v64;
        if ( (v68 & 0x100) == 0 )
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
          *((_DWORD *)v63 + 97) = v68 | 0x101;
          *(__int128 *)((char *)v63 + 196) = (__int128)si128;
          *(__int128 *)((char *)v63 + 212) = (__int128)si128;
          ((void (*)(void))PostUpdateKeyStateEvent)();
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0LL);
      KePulseEvent(gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 6u);
      if ( (PVOID)v6 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 64LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v70 = *(_DWORD *)(v6 + 48);
      if ( (v70 & 0x20) != 0 )
      {
        v77 = *(_QWORD *)(v6 + 8);
        if ( v77 )
        {
          if ( *(_QWORD *)(v77 + 24) )
          {
            *(_DWORD *)(v6 + 48) = v70 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(v6, 1LL, 0LL);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)&v95);
  PopAndFreeW32ThreadLock(&v97);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v71) = 4;
    WPP_RECORDER_SF_d(v72, v71, 3, 29, (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids, v36);
  }
  return (unsigned int)v36;
}
