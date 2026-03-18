/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C024A610
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C02039A0 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C02451EC (xxxDoScrollMenu.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     IsWindowShellCloaked @ 0x1C0013E60 (IsWindowShellCloaked.c)
 *     _MonitorFromPoint @ 0x1C003C200 (_MonitorFromPoint.c)
 *     GetMonitorRectForWindow @ 0x1C003DD8C (GetMonitorRectForWindow.c)
 *     SubtractRect @ 0x1C003F10C (SubtractRect.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00F9644 (xxxEnableChildWindowDpiMessageX.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C01053E4 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0115900 (xxxPlayEventSound.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C011D62C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C0122628 (MNClearCachedPopupSizes.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E50E0 (IsChildWindowDpiMessageEnabledX.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01E5144 (IsNonClientDpiScalingEnabledX.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C02213A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C02213E8 (MNAllocMenuState.c)
 *     MNMarkDelayedFreePopup @ 0x1C0221ACC (MNMarkDelayedFreePopup.c)
 *     xxxMNEndMenuState @ 0x1C0221D60 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C022219C (xxxMNStartMenu.c)
 *     xxxUserModeCallback @ 0x1C02335F8 (xxxUserModeCallback.c)
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C0236620 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C023A63C (xxxMNReleaseCapture.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C02432D0 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     FindBestPos @ 0x1C024A110 (FindBestPos.c)
 *     MNAnimate @ 0x1C024BE4C (MNAnimate.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025D450 (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(
        unsigned __int64 ***a1,
        unsigned int a2,
        LONG a3,
        LONG a4,
        unsigned __int64 a5,
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
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 CurrentProcessWin32Process; // rax
  int v41; // ebx
  unsigned __int64 **v42; // rax
  __int64 Window; // r14
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v49; // rcx
  int v50; // eax
  struct tagMENUSTATE *v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // r12d
  unsigned int v57; // r15d
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v64; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v66; // rax
  __int64 v67; // rbx
  _QWORD *v68; // rax
  unsigned int *v69; // rdx
  unsigned int v70; // ecx
  bool v71; // cf
  MenuHelpers *v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rbx
  __int64 v75; // r9
  __int64 v76; // rbx
  __int64 v77; // rax
  unsigned __int64 *v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  int v82; // edx
  __int64 v83; // rax
  int v84; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v86; // rax
  unsigned __int64 *v87; // rcx
  __int64 v88; // r9
  unsigned __int16 v89; // ecx^2
  unsigned __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rcx
  struct tagMONITOR *v93; // r9
  int v94; // r12d
  int v95; // r15d
  __int64 v96; // rcx
  int BestPos; // r15d
  __int64 v98[2]; // [rsp+98h] [rbp-80h] BYREF
  int v99; // [rsp+A8h] [rbp-70h]
  int v100[2]; // [rsp+B0h] [rbp-68h]
  int v101; // [rsp+B8h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-58h]
  _QWORD *v103; // [rsp+C8h] [rbp-50h]
  __int64 v104; // [rsp+D0h] [rbp-48h]
  __int64 v105[2]; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v106[2]; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v107; // [rsp+F8h] [rbp-20h] BYREF
  __int128 v108; // [rsp+100h] [rbp-18h] BYREF
  __int64 v109; // [rsp+110h] [rbp-8h]
  __int128 v110; // [rsp+118h] [rbp+0h] BYREF
  __int64 v111; // [rsp+128h] [rbp+10h]
  _QWORD v112[2]; // [rsp+138h] [rbp+20h] BYREF
  _QWORD v113[2]; // [rsp+148h] [rbp+30h] BYREF
  _QWORD v114[3]; // [rsp+158h] [rbp+40h] BYREF
  __int128 v115; // [rsp+170h] [rbp+58h] BYREF
  __int128 v116; // [rsp+180h] [rbp+68h] BYREF
  __int128 v117; // [rsp+190h] [rbp+78h] BYREF
  char v118[72]; // [rsp+1A0h] [rbp+88h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v98, 0LL);
  v109 = 0LL;
  v111 = 0LL;
  v9 = 0;
  v104 = 0LL;
  v100[0] = 0;
  v103 = 0LL;
  v108 = 0LL;
  v110 = 0LL;
  *(_OWORD *)v106 = 0LL;
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
    *(_OWORD *)v106 = *(_OWORD *)(a6 + 4);
  }
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
    goto LABEL_5;
  v25 = *(_QWORD *)(gptiCurrent + 608LL);
  v12 = 1;
  if ( v25 )
  {
    if ( (a2 & 1) == 0 )
    {
      v10 = 1446LL;
      goto LABEL_6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v98, *(_QWORD *)v25);
    v26 = *(_QWORD *)(*(_QWORD *)v98[0] + 8LL);
    v11 = *(_DWORD **)v98[0];
    if ( (*(_DWORD *)(v25 + 8) & 4) == 0
      || (*v11 & 0x8000) != 0
      || !v26
      || v26 != a5
      || *(_QWORD *)(v25 + 32) != *(_QWORD *)(v26 + 16) )
    {
      goto LABEL_7;
    }
    MNAnimate(v25, 0LL);
    v30 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v98[0] + 56LL), v27, v28, v29);
    if ( v30 )
      v31 = *(_QWORD *)(v30 + 8);
    else
      v31 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v98, v31);
    if ( *(_QWORD *)v98[0] && (**(_DWORD **)v98[0] & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v98[0] + 16LL), 65534LL, 0, 1, 0LL);
      **(_DWORD **)v98[0] &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v25 + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
  }
  v99 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v101 = (unsigned __int16)_GetKeyState(2LL) >> 15;
  else
    v101 = (unsigned __int16)_GetKeyState(1LL) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v32) & 0xF) == 2 )
  {
    CurrentThread = (struct _KTHREAD *)__PAIR64__(a4, a3);
    v34 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(a4, a3), 2LL, 0LL, v36) + 40);
    v9 = *(_DWORD *)(v34 + 28);
    v100[0] = *(_DWORD *)(v34 + 32);
  }
  v41 = 0;
  if ( PsGetCurrentProcessWin32Process(v34, v33, v35) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38, v37, v39);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v41 = 1;
  }
  SmartObjStackRefBase<tagMENU>::Init(v114, 0LL);
  v42 = *a1;
  v114[2] = 0LL;
  Window = xxxCreateWindowEx(
             385,
             (wchar_t *)0x8000,
             0x8000LL,
             0LL,
             0x80800000,
             v9,
             v100[0],
             0x64u,
             0x64u,
             a5 & -(__int64)((*(_DWORD *)((*v42)[5] + 40) & 0x40000000) != 0),
             (__int64)v114,
             *(_QWORD *)(*(_QWORD *)(a5 + 40) + 32LL),
             0LL,
             *(_DWORD *)(*(_QWORD *)(a5 + 40) + 236LL),
             2560,
             v41,
             0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v114);
  if ( !Window )
    goto LABEL_7;
  v47 = safe_cast_fnid_to_PMENUWND(Window, v44, v45, v46);
  if ( !v47 )
  {
    xxxDestroyWindow(Window);
    goto LABEL_7;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v108 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v108;
  *((_QWORD *)&v108 + 1) = Window;
  HMLockObject(Window);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v49) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 820LL) & 0x100000) != 0
      || ((a2 & 0x200) == 0
        ? (!(unsigned int)IsTopLevelWindow(a5)
         ? (v50 = IsChildWindowDpiMessageEnabledX(a5))
         : (v50 = IsWindowBroadcastingDpiToChildrenX(a5)))
        : (v50 = IsNonClientDpiScalingEnabledX(a5)),
          v50) )
    {
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
  else if ( (*(_DWORD *)((**a1)[5] + 40) & 0x40000000) == 0 )
  {
    xxxInheritWindowMonitor((struct tagWND *)Window, (struct tagWND *)a5, 0);
  }
  v51 = 0LL;
  if ( (*(_DWORD *)((**a1)[5] + 40) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked((struct tagWND *)Window, 1)
    && !(unsigned int)IsWindowShellCloaked((struct tagWND *)a5, 0) )
  {
    zzzSetWindowCompositionCloak(Window, 0LL, 0);
  }
  if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
    SetOrClrWF(1, Window, 0xA40u, 1);
  SetOrClrWF(0, Window, 0x408u, 1);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v98, *(_QWORD *)(v47 + 8));
  if ( !*(_QWORD *)v98[0] )
    goto LABEL_65;
  v112[1] = a5;
  v112[0] = *(_QWORD *)v98[0] + 8LL;
  HMAssignmentLock(v112);
  LockPopupMenu((__int64)v98, (__int64 *)(*(_QWORD *)v98[0] + 40LL), (__int64)a1);
  v113[1] = Window;
  v113[0] = *(_QWORD *)v98[0] + 56LL;
  HMAssignmentLock(v113);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v105, 0LL);
  MNMarkDelayedFreePopup((_QWORD **)v98, v105);
  v103 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (!(unsigned __int8)KeIsAttachedProcess(v58)
     || (CurrentProcess = PsGetCurrentProcess(v60, v59, v61),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v64),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (v66 = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL )
  {
    v67 = *v66;
  }
  else
  {
    v67 = (__int64)v103;
  }
  if ( v105[0] != gSmartObjNullRef && !--*(_DWORD *)(v105[0] + 8) )
  {
    if ( *(_BYTE *)(v105[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v105[0]);
  }
  v68 = *(_QWORD **)(v67 + 1472);
  if ( v68 )
    *(_QWORD *)(v67 + 1472) = *v68;
  *(_QWORD *)(*(_QWORD *)v98[0] + 64LL) = *(_QWORD *)v98[0];
  **(_DWORD **)v98[0] |= 8u;
  v69 = *(unsigned int **)v98[0];
  v70 = (v101 << 9) | **(_DWORD **)v98[0] & 0xFFFFFDFF;
  v71 = v99 != 0;
  v99 = -v99;
  *v69 = v70;
  v72 = (MenuHelpers *)(**(_DWORD **)v98[0] & 0xFFFFFFBF | (v71 ? 0x40 : 0));
  **(_DWORD **)v98[0] = (_DWORD)v72;
  if ( MenuHelpers::GetMenuRightAlignHint(v72) || (*(_DWORD *)((**a1)[5] + 40) & 0x20) != 0 )
    **(_DWORD **)v98[0] |= 0x10u;
  **(_DWORD **)v98[0] ^= (**(_DWORD **)v98[0] ^ (16 * a2)) & 0x800;
  LODWORD(CurrentThread) = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    **(_DWORD **)v98[0] |= 0x100u;
  **(_DWORD **)v98[0] ^= (**(_DWORD **)v98[0] ^ (a2 >> 7)) & 4;
  v73 = MNAllocMenuState((_QWORD **)v98);
  v103 = v73;
  v74 = (__int64)v73;
  if ( !v73 )
  {
LABEL_65:
    a2 |= 0x80u;
LABEL_66:
    xxxWindowEvent(5u, (struct tagWND *)a5, 0, 0, 0);
    v52 = (__int64)v103;
    xxxMNReleaseCapture((__int64)v103);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage(a5, 0x212u, ((unsigned __int64)~a2 >> 9) & 1, 0LL);
    v56 = 1;
    v57 = 0;
    goto LABEL_151;
  }
  if ( gptiCurrent == v73[4] )
  {
    ++*((_DWORD *)v73 + 10);
    v51 = (struct tagMENUSTATE *)v73;
  }
  if ( (**(_DWORD **)v98[0] & 0x800) == 0 )
    xxxSendMessage(a5, 0x211u, ((unsigned __int64)(unsigned int)~**(_DWORD **)v98[0] >> 2) & 1, 0LL);
  if ( !xxxMNStartMenu(v98, v74, -1) )
    goto LABEL_66;
  if ( (*(_DWORD *)(v74 + 8) & 0x400) != 0 )
  {
    v107 = *(_QWORD *)Window;
    xxxUserModeCallback(0x64u, (__int64)&v107, 8u, v75);
  }
  if ( (**(_DWORD **)v98[0] & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v98[0] + 8LL) )
  {
    v76 = *(_QWORD *)(*(_QWORD *)v98[0] + 8LL);
    v77 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v110 = *(_QWORD *)(v77 + 416);
    *(_QWORD *)(v77 + 416) = &v110;
    *((_QWORD *)&v110 + 1) = v76;
    HMLockObject(v76);
    v78 = (unsigned __int64 *)a1[2];
    if ( !v78 )
      v78 = **a1;
    xxxSendMessage(
      *(_QWORD *)(*(_QWORD *)v98[0] + 8LL),
      0x117u,
      *v78,
      (**(_DWORD **)v98[0] & 4) != 0 ? (struct _LARGE_STRING *)0x10000 : 0);
    ThreadUnlock1(v80, v79, v81);
    v74 = (__int64)v103;
    **(_DWORD **)v98[0] |= 0x200000u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(Window + 40) + 232LL) & 0x20000000) != 0 )
  {
    v82 = 0;
    if ( *(_DWORD *)((**a1)[5] + 44) )
    {
      while ( (**(_DWORD **)(96LL * v82 + (**a1)[11]) & 0x100) == 0
           && *(_QWORD *)(*(_QWORD *)((**a1)[11] + 96LL * v82) + 96LL) != -1LL )
      {
        if ( (unsigned int)++v82 >= *(_DWORD *)((**a1)[5] + 44) )
          goto LABEL_105;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
LABEL_105:
  v83 = *(_QWORD *)(Window + 40);
  v84 = *(_DWORD *)(v83 + 288) & 0xF;
  if ( v84 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v83 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v83 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
  }
  else if ( !v84
         && (v86 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v86 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 424LL) + 284LL);
  }
  if ( WindowDpiLastNotify != *((_WORD *)**a1 + 38) )
  {
    *((_WORD *)**a1 + 38) = WindowDpiLastNotify;
    v87 = (unsigned __int64 *)a1[2];
    if ( !v87 )
      v87 = **a1;
    MNClearCachedPopupSizes(v87);
  }
  *(_QWORD *)v100 = xxxSendMessage(Window, 0x1E2u, 1uLL, 0LL);
  if ( !v100[0] )
    goto LABEL_66;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 4 )
  {
    *(_DWORD *)(v74 + 8) |= 0x20u;
    *(_DWORD *)((**a1)[5] + 40) |= 4u;
  }
  else
  {
    *(_DWORD *)((**a1)[5] + 40) &= ~4u;
  }
  v89 = HIWORD(v100[0]);
  v100[0] = LOWORD(v100[0]) + 6;
  v99 = v89 + 6;
  v104 = __PAIR64__(a4, a3);
  v90 = __PAIR64__(a4, a3);
  v91 = MonitorFromPoint(__SPAIR64__(a4, a3), 2LL, 0LL, v88);
  v92 = *(_QWORD *)(a5 + 40);
  v93 = (struct tagMONITOR *)v91;
  v104 = v91;
  v94 = a2 ^ 8;
  if ( (((a2 & 4) == 0) & (*(_BYTE *)(v92 + 26) >> 6)) == 0 )
    v94 = a2;
  if ( (v94 & 8) != 0 )
  {
    a3 -= v100[0];
    **(_DWORD **)v98[0] = **(_DWORD **)v98[0] & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v94 & 4) != 0 )
  {
    a3 -= (unsigned int)v100[0] >> 1;
  }
  else
  {
    **(_DWORD **)v98[0] = **(_DWORD **)v98[0] & 0xF07FFFFF | ((((**(_DWORD **)v98[0] & 0x10) != 0) + 1) << 23);
  }
  v95 = v99;
  if ( (v94 & 0x20) != 0 )
  {
    a4 -= v99;
    **(_DWORD **)v98[0] |= 0x4000000u;
  }
  else if ( (v94 & 0x10) != 0 )
  {
    a4 -= (unsigned int)v99 >> 1;
  }
  else
  {
    **(_DWORD **)v98[0] |= 0x2000000u;
  }
  if ( (v94 & 0x3C00) != 0 )
    **(_DWORD **)v98[0] = **(_DWORD **)v98[0] & 0xF07FFFFF | ((v94 & 0x3C00) << 13);
  v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v98[0] + 16LL) + 40LL);
  if ( a6 )
  {
    if ( *(_DWORD *)(v96 + 236) != 1 )
      goto LABEL_143;
LABEL_142:
    **(_DWORD **)v98[0] |= 0x80000000;
    goto LABEL_143;
  }
  if ( *(_DWORD *)(v96 + 236) == 1 )
  {
    v116 = *GetMonitorRectForWindow(&v117, v91, (const struct tagWND *)Window);
    v115 = *(_OWORD *)GetMonitorMenuRectForWindow(v118, v104, Window);
    SubtractRect((__int64)v106, (__int64)&v116, (__int64)&v115);
    v93 = (struct tagMONITOR *)v104;
    goto LABEL_142;
  }
  *(_OWORD *)v106 = 0LL;
  **(_DWORD **)v98[0] &= ~0x80000000;
