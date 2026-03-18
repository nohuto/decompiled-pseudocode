/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C02395F8
 * Callers:
 *     xxxMNButtonDown @ 0x1C0236DBC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0236EBC (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C025048C (xxxMNKeyFilter.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C001AED0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0036944 (MNIsUAHMenu.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00F9644 (xxxEnableChildWindowDpiMessageX.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0115900 (xxxPlayEventSound.c)
 *     MNClearCachedPopupSizes @ 0x1C0122628 (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C01226A8 (MNRefreshUAHCachedSizes.c)
 *     MNMarkDelayedFreePopup @ 0x1C0221ACC (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C02335F8 (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C02352B8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235E74 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     LockPopupMenu @ 0x1C0236620 (LockPopupMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C02432D0 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
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
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // rcx
  LONG v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 CurrentProcessWin32Process; // rax
  int v36; // ebx
  __int64 *v37; // rax
  __int64 Window; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v50; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 *v55; // rax
  __int64 v56; // rax
  __int64 *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // edx
  __int64 v61; // rax
  int v62; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 *v66; // rcx
  __int64 v67; // r8
  int v68; // r9d
  int v69; // r15d
  int v70; // eax
  __int64 v71; // r8
  __int64 v72; // rdx
  _DWORD *v73; // r9
  int v74; // edx
  int v75; // ecx
  __int64 *v76; // rax
  __int64 *v77; // rdx
  __int64 v78; // rdx
  int v79; // r8d
  int v80; // ebx
  MenuHelpers *v81; // rcx
  int v82; // r14d
  unsigned int *v83; // rcx
  unsigned int v84; // eax
  __int64 *v85; // rax
  __int64 v86; // r9
  __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rbx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  struct _KTHREAD *v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rax
  int v107; // ebx
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 *v110; // rax
  _QWORD *v111; // rcx
  _QWORD *v113[2]; // [rsp+90h] [rbp-80h] BYREF
  __int128 v114; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v115; // [rsp+B0h] [rbp-60h]
  __int64 v116[2]; // [rsp+C0h] [rbp-50h] BYREF
  int v117[2]; // [rsp+D0h] [rbp-40h] BYREF
  int v118; // [rsp+D8h] [rbp-38h]
  int v119; // [rsp+DCh] [rbp-34h]
  __int64 v120; // [rsp+E0h] [rbp-30h] BYREF
  unsigned __int64 v121; // [rsp+E8h] [rbp-28h]
  int v122[4]; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v123; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v124[3]; // [rsp+110h] [rbp+0h] BYREF
  __int64 v125; // [rsp+128h] [rbp+18h] BYREF
  __int128 v126; // [rsp+130h] [rbp+20h] BYREF
  __int64 v127; // [rsp+140h] [rbp+30h]
  __int128 v128; // [rsp+148h] [rbp+38h] BYREF
  __int64 v129; // [rsp+158h] [rbp+48h]
  _QWORD v130[2]; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v131[2]; // [rsp+170h] [rbp+60h] BYREF
  _QWORD v132[2]; // [rsp+180h] [rbp+70h] BYREF
  _QWORD v133[2]; // [rsp+190h] [rbp+80h] BYREF
  __int128 v134; // [rsp+1A0h] [rbp+90h]
  __int64 v135; // [rsp+1B0h] [rbp+A0h]
  __int64 v136; // [rsp+1B8h] [rbp+A8h]
  __int128 v137; // [rsp+1E0h] [rbp+D0h]
  _QWORD v138[3]; // [rsp+210h] [rbp+100h] BYREF
  _QWORD v139[3]; // [rsp+228h] [rbp+118h] BYREF
  int **v140[8]; // [rsp+240h] [rbp+130h] BYREF
  int v141; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v142; // [rsp+2A0h] [rbp+190h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+2A8h] [rbp+198h]

  v4 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v113, 0LL);
  v141 = 0;
  v115 = 0LL;
  v129 = 0LL;
  v127 = 0LL;
  v5 = 0;
  v6 = (__int64 **)*a1;
  v114 = 0LL;
  v142 = 0;
  v128 = 0LL;
  LODWORD(CurrentThread) = 0;
  v126 = 0LL;
  v7 = *v6;
  v121 = 0LL;
  v120 = 0LL;
  if ( *((_DWORD *)v7 + 20) == -1 )
    goto LABEL_115;
  v7 = *(__int64 **)(*(_QWORD *)(**a1 + 40) + 40LL);
  if ( *(_DWORD *)(**a1 + 80) >= *((_DWORD *)v7 + 11) )
    goto LABEL_115;
  if ( (*(_DWORD *)**a1 & 0x20) != 0 )
  {
    v7 = (__int64 *)**a1;
    if ( (*(_DWORD *)v7 & 0x4000) == 0 )
      goto LABEL_115;
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
        *(_QWORD *)&v114 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v114;
        *((_QWORD *)&v114 + 1) = v10;
        HMLockObject(v10);
        v12 = *a1;
        v121 = **(_QWORD **)(v9 + 16);
        xxxSendMessage(
          *(_QWORD *)(**a1 + 8),
          0x117u,
          v121,
          (struct _LARGE_STRING *)(*(unsigned __int16 *)(**a1 + 80) | ((unsigned __int64)(*(_DWORD *)*v12 & 4) << 14)));
        ThreadUnlock1(v14, v13, v15);
        LODWORD(CurrentThread) = 1;
      }
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
    {
      v7 = *(__int64 **)(*(_QWORD *)(**a1 + 40) + 40LL);
      if ( *(_DWORD *)(**a1 + 80) < *((_DWORD *)v7 + 11) )
      {
        v7 = (__int64 *)**a1;
        v16 = (__int64 *)(*(_QWORD *)(v7[5] + 88) + 96LL * *((int *)v7 + 20));
        v17 = (__int128 *)*v16;
        if ( (*(_DWORD *)(*v16 + 4) & 3) == 0 )
        {
          v18 = v16[2];
          if ( v18 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v18 + 40) + 44LL) )
            {
              v19 = v17[1];
              v134 = *v17;
              v20 = v17[4];
              v136 = *((_QWORD *)&v19 + 1);
              v137 = v20;
              v135 = v18;
              v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v126 = *(_QWORD *)(v21 + 416);
              *(_QWORD *)(v21 + 416) = &v126;
              *((_QWORD *)&v126 + 1) = v18;
              HMLockObject(v18);
              v25 = **a1;
              if ( *(_QWORD *)(v25 + 8) )
              {
                v26 = *(_QWORD *)(**a1 + 8);
                v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v114 = *(_QWORD *)(v27 + 416);
                *(_QWORD *)(v27 + 416) = &v114;
                *((_QWORD *)&v114 + 1) = v26;
                HMLockObject(v26);
                v30 = *(_DWORD **)(*(_QWORD *)(**a1 + 16) + 40LL);
                if ( (v30[72] & 0xF) == 2 )
                {
                  v30 = *(_DWORD **)(ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL))
                                   + 40);
                  v5 = v30[7];
                  v31 = v30[8];
                }
                else
                {
                  v31 = 0;
                }
                v36 = 0;
                if ( PsGetCurrentProcessWin32Process(v30, v28, v29) )
                {
                  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33, v32, v34);
                  if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
                    v36 = 1;
                }
                SmartObjStackRefBase<tagMENU>::Init(v138, 0LL);
                v37 = *a1;
                v138[2] = 0LL;
                Window = xxxCreateWindowEx(
                           385,
                           (wchar_t *)0x8000,
                           0x8000LL,
                           0LL,
                           0x80800000,
                           v5,
                           v31,
                           0x64u,
                           0x64u,
                           *(_QWORD *)(**a1 + 8),
                           (__int64)v138,
                           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v37 + 8) + 40LL) + 32LL),
                           0LL,
                           0,
                           2560,
                           v36,
                           0LL);
                SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v138);
                ThreadUnlock1(v40, v39, v41);
              }
              else
              {
                Window = 0LL;
              }
              if ( Window )
              {
                v42 = safe_cast_fnid_to_PMENUWND(Window, v22, v23, v24);
                if ( v42
                  && (SetOrClrWF(0, Window, 0x408u, 1),
                      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v113, *(_QWORD *)(v42 + 8)),
                      *v113[0]) )
                {
                  SmartObjStackRefBase<tagPOPUPMENU>::Init(v116, *(_QWORD *)(**a1 + 64));
                  MNMarkDelayedFreePopup(v113, v116);
                  v43 = 0LL;
                  CurrentThread = KeGetCurrentThread();
                  if ( !(unsigned __int8)KeIsAttachedProcess(v44)
                    || (CurrentProcess = PsGetCurrentProcess(v46, v45, v47),
                        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                        CurrentThreadProcess = PsGetCurrentThreadProcess(v50),
                        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
                  {
                    v52 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                    if ( v52 )
                      v43 = *v52;
                  }
                  if ( v116[0] != gSmartObjNullRef && !--*(_DWORD *)(v116[0] + 8) )
                  {
                    if ( *(_BYTE *)(v116[0] + 12) )
                      Win32FreeToPagedLookasideList(gpStackRefLookAside, v116[0]);
                  }
                  v53 = *(_QWORD **)(v43 + 1472);
                  if ( v53 )
                    *(_QWORD *)(v43 + 1472) = *v53;
                  SetOrClrWF(
                    (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
                    Window,
                    0xA40u,
                    1);
                  v54 = *(_QWORD *)(**a1 + 8);
                  v130[0] = *v113[0] + 8LL;
                  v130[1] = v54;
                  HMAssignmentLock(v130);
                  SmartObjStackRefBase<tagMENU>::Init(v139, v135);
                  v139[2] = 0LL;
                  LockPopupMenu((__int64)v113, (__int64 *)(*v113[0] + 40LL), (__int64)v139);
                  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v139);
                  v55 = *a1;
                  v131[1] = Window;
                  v131[0] = *v55 + 24;
                  HMAssignmentLock(v131);
                  *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
                  v56 = *(_QWORD *)(**a1 + 16);
                  v132[0] = *v113[0] + 32LL;
                  v132[1] = v56;
                  HMAssignmentLock(v132);
                  *(_QWORD *)(*v113[0] + 64LL) = *(_QWORD *)(**a1 + 64);
                  **(_DWORD **)v113[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v113[0]) & 2;
                  **(_DWORD **)v113[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v113[0]) & 4;
                  v57 = *a1;
                  LODWORD(CurrentThread) = 0;
                  **(_DWORD **)v113[0] ^= (**(_DWORD **)v113[0] ^ *(_DWORD *)*v57) & 0x800;
                  **(_DWORD **)v113[0] |= 0x200000u;
                  **(_DWORD **)v113[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v113[0]) & 0x400000;
                  **(_DWORD **)v113[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v113[0]) & 0x10;
                  **(_DWORD **)v113[0] = *(_DWORD *)**a1 ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v113[0]) & 0x7FFFFFFF;
                  v58 = *(_QWORD *)(*(_QWORD *)(*v113[0] + 40LL) + 40LL);
                  if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
                    *(_DWORD *)(v58 + 40) |= 4u;
                  else
                    *(_DWORD *)(v58 + 40) &= ~4u;
                  **(_DWORD **)v113[0] &= ~0x1000u;
                  if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*v113[0] + 40LL))
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v113[0] + 40LL) + 40LL) + 40LL) & 1) != 0 )
                  {
                    MNRefreshUAHCachedSizes(*(_QWORD *)(*v113[0] + 40LL));
                  }
                  v59 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  *(_QWORD *)&v128 = *(_QWORD *)(v59 + 416);
                  *(_QWORD *)(v59 + 416) = &v128;
                  *((_QWORD *)&v128 + 1) = Window;
                  HMLockObject(Window);
                  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 424LL) + 820LL) & 0x100000) != 0
                    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
                    && ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x20000000) != 0
                     || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
                     && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x10000000) != 0) )
                  {
                    SmartObjStackRefBase<tagMENU>::Init(v124, *(_QWORD *)(*v113[0] + 40LL));
                    v60 = 0;
                    v124[2] = 0LL;
                    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v124[0] + 40LL) + 44LL) )
                    {
                      while ( (**(_DWORD **)(96LL * v60 + *(_QWORD *)(*(_QWORD *)v124[0] + 88LL)) & 0x100) == 0
                           && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v124[0] + 88LL) + 96LL * v60) + 96LL) != -1LL )
                      {
                        if ( (unsigned int)++v60 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v124[0] + 40LL) + 44LL) )
                          goto LABEL_59;
                      }
                    }
                    else
                    {
LABEL_59:
                      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
                    }
                    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v124);
                  }
                  v61 = *(_QWORD *)(Window + 40);
                  v62 = *(_DWORD *)(v61 + 288) & 0xF;
                  if ( v62 == 3 )
                  {
                    WindowDpiLastNotify = (*(_DWORD *)(v61 + 288) >> 8) & 0x1FF;
                  }
                  else if ( (*(_DWORD *)(v61 + 232) & 0x8000000) != 0 )
                  {
                    WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
                  }
                  else if ( !v62
                         && (v64 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 456LL)) != 0
                         && (*(_DWORD *)(**(_QWORD **)(v64 + 8) + 64LL) & 1) != 0 )
                  {
                    WindowDpiLastNotify = 96;
                  }
                  else
                  {
                    WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 424LL) + 284LL);
                  }
                  if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v113[0] + 40LL) + 76LL) )
                  {
                    *(_WORD *)(*(_QWORD *)(*v113[0] + 40LL) + 76LL) = WindowDpiLastNotify;
                    MNClearCachedPopupSizes(*(_QWORD **)(*v113[0] + 40LL));
                  }
                  if ( (unsigned int)xxxSendMessage(Window, 0x1E2u, 1uLL, 0LL)
                    && (v66 = *a1, v65 = **a1, *(_QWORD *)(v65 + 40))
                    && (unsigned int)MNGetpItemIndex(*(_QWORD *)(**a1 + 40), (__int64)v16) != -1 )
                  {
                    v69 = (unsigned __int16)v68 + 6;
                    *(_DWORD *)**a1 |= 0x20u;
                    v70 = xxxMNPositionHierarchy(
                            a1,
                            v16,
                            v69,
                            (unsigned int)HIWORD(v68) + 6,
                            &v141,
                            (LONG *)&v142,
                            (__int64)&v120);
                    v72 = *v113[0];
                    **(_DWORD **)v113[0] ^= (**(_DWORD **)v113[0] ^ (v70 << 23)) & 0xF800000;
                    if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL, v72, v71) & 0x8000u) != 0LL )
                    {
                      v73 = *(_DWORD **)(Window + 40);
                      v123 = 0LL;
                      v74 = v73[23];
                      v122[2] = v73[24] + v141 - v73[22];
                      v75 = v142 - v74 + v73[25];
                      v122[0] = v141;
                      v122[3] = v75;
                      v122[1] = v142;
                      v76 = *a1;
                      v77 = *a1;
                      v117[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) + v137;
                      v78 = *v77;
                      v79 = DWORD1(v137) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v76 + 16) + 40LL) + 92LL);
                      v118 = DWORD2(v137) + v117[0];
                      v117[1] = v79;
                      v119 = v79 + HIDWORD(v137);
                      SmartObjStackRefBase<tagPOPUPMENU>::Init(v140, v78);
                      MNGetPopupBoundsRect(v140, v120, &v123, 0);
                      if ( (unsigned int)IntersectRect(v122, v122, v117) )
                      {
                        v80 = v69 + v137 + DWORD2(v137) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                        if ( v80 > SDWORD2(v123) )
                          v80 = 0;
                        v81 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 16) + 40LL);
                        v82 = v137 + *((_DWORD *)v81 + 22) - v69;
                        if ( v82 < (int)v123 )
                          v82 = 0;
                        if ( (MenuHelpers::GetMenuRightAlignHint(v81) || (v134 & 0x2000) != 0) && v82 || !v80 )
                        {
                          v141 = v137 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v69;
                          v83 = (unsigned int *)*v113[0];
                          v84 = **(_DWORD **)v113[0] & 0xF07FFFFF | 0x1000000;
                        }
                        else
                        {
                          v141 = v137 + DWORD2(v137) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                          v83 = (unsigned int *)*v113[0];
                          v84 = **(_DWORD **)v113[0] & 0xF07FFFFF | 0x800000;
                        }
                        *v83 = v84;
                        if ( v141 <= (int)v123 )
                        {
                          v141 = v118;
                          **(_DWORD **)v113[0] = **(_DWORD **)v113[0] & 0xF07FFFFF | 0x1000000;
                        }
                      }
                    }
                    if ( (*(_DWORD *)**a1 & 1) != 0 )
                    {
                      if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                        **(_DWORD **)v113[0] |= 0x8000000u;
                      if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v113[0] & 0xF800000) == 0x1000000 )
                        **(_DWORD **)v113[0] |= 0x10u;
                      *(_DWORD *)**a1 |= 0x400u;
                    }
                    else
                    {
                      **(_DWORD **)v113[0] |= 0x8000000u;
                      if ( (**(_DWORD **)v113[0] & 0xF800000) == 0x1000000 )
                        **(_DWORD **)v113[0] |= 0x10u;
                    }
                    v85 = *a1;
                    v133[1] = Window;
                    v133[0] = *(_QWORD *)(*v85 + 64) + 56LL;
                    HMAssignmentLock(v133);
                    if ( *(_QWORD *)(*v113[0] + 8LL) )
                    {
                      v87 = *(_QWORD *)(*v113[0] + 8LL);
                      v88 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                      *(_QWORD *)&v114 = *(_QWORD *)(v88 + 416);
                      *(_QWORD *)(v88 + 416) = &v114;
                      *((_QWORD *)&v114 + 1) = v87;
                      HMLockObject(v87);
                      xxxInternalUpdateWindow(*(struct tagWND **)(*v113[0] + 8LL), 1u);
                      ThreadUnlock1(v90, v89, v91);
                    }
                    if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                    {
                      v125 = *(_QWORD *)Window;
                      xxxUserModeCallback(0x64u, (__int64)&v125, 8u, v86);
                    }
                    xxxPlayEventSound(5LL);
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v92) & 0xF) == 2 )
                      *(_DWORD *)(*(_QWORD *)(Window + 40) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16)
                                                                                            + 40LL)
                                                                                + 288LL);
                    xxxSetWindowPos(
                      (struct tagWND *)Window,
                      ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                      (unsigned int)v141,
                      v142,
                      0,
                      0,
                      ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
                    xxxInheritWindowMonitor((struct tagWND *)Window, *(struct tagWND **)(**a1 + 16), 1);
                    xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
                    if ( *(_DWORD *)(a2 + 20) == 1 )
                      xxxSendMessage(Window, 0x1E5u, 0LL, 0LL);
                    xxxInternalUpdateWindow((struct tagWND *)Window, 1u);
                    v4 = Window;
                    ThreadUnlock1(v94, v93, v95);
                  }
                  else
                  {
                    if ( ThreadUnlock1(v66, v65, v67) )
                      xxxDestroyWindow(Window);
                    HMAssignmentUnlock(**a1 + 24);
                  }
                }
                else
                {
                  xxxDestroyWindow(Window);
                }
              }
              ThreadUnlock1(v25, v22, v23);
            }
          }
        }
      }
    }
    else
    {
      v4 = -1LL;
    }
    if ( (_DWORD)CurrentThread )
    {
      v7 = (__int64 *)**a1;
      if ( v7[1] )
      {
        v96 = *(_QWORD *)(**a1 + 8);
        v97 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v114 = *(_QWORD *)(v97 + 416);
        *(_QWORD *)(v97 + 416) = &v114;
        *((_QWORD *)&v114 + 1) = v96;
        HMLockObject(v96);
        xxxSendMessage(
          *(_QWORD *)(**a1 + 8),
          0x125u,
          v121,
          (struct _LARGE_STRING *)((unsigned __int64)(*(_DWORD *)**a1 & 4) << 27));
        ThreadUnlock1(v99, v98, v100);
      }
    }
  }
LABEL_115:
  v101 = KeGetCurrentThread();
  v102 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v7)
    || (v106 = PsGetCurrentProcess(v104, v103, v105),
        v107 = PsGetProcessSessionIdEx(v106),
        v109 = PsGetCurrentThreadProcess(v108),
        v107 == (unsigned int)PsGetProcessSessionIdEx(v109)) )
  {
    v110 = (__int64 *)PsGetThreadWin32Thread(v101);
    if ( v110 )
      v102 = *v110;
  }
  if ( v113[0] != (_QWORD *)gSmartObjNullRef && !--*((_DWORD *)v113[0] + 2) )
  {
    if ( *((_BYTE *)v113[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v113[0]);
  }
  v111 = *(_QWORD **)(v102 + 1472);
  if ( v111 )
    *(_QWORD *)(v102 + 1472) = *v111;
  return v4;
}
