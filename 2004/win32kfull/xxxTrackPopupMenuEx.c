/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C024BC18
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C0204810 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C024648C (xxxDoScrollMenu.c)
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     GetMonitorRectForWindow @ 0x1C0023434 (GetMonitorRectForWindow.c)
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     _MonitorFromPoint @ 0x1C0025880 (_MonitorFromPoint.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C003810C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     IsWindowShellCloaked @ 0x1C003C830 (IsWindowShellCloaked.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00510B4 (xxxEnableChildWindowDpiMessageX.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     SubtractRect @ 0x1C01029EC (SubtractRect.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0104724 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0114880 (xxxPlayEventSound.c)
 *     MNClearCachedPopupSizes @ 0x1C01216B8 (MNClearCachedPopupSizes.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E5DA0 (IsChildWindowDpiMessageEnabledX.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01E5E04 (IsNonClientDpiScalingEnabledX.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0222234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C0222278 (MNAllocMenuState.c)
 *     MNMarkDelayedFreePopup @ 0x1C022295C (MNMarkDelayedFreePopup.c)
 *     xxxMNEndMenuState @ 0x1C0222BF0 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C022302C (xxxMNStartMenu.c)
 *     xxxUserModeCallback @ 0x1C0234488 (xxxUserModeCallback.c)
 *     xxxMNLoop @ 0x1C0235428 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C02374B0 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C023B4CC (xxxMNReleaseCapture.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C0244570 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     FindBestPos @ 0x1C024B718 (FindBestPos.c)
 *     MNAnimate @ 0x1C024D454 (MNAnimate.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025EA64 (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(
        unsigned __int64 ***a1,
        unsigned int a2,
        LONG a3,
        LONG a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r8
  __int32 v9; // r14d
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  unsigned int v12; // esi
  struct _KTHREAD *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rax
  _QWORD *v23; // rcx
  __int64 v25; // rbx
  __int64 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v33; // ebx
  unsigned __int64 **v34; // rax
  __int64 Window; // r14
  __int64 *v36; // rcx
  __int64 v37; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rcx
  int v40; // eax
  struct tagMENUSTATE *v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r12d
  unsigned int v47; // r15d
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v54; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v56; // rax
  __int64 v57; // rbx
  _QWORD *v58; // rax
  unsigned int *v59; // rdx
  unsigned int v60; // ecx
  bool v61; // cf
  MenuHelpers *v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rbx
  __int64 v65; // r9
  __int64 v66; // rbx
  __int64 v67; // rax
  unsigned __int64 *v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // edx
  __int64 v73; // rax
  int v74; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v76; // rax
  unsigned __int64 *v77; // rcx
  unsigned __int16 v78; // ecx^2
  unsigned __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rcx
  struct tagMONITOR *v82; // r9
  int v83; // r12d
  int v84; // r15d
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // r8
  int BestPos; // r15d
  __int64 v89[2]; // [rsp+98h] [rbp-80h] BYREF
  int v90; // [rsp+A8h] [rbp-70h]
  int v91[2]; // [rsp+B0h] [rbp-68h]
  int v92; // [rsp+B8h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-58h]
  _QWORD *v94; // [rsp+C8h] [rbp-50h]
  __int64 v95; // [rsp+D0h] [rbp-48h]
  __int64 v96[2]; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v97[2]; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v98; // [rsp+F8h] [rbp-20h] BYREF
  __int128 v99; // [rsp+100h] [rbp-18h] BYREF
  __int64 v100; // [rsp+110h] [rbp-8h]
  __int128 v101; // [rsp+118h] [rbp+0h] BYREF
  __int64 v102; // [rsp+128h] [rbp+10h]
  _QWORD v103[2]; // [rsp+138h] [rbp+20h] BYREF
  _QWORD v104[2]; // [rsp+148h] [rbp+30h] BYREF
  _QWORD v105[3]; // [rsp+158h] [rbp+40h] BYREF
  __int128 v106; // [rsp+170h] [rbp+58h] BYREF
  __int128 v107; // [rsp+180h] [rbp+68h] BYREF
  __int128 v108; // [rsp+190h] [rbp+78h] BYREF
  char v109[72]; // [rsp+1A0h] [rbp+88h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v89, 0LL);
  v100 = 0LL;
  v102 = 0LL;
  v9 = 0;
  v95 = 0LL;
  v91[0] = 0;
  v94 = 0LL;
  v99 = 0LL;
  v101 = 0LL;
  *(_OWORD *)v97 = 0LL;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
    {
LABEL_5:
      v10 = 87LL;
LABEL_6:
      UserSetLastError(v10, 0LL, v8);
LABEL_7:
      v12 = 0;
      goto LABEL_8;
    }
    *(_OWORD *)v97 = *(_OWORD *)(a6 + 4);
  }
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
    goto LABEL_5;
  v25 = *(_QWORD *)(gptiCurrent + 600LL);
  v12 = 1;
  if ( v25 )
  {
    if ( (a2 & 1) == 0 )
    {
      v10 = 1446LL;
      goto LABEL_6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v89, *(_QWORD *)v25);
    v26 = *(__int64 **)(*(_QWORD *)v89[0] + 8LL);
    v11 = *(_DWORD **)v89[0];
    if ( (*(_DWORD *)(v25 + 8) & 4) == 0
      || (*v11 & 0x8000) != 0
      || !v26
      || v26 != (__int64 *)a5
      || *(_QWORD *)(v25 + 32) != v26[2] )
    {
      goto LABEL_7;
    }
    MNAnimate(v25, 0LL);
    v27 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v89[0] + 56LL));
    if ( v27 )
      v28 = *(_QWORD *)(v27 + 8);
    else
      v28 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v89, v28);
    if ( *(_QWORD *)v89[0] && (**(_DWORD **)v89[0] & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v89[0] + 16LL), 65534LL, 0, 1, 0LL);
      **(_DWORD **)v89[0] &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v25 + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x100000u;
  }
  v90 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v92 = (unsigned __int16)_GetKeyState(2LL) >> 15;
  else
    v92 = (unsigned __int16)_GetKeyState(1LL) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v29) & 0xF) == 2 )
  {
    CurrentThread = (struct _KTHREAD *)__PAIR64__(a4, a3);
    v30 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(a4, a3), 2LL, 0) + 40);
    v9 = *(_DWORD *)(v30 + 28);
    v91[0] = *(_DWORD *)(v30 + 32);
  }
  v33 = 0;
  if ( PsGetCurrentProcessWin32Process(v30) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v33 = 1;
  }
  SmartObjStackRefBase<tagMENU>::Init(v105, 0LL);
  v34 = *a1;
  v105[2] = 0LL;
  Window = xxxCreateWindowEx(
             385,
             (wchar_t *)0x8000,
             0x8000LL,
             0LL,
             -2139095040,
             v9,
             v91[0],
             0x64u,
             0x64u,
             (__int64 *)(a5 & -(__int64)((*(_DWORD *)((*v34)[5] + 40) & 0x40000000) != 0)),
             (__int64)v105,
             *(_QWORD *)(*(_QWORD *)(a5 + 40) + 32LL),
             0LL,
             *(_DWORD *)(*(_QWORD *)(a5 + 40) + 236LL),
             2560,
             v33,
             0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v105);
  if ( !Window )
    goto LABEL_7;
  v37 = safe_cast_fnid_to_PMENUWND(Window);
  if ( !v37 )
  {
    xxxDestroyWindow(v36);
    goto LABEL_7;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v99 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v99;
  *((_QWORD *)&v99 + 1) = Window;
  HMLockObject(Window);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v39) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 820LL) & 0x100000) != 0
      || ((a2 & 0x200) == 0
        ? (!(unsigned int)IsTopLevelWindow(a5)
         ? (v40 = IsChildWindowDpiMessageEnabledX(a5))
         : (v40 = IsWindowBroadcastingDpiToChildrenX(a5)))
        : (v40 = IsNonClientDpiScalingEnabledX(a5)),
          v40) )
    {
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
  else if ( (*(_DWORD *)((**a1)[5] + 40) & 0x40000000) == 0 )
  {
    xxxInheritWindowMonitor((struct tagWND *)Window, (__int64 *)a5, 0);
  }
  v41 = 0LL;
  if ( (*(_DWORD *)((**a1)[5] + 40) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked((struct tagWND *)Window, 1)
    && !(unsigned int)IsWindowShellCloaked((struct tagWND *)a5, 0) )
  {
    zzzSetWindowCompositionCloak(Window, 0LL, 0);
  }
  if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
    SetOrClrWF(1, Window, 0xA40u, 1);
  SetOrClrWF(0, Window, 0x408u, 1);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v89, *(_QWORD *)(v37 + 8));
  if ( !*(_QWORD *)v89[0] )
    goto LABEL_65;
  v103[1] = a5;
  v103[0] = *(_QWORD *)v89[0] + 8LL;
  HMAssignmentLock(v103);
  LockPopupMenu((__int64)v89, (__int64 *)(*(_QWORD *)v89[0] + 40LL), (__int64)a1);
  v104[1] = Window;
  v104[0] = *(_QWORD *)v89[0] + 56LL;
  HMAssignmentLock(v104);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v96, 0LL);
  MNMarkDelayedFreePopup((_QWORD **)v89, v96);
  v94 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (!(unsigned __int8)KeIsAttachedProcess(v48)
     || (CurrentProcess = PsGetCurrentProcess(v50, v49, v51),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v54),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (v56 = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL )
  {
    v57 = *v56;
  }
  else
  {
    v57 = (__int64)v94;
  }
  if ( v96[0] != gSmartObjNullRef && !--*(_DWORD *)(v96[0] + 8) )
  {
    if ( *(_BYTE *)(v96[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v96[0]);
  }
  v58 = *(_QWORD **)(v57 + 1464);
  if ( v58 )
    *(_QWORD *)(v57 + 1464) = *v58;
  *(_QWORD *)(*(_QWORD *)v89[0] + 64LL) = *(_QWORD *)v89[0];
  **(_DWORD **)v89[0] |= 8u;
  v59 = *(unsigned int **)v89[0];
  v60 = (v92 << 9) | **(_DWORD **)v89[0] & 0xFFFFFDFF;
  v61 = v90 != 0;
  v90 = -v90;
  *v59 = v60;
  v62 = (MenuHelpers *)(**(_DWORD **)v89[0] & 0xFFFFFFBF | (v61 ? 0x40 : 0));
  **(_DWORD **)v89[0] = (_DWORD)v62;
  if ( MenuHelpers::GetMenuRightAlignHint(v62) || (*(_DWORD *)((**a1)[5] + 40) & 0x20) != 0 )
    **(_DWORD **)v89[0] |= 0x10u;
  **(_DWORD **)v89[0] ^= (**(_DWORD **)v89[0] ^ (16 * a2)) & 0x800;
  LODWORD(CurrentThread) = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    **(_DWORD **)v89[0] |= 0x100u;
  **(_DWORD **)v89[0] ^= (**(_DWORD **)v89[0] ^ (a2 >> 7)) & 4;
  v63 = MNAllocMenuState((_QWORD **)v89);
  v94 = v63;
  v64 = (__int64)v63;
  if ( !v63 )
  {
LABEL_65:
    a2 |= 0x80u;
LABEL_66:
    xxxWindowEvent(5u, (struct tagWND *)a5, 0, 0, 0);
    v42 = (__int64)v94;
    xxxMNReleaseCapture((__int64)v94);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage(a5, 0x212u, ((unsigned __int64)~a2 >> 9) & 1, 0LL);
    v46 = 1;
    v47 = 0;
    goto LABEL_151;
  }
  if ( gptiCurrent == v63[4] )
  {
    ++*((_DWORD *)v63 + 10);
    v41 = (struct tagMENUSTATE *)v63;
  }
  if ( (**(_DWORD **)v89[0] & 0x800) == 0 )
    xxxSendMessage(a5, 0x211u, ((unsigned __int64)(unsigned int)~**(_DWORD **)v89[0] >> 2) & 1, 0LL);
  if ( !xxxMNStartMenu(v89, v64, -1) )
    goto LABEL_66;
  if ( (*(_DWORD *)(v64 + 8) & 0x400) != 0 )
  {
    v98 = *(_QWORD *)Window;
    xxxUserModeCallback(0x64u, (__int64)&v98, 8LL, v65);
  }
  if ( (**(_DWORD **)v89[0] & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v89[0] + 8LL) )
  {
    v66 = *(_QWORD *)(*(_QWORD *)v89[0] + 8LL);
    v67 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v101 = *(_QWORD *)(v67 + 408);
    *(_QWORD *)(v67 + 408) = &v101;
    *((_QWORD *)&v101 + 1) = v66;
    HMLockObject(v66);
    v68 = (unsigned __int64 *)a1[2];
    if ( !v68 )
      v68 = **a1;
    xxxSendMessage(
      *(_QWORD *)(*(_QWORD *)v89[0] + 8LL),
      0x117u,
      *v68,
      (**(_DWORD **)v89[0] & 4) != 0 ? (struct _LARGE_STRING *)0x10000 : 0);
    ThreadUnlock1(v70, v69, v71);
    v64 = (__int64)v94;
    **(_DWORD **)v89[0] |= 0x200000u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(Window + 40) + 232LL) & 0x20000000) != 0 )
  {
    v72 = 0;
    if ( *(_DWORD *)((**a1)[5] + 44) )
    {
      while ( (**(_DWORD **)(96LL * v72 + (**a1)[11]) & 0x100) == 0
           && *(_QWORD *)(*(_QWORD *)((**a1)[11] + 96LL * v72) + 96LL) != -1LL )
      {
        if ( (unsigned int)++v72 >= *(_DWORD *)((**a1)[5] + 44) )
          goto LABEL_105;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
LABEL_105:
  v73 = *(_QWORD *)(Window + 40);
  v74 = *(_DWORD *)(v73 + 288) & 0xF;
  if ( v74 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v73 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v73 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
  }
  else if ( !v74
         && (v76 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v76 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 416LL) + 284LL);
  }
  if ( WindowDpiLastNotify != *((_WORD *)**a1 + 38) )
  {
    *((_WORD *)**a1 + 38) = WindowDpiLastNotify;
    v77 = (unsigned __int64 *)a1[2];
    if ( !v77 )
      v77 = **a1;
    MNClearCachedPopupSizes(v77);
  }
  *(_QWORD *)v91 = xxxSendMessage(Window, 0x1E2u, 1uLL, 0LL);
  if ( !v91[0] )
    goto LABEL_66;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 4 )
  {
    *(_DWORD *)(v64 + 8) |= 0x20u;
    *(_DWORD *)((**a1)[5] + 40) |= 4u;
  }
  else
  {
    *(_DWORD *)((**a1)[5] + 40) &= ~4u;
  }
  v78 = HIWORD(v91[0]);
  v91[0] = LOWORD(v91[0]) + 6;
  v90 = v78 + 6;
  v95 = __PAIR64__(a4, a3);
  v79 = __PAIR64__(a4, a3);
  v80 = MonitorFromPoint(__SPAIR64__(a4, a3), 2LL, 0);
  v81 = *(_QWORD *)(a5 + 40);
  v82 = (struct tagMONITOR *)v80;
  v95 = v80;
  v83 = a2 ^ 8;
  if ( (((a2 & 4) == 0) & (*(_BYTE *)(v81 + 26) >> 6)) == 0 )
    v83 = a2;
  if ( (v83 & 8) != 0 )
  {
    a3 -= v91[0];
    **(_DWORD **)v89[0] = **(_DWORD **)v89[0] & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v83 & 4) != 0 )
  {
    a3 -= (unsigned int)v91[0] >> 1;
  }
  else
  {
    **(_DWORD **)v89[0] = **(_DWORD **)v89[0] & 0xF07FFFFF | ((((**(_DWORD **)v89[0] & 0x10) != 0) + 1) << 23);
  }
  v84 = v90;
  if ( (v83 & 0x20) != 0 )
  {
    a4 -= v90;
    **(_DWORD **)v89[0] |= 0x4000000u;
  }
  else if ( (v83 & 0x10) != 0 )
  {
    a4 -= (unsigned int)v90 >> 1;
  }
  else
  {
    **(_DWORD **)v89[0] |= 0x2000000u;
  }
  if ( (v83 & 0x3C00) != 0 )
    **(_DWORD **)v89[0] = **(_DWORD **)v89[0] & 0xF07FFFFF | ((v83 & 0x3C00) << 13);
  v85 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v89[0] + 16LL) + 40LL);
  if ( a6 )
  {
    if ( *(_DWORD *)(v85 + 236) != 1 )
      goto LABEL_143;
LABEL_142:
    **(_DWORD **)v89[0] |= 0x80000000;
    goto LABEL_143;
  }
  if ( *(_DWORD *)(v85 + 236) == 1 )
  {
    v107 = *GetMonitorRectForWindow(&v108, v80, (const struct tagWND *)Window);
    v106 = *(_OWORD *)GetMonitorMenuRectForWindow(v109, v95, Window);
    SubtractRect((__int64)v97, (int *)&v107, (int *)&v106);
    v82 = (struct tagMONITOR *)v95;
    goto LABEL_142;
  }
  *(_OWORD *)v97 = 0LL;
  **(_DWORD **)v89[0] &= ~0x80000000;
