/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C023A484
 * Callers:
 *     xxxMNButtonDown @ 0x1C0237C4C (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0237D4C (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0251A9C (xxxMNKeyFilter.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00510B4 (xxxEnableChildWindowDpiMessageX.c)
 *     MNGetpItemIndex @ 0x1C00636B8 (MNGetpItemIndex.c)
 *     MNGetpItemFromIndex @ 0x1C00646F8 (MNGetpItemFromIndex.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     MNIsUAHMenu @ 0x1C00AF118 (MNIsUAHMenu.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F0110 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0114880 (xxxPlayEventSound.c)
 *     MNClearCachedPopupSizes @ 0x1C01216B8 (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C0121738 (MNRefreshUAHCachedSizes.c)
 *     MNMarkDelayedFreePopup @ 0x1C022295C (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C0234488 (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0236148 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236D04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     LockPopupMenu @ 0x1C02374B0 (LockPopupMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C02386F0 (xxxMNCloseHierarchy.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C0244570 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2)
{
  __int64 v4; // r12
  __int32 v5; // r15d
  __int64 **v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // r14
  __int128 *v17; // rdx
  __int64 v18; // rbx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  _DWORD *v27; // rcx
  LONG v28; // esi
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v31; // ebx
  __int64 *v32; // rax
  __int64 Window; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 *v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // r15
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v46; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 *v51; // rax
  __int64 v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  __int64 v57; // rax
  int v58; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 *v62; // rcx
  __int64 v63; // r8
  int v64; // r9d
  int v65; // r15d
  int v66; // eax
  __int64 v67; // r8
  __int64 v68; // rdx
  _DWORD *v69; // r9
  int v70; // edx
  int v71; // ecx
  __int64 *v72; // rax
  __int64 *v73; // rdx
  __int64 v74; // rdx
  int v75; // r8d
  int v76; // ebx
  MenuHelpers *v77; // rcx
  int v78; // r14d
  unsigned int *v79; // rcx
  unsigned int v80; // eax
  __int64 *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rbx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  struct _KTHREAD *v99; // rsi
  __int64 v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // rax
  int v105; // ebx
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 *v108; // rax
  _QWORD *v109; // rcx
  _QWORD *v111[2]; // [rsp+90h] [rbp-80h] BYREF
  __int128 v112; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v113; // [rsp+B0h] [rbp-60h]
  __int64 v114[2]; // [rsp+C0h] [rbp-50h] BYREF
  int v115[2]; // [rsp+D0h] [rbp-40h] BYREF
  int v116; // [rsp+D8h] [rbp-38h]
  int v117; // [rsp+DCh] [rbp-34h]
  __int64 v118; // [rsp+E0h] [rbp-30h] BYREF
  unsigned __int64 v119; // [rsp+E8h] [rbp-28h]
  int v120[4]; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v121; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v122[3]; // [rsp+110h] [rbp+0h] BYREF
  __int64 v123; // [rsp+128h] [rbp+18h] BYREF
  __int128 v124; // [rsp+130h] [rbp+20h] BYREF
  __int64 v125; // [rsp+140h] [rbp+30h]
  __int128 v126; // [rsp+148h] [rbp+38h] BYREF
  __int64 v127; // [rsp+158h] [rbp+48h]
  _QWORD v128[2]; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v129[2]; // [rsp+170h] [rbp+60h] BYREF
  _QWORD v130[2]; // [rsp+180h] [rbp+70h] BYREF
  _QWORD v131[2]; // [rsp+190h] [rbp+80h] BYREF
  __int128 v132; // [rsp+1A0h] [rbp+90h]
  __int64 v133; // [rsp+1B0h] [rbp+A0h]
  __int64 v134; // [rsp+1B8h] [rbp+A8h]
  __int128 v135; // [rsp+1E0h] [rbp+D0h]
  _QWORD v136[3]; // [rsp+210h] [rbp+100h] BYREF
  _QWORD v137[3]; // [rsp+228h] [rbp+118h] BYREF
  int **v138[8]; // [rsp+240h] [rbp+130h] BYREF
  int v139; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v140; // [rsp+2A0h] [rbp+190h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+2A8h] [rbp+198h]

  v4 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v111, 0LL);
  v139 = 0;
  v113 = 0LL;
  v127 = 0LL;
  v125 = 0LL;
  v5 = 0;
  v6 = (__int64 **)*a1;
  v112 = 0LL;
  v140 = 0;
  v126 = 0LL;
  LODWORD(CurrentThread) = 0;
  v124 = 0LL;
  v7 = *v6;
  v119 = 0LL;
  v118 = 0LL;
  if ( *((_DWORD *)v7 + 20) == -1 )
    goto LABEL_116;
  v7 = *(__int64 **)(*(_QWORD *)(**a1 + 40) + 40LL);
  if ( *(_DWORD *)(**a1 + 80) >= *((_DWORD *)v7 + 11) )
    goto LABEL_116;
  if ( (*(_DWORD *)**a1 & 0x20) != 0 )
  {
    v7 = (__int64 *)**a1;
    if ( (*(_DWORD *)v7 & 0x4000) == 0 )
      goto LABEL_116;
    xxxMNCloseHierarchy(**a1, a2);
  }
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v8 = MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(**a1 + 80));
  v9 = v8;
  if ( v8 && *(_QWORD *)(v8 + 16) )
  {
    v7 = *a1;
    if ( (*(_DWORD *)**a1 & 0x800) == 0 )
    {
      v7 = (__int64 *)**a1;
      if ( v7[1] )
      {
        v10 = *(_QWORD *)(**a1 + 8);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v112 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v112;
        *((_QWORD *)&v112 + 1) = v10;
        HMLockObject(v10);
        v12 = *a1;
        v119 = **(_QWORD **)(v9 + 16);
        xxxSendMessage(
          *(_QWORD *)(**a1 + 8),
          0x117u,
          v119,
          (struct _LARGE_STRING *)(*(unsigned __int16 *)(**a1 + 80) | ((unsigned __int64)(*(_DWORD *)*v12 & 4) << 14)));
        ThreadUnlock1(v14, v13, v15);
        LODWORD(CurrentThread) = 1;
      }
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
    {
      v4 = -1LL;
      goto LABEL_113;
    }
    v7 = *(__int64 **)(*(_QWORD *)(**a1 + 40) + 40LL);
    if ( *(_DWORD *)(**a1 + 80) >= *((_DWORD *)v7 + 11)
      || (v7 = (__int64 *)**a1,
          v16 = (__int64 *)(*(_QWORD *)(v7[5] + 88) + 96LL * *((int *)v7 + 20)),
          v17 = (__int128 *)*v16,
          (*(_DWORD *)(*v16 + 4) & 3) != 0)
      || (v18 = v16[2]) == 0
      || !*(_DWORD *)(*(_QWORD *)(v18 + 40) + 44LL) )
    {
LABEL_113:
      if ( (_DWORD)CurrentThread )
      {
        v7 = (__int64 *)**a1;
        if ( v7[1] )
        {
          v94 = *(_QWORD *)(**a1 + 8);
          v95 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v112 = *(_QWORD *)(v95 + 408);
          *(_QWORD *)(v95 + 408) = &v112;
          *((_QWORD *)&v112 + 1) = v94;
          HMLockObject(v94);
          xxxSendMessage(
            *(_QWORD *)(**a1 + 8),
            0x125u,
            v119,
            (struct _LARGE_STRING *)((unsigned __int64)(*(_DWORD *)**a1 & 4) << 27));
          ThreadUnlock1(v97, v96, v98);
        }
      }
      goto LABEL_116;
    }
    v19 = v17[1];
    v132 = *v17;
    v20 = v17[4];
    v134 = *((_QWORD *)&v19 + 1);
    v135 = v20;
    v133 = v18;
    v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v124 = *(_QWORD *)(v21 + 408);
    *(_QWORD *)(v21 + 408) = &v124;
    *((_QWORD *)&v124 + 1) = v18;
    HMLockObject(v18);
    v24 = **a1;
    if ( *(_QWORD *)(v24 + 8) )
    {
      v25 = *(_QWORD *)(**a1 + 8);
      v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v112 = *(_QWORD *)(v26 + 408);
      *(_QWORD *)(v26 + 408) = &v112;
      *((_QWORD *)&v112 + 1) = v25;
      HMLockObject(v25);
      v27 = *(_DWORD **)(*(_QWORD *)(**a1 + 16) + 40LL);
      if ( (v27[72] & 0xF) == 2 )
      {
        v27 = *(_DWORD **)(ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL)) + 40);
        v5 = v27[7];
        v28 = v27[8];
      }
      else
      {
        v28 = 0;
      }
      v31 = 0;
      if ( PsGetCurrentProcessWin32Process(v27) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
        if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v31 = 1;
      }
      SmartObjStackRefBase<tagMENU>::Init(v136, 0LL);
      v32 = *a1;
      v136[2] = 0LL;
      Window = xxxCreateWindowEx(
                 385,
                 (wchar_t *)0x8000,
                 0x8000LL,
                 0LL,
                 -2139095040,
                 v5,
                 v28,
                 0x64u,
                 0x64u,
                 *(__int64 **)(**a1 + 8),
                 (__int64)v136,
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v32 + 8) + 40LL) + 32LL),
                 0LL,
                 0,
                 2560,
                 v31,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v136);
      ThreadUnlock1(v35, v34, v36);
    }
    else
    {
      Window = 0LL;
    }
    if ( Window )
    {
      v38 = safe_cast_fnid_to_PMENUWND(Window);
      if ( v38 )
      {
        SetOrClrWF(0, Window, 0x408u, 1);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v111, *(_QWORD *)(v38 + 8));
        if ( *v111[0] )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v114, *(_QWORD *)(**a1 + 64));
          MNMarkDelayedFreePopup(v111, v114);
          v39 = 0LL;
          CurrentThread = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v40)
            || (CurrentProcess = PsGetCurrentProcess(v42, v41, v43),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v46),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            v48 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( v48 )
              v39 = *v48;
          }
          if ( v114[0] != gSmartObjNullRef && !--*(_DWORD *)(v114[0] + 8) )
          {
            if ( *(_BYTE *)(v114[0] + 12) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v114[0]);
          }
          v49 = *(_QWORD **)(v39 + 1464);
          if ( v49 )
            *(_QWORD *)(v39 + 1464) = *v49;
          SetOrClrWF(
            (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
            Window,
            0xA40u,
            1);
          v50 = *(_QWORD *)(**a1 + 8);
          v128[0] = *v111[0] + 8LL;
          v128[1] = v50;
          HMAssignmentLock(v128);
          SmartObjStackRefBase<tagMENU>::Init(v137, v133);
          v137[2] = 0LL;
          LockPopupMenu((__int64)v111, (__int64 *)(*v111[0] + 40LL), (__int64)v137);
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v137);
          v51 = *a1;
          v129[1] = Window;
          v129[0] = *v51 + 24;
          HMAssignmentLock(v129);
          *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
          v52 = *(_QWORD *)(**a1 + 16);
          v130[0] = *v111[0] + 32LL;
          v130[1] = v52;
          HMAssignmentLock(v130);
          *(_QWORD *)(*v111[0] + 64LL) = *(_QWORD *)(**a1 + 64);
          **(_DWORD **)v111[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v111[0]) & 2;
          **(_DWORD **)v111[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v111[0]) & 4;
          v53 = *a1;
          LODWORD(CurrentThread) = 0;
          **(_DWORD **)v111[0] ^= (**(_DWORD **)v111[0] ^ *(_DWORD *)*v53) & 0x800;
          **(_DWORD **)v111[0] |= 0x200000u;
          **(_DWORD **)v111[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v111[0]) & 0x400000;
          **(_DWORD **)v111[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v111[0]) & 0x10;
          **(_DWORD **)v111[0] = *(_DWORD *)**a1 ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v111[0]) & 0x7FFFFFFF;
          v54 = *(_QWORD *)(*(_QWORD *)(*v111[0] + 40LL) + 40LL);
          if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
            *(_DWORD *)(v54 + 40) |= 4u;
          else
            *(_DWORD *)(v54 + 40) &= ~4u;
          **(_DWORD **)v111[0] &= ~0x1000u;
          if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*v111[0] + 40LL))
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v111[0] + 40LL) + 40LL) + 40LL) & 1) != 0 )
          {
            MNRefreshUAHCachedSizes(*(_QWORD *)(*v111[0] + 40LL));
          }
          v55 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v126 = *(_QWORD *)(v55 + 408);
          *(_QWORD *)(v55 + 408) = &v126;
          *((_QWORD *)&v126 + 1) = Window;
          HMLockObject(Window);
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 416LL) + 820LL) & 0x100000) != 0
            || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
            && ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x20000000) != 0
             || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
             && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x10000000) != 0) )
          {
            SmartObjStackRefBase<tagMENU>::Init(v122, *(_QWORD *)(*v111[0] + 40LL));
            v56 = 0;
            v122[2] = 0LL;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v122[0] + 40LL) + 44LL) )
            {
              while ( (**(_DWORD **)(96LL * v56 + *(_QWORD *)(*(_QWORD *)v122[0] + 88LL)) & 0x100) == 0
                   && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v122[0] + 88LL) + 96LL * v56) + 96LL) != -1LL )
              {
                if ( (unsigned int)++v56 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v122[0] + 40LL) + 44LL) )
                  goto LABEL_60;
              }
            }
            else
            {
LABEL_60:
              xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
            }
            SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v122);
          }
          v57 = *(_QWORD *)(Window + 40);
          v58 = *(_DWORD *)(v57 + 288) & 0xF;
          if ( v58 == 3 )
          {
            WindowDpiLastNotify = (*(_DWORD *)(v57 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v57 + 232) & 0x8000000) != 0 )
          {
            WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
          }
          else if ( !v58
                 && (v60 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 448LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v60 + 8) + 64LL) & 1) != 0 )
          {
            WindowDpiLastNotify = 96;
          }
          else
          {
            WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 416LL) + 284LL);
          }
          if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v111[0] + 40LL) + 76LL) )
          {
            *(_WORD *)(*(_QWORD *)(*v111[0] + 40LL) + 76LL) = WindowDpiLastNotify;
            MNClearCachedPopupSizes(*(_QWORD **)(*v111[0] + 40LL));
          }
          if ( (unsigned int)xxxSendMessage(Window, 0x1E2u, 1uLL, 0LL)
            && (v62 = *a1, v61 = **a1, *(_QWORD *)(v61 + 40))
            && (unsigned int)MNGetpItemIndex(*(_QWORD *)(**a1 + 40), (__int64)v16) != -1 )
          {
            v65 = (unsigned __int16)v64 + 6;
            *(_DWORD *)**a1 |= 0x20u;
            v66 = xxxMNPositionHierarchy(
                    a1,
                    v16,
                    v65,
                    (unsigned int)HIWORD(v64) + 6,
                    &v139,
                    (LONG *)&v140,
                    (__int64)&v118);
            v68 = *v111[0];
            **(_DWORD **)v111[0] ^= (**(_DWORD **)v111[0] ^ (v66 << 23)) & 0xF800000;
            if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL, v68, v67) & 0x8000u) != 0LL )
            {
              v69 = *(_DWORD **)(Window + 40);
              v121 = 0LL;
              v70 = v69[23];
              v120[2] = v69[24] + v139 - v69[22];
              v71 = v140 - v70 + v69[25];
              v120[0] = v139;
              v120[3] = v71;
              v120[1] = v140;
              v72 = *a1;
              v73 = *a1;
              v115[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) + v135;
              v74 = *v73;
              v75 = DWORD1(v135) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v72 + 16) + 40LL) + 92LL);
              v116 = DWORD2(v135) + v115[0];
              v115[1] = v75;
              v117 = v75 + HIDWORD(v135);
              SmartObjStackRefBase<tagPOPUPMENU>::Init(v138, v74);
              MNGetPopupBoundsRect(v138, v118, &v121, 0);
              if ( (unsigned int)IntersectRect(v120, v120, v115) )
              {
                v76 = v65 + v135 + DWORD2(v135) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                if ( v76 > SDWORD2(v121) )
                  v76 = 0;
                v77 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 16) + 40LL);
                v78 = v135 + *((_DWORD *)v77 + 22) - v65;
                if ( v78 < (int)v121 )
                  v78 = 0;
                if ( (MenuHelpers::GetMenuRightAlignHint(v77) || (v132 & 0x2000) != 0) && v78 || !v76 )
                {
                  v139 = v135 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v65;
                  v79 = (unsigned int *)*v111[0];
                  v80 = **(_DWORD **)v111[0] & 0xF07FFFFF | 0x1000000;
                }
                else
                {
                  v139 = v135 + DWORD2(v135) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                  v79 = (unsigned int *)*v111[0];
                  v80 = **(_DWORD **)v111[0] & 0xF07FFFFF | 0x800000;
                }
                *v79 = v80;
                if ( v139 <= (int)v121 )
                {
                  v139 = v116;
                  **(_DWORD **)v111[0] = **(_DWORD **)v111[0] & 0xF07FFFFF | 0x1000000;
                }
              }
            }
            if ( (*(_DWORD *)**a1 & 1) != 0 )
            {
              if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                **(_DWORD **)v111[0] |= 0x8000000u;
              if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v111[0] & 0xF800000) == 0x1000000 )
                **(_DWORD **)v111[0] |= 0x10u;
              *(_DWORD *)**a1 |= 0x400u;
            }
            else
            {
              **(_DWORD **)v111[0] |= 0x8000000u;
              if ( (**(_DWORD **)v111[0] & 0xF800000) == 0x1000000 )
                **(_DWORD **)v111[0] |= 0x10u;
            }
            v81 = *a1;
            v131[1] = Window;
            v131[0] = *(_QWORD *)(*v81 + 64) + 56LL;
            HMAssignmentLock(v131);
            if ( *(_QWORD *)(*v111[0] + 8LL) )
            {
              v85 = *(_QWORD *)(*v111[0] + 8LL);
              v86 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v112 = *(_QWORD *)(v86 + 408);
              *(_QWORD *)(v86 + 408) = &v112;
              *((_QWORD *)&v112 + 1) = v85;
              HMLockObject(v85);
              xxxInternalUpdateWindow(*(struct tagWND **)(*v111[0] + 8LL), 1u);
              ThreadUnlock1(v88, v87, v89);
            }
            if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
            {
              v123 = *(_QWORD *)Window;
              xxxUserModeCallback(0x64u, (__int64)&v123, 8LL, v84);
            }
            xxxPlayEventSound(5LL, v82, v83);
            if ( (W32GetCurrentThreadDpiAwarenessContext(v90) & 0xF) == 2 )
              *(_DWORD *)(*(_QWORD *)(Window + 40) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL)
                                                                        + 288LL);
            xxxSetWindowPos(
              (struct tagWND *)Window,
              ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
              (unsigned int)v139,
              v140,
              0,
              0,
              ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
            xxxInheritWindowMonitor((struct tagWND *)Window, *(__int64 **)(**a1 + 16), 1);
            xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
            if ( *(_DWORD *)(a2 + 20) == 1 )
              xxxSendMessage(Window, 0x1E5u, 0LL, 0LL);
            xxxInternalUpdateWindow((struct tagWND *)Window, 1u);
            v4 = Window;
            ThreadUnlock1(v92, v91, v93);
          }
          else
          {
            if ( ThreadUnlock1(v62, v61, v63) )
              xxxDestroyWindow((__int64 *)Window);
            HMAssignmentUnlock(**a1 + 24);
          }
          goto LABEL_112;
        }
        v37 = (__int64 *)Window;
      }
      xxxDestroyWindow(v37);
    }
LABEL_112:
    ThreadUnlock1(v24, v22, v23);
    goto LABEL_113;
  }
LABEL_116:
  v99 = KeGetCurrentThread();
  v100 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v7)
    || (v104 = PsGetCurrentProcess(v102, v101, v103),
        v105 = PsGetProcessSessionIdEx(v104),
        v107 = PsGetCurrentThreadProcess(v106),
        v105 == (unsigned int)PsGetProcessSessionIdEx(v107)) )
  {
    v108 = (__int64 *)PsGetThreadWin32Thread(v99);
    if ( v108 )
      v100 = *v108;
  }
  if ( v111[0] != (_QWORD *)gSmartObjNullRef && !--*((_DWORD *)v111[0] + 2) )
  {
    if ( *((_BYTE *)v111[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v111[0]);
  }
  v109 = *(_QWORD **)(v100 + 1464);
  if ( v109 )
    *(_QWORD *)(v100 + 1464) = *v109;
  return v4;
}
