/*
 * XREFs of _xxxSwitchDesktop@16 @ 0xB0C6A
 * Callers:
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxSwitchDesktopWithFade@20 @ 0xAF188 (_xxxSwitchDesktopWithFade@20.c)
 *     _NtUserSwitchDesktop@12 @ 0xAF4AC (_NtUserSwitchDesktop@12.c)
 *     _RemoteDisableScreen@16 @ 0xD17D8 (_RemoteDisableScreen@16.c)
 *     _RemoteRedrawScreen@4 @ 0xD2434 (_RemoteRedrawScreen@4.c)
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _zzzSetDesktop@12 @ 0x6EDEC (_zzzSetDesktop@12.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _IPostQuitMessage@8 @ 0xABFB2 (_IPostQuitMessage@8.c)
 *     _SetTimerCoalescingTolerance@4 @ 0xAF316 (_SetTimerCoalescingTolerance@4.c)
 *     _WPP_RECORDER_SF_S@24 @ 0xB075A (_WPP_RECORDER_SF_S@24.c)
 *     _zzzCancelJournalling@0 @ 0xB07D0 (_zzzCancelJournalling@0.c)
 *     _ResetPointerDevices@0 @ 0xB08AE (_ResetPointerDevices@0.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _EraseBitmap@4 @ 0xB0A62 (_EraseBitmap@4.c)
 *     _zzzEnableDwmPointerSupport@8 @ 0xB0B78 (_zzzEnableDwmPointerSupport@8.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     _DrvOcclusionStateChangeNotify@0 @ 0xB2298 (_DrvOcclusionStateChangeNotify@0.c)
 *     _ClearKeyboardStates@0 @ 0xB22C6 (_ClearKeyboardStates@0.c)
 *     _GreLddmProcessDesktopSwitch@0 @ 0xB2310 (_GreLddmProcessDesktopSwitch@0.c)
 *     _GreDesktopSwitch@20 @ 0xB23DE (_GreDesktopSwitch@20.c)
 *     _FreeAllSpbs@0 @ 0xB246C (_FreeAllSpbs@0.c)
 *     _WPP_RECORDER_SF_SL@28 @ 0xB2490 (_WPP_RECORDER_SF_SL@28.c)
 *     _DwmSyncDesktopSwitch@12 @ 0xB257C (_DwmSyncDesktopSwitch@12.c)
 *     _xxxBroadcastDisplaySettingsChange@12 @ 0xB2668 (_xxxBroadcastDisplaySettingsChange@12.c)
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 *     ?FreeEdgyFrameData@Edgy@@YGXPAUtagEDGY_DATA@@@Z @ 0x16E002 (-FreeEdgyFrameData@Edgy@@YGXPAUtagEDGY_DATA@@@Z.c)
 */