LABEL_143:
  BestPos = FindBestPos(a3, a4, v100[0], v95, (struct tagRECT *)v106, v94, (unsigned int ***)v98, v93, v90);
  if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 && (**(_DWORD **)v98[0] & 0x1800000) != 0 )
    **(_DWORD **)v98[0] ^= 0x1800000u;
  if ( (**(_DWORD **)v98[0] & 0xF800000) != 0 && (v94 & 0x4000) == 0 )
    **(_DWORD **)v98[0] |= 0x8000000u;
  xxxPlayEventSound(5LL);
  v52 = (__int64)v103;
  xxxSetWindowPos(
    (struct tagWND *)Window,
    ((v103[1] & 0x100) != 0) - 1LL,
    (unsigned int)(__int16)BestPos,
    (unsigned int)SHIWORD(BestPos),
    0,
    0,
    ~(unsigned __int8)(*((_DWORD *)v103 + 2) >> 4) & 0x10 | 0x241);
  xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
  *(_DWORD *)(v52 + 8) = *(_DWORD *)(v52 + 8) & 0xFFFFFFF7 | (8 * v101);
  v57 = xxxMNLoop((__int64 **)v98, v52, 0LL, 0);
  if ( (*(_DWORD *)(v52 + 8) & 0x100) == 0 )
  {
    v56 = (int)CurrentThread;
LABEL_151:
    if ( ThreadUnlock1(v54, v53, v55) && *(char *)(*(_QWORD *)(Window + 40) + 19LL) >= 0 )
      xxxDestroyWindow(Window);
    if ( v52 )
      xxxMNEndMenuState(v52);
    xxxDeliverRestoreFocusMessage((struct tagWND *)a5);
    goto LABEL_157;
  }
  ThreadUnlock1(v54, v53, v55);
  v56 = (int)CurrentThread;
LABEL_157:
  if ( v56 )
    v12 = v57;
  if ( v51 )
    xxxUnlockMenuStateInternal(v51, 0);
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
  if ( v98[0] != gSmartObjNullRef && !--*(_DWORD *)(v98[0] + 8) )
  {
    if ( *(_BYTE *)(v98[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v98[0]);
  }
  v23 = *(_QWORD **)(v14 + 1472);
  if ( v23 )
    *(_QWORD *)(v14 + 1472) = *v23;
  return v12;
}
