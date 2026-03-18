/*
 * XREFs of xxxNextWindow @ 0x1C01F4A20
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C00F9270 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     GetNonChildAncestor @ 0x1C003366C (GetNonChildAncestor.c)
 *     SetNewForegroundQueue @ 0x1C0033BA0 (SetNewForegroundQueue.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxSetThreadDesktop @ 0x1C00BD740 (xxxSetThreadDesktop.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C011C044 (xxxCancelCoolSwitch.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D4ED8 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F357C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F35D0 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F3BAC (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4440 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F45E0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F47CC (_GetNextQueueWindow.c)
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
  struct tagWND *inited; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  struct tagWND *NextQueueWindow; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  char v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r8
  struct tagWND *v42; // rcx
  struct _LARGE_STRING **v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  struct tagWND *v47; // rcx
  __int64 v48; // rdx
  struct tagWND *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  struct tagWND *v53; // rcx
  unsigned __int64 v54; // r12
  struct tagSwitchWndInfo *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r14
  unsigned __int64 LowLimit; // [rsp+90h] [rbp-80h] BYREF
  __int128 v65; // [rsp+98h] [rbp-78h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-68h]
  __int128 v67; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-50h]
  __int128 v69; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-38h]
  __int64 v71; // [rsp+E0h] [rbp-30h] BYREF
  struct tagWND *v72; // [rsp+E8h] [rbp-28h]
  __int64 v73; // [rsp+F0h] [rbp-20h]
  _QWORD v74[2]; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v75[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v76[2]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v77[2]; // [rsp+130h] [rbp+20h] BYREF
  _QWORD v78[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v79[3]; // [rsp+150h] [rbp+40h] BYREF
  __int128 v80; // [rsp+168h] [rbp+58h] BYREF
  __int64 v81; // [rsp+178h] [rbp+68h]
  _QWORD v82[10]; // [rsp+180h] [rbp+70h] BYREF
  int v83; // [rsp+1E0h] [rbp+D0h]
  int v84; // [rsp+1E8h] [rbp+D8h]
  int v85; // [rsp+1F0h] [rbp+E0h]
  __int64 Window; // [rsp+1F0h] [rbp+E0h]
  struct tagSwitchWndInfo *v87; // [rsp+1F8h] [rbp+E8h] BYREF

  v84 = a2;
  v3 = 0LL;
  v66 = 0LL;
  v70 = 0LL;
  v68 = 0LL;
  v4 = a2;
  result = gptiCurrent;
  v73 = 0LL;
  v87 = 0LL;
  LowLimit = 0LL;
  v65 = 0LL;
  v69 = 0LL;
  v67 = 0LL;
  if ( !a1 )
    return result;
  v7 = (_GetAsyncKeyState(16LL, a2, a3) & 0x8000u) != 0LL;
  v83 = v7;
  result = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
  NonChildAncestor = result;
  if ( v4 == 9 )
  {
    v9 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v82[2] = 0LL;
      v53 = gspwndAltTab;
      v82[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v82;
      v82[1] = v9;
      HMLockObject(v53);
      v54 = 0LL;
      while ( 1 )
      {
        v55 = Getpswi(v9);
        v87 = v55;
        if ( !v55 )
        {
          result = ThreadUnlock1(v57, v56, v58);
          v7 = v83;
          goto LABEL_64;
        }
        v59 = xxxMoveSwitchWndHilite(v9, v55, v83);
        if ( v54 )
        {
          if ( v54 == v59 )
          {
            v63 = 0LL;
LABEL_61:
            ThreadUnlock1(v61, v60, v62);
            v78[1] = v63;
            v78[0] = &gspwndActivate;
            result = HMAssignmentLock(v78);
            if ( !gspwndActivate )
              return xxxCancelCoolSwitch();
            return result;
          }
        }
        else
        {
          v54 = v59;
        }
        v63 = HMValidateHandleNoSecure(v59, 1);
        if ( v63 )
          goto LABEL_61;
      }
    }
    v80 = 0LL;
    v81 = 0LL;
    ForceResetMouseButtonsDownState();
    v74[1] = *(_QWORD *)(a1 + 120);
    v74[0] = &gspwndActivate;
    HMAssignmentLock(v74);
    if ( !gspwndActivate )
    {
      v75[0] = &gspwndActivate;
      v75[1] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) + 112LL);
      result = HMAssignmentLock(v75);
      if ( !gspwndActivate )
        return result;
    }
    *(_QWORD *)&v65 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v65;
    *((_QWORD *)&v65 + 1) = NonChildAncestor;
    if ( NonChildAncestor )
      HMLockObject(NonChildAncestor);
    v10 = gspwndActivate;
    *(_QWORD *)&v67 = *(_QWORD *)(gptiCurrent + 408LL);
    v11 = gspwndActivate;
    *(_QWORD *)(gptiCurrent + 408LL) = &v67;
    *((_QWORD *)&v67 + 1) = v11;
    HMLockObject(v11);
    xxxSendTransformableMessageTimeout((unsigned __int64)v10, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (__int64 *)&LowLimit, 1, 0);
    inited = InitSwitchWndInfo(&v87, v10, v7);
    v15 = *(_QWORD *)(gptiCurrent + 408LL);
    NextQueueWindow = inited;
    *(_QWORD *)&v69 = v15;
    *(_QWORD *)(gptiCurrent + 408LL) = &v69;
    *((_QWORD *)&v69 + 1) = inited;
    if ( inited )
      HMLockObject(inited);
    if ( v87 )
    {
      if ( !NextQueueWindow )
      {
        RemoveSwitchWindowInfo(&v87);
        ThreadUnlock1(v18, v17, v19);
        ThreadUnlock1(v21, v20, v22);
        ThreadUnlock1(v24, v23, v25);
        return HMAssignmentUnlock(&gspwndActivate);
      }
      PushW32ThreadLock((__int64)&v87, &v80, (__int64)RemoveSwitchWindowInfo);
      *((_DWORD *)v87 + 27) = 0;
      if ( !PsGetCurrentProcessWin32Process(v26)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27),
            v85 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v85 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v79, 0LL);
      v79[2] = 0LL;
      Window = xxxCreateWindowEx(
                 385,
                 (wchar_t *)0x8003,
                 32771LL,
                 0LL,
                 -2004877312,
                 0,
                 0,
                 0xAu,
                 0xAu,
                 0LL,
                 (__int64)v79,
                 0LL,
                 0LL,
                 2u,
                 1024,
                 v85,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v79);
      if ( gspwndAltTab )
        PostMessage((int)gspwndAltTab, 16, 0, 0);
      v76[0] = &gspwndAltTab;
      v76[1] = Window;
      HMAssignmentLock(v76);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v80;
      if ( gspwndAltTab )
      {
        v40 = safe_cast_fnid_to_PSWITCHWND((__int64)gspwndAltTab);
        if ( v40 )
          *(_QWORD *)(v40 + 8) = v87;
        v77[0] = &gspwndActivate;
        v77[1] = NextQueueWindow;
        HMAssignmentLock(v77);
        if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput, v41);
        v42 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        if ( gspwndFullScreen != v42 )
        {
          v71 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v71;
          v72 = v42;
          if ( v42 )
            HMLockObject(v42);
          v43 = *(struct _LARGE_STRING ***)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
          if ( v43 )
            v3 = *v43;
          xxxSendNotifyMessage((__int64)v43, 0x3Au, 2uLL, v3, 1);
          ThreadUnlock1(v45, v44, v46);
        }
        v47 = gspwndAltTab;
        v71 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v71;
        v72 = v47;
        HMLockObject(v47);
        xxxShowSwitchWindow(v49, v48);
        ThreadUnlock1(v51, v50, v52);
        goto LABEL_40;
      }
      RemoveSwitchWindowInfo(&v87);
    }
LABEL_22:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
        {
          v30 = *(_QWORD *)(NonChildAncestor + 168);
          if ( v30 )
            *(_DWORD *)(*(_QWORD *)(v30 + 40) + 40LL) &= ~4u;
        }
      }
      if ( !v7 && (*(_BYTE *)(*((_QWORD *)v10 + 5) + 24LL) & 8) == 0 )
        xxxSetWindowPos(v10, 1LL, 0LL, 0LL, 0, 0, 25619);
      if ( (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0xC0) != 0x40 )
      {
        v31 = *((_QWORD *)NextQueueWindow + 21);
        if ( v31 )
          *(_DWORD *)(*(_QWORD *)(v31 + 40) + 40LL) |= 4u;
      }
      v32 = *((_QWORD *)NextQueueWindow + 2);
      if ( gpqForeground == *(_QWORD *)(v32 + 424) )
      {
        SetNewForegroundQueue(0LL, v32, v14);
        v32 = *((_QWORD *)NextQueueWindow + 2);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v32, 0);
      v33 = 18;
      if ( v84 != 9 )
        v33 = 2;
      xxxSetForegroundWindow2((__int64)NextQueueWindow, 0LL, v33);
      if ( v84 == 9 && (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos(NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
    }
LABEL_40:
    ThreadUnlock1(v15, v13, v14);
    ThreadUnlock1(v35, v34, v36);
    return ThreadUnlock1(v38, v37, v39);
  }
  if ( v4 != 27 )
    return result;
LABEL_64:
  if ( (*(_DWORD *)(a1 + 388) & 0x4000000) == 0 )
  {
    v10 = *(struct tagWND **)(a1 + 120);
    if ( v10
      || (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 448LL) + 8LL),
          (v10 = *(struct tagWND **)(*(_QWORD *)(result + 24) + 112LL)) != 0LL) )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
      *(_QWORD *)&v65 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v65;
      *((_QWORD *)&v65 + 1) = NonChildAncestor;
      if ( NonChildAncestor )
        HMLockObject(NonChildAncestor);
      *(_QWORD *)&v67 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v67;
      *((_QWORD *)&v67 + 1) = v10;
      HMLockObject(v10);
      xxxSendTransformableMessageTimeout((unsigned __int64)v10, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (__int64 *)&LowLimit, 1, 0);
      NextQueueWindow = GetNextQueueWindow((__int64)v10, v7, 1);
      *(_QWORD *)&v69 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v69;
      *((_QWORD *)&v69 + 1) = NextQueueWindow;
      if ( NextQueueWindow )
        HMLockObject(NextQueueWindow);
      if ( NextQueueWindow == v10 )
        goto LABEL_40;
      goto LABEL_22;
    }
  }
  return result;
}
