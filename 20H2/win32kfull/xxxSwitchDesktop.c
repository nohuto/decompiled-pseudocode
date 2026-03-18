/*
 * XREFs of xxxSwitchDesktop @ 0x1C002BDDC
 * Callers:
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 *     NtUserSwitchDesktop @ 0x1C0029790 (NtUserSwitchDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0114CC0 (xxxSwitchDesktopWithFade.c)
 *     RemoteDisableScreen @ 0x1C011FDA0 (RemoteDisableScreen.c)
 *     RemoteRedrawScreen @ 0x1C0157B24 (RemoteRedrawScreen.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C000B7A4 (IPostQuitMessage.c)
 *     WPP_RECORDER_SF_S @ 0x1C002A2AC (WPP_RECORDER_SF_S.c)
 *     zzzCancelJournalling @ 0x1C002A378 (zzzCancelJournalling.c)
 *     ResetPointerDevices @ 0x1C002A488 (ResetPointerDevices.c)
 *     bSetDevDragRect @ 0x1C002A4E0 (bSetDevDragRect.c)
 *     EraseBitmap @ 0x1C002A684 (EraseBitmap.c)
 *     DwmSyncDesktopSwitch @ 0x1C002A714 (DwmSyncDesktopSwitch.c)
 *     WPP_RECORDER_SF_SL @ 0x1C002A8B4 (WPP_RECORDER_SF_SL.c)
 *     FreeAllSpbs @ 0x1C002A9A0 (FreeAllSpbs.c)
 *     GreDesktopSwitch @ 0x1C002A9D0 (GreDesktopSwitch.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C002AA98 (GreLddmProcessDesktopSwitch.c)
 *     ClearKeyboardStates @ 0x1C002ABC4 (ClearKeyboardStates.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C002AC44 (DrvOcclusionStateChangeNotify.c)
 *     zzzEnableDwmPointerSupport @ 0x1C002AEDC (zzzEnableDwmPointerSupport.c)
 *     SetPointer @ 0x1C002B0A0 (SetPointer.c)
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C003ED40 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C00BCF04 (WPP_RECORDER_SF_d.c)
 *     zzzAttachToQueue @ 0x1C00BFE38 (zzzAttachToQueue.c)
 *     ComposeWindow @ 0x1C00C2AD0 (ComposeWindow.c)
 *     IsNonImmersiveBand @ 0x1C00C9C04 (IsNonImmersiveBand.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     zzzSetDesktop @ 0x1C00D7E10 (zzzSetDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C01064C0 (xxxBroadcastDisplaySettingsChange.c)
 *     SetTimerCoalescingTolerance @ 0x1C0109CE0 (SetTimerCoalescingTolerance.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     StopFade @ 0x1C01E77F0 (StopFade.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C0207334 (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
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
  __int64 **v38; // rdx
  __int64 v39; // rcx
  __int64 **v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  void *v45; // rax
  BOOL v46; // r8d
  __int64 v47; // rcx
  int v48; // ebx
  unsigned int v49; // ebx
  _QWORD *v50; // rbx
  __int64 v51; // rsi
  __int64 v52; // r14
  BOOL v53; // r8d
  int WindowCloakState; // eax
  BOOL v55; // edx
  BOOL v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  _QWORD *j; // rbx
  __int128 *v61; // rcx
  __int128 *v62; // r8
  __int64 v63; // rax
  __int64 v64; // rax
  __int128 *v65; // rdx
  int v66; // eax
  __m128i si128; // xmm0
  int v68; // eax
  int v69; // edx
  int v70; // ecx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  int ObjectType; // [rsp+20h] [rbp-E0h]
  int ObjectTypea; // [rsp+20h] [rbp-E0h]
  void *Handle; // [rsp+50h] [rbp-B0h] BYREF
  PETHREAD Thread; // [rsp+58h] [rbp-A8h]
  __int128 v85; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v86; // [rsp+70h] [rbp-90h]
  __int128 v87; // [rsp+80h] [rbp-80h] BYREF
  __int64 v88; // [rsp+90h] [rbp-70h]
  __int128 v89; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v90; // [rsp+B0h] [rbp-50h]
  __int128 v91; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v92; // [rsp+C8h] [rbp-38h]
  __int128 v93; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v94; // [rsp+E0h] [rbp-20h]
  __int128 v95; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v96; // [rsp+F8h] [rbp-8h]
  __int128 v97; // [rsp+100h] [rbp+0h]
  __int64 v98; // [rsp+110h] [rbp+10h]
  __int128 v99; // [rsp+118h] [rbp+18h]
  __int64 v100; // [rsp+128h] [rbp+28h]
  __int128 v101; // [rsp+130h] [rbp+30h]
  __int64 v102; // [rsp+140h] [rbp+40h]
  _BYTE v103[56]; // [rsp+148h] [rbp+48h] BYREF

  v92 = 0LL;
  v4 = 0;
  Handle = 0LL;
  v90 = 0LL;
  v96 = 0LL;
  v6 = a2;
  v7 = a1;
  v91 = 0LL;
  v89 = 0LL;
  v8 = gptiCurrent;
  v94 = 0LL;
  v95 = 0LL;
  v93 = 0LL;
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
      WPP_RECORDER_SF_((_DWORD)v10, a2, 8, 28, (__int64)&WPP_9563cc11843c38630c872e630d898c35_Traceguids);
    }
    LockObjectAssignment(gspdeskShouldBeForeground, v6);
    return 0LL;
  }
  PushW32ThreadLock(v6, &v95, UserDereferenceObject);
  ObfReferenceObject((PVOID)v6);
  ObOpenObjectByPointer((PVOID)v6, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  PushW32ThreadLock(Handle, &v93, AllowDesktopDestruction);
  if ( *(_QWORD *)(gptiCurrent + 456LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v24 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v77 = *(_QWORD *)(gptiCurrent + 416LL);
    v86 = 0LL;
    *(_QWORD *)&v85 = v77;
    *(_QWORD *)(gptiCurrent + 416LL) = &v85;
    *((_QWORD *)&v85 + 1) = v24;
    HMLockObject(v24);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((int)gspwndAltTab, 16, 0, 0, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v79, v78, v80);
  }
  v25 = (__int128 *)grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) && gpqForeground )
    {
      *((_QWORD *)&v87 + 1) = *(_QWORD *)(gpqForeground + 120LL);
      *(_QWORD *)&v87 = grpdeskRitInput + 88LL;
      HMAssignmentLock(&v87);
      xxxSetForegroundWindow2(0LL, gptiCurrent, 32LL);
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
      {
        v27 = (__int128 *)*(i - 39);
        v25 = (__int128 *)gObjDummyLock;
        v28 = *((_QWORD *)v27 + 12);
        if ( v28 )
          v25 = (__int128 *)(v28 + 392);
        v29 = *((_QWORD *)v27 + 11);
        v30 = (__int128 *)gObjDummyLock;
        if ( v29 )
          v30 = (__int128 *)(v29 + 392);
        v31 = *((_DWORD *)v27 + 97);
        v88 = *((_QWORD *)&gpsiLock + 2);
        v98 = *((_QWORD *)v27 + 2);
        v100 = *((_QWORD *)v30 + 2);
        v102 = *((_QWORD *)v25 + 2);
        v87 = gpsiLock;
        v97 = *v27;
        v99 = *v30;
        v101 = *v25;
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
          bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
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
  CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(v103);
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
    if ( *(_QWORD *)(v37 + 432) != *(_QWORD *)(v9 + 24) )
    {
      AllocQueue(0LL);
      ++*(_DWORD *)(*(_QWORD *)(v9 + 24) + 392LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v9 + 16), *(struct tagQ **)(v9 + 24));
      v37 = *(_QWORD *)(v9 + 16);
    }
    v36 = zzzSetDesktop((struct tagTHREADINFO *)v37);
    if ( v36 >= 0 )
    {
      v38 = *(__int64 ***)(v6 + 8);
      v39 = *((unsigned int *)*v38 + 16);
      if ( (v39 & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v39);
        v40 = *(__int64 ***)(v6 + 8);
        v41 = **v40;
        v45 = (void *)UserReferenceDwmApiPort(*v40, v42, v43, v44);
        DwmSyncDesktopSwitch(v45, v41, a4);
        EnterCrit(0LL, 1LL);
        v38 = *(__int64 ***)(v6 + 8);
      }
      v46 = v4 && (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0;
      GreDesktopSwitch(*(_QWORD *)(gpDispInfo + 40LL), (*v38)[8] & 1, v46, **v38, ObjectTypea);
      if ( v4 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) )
      {
        SetPointer(0LL);
        SetPointer(1LL);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(v6 + 8) + 64LL) & 1, 0);
      }
      v47 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL);
      *(_QWORD *)&v89 = *(_QWORD *)(v8 + 416);
      *(_QWORD *)(v8 + 416) = &v89;
      *((_QWORD *)&v89 + 1) = v47;
      if ( v47 )
        HMLockObject(v47);
      GreLddmProcessDesktopSwitch();
      if ( !v4 || (v48 = 9, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v48 = 1;
      v49 = (4 * (*(_DWORD *)(**(_QWORD **)(v6 + 8) + 64LL) & 1)) | v48;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v49);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(v6 + 8) + 24LL), 0, 0, 323);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v49);
      v50 = *(_QWORD **)(v6 + 88);
      if ( !v50
        || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v6 + 88)) + 25) & 1) != 0
        || (*(_BYTE *)(v50[5] + 234LL) & 0x20) != 0 && (GetWindowCloakState(v50) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(v6 + 8) + 176LL) == *(_QWORD *)(v50[2] + 424LL)
        && (GetWindowCloakState(v50) & 1) != 0 )
      {
        v50 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL) + 112LL);
        if ( v50 )
        {
          do
          {
            v51 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 176LL);
            v52 = *(_QWORD *)(v50[2] + 424LL);
            if ( !(unsigned int)IsNonImmersiveBand(v50) || v51 == v52 || (*(_BYTE *)(v50[5] + 234LL) & 0x20) != 0 )
            {
              WindowCloakState = GetWindowCloakState(v50);
              v55 = v51 == v52 && (WindowCloakState & 1) != 0;
              v56 = WindowCloakState || (*(_BYTE *)(v50[5] + 27LL) & 8) != 0;
              v53 = v55 || v56;
            }
            if ( (*(_BYTE *)(v50[5] + 31LL) & 0x18) == 0x10 && !v53 )
              break;
            v50 = (_QWORD *)v50[11];
          }
          while ( v50 );
          v8 = gptiCurrent;
        }
      }
      HMAssignmentUnlock(v6 + 88);
      if ( v50 )
      {
        if ( (*(_BYTE *)(v50[5] + 23LL) & 7) == 4 )
        {
          SetOrClrWF(0LL, v50, 1799LL, 1LL);
          SetOrClrWF(1LL, v50, 1793LL, 1LL);
        }
        *(_QWORD *)&v91 = *(_QWORD *)(v8 + 416);
        *(_QWORD *)(v8 + 416) = &v91;
        *((_QWORD *)&v91 + 1) = v50;
        HMLockObject(v50);
        xxxSetForegroundWindow2(v50, v8, 32LL);
        ThreadUnlock1(v73, v72, v74);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 32LL);
      }
      ThreadUnlock1(v58, v57, v59);
      ClearKeyboardStates();
      for ( j = *(_QWORD **)(grpdeskRitInput + 168LL); j != (_QWORD *)(grpdeskRitInput + 168LL); j = (_QWORD *)*j )
      {
        v61 = (__int128 *)*(j - 39);
        v62 = (__int128 *)gObjDummyLock;
        v63 = *((_QWORD *)v61 + 12);
        if ( v63 )
          v62 = (__int128 *)(v63 + 392);
        v64 = *((_QWORD *)v61 + 11);
        v65 = (__int128 *)gObjDummyLock;
        if ( v64 )
          v65 = (__int128 *)(v64 + 392);
        v66 = *((_DWORD *)v61 + 97);
        v102 = *((_QWORD *)&gpsiLock + 2);
        v100 = *((_QWORD *)v61 + 2);
        v98 = *((_QWORD *)v65 + 2);
        v86 = *((_QWORD *)v62 + 2);
        v101 = gpsiLock;
        v99 = *v61;
        v97 = *v65;
        v85 = *v62;
        if ( (v66 & 0x100) == 0 )
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
          *((_DWORD *)v61 + 97) = v66 | 0x101;
          *(__int128 *)((char *)v61 + 196) = (__int128)si128;
          *(__int128 *)((char *)v61 + 212) = (__int128)si128;
          ((void (*)(void))PostUpdateKeyStateEvent)();
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0);
      KePulseEvent((PRKEVENT)gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 6u);
      if ( (PVOID)v6 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 64LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v68 = *(_DWORD *)(v6 + 48);
      if ( (v68 & 0x20) != 0 )
      {
        v75 = *(_QWORD *)(v6 + 8);
        if ( v75 )
        {
          if ( *(_QWORD *)(v75 + 24) )
          {
            *(_DWORD *)(v6 + 48) = v68 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(v6, 1LL, 0LL);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
    }
  }
  PopAndFreeAlwaysW32ThreadLock(&v93);
  PopAndFreeW32ThreadLock(&v95);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v69) = 4;
    WPP_RECORDER_SF_d(v70, v69, 3, 29, (__int64)&WPP_9563cc11843c38630c872e630d898c35_Traceguids, v36);
  }
  return (unsigned int)v36;
}
