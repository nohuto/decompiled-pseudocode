/*
 * XREFs of xxxOldNextWindow @ 0x1C01F45DC
 * Callers:
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxReleaseCapture @ 0x1C0038EA0 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C0039468 (xxxCapture.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxDispatchMessage @ 0x1C004CFF0 (xxxDispatchMessage.c)
 *     xxxInternalGetMessage @ 0x1C007E984 (xxxInternalGetMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C00D750C (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C0108870 (xxxTranslateMessage.c)
 *     xxxCancelCoolSwitch @ 0x1C011D004 (xxxCancelCoolSwitch.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D415C (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxWaitMessageEx @ 0x1C01E23E8 (xxxWaitMessageEx.c)
 *     xxxCallMsgFilter @ 0x1C01E673C (xxxCallMsgFilter.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F290C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2964 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F2F40 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F37D4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F3970 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F3B5C (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  int v2; // r12d
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 v8; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 CurrentProcessWin32Process; // rax
  int v17; // edi
  __int64 Window; // rdi
  __int64 v19; // rax
  struct tagWND *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct tagWND *v24; // rcx
  struct tagSwitchWndInfo *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  struct tagWND *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int16 v37; // ax
  struct tagWND *NextQueueWindow; // rax
  __int64 v39; // rcx
  struct tagWND *v40; // r14
  struct tagWND *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rbx
  __int64 v46; // rcx
  __int16 v47; // ax
  unsigned __int64 v48; // rax
  __int16 v49; // ax
  struct tagWND *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rbx
  BOOL v57; // r14d
  struct tagWND *v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  unsigned __int64 v65; // rbx
  _QWORD v66[3]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v67[2]; // [rsp+A8h] [rbp-68h] BYREF
  __int128 v68; // [rsp+B8h] [rbp-58h]
  __int128 v69; // [rsp+C8h] [rbp-48h]
  __int128 v70; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v71; // [rsp+E8h] [rbp-28h]
  __int128 v72; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v73; // [rsp+100h] [rbp-10h]
  _QWORD v74[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v75[3]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v76[3]; // [rsp+138h] [rbp+28h] BYREF
  __int128 v77; // [rsp+150h] [rbp+40h] BYREF
  __int64 v78; // [rsp+160h] [rbp+50h]
  struct tagSwitchWndInfo *v79; // [rsp+1A8h] [rbp+98h] BYREF

  v1 = a1;
  v2 = 0;
  v73 = 0LL;
  v71 = 0LL;
  result = gptiCurrent;
  *(_OWORD *)v67 = 0LL;
  v66[2] = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v79 = 0LL;
  v72 = 0LL;
  v70 = 0LL;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 432LL);
  v4 = *(_QWORD *)(result + 120);
  if ( !v4 )
    return result;
  v5 = *(_QWORD *)(result + 120);
  v66[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v66;
  v66[1] = v4;
  HMLockObject(v5);
  xxxCapture(gptiCurrent, (struct tagWND *)v4, 4);
  *(_QWORD *)&v68 = v1;
  inited = 0LL;
  if ( (_WORD)v1 == 9 )
  {
    v77 = 0LL;
    v78 = 0LL;
    KeyState = _GetKeyState(16LL);
    inited = (__int64)InitSwitchWndInfo(&v79, (struct tagWND *)v4, KeyState < 0, v8);
    if ( v79 )
    {
      v75[2] = 0LL;
      *((_DWORD *)v79 + 27) = 1;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v75[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v75;
      v75[1] = inited;
      if ( inited )
        HMLockObject(inited);
      PushW32ThreadLock((__int64)&v79, &v77, (__int64)RemoveSwitchWindowInfo);
      if ( !PsGetCurrentProcessWin32Process(v11, v10, v12)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13, v15),
            v17 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v17 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v76, 0LL);
      v76[2] = 0LL;
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
                 (__int64)v76,
                 0LL,
                 0LL,
                 2u,
                 1024,
                 v17,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v76);
      if ( gspwndAltTab )
        PostMessage((int)gspwndAltTab, 16, 0, 0);
      v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v74[1] = Window;
      *(_QWORD *)(v19 + 16) = v77;
      v74[0] = &gspwndAltTab;
      HMAssignmentLock(v74);
      v20 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v24 = gspwndAltTab;
        *(_QWORD *)&v70 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v70;
        *((_QWORD *)&v70 + 1) = v20;
        HMLockObject(v24);
        v25 = v79;
        v29 = safe_cast_fnid_to_PSWITCHWND((__int64)v20, v26, v27, v28);
        if ( v29 )
          *(_QWORD *)(v29 + 8) = v25;
        xxxShowSwitchWindow(v31, v30, v32, v33);
        ThreadUnlock1(v35, v34, v36);
      }
      else
      {
        RemoveSwitchWindowInfo(&v79);
      }
      inited = ThreadUnlock1(v22, v21, v23);
    }
    if ( inited )
      goto LABEL_37;
  }
LABEL_19:
  if ( (_WORD)v1 == 27 )
  {
    v37 = _GetKeyState(16LL);
    NextQueueWindow = GetNextQueueWindow(v4, v37 < 0, 1);
    inited = (__int64)NextQueueWindow;
    if ( !NextQueueWindow )
      goto LABEL_39;
    v2 = 1;
    v4 = (__int64)NextQueueWindow;
    v39 = (__int64)NextQueueWindow;
    goto LABEL_38;
  }
  v40 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v41 = gspwndAltTab;
    *(_QWORD *)&v70 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v70;
    *((_QWORD *)&v70 + 1) = v40;
    HMLockObject(v41);
    v45 = 0LL;
    while ( 1 )
    {
      v79 = Getpswi(v40, v42, v43, v44);
      if ( !v79 )
        goto LABEL_31;
      v47 = _GetKeyState(16LL);
      v48 = xxxMoveSwitchWndHilite(v40, v79, v47 < 0);
      if ( v45 )
      {
        if ( v45 == v48 )
        {
          inited = 0LL;
LABEL_31:
          ThreadUnlock1(v46, v42, v43);
LABEL_37:
          v39 = inited;
          v4 = inited;
LABEL_38:
          ThreadLockExchange(v39, (__int64)v66);
          goto LABEL_39;
        }
      }
      else
      {
        v45 = v48;
      }
      inited = HMValidateHandleNoSecure(v48, 1);
      if ( inited )
        goto LABEL_31;
    }
  }
  v49 = _GetKeyState(16LL);
  v50 = GetNextQueueWindow(v4, v49 < 0, 0);
  inited = (__int64)v50;
  if ( v50 && v50 != (struct tagWND *)v4 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 24LL) & 8) == 0 )
    {
      *(_QWORD *)&v72 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v72;
      *((_QWORD *)&v72 + 1) = v50;
      HMLockObject(v50);
      xxxSetWindowPos((struct tagWND *)v4, 1LL, 0LL, 0LL, 0, 0, 25619);
      inited = ThreadUnlock1(v52, v51, v53);
    }
    if ( inited )
      goto LABEL_37;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_39:
            if ( v4 )
              v54 = *(_QWORD *)v4;
            else
              v54 = 0LL;
            while ( !(unsigned int)xxxInternalGetMessage(v67, 0LL, 0, 0, 2, 0) )
              xxxWaitMessageEx(15615LL, 0, 0LL);
            v4 = HMValidateHandleNoSecure(v54, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v66);
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v67, 6) )
              break;
            xxxInternalGetMessage(v67, 0LL, v67[1], v67[1], 1, 0);
          }
          if ( LODWORD(v67[1]) == 260 )
          {
            if ( !gspwndAltTab || (_WORD)v68 == 9 || (_WORD)v68 == 27 )
              goto LABEL_64;
            if ( (_WORD)v68 != 16 )
              goto LABEL_79;
          }
          if ( LODWORD(v67[1]) > 0x202 )
          {
            if ( LODWORD(v67[1]) >= 0x204
              && (LODWORD(v67[1]) <= 0x205
               || LODWORD(v67[1]) > 0x206
               && (LODWORD(v67[1]) <= 0x208
                || LODWORD(v67[1]) > 0x20A && (LODWORD(v67[1]) <= 0x20C || LODWORD(v67[1]) == 786))) )
            {
              goto LABEL_79;
            }
            goto LABEL_106;
          }
          if ( LODWORD(v67[1]) >= 0x201 || LODWORD(v67[1]) == 75 )
            goto LABEL_79;
          if ( LODWORD(v67[1]) <= 0xFF )
            goto LABEL_106;
          if ( LODWORD(v67[1]) <= 0x101 )
            break;
          if ( LODWORD(v67[1]) == 260 )
          {
LABEL_64:
            LOWORD(v1) = v68;
            if ( (_WORD)v68 != 9 && (_WORD)v68 != 16 && (_WORD)v68 != 27 )
              goto LABEL_81;
            if ( v4 )
              v56 = *(_QWORD *)v4;
            else
              v56 = 0LL;
            xxxInternalGetMessage(v67, 0LL, 0x104u, 0x104u, 1, 0);
            v4 = HMValidateHandleNoSecure(v56, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v66);
            }
            if ( (_WORD)v1 == 9 )
              goto LABEL_19;
          }
          else
          {
            if ( LODWORD(v67[1]) > 0x104 && (LODWORD(v67[1]) <= 0x106 || LODWORD(v67[1]) == 512) )
              break;
LABEL_106:
            if ( v4 )
              v65 = *(_QWORD *)v4;
            else
              v65 = 0LL;
            xxxInternalGetMessage(v67, 0LL, v67[1], v67[1], 1, 0);
            xxxTranslateMessage((__int64)v67, 0);
            xxxDispatchMessage(v67);
            v4 = HMValidateHandleNoSecure(v65, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
              v39 = v4;
              goto LABEL_38;
            }
          }
        }
        if ( v4 )
          v55 = *(_QWORD *)v4;
        else
          v55 = 0LL;
        xxxInternalGetMessage(v67, 0LL, v67[1], v67[1], 1, 0);
        v4 = HMValidateHandleNoSecure(v55, 1);
        if ( !v4 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
          ThreadLockExchange(v4, (__int64)v66);
        }
        if ( ((LODWORD(v67[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v67[1]) == 256 )
          goto LABEL_79;
      }
      if ( (_WORD)v68 != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_80;
    }
  }
  while ( (_WORD)v68 != 27 );
  if ( gspwndAltTab )
  {
LABEL_79:
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
    ThreadLockExchange(v4, (__int64)v66);
LABEL_80:
    v2 = 0;
    goto LABEL_81;
  }
  v2 = 1;
LABEL_81:
  xxxReleaseCapture();
  v57 = gspwndAltTab != 0LL;
  if ( v2 == 1 )
  {
    if ( gpqForeground )
    {
      v58 = *(struct tagWND **)(gpqForeground + 120LL);
      if ( v58 )
      {
        if ( v58 != (struct tagWND *)v4 )
        {
          *(_QWORD *)&v72 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v72;
          *((_QWORD *)&v72 + 1) = v58;
          HMLockObject(v58);
          xxxSetWindowPos(v58, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v60, v59, v61);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindowWithOptions(v4, 2LL, 0LL, 0LL);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x20) != 0 && !v2 )
    {
      if ( v57 )
        PostMessage(v4, 274, 61728, 0);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v63, v62, v64);
}
