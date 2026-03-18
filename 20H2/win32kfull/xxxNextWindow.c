/*
 * XREFs of xxxNextWindow @ 0x1C01F3DB0
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C00BDD10 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetThreadDesktop @ 0x1C007DFF0 (xxxSetThreadDesktop.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     SetNewForegroundQueue @ 0x1C00BF270 (SetNewForegroundQueue.c)
 *     GetNonChildAncestor @ 0x1C00C5584 (GetNonChildAncestor.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C011D004 (xxxCancelCoolSwitch.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D415C (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F290C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2964 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F2F40 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F37D4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F3970 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F3B5C (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxNextWindow(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LARGE_STRING *v3; // rbx
  int v4; // r15d
  __int64 result; // rax
  BOOL v7; // r12d
  __int64 NonChildAncestor; // r14
  struct tagWND *v9; // r15
  struct tagWND *v10; // r15
  struct tagWND *v11; // rcx
  __int64 v12; // r9
  struct tagWND *inited; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  struct tagWND *NextQueueWindow; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  char v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct tagSwitchWndInfo *v48; // r14
  __int64 v49; // rax
  __int64 v50; // r8
  struct tagWND *v51; // rcx
  struct _LARGE_STRING **v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  struct tagWND *v56; // rcx
  __int64 v57; // rdx
  struct tagWND *v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  struct tagWND *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int64 v68; // r12
  struct tagSwitchWndInfo *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r14
  unsigned __int64 LowLimit; // [rsp+90h] [rbp-80h] BYREF
  __int128 v77; // [rsp+98h] [rbp-78h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-68h]
  __int128 v79; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-50h]
  __int128 v81; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v82; // [rsp+D8h] [rbp-38h]
  __int64 v83; // [rsp+E0h] [rbp-30h] BYREF
  struct tagWND *v84; // [rsp+E8h] [rbp-28h]
  __int64 v85; // [rsp+F0h] [rbp-20h]
  _QWORD v86[2]; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v87[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v88[2]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v89[2]; // [rsp+130h] [rbp+20h] BYREF
  _QWORD v90[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v91[3]; // [rsp+150h] [rbp+40h] BYREF
  __int128 v92; // [rsp+168h] [rbp+58h] BYREF
  __int64 v93; // [rsp+178h] [rbp+68h]
  _QWORD v94[10]; // [rsp+180h] [rbp+70h] BYREF
  int v95; // [rsp+1E0h] [rbp+D0h]
  int v96; // [rsp+1E8h] [rbp+D8h]
  int v97; // [rsp+1F0h] [rbp+E0h]
  __int64 Window; // [rsp+1F0h] [rbp+E0h]
  struct tagSwitchWndInfo *v99; // [rsp+1F8h] [rbp+E8h] BYREF

  v96 = a2;
  v3 = 0LL;
  v78 = 0LL;
  v82 = 0LL;
  v80 = 0LL;
  v4 = a2;
  result = gptiCurrent;
  v85 = 0LL;
  v99 = 0LL;
  LowLimit = 0LL;
  v77 = 0LL;
  v81 = 0LL;
  v79 = 0LL;
  if ( !a1 )
    return result;
  v7 = (_GetAsyncKeyState(16LL, a2, a3) & 0x8000u) != 0LL;
  v95 = v7;
  result = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
  NonChildAncestor = result;
  if ( v4 == 9 )
  {
    v9 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v94[2] = 0LL;
      v64 = gspwndAltTab;
      v94[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v94;
      v94[1] = v9;
      HMLockObject(v64);
      v68 = 0LL;
      while ( 1 )
      {
        v69 = Getpswi(v9, v65, v66, v67);
        v99 = v69;
        if ( !v69 )
        {
          result = ThreadUnlock1(v71, v70, v72);
          v7 = v95;
          goto LABEL_64;
        }
        v73 = xxxMoveSwitchWndHilite(v9, v69, v95);
        if ( v68 )
        {
          if ( v68 == v73 )
          {
            v75 = 0LL;
LABEL_61:
            ThreadUnlock1(v74, v65, v66);
            v90[1] = v75;
            v90[0] = &gspwndActivate;
            result = HMAssignmentLock(v90);
            if ( !gspwndActivate )
              return xxxCancelCoolSwitch();
            return result;
          }
        }
        else
        {
          v68 = v73;
        }
        v75 = HMValidateHandleNoSecure(v73, 1);
        if ( v75 )
          goto LABEL_61;
      }
    }
    v92 = 0LL;
    v93 = 0LL;
    ForceResetMouseButtonsDownState();
    v86[1] = *(_QWORD *)(a1 + 120);
    v86[0] = &gspwndActivate;
    HMAssignmentLock(v86);
    if ( !gspwndActivate )
    {
      v87[0] = &gspwndActivate;
      v87[1] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) + 112LL);
      result = HMAssignmentLock(v87);
      if ( !gspwndActivate )
        return result;
    }
    *(_QWORD *)&v77 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v77;
    *((_QWORD *)&v77 + 1) = NonChildAncestor;
    if ( NonChildAncestor )
      HMLockObject(NonChildAncestor);
    v10 = gspwndActivate;
    *(_QWORD *)&v79 = *(_QWORD *)(gptiCurrent + 416LL);
    v11 = gspwndActivate;
    *(_QWORD *)(gptiCurrent + 416LL) = &v79;
    *((_QWORD *)&v79 + 1) = v11;
    HMLockObject(v11);
    xxxSendTransformableMessageTimeout((unsigned __int64)v10, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (__int64 *)&LowLimit, 1, 0);
    inited = InitSwitchWndInfo(&v99, v10, v7, v12);
    v16 = *(_QWORD *)(gptiCurrent + 416LL);
    NextQueueWindow = inited;
    *(_QWORD *)&v81 = v16;
    *(_QWORD *)(gptiCurrent + 416LL) = &v81;
    *((_QWORD *)&v81 + 1) = inited;
    if ( inited )
      HMLockObject(inited);
    if ( v99 )
    {
      if ( !NextQueueWindow )
      {
        RemoveSwitchWindowInfo(&v99);
        ThreadUnlock1(v19, v18, v20);
        ThreadUnlock1(v22, v21, v23);
        ThreadUnlock1(v25, v24, v26);
        return HMAssignmentUnlock(&gspwndActivate);
      }
      PushW32ThreadLock((__int64)&v99, &v92, (__int64)RemoveSwitchWindowInfo);
      *((_DWORD *)v99 + 27) = 0;
      if ( !PsGetCurrentProcessWin32Process(v28, v27, v29)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31, v30, v32),
            v97 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v97 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v91, 0LL);
      v91[2] = 0LL;
      Window = xxxCreateWindowEx(
                 385,
                 (wchar_t *)0x8003,
                 32771LL,
                 0LL,
                 0x88800000,
                 0,
                 0,
                 0xAu,
                 0xAu,
                 0LL,
                 (__int64)v91,
                 0LL,
                 0LL,
                 2u,
                 1024,
                 v97,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v91);
      if ( gspwndAltTab )
        PostMessage((int)gspwndAltTab, 16, 0, 0);
      v88[0] = &gspwndAltTab;
      v88[1] = Window;
      HMAssignmentLock(v88);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v92;
      if ( gspwndAltTab )
      {
        v48 = v99;
        v49 = safe_cast_fnid_to_PSWITCHWND((__int64)gspwndAltTab, v35, v36, v37);
        if ( v49 )
          *(_QWORD *)(v49 + 8) = v48;
        v89[0] = &gspwndActivate;
        v89[1] = NextQueueWindow;
        HMAssignmentLock(v89);
        if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput, v50);
        v51 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        if ( gspwndFullScreen != v51 )
        {
          v83 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v83;
          v84 = v51;
          if ( v51 )
            HMLockObject(v51);
          v52 = *(struct _LARGE_STRING ***)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
          if ( v52 )
            v3 = *v52;
          xxxSendNotifyMessage((__int64)v52, 0x3Au, 2LL, v3, 1);
          ThreadUnlock1(v54, v53, v55);
        }
        v56 = gspwndAltTab;
        v83 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v83;
        v84 = v56;
        HMLockObject(v56);
        xxxShowSwitchWindow(v58, v57, v59, v60);
        ThreadUnlock1(v62, v61, v63);
        goto LABEL_40;
      }
      RemoveSwitchWindowInfo(&v99);
    }
LABEL_22:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
        {
          v38 = *(_QWORD *)(NonChildAncestor + 168);
          if ( v38 )
            *(_DWORD *)(*(_QWORD *)(v38 + 40) + 40LL) &= ~4u;
        }
      }
      if ( !v7 && (*(_BYTE *)(*((_QWORD *)v10 + 5) + 24LL) & 8) == 0 )
        xxxSetWindowPos(v10, 1LL, 0LL, 0LL, 0, 0, 25619);
      if ( (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0xC0) != 0x40 )
      {
        v39 = *((_QWORD *)NextQueueWindow + 21);
        if ( v39 )
          *(_DWORD *)(*(_QWORD *)(v39 + 40) + 40LL) |= 4u;
      }
      v40 = *((_QWORD *)NextQueueWindow + 2);
      if ( gpqForeground == *(_QWORD *)(v40 + 432) )
      {
        SetNewForegroundQueue(0LL);
        v40 = *((_QWORD *)NextQueueWindow + 2);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v40, 0);
      v41 = 18;
      if ( v96 != 9 )
        v41 = 2;
      xxxSetForegroundWindow2((__int64)NextQueueWindow, 0LL, v41);
      if ( v96 == 9 && (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos(NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
    }
LABEL_40:
    ThreadUnlock1(v16, v14, v15);
    ThreadUnlock1(v43, v42, v44);
    return ThreadUnlock1(v46, v45, v47);
  }
  if ( v4 != 27 )
    return result;
LABEL_64:
  if ( (*(_DWORD *)(a1 + 388) & 0x4000000) == 0 )
  {
    v10 = *(struct tagWND **)(a1 + 120);
    if ( v10
      || (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 456LL) + 8LL),
          (v10 = *(struct tagWND **)(*(_QWORD *)(result + 24) + 112LL)) != 0LL) )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
      *(_QWORD *)&v77 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v77;
      *((_QWORD *)&v77 + 1) = NonChildAncestor;
      if ( NonChildAncestor )
        HMLockObject(NonChildAncestor);
      *(_QWORD *)&v79 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v79;
      *((_QWORD *)&v79 + 1) = v10;
      HMLockObject(v10);
      xxxSendTransformableMessageTimeout((unsigned __int64)v10, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (__int64 *)&LowLimit, 1, 0);
      NextQueueWindow = GetNextQueueWindow((__int64)v10, v7, 1);
      *(_QWORD *)&v81 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v81;
      *((_QWORD *)&v81 + 1) = NextQueueWindow;
      if ( NextQueueWindow )
        HMLockObject(NextQueueWindow);
      if ( NextQueueWindow == v10 )
        goto LABEL_40;
      goto LABEL_22;
    }
  }
  return result;
}
