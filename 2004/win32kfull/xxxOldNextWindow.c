/*
 * XREFs of xxxOldNextWindow @ 0x1C01F524C
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxReleaseCapture @ 0x1C00359E0 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxDispatchMessage @ 0x1C00A54AC (xxxDispatchMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     ThreadLockExchange @ 0x1C00B2F7C (ThreadLockExchange.c)
 *     xxxInternalGetMessage @ 0x1C00BE0D4 (xxxInternalGetMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C0107B70 (xxxTranslateMessage.c)
 *     xxxCancelCoolSwitch @ 0x1C011C044 (xxxCancelCoolSwitch.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D4ED8 (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxWaitMessageEx @ 0x1C01E30A8 (xxxWaitMessageEx.c)
 *     xxxCallMsgFilter @ 0x1C01E73FC (xxxCallMsgFilter.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F357C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F35D0 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F3BAC (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4440 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F45E0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F47CC (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  int v2; // r15d
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v12; // edi
  __int64 Window; // rdi
  __int64 v14; // rax
  struct tagWND *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct tagWND *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int16 v25; // ax
  struct tagWND *NextQueueWindow; // rax
  __int64 v27; // rcx
  struct tagWND *v28; // r14
  struct tagWND *v29; // rcx
  unsigned __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int16 v34; // ax
  unsigned __int64 v35; // rax
  __int16 v36; // ax
  struct tagWND *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rbx
  BOOL v44; // r14d
  struct tagWND *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int64 v52; // rbx
  _QWORD v53[3]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v54[2]; // [rsp+A8h] [rbp-68h] BYREF
  __int128 v55; // [rsp+B8h] [rbp-58h]
  __int128 v56; // [rsp+C8h] [rbp-48h]
  __int128 v57; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v58; // [rsp+E8h] [rbp-28h]
  __int128 v59; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v60; // [rsp+100h] [rbp-10h]
  _QWORD v61[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v62[3]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v63[3]; // [rsp+138h] [rbp+28h] BYREF
  __int128 v64; // [rsp+150h] [rbp+40h] BYREF
  __int64 v65; // [rsp+160h] [rbp+50h]
  struct tagSwitchWndInfo *v66; // [rsp+1A8h] [rbp+98h] BYREF

  v1 = a1;
  v2 = 0;
  v60 = 0LL;
  v58 = 0LL;
  result = gptiCurrent;
  *(_OWORD *)v54 = 0LL;
  v53[2] = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v66 = 0LL;
  v59 = 0LL;
  v57 = 0LL;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 424LL);
  v4 = *(_QWORD *)(result + 120);
  if ( !v4 )
    return result;
  v5 = *(_QWORD *)(result + 120);
  v53[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v53;
  v53[1] = v4;
  HMLockObject(v5);
  xxxCapture(gptiCurrent, (struct tagWND *)v4, 4);
  *(_QWORD *)&v55 = v1;
  inited = 0LL;
  if ( (_WORD)v1 == 9 )
  {
    v64 = 0LL;
    v65 = 0LL;
    KeyState = _GetKeyState(16LL);
    inited = (__int64)InitSwitchWndInfo(&v66, (struct tagWND *)v4, KeyState < 0);
    if ( v66 )
    {
      v62[2] = 0LL;
      *((_DWORD *)v66 + 27) = 1;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v62[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v62;
      v62[1] = inited;
      if ( inited )
        HMLockObject(inited);
      PushW32ThreadLock((__int64)&v66, &v64, (__int64)RemoveSwitchWindowInfo);
      if ( !PsGetCurrentProcessWin32Process(v9)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10),
            v12 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v12 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v63, 0LL);
      v63[2] = 0LL;
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
                 (__int64)v63,
                 0LL,
                 0LL,
                 2u,
                 1024,
                 v12,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v63);
      if ( gspwndAltTab )
        PostMessage((int)gspwndAltTab, 16, 0, 0);
      v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v61[1] = Window;
      *(_QWORD *)(v14 + 16) = v64;
      v61[0] = &gspwndAltTab;
      HMAssignmentLock(v61);
      v15 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v19 = gspwndAltTab;
        *(_QWORD *)&v57 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v57;
        *((_QWORD *)&v57 + 1) = v15;
        HMLockObject(v19);
        v21 = safe_cast_fnid_to_PSWITCHWND((__int64)v15);
        if ( v21 )
          *(_QWORD *)(v21 + 8) = v66;
        xxxShowSwitchWindow((struct tagWND *)v21, v20);
        ThreadUnlock1(v23, v22, v24);
      }
      else
      {
        RemoveSwitchWindowInfo(&v66);
      }
      inited = ThreadUnlock1(v17, v16, v18);
    }
    if ( inited )
      goto LABEL_37;
  }
LABEL_19:
  if ( (_WORD)v1 == 27 )
  {
    v25 = _GetKeyState(16LL);
    NextQueueWindow = GetNextQueueWindow(v4, v25 < 0, 1);
    inited = (__int64)NextQueueWindow;
    if ( !NextQueueWindow )
      goto LABEL_39;
    v2 = 1;
    v4 = (__int64)NextQueueWindow;
    v27 = (__int64)NextQueueWindow;
    goto LABEL_38;
  }
  v28 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v29 = gspwndAltTab;
    *(_QWORD *)&v57 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v57;
    *((_QWORD *)&v57 + 1) = v28;
    HMLockObject(v29);
    v30 = 0LL;
    while ( 1 )
    {
      v66 = Getpswi(v28);
      if ( !v66 )
        goto LABEL_31;
      v34 = _GetKeyState(16LL);
      v35 = xxxMoveSwitchWndHilite(v28, v66, v34 < 0);
      if ( v30 )
      {
        if ( v30 == v35 )
        {
          inited = 0LL;
LABEL_31:
          ThreadUnlock1(v32, v31, v33);
LABEL_37:
          v27 = inited;
          v4 = inited;
LABEL_38:
          ThreadLockExchange(v27, (__int64)v53);
          goto LABEL_39;
        }
      }
      else
      {
        v30 = v35;
      }
      inited = HMValidateHandleNoSecure(v35, 1);
      if ( inited )
        goto LABEL_31;
    }
  }
  v36 = _GetKeyState(16LL);
  v37 = GetNextQueueWindow(v4, v36 < 0, 0);
  inited = (__int64)v37;
  if ( v37 && v37 != (struct tagWND *)v4 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 24LL) & 8) == 0 )
    {
      *(_QWORD *)&v59 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v59;
      *((_QWORD *)&v59 + 1) = v37;
      HMLockObject(v37);
      xxxSetWindowPos((struct tagWND *)v4, 1LL, 0LL, 0LL, 0, 0, 25619);
      inited = ThreadUnlock1(v39, v38, v40);
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
              v41 = *(_QWORD *)v4;
            else
              v41 = 0LL;
            while ( !(unsigned int)xxxInternalGetMessage(v54, 0LL, 0, 0, 2, 0) )
              xxxWaitMessageEx(15615LL, 0, 0LL);
            v4 = HMValidateHandleNoSecure(v41, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v53);
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v54, 6) )
              break;
            xxxInternalGetMessage(v54, 0LL, v54[1], v54[1], 1, 0);
          }
          if ( LODWORD(v54[1]) == 260 )
          {
            if ( !gspwndAltTab || (_WORD)v55 == 9 || (_WORD)v55 == 27 )
              goto LABEL_64;
            if ( (_WORD)v55 != 16 )
              goto LABEL_79;
          }
          if ( LODWORD(v54[1]) > 0x202 )
          {
            if ( LODWORD(v54[1]) >= 0x204
              && (LODWORD(v54[1]) <= 0x205
               || LODWORD(v54[1]) > 0x206
               && (LODWORD(v54[1]) <= 0x208
                || LODWORD(v54[1]) > 0x20A && (LODWORD(v54[1]) <= 0x20C || LODWORD(v54[1]) == 786))) )
            {
              goto LABEL_79;
            }
            goto LABEL_106;
          }
          if ( LODWORD(v54[1]) >= 0x201 || LODWORD(v54[1]) == 75 )
            goto LABEL_79;
          if ( LODWORD(v54[1]) <= 0xFF )
            goto LABEL_106;
          if ( LODWORD(v54[1]) <= 0x101 )
            break;
          if ( LODWORD(v54[1]) == 260 )
          {
LABEL_64:
            LOWORD(v1) = v55;
            if ( (_WORD)v55 != 9 && (_WORD)v55 != 16 && (_WORD)v55 != 27 )
              goto LABEL_81;
            if ( v4 )
              v43 = *(_QWORD *)v4;
            else
              v43 = 0LL;
            xxxInternalGetMessage(v54, 0LL, 0x104u, 0x104u, 1, 0);
            v4 = HMValidateHandleNoSecure(v43, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v53);
            }
            if ( (_WORD)v1 == 9 )
              goto LABEL_19;
          }
          else
          {
            if ( LODWORD(v54[1]) > 0x104 && (LODWORD(v54[1]) <= 0x106 || LODWORD(v54[1]) == 512) )
              break;
LABEL_106:
            if ( v4 )
              v52 = *(_QWORD *)v4;
            else
              v52 = 0LL;
            xxxInternalGetMessage(v54, 0LL, v54[1], v54[1], 1, 0);
            xxxTranslateMessage((__int64)v54, 0);
            xxxDispatchMessage((__int64)v54);
            v4 = HMValidateHandleNoSecure(v52, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
              v27 = v4;
              goto LABEL_38;
            }
          }
        }
        if ( v4 )
          v42 = *(_QWORD *)v4;
        else
          v42 = 0LL;
        xxxInternalGetMessage(v54, 0LL, v54[1], v54[1], 1, 0);
        v4 = HMValidateHandleNoSecure(v42, 1);
        if ( !v4 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
          ThreadLockExchange(v4, (__int64)v53);
        }
        if ( ((LODWORD(v54[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v54[1]) == 256 )
          goto LABEL_79;
      }
      if ( (_WORD)v55 != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_80;
    }
  }
  while ( (_WORD)v55 != 27 );
  if ( gspwndAltTab )
  {
LABEL_79:
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
    ThreadLockExchange(v4, (__int64)v53);
LABEL_80:
    v2 = 0;
    goto LABEL_81;
  }
  v2 = 1;
LABEL_81:
  xxxReleaseCapture();
  v44 = gspwndAltTab != 0LL;
  if ( v2 == 1 )
  {
    if ( gpqForeground )
    {
      v45 = *(struct tagWND **)(gpqForeground + 120LL);
      if ( v45 )
      {
        if ( v45 != (struct tagWND *)v4 )
        {
          *(_QWORD *)&v59 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v59;
          *((_QWORD *)&v59 + 1) = v45;
          HMLockObject(v45);
          xxxSetWindowPos(v45, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v47, v46, v48);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindowWithOptions((_QWORD *)v4, 2LL, 0LL, 0LL);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x20) != 0 && !v2 )
    {
      if ( v44 )
        PostMessage(v4, 274, 61728, 0);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v50, v49, v51);
}