int __fastcall xxxSwitchDesktop(int a1, int a2, char a3, int a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const unsigned __int16 *v11; // eax
  struct _KTHREAD *CurrentThread; // eax
  struct _KTHREAD *v13; // esi
  int v14; // edi
  ULONG_PTR v15; // ecx
  void *v16; // eax
  _DWORD *v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // esi
  int i; // ecx
  int v23; // ecx
  _DWORD *v24; // esi
  int v25; // ecx
  int v26; // esi
  int v27; // esi
  int j; // ecx
  int v29; // eax
  int v30; // esi
  struct HLFONT__ *v31; // ecx
  int DLT; // eax
  struct tagWND **v33; // ecx
  void *v34; // esi
  int v35; // esi
  _DWORD *v36; // eax
  _DWORD **v37; // edx
  int v38; // esi
  int v39; // eax
  BOOL v40; // ecx
  int v41; // ecx
  int v42; // ecx
  ULONG_PTR v43; // ecx
  int v44; // eax
  int v45; // esi
  _DWORD *v46; // esi
  int v47; // edi
  BOOL v48; // edx
  int WindowCloakState; // eax
  BOOL v50; // ecx
  BOOL v51; // eax
  _DWORD *v52; // eax
  bool k; // zf
  _DWORD *v54; // edx
  int v55; // eax
  int v56; // eax
  int v57; // edi
  int v58; // esi
  int m; // ecx
  int v60; // ecx
  _DWORD *v61; // esi
  int v62; // ecx
  int v63; // esi
  int v64; // esi
  int n; // ecx
  int v66; // eax
  int v67; // eax
  int v68; // ecx
  int v69; // edx
  int v70; // ecx
  int v71; // [esp-14h] [ebp-84h]
  int v72; // [esp-10h] [ebp-80h]
  int v73; // [esp-Ch] [ebp-7Ch]
  int v74; // [esp-Ch] [ebp-7Ch]
  int v75; // [esp-Ch] [ebp-7Ch]
  int v76; // [esp-8h] [ebp-78h]
  Edgy *v77; // [esp-8h] [ebp-78h]
  struct tagEDGY_DATA *v78; // [esp-4h] [ebp-74h]
  ULONG_PTR v79; // [esp-4h] [ebp-74h]
  int v80; // [esp+8h] [ebp-68h]
  int v81; // [esp+Ch] [ebp-64h]
  int v82; // [esp+10h] [ebp-60h]
  _DWORD *v83; // [esp+14h] [ebp-5Ch]
  int v84; // [esp+18h] [ebp-58h]
  int v85; // [esp+18h] [ebp-58h]
  int v86; // [esp+18h] [ebp-58h]
  void *Handle; // [esp+1Ch] [ebp-54h] BYREF
  int v88; // [esp+20h] [ebp-50h]
  PETHREAD Thread; // [esp+24h] [ebp-4Ch]
  int v90; // [esp+2Ch] [ebp-44h]
  struct _KTHREAD *v91; // [esp+30h] [ebp-40h]
  int v92; // [esp+34h] [ebp-3Ch] BYREF
  ULONG_PTR v93; // [esp+38h] [ebp-38h]
  int v94; // [esp+3Ch] [ebp-34h]
  int v95; // [esp+40h] [ebp-30h] BYREF
  _DWORD *v96; // [esp+44h] [ebp-2Ch]
  int v97; // [esp+48h] [ebp-28h]
  _BYTE v98[12]; // [esp+4Ch] [ebp-24h] BYREF
  _DWORD v99[3]; // [esp+58h] [ebp-18h] BYREF
  _DWORD v100[3]; // [esp+64h] [ebp-Ch] BYREF

  Handle = 0;
  memset(v98, 0, sizeof(v98));
  v82 = a1;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  memset(v100, 0, sizeof(v100));
  memset(v99, 0, sizeof(v99));
  if ( !a2 )
    return -1073741823;
  if ( a2 == _grpdeskRitInput )
    return 0;
  if ( (*(_BYTE *)(a2 + 24) & 8) != 0 )
    return -1073741811;
  if ( !a1 )
  {
    a1 = *(_DWORD *)(a2 + 20);
    v82 = a1;
  }
  if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
    return -1073741811;
  v90 = *(_DWORD *)(a1 + 28);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( ObQueryNameInfo(a2) )
      v6 = ObQueryNameInfo(a2) + 4;
    else
      v6 = 0;
    if ( v6 )
    {
      if ( ObQueryNameInfo(a2) )
        v7 = ObQueryNameInfo(a2) + 4;
      else
        v7 = 0;
      v8 = *(_DWORD *)(v7 + 4);
    }
    else
    {
      v8 = 0;
    }
    WPP_RECORDER_SF_SL(v71, v72, v73, v8, a3 & 1);
  }
  if ( _grpdeskRitInput && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( ObQueryNameInfo(a2) )
      v9 = ObQueryNameInfo(a2) + 4;
    else
      v9 = 0;
    if ( v9 )
    {
      if ( ObQueryNameInfo(a2) )
        v10 = ObQueryNameInfo(a2) + 4;
      else
        v10 = 0;
      v11 = *(const unsigned __int16 **)(v10 + 4);
    }
    else
    {
      v11 = 0;
    }
    WPP_RECORDER_SF_S(v72, v73, v76, v11);
  }
  CurrentThread = KeGetCurrentThread();
  v13 = CurrentThread;
  v91 = CurrentThread;
  if ( (PVOID)a2 != gspdeskDisconnect
    && !PsIsSystemThread(CurrentThread)
    && (PVOID)a2 != grpdeskLogon
    && (*(_BYTE *)(v82 + 32) & 1) != 0
    && (a3 & 2) == 0
    && PsGetThreadProcessId(v13) != (HANDLE)_gpidLogon )
  {
    return -1073741790;
  }
  if ( _gbDesktopLocked && (!gspdeskDisconnect || (PVOID)a2 != gspdeskDisconnect) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(8, 28, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids);
    LockObjectAssignment(_gspdeskShouldBeForeground, a2);
    return 0;
  }
  PushW32ThreadLock(a2, v100, (int)UserDereferenceObject);
  ObfReferenceObject((PVOID)a2);
  ObOpenObjectByPointer(
    (PVOID)a2,
    0x200u,
    0,
    (ACCESS_MASK)&loc_1F0002 + 1,
    (POBJECT_TYPE)ExDesktopObjectType,
    0,
    &Handle);
  PushW32ThreadLock((int)Handle, v99, (int)AllowDesktopDestruction);
  v14 = _gptiCurrent;
  if ( *(_DWORD *)(_gptiCurrent + 248) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v15 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v92 = *(_DWORD *)(_gptiCurrent + 228);
    v79 = gspwndAltTab;
    v94 = 0;
    *(_DWORD *)(_gptiCurrent + 228) = &v92;
    v93 = v15;
    HMLockObject(v79);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(gspwndAltTab, 0x10u, 0, 0, 0, 0, 0, 1u, 1);
    ThreadUnlock1();
  }
  if ( _grpdeskRitInput )
  {
    if ( *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12) && _gpqForeground )
    {
      v78 = *(struct tagEDGY_DATA **)(_gpqForeground + 64);
      v77 = (Edgy *)(_grpdeskRitInput + 44);
      HMAssignmentLock(v78, _grpdeskRitInput);
      xxxSetForegroundWindow2(0, _gptiCurrent, 0x20u);
    }
    if ( _grpdeskRitInput )
    {
      v16 = *(void **)(_grpdeskRitInput + 92);
      v88 = _grpdeskRitInput + 92;
      Handle = v16;
      if ( v16 != (void *)(_grpdeskRitInput + 92) )
      {
        do
        {
          v17 = (_DWORD *)*((_DWORD *)v16 - 42);
          v18 = v17[13];
          if ( v18 )
            v84 = v18 + 216;
          else
            v84 = gObjDummyLock;
          v19 = v17[12];
          v20 = gObjDummyLock;
          if ( v19 )
            v20 = v19 + 216;
          v21 = gpsiLock;
          for ( i = 3; i; --i )
            v21 += 4;
          v23 = 3;
          v24 = v17;
          while ( v23 )
          {
            ++v24;
            --v23;
          }
          v25 = 3;
          v26 = v20;
          while ( v25 )
          {
            v26 += 4;
            --v25;
          }
          v27 = v84;
          for ( j = 3; j; --j )
            v27 += 4;
          v29 = v17[71];
          if ( (v29 & 1) != 0 )
          {
            PostUpdateKeyStateEvent(v17);
            v29 = v17[71];
          }
          v17[71] = v29 & 0xFFFFFEFF;
          v16 = *(void **)Handle;
          Handle = v16;
        }
        while ( v16 != (void *)v88 );
        v14 = v82;
      }
      if ( _grpdeskRitInput )
      {
        if ( (*(_BYTE *)(**(_DWORD **)(_grpdeskRitInput + 4) + 32) & 1) != 0 )
        {
          if ( *(_DWORD *)&_gfade[8] )
            StopFade();
          bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
          ComposeWindow(*(struct tagWND **)(*(_DWORD *)(_grpdeskRitInput + 4) + 12), 6);
          v30 = *(_DWORD *)(_gpDispInfo + 20);
          GreLockDynamicModeChange(v30);
          GreUnlockDynamicModeChange(v30);
          v31 = *(struct HLFONT__ **)(v80 + 60);
          if ( v31 )
            EraseBitmap(v31);
          v81 = 1;
        }
        if ( _grpdeskRitInput && *(_DWORD *)(_grpdeskRitInput + 140) )
          Edgy::FreeEdgyFrameData(v77, v78);
      }
    }
  }
  DLT = DLT_DESKTOP::getDLT();
  GetDomainLockRef(DLT);
  LockObjectAssignment(_grpdeskRitInput, a2);
  gdwRitInputDesktopId = ***(_DWORD ***)(_grpdeskRitInput + 4);
  CitDesktopSwitch();
  v33 = *(struct tagWND ***)(a2 + 4);
  if ( (*((_BYTE *)*v33 + 32) & 1) != 0 )
    ComposeWindow(v33[3], 5);
  FreeAllSpbs();
  v34 = (void *)zzzSetDesktop(_gptiRit, a2, 0);
  if ( (int)v34 >= 0 )
  {
    v35 = v88;
    v36 = *(_DWORD **)(v88 + 8);
    if ( v36[59] != *(_DWORD *)(v88 + 12) )
    {
      AllocQueue(0, *(_DWORD *)(v88 + 12));
      ++*(_DWORD *)(*(_DWORD *)(v35 + 12) + 288);
      zzzAttachToQueue(*(_DWORD *)(v35 + 8), *(_DWORD *)(v35 + 12), 0, 0);
      v36 = *(_DWORD **)(v35 + 8);
    }
    v34 = (void *)zzzSetDesktop(v36, a2, 0);
    Handle = v34;
    if ( (int)v34 >= 0 )
    {
      v37 = *(_DWORD ***)(a2 + 4);
      if ( ((*v37)[8] & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit();
        v38 = ***(_DWORD ***)(a2 + 4);
        v39 = UserReferenceDwmApiPort();
        DwmSyncDesktopSwitch(v39, v38, a4);
        EnterCrit(0, 1);
        v37 = *(_DWORD ***)(a2 + 4);
      }
      v40 = v80 && (*(_BYTE *)(**(_DWORD **)(_grpdeskRitInput + 4) + 32) & 1) != 0;
      GreDesktopSwitch(*(_DWORD *)(_gpDispInfo + 20), (*v37)[8] & 1, v40, **v37, v40);
      if ( v80 == (*(_DWORD *)(**(_DWORD **)(_grpdeskRitInput + 4) + 32) & 1) )
      {
        LOBYTE(v41) = 0;
        SetPointerInternal(v41, 6, v74);
        LOBYTE(v42) = 1;
        SetPointerInternal(v42, 6, v75);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_DWORD **)(a2 + 4) + 32) & 1, 0);
      }
      v43 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 12);
      v92 = *(_DWORD *)(v14 + 228);
      *(_DWORD *)(v14 + 228) = &v92;
      v93 = v43;
      if ( v43 )
        HMLockObject(v43);
      GreLddmProcessDesktopSwitch();
      if ( v80 && (*(_BYTE *)(**(_DWORD **)(_grpdeskRitInput + 4) + 32) & 1) != 0 )
        v44 = 9;
      else
        v44 = 1;
      v45 = v44 | (4 * (*(_DWORD *)(**(_DWORD **)(a2 + 4) + 32) & 1));
      GreSuspendDirectDraw(*(_DWORD *)(_gpDispInfo + 20), v45);
      xxxSetWindowPos(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 12), 0, 0, 0, 0, 0, 323);
      GreResumeDirectDraw(*(_DWORD *)(_gpDispInfo + 20), v45);
      v46 = *(_DWORD **)(a2 + 44);
      if ( !v46
        || (*(_BYTE *)(_HMPheFromObject(*(_DWORD *)(a2 + 44)) + 13) & 1) != 0
        || (*(_BYTE *)(v46[5] + 146) & 0x20) != 0 && (GetWindowCloakState(v46) & 2) != 0
        || *(_DWORD *)(*(_DWORD *)(a2 + 4) + 88) == *(_DWORD *)(v46[2] + 232) && (GetWindowCloakState(v46) & 1) != 0 )
      {
        v46 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 12) + 60);
        if ( v46 )
        {
          do
          {
            v47 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 88);
            v85 = *(_DWORD *)(v46[2] + 232);
            if ( !IsNonImmersiveBand(v46) || v47 == v85 || (*(_BYTE *)(v46[5] + 146) & 0x20) != 0 )
            {
              WindowCloakState = GetWindowCloakState(v46);
              v50 = v47 == v85 && (WindowCloakState & 1) != 0;
              v51 = WindowCloakState || (*(_BYTE *)(v46[5] + 19) & 8) != 0;
              v48 = v50 || v51;
            }
            if ( (*(_BYTE *)(v46[5] + 23) & 0x18) == 0x10 && !v48 )
              break;
            v46 = (_DWORD *)v46[12];
          }
          while ( v46 );
          v14 = v81;
        }
      }
      HMAssignmentUnlock(a2 + 44);
      if ( v46 )
      {
        if ( (*(_BYTE *)(v46[5] + 15) & 7) == 4 )
        {
          SetOrClrWF(0, (int)v46, 0x707u, 1);
          SetOrClrWF(1, (int)v46, 0x701u, 1);
        }
        v95 = *(_DWORD *)(v14 + 228);
        *(_DWORD *)(v14 + 228) = &v95;
        v96 = v46;
        HMLockObject(v46);
        xxxSetForegroundWindow2((int)v46, v14, 0x20u);
        ThreadUnlock1();
      }
      else
      {
        xxxSetForegroundWindow2(0, 0, 0x20u);
      }
      ThreadUnlock1();
      ClearKeyboardStates();
      v88 = _grpdeskRitInput + 92;
      v52 = *(_DWORD **)(_grpdeskRitInput + 92);
      for ( k = v52 == (_DWORD *)(_grpdeskRitInput + 92); ; k = *v83 == v88 )
      {
        v83 = v52;
        if ( k )
          break;
        v54 = (_DWORD *)*(v52 - 42);
        v55 = v54[13];
        if ( v55 )
          v86 = v55 + 216;
        else
          v86 = gObjDummyLock;
        v56 = v54[12];
        v57 = gObjDummyLock;
        if ( v56 )
          v57 = v56 + 216;
        v58 = gpsiLock;
        for ( m = 3; m; --m )
          v58 += 4;
        v60 = 3;
        v61 = v54;
        while ( v60 )
        {
          ++v61;
          --v60;
        }
        v62 = 3;
        v63 = v57;
        while ( v62 )
        {
          v63 += 4;
          --v62;
        }
        v64 = v86;
        for ( n = 3; n; --n )
          v64 += 4;
        v66 = v54[71];
        if ( (v66 & 0x100) == 0 )
        {
          v54[71] = v66 | 0x101;
          memset(v54 + 30, 0xFFu, 0x20u);
          PostUpdateKeyStateEvent(v54);
        }
        v52 = (_DWORD *)*v83;
      }
      if ( _gHardErrorHandler )
        IPostQuitMessage(_gHardErrorHandler, 0);
      KePulseEvent((PRKEVENT)gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 0, 0, 0, 6);
      if ( (PVOID)a2 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)_gpidLogon
        && (*(_BYTE *)(*(_DWORD *)(a2 + 20) + 32) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3);
      }
      v67 = *(_DWORD *)(a2 + 24);
      if ( (v67 & 0x20) != 0 )
      {
        v68 = *(_DWORD *)(a2 + 4);
        if ( v68 )
        {
          if ( *(_DWORD *)(v68 + 12) )
          {
            *(_DWORD *)(a2 + 24) = v67 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1, 0);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      (*(void (__thiscall **)(PVOID))(*(_DWORD *)dword_274060 + 4))(dword_274060);
      v34 = Handle;
    }
  }
  PopAndFreeAlwaysW32ThreadLock((int)v98);
  PopAndFreeW32ThreadLock((int)v99);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v69) = 4;
    WPP_RECORDER_SF_q(v70, v69, 3u, 29, (int)&WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids, (char)v34);
  }
  return (int)v34;
}