LABEL_143:
  BestPos = FindBestPos(a3, a4, v91[0], v84, (struct tagRECT *)v97, v83, (unsigned int ***)v89, v82, v79);
  if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 )
  {
    v87 = 25165824LL;
    v86 = *(_QWORD *)v89[0];
    if ( (**(_DWORD **)v89[0] & 0x1800000) != 0 )
    {
      v86 = *(_QWORD *)v89[0];
      **(_DWORD **)v89[0] ^= 0x1800000u;
    }
  }
  if ( (**(_DWORD **)v89[0] & 0xF800000) != 0 && (v83 & 0x4000) == 0 )
    **(_DWORD **)v89[0] |= 0x8000000u;
  xxxPlayEventSound(5LL, v86, v87);
  v42 = (__int64)v94;
  xxxSetWindowPos(
    (struct tagWND *)Window,
    ((v94[1] & 0x100) != 0) - 1LL,
    (unsigned int)(__int16)BestPos,
    (unsigned int)SHIWORD(BestPos),
    0,
    0,
    ~(unsigned __int8)(*((_DWORD *)v94 + 2) >> 4) & 0x10 | 0x241);
  xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
  *(_DWORD *)(v42 + 8) = *(_DWORD *)(v42 + 8) & 0xFFFFFFF7 | (8 * v92);
  v47 = xxxMNLoop((__int64 **)v89, v42, 0LL, 0);
  if ( (*(_DWORD *)(v42 + 8) & 0x100) == 0 )
  {
    v46 = (int)CurrentThread;
LABEL_151:
    if ( ThreadUnlock1(v44, v43, v45) && *(char *)(*(_QWORD *)(Window + 40) + 19LL) >= 0 )
      xxxDestroyWindow((__int64 *)Window);
    if ( v42 )
      xxxMNEndMenuState(v42);
    xxxDeliverRestoreFocusMessage((struct tagWND *)a5);
    goto LABEL_157;
  }
  ThreadUnlock1(v44, v43, v45);
  v46 = (int)CurrentThread;
LABEL_157:
  if ( v46 )
    v12 = v47;
  if ( v41 )
    xxxUnlockMenuStateInternal(v41, 0);
LABEL_8:
  v13 = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v11)
    || (v18 = PsGetCurrentProcess(v16, v15, v17),
        v19 = PsGetProcessSessionIdEx(v18),
        v21 = PsGetCurrentThreadProcess(v20),
        v19 == (unsigned int)PsGetProcessSessionIdEx(v21)) )
  {
    v22 = (__int64 *)PsGetThreadWin32Thread(v13);
    if ( v22 )
      v14 = *v22;
  }
  if ( v89[0] != gSmartObjNullRef && !--*(_DWORD *)(v89[0] + 8) )
  {
    if ( *(_BYTE *)(v89[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v89[0]);
  }
  v23 = *(_QWORD **)(v14 + 1464);
  if ( v23 )
    *(_QWORD *)(v14 + 1464) = *v23;
  return v12;
}
