/*
 * XREFs of _xxxOldNextWindow@4 @ 0x15D8AF
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _xxxCallMsgFilter@8 @ 0x94CF8 (_xxxCallMsgFilter@8.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _xxxWaitMessageEx@12 @ 0xA19D2 (_xxxWaitMessageEx@12.c)
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     _xxxTranslateMessage@8 @ 0xA5F1E (_xxxTranslateMessage@8.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     _safe_cast_fnid_to_PSWITCHWND@4 @ 0x143725 (_safe_cast_fnid_to_PSWITCHWND@4.c)
 *     ?Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z @ 0x15C2D1 (-Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E (-InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z @ 0x15C854 (-xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YGHPAUtagWND@@@Z @ 0x15CF04 (-xxxShowSwitchWindow@@YGHPAUtagWND@@@Z.c)
 *     _RemoveSwitchWindowInfo@4 @ 0x15D02D (_RemoveSwitchWindowInfo@4.c)
 *     __GetNextQueueWindow@12 @ 0x15D1B0 (__GetNextQueueWindow@12.c)
 *     _xxxCancelCoolSwitch@0 @ 0x15D2FA (_xxxCancelCoolSwitch@0.c)
 */

int __fastcall xxxOldNextWindow(unsigned int a1)
{
  int result; // eax
  unsigned int *v2; // esi
  struct tagWND *inited; // edi
  unsigned int v4; // ecx
  __int16 KeyState; // ax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int CurrentProcessWin32Process; // eax
  char v9; // di
  PKTHREAD v10; // eax
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // edi
  int v14; // ecx
  __int16 v15; // ax
  ULONG_PTR v16; // ecx
  struct tagEVENTHOOK *v17; // esi
  __int16 v18; // ax
  unsigned int v19; // eax
  __int16 v20; // ax
  struct tagWND *NextQueueWindow; // eax
  int v22; // ecx
  int i; // eax
  int v24; // edi
  int v25; // edi
  struct tagWND *v26; // [esp+0h] [ebp-88h]
  int v27; // [esp+4h] [ebp-84h]
  int v28; // [esp+Ch] [ebp-7Ch] BYREF
  struct tagMSG *v29; // [esp+10h] [ebp-78h]
  unsigned int v30; // [esp+14h] [ebp-74h]
  int v31; // [esp+18h] [ebp-70h]
  int v32; // [esp+1Ch] [ebp-6Ch]
  int v33; // [esp+20h] [ebp-68h]
  int v34; // [esp+24h] [ebp-64h]
  _DWORD v35[3]; // [esp+28h] [ebp-60h] BYREF
  _DWORD v36[3]; // [esp+34h] [ebp-54h] BYREF
  _DWORD v37[3]; // [esp+40h] [ebp-48h] BYREF
  int v38; // [esp+4Ch] [ebp-3Ch] BYREF
  struct tagWND *v39; // [esp+50h] [ebp-38h]
  int v40; // [esp+54h] [ebp-34h]
  int v41; // [esp+58h] [ebp-30h] BYREF
  _DWORD *v42; // [esp+5Ch] [ebp-2Ch]
  int v43; // [esp+60h] [ebp-28h]
  _DWORD v44[3]; // [esp+64h] [ebp-24h] BYREF
  int v45; // [esp+70h] [ebp-18h]
  int v46; // [esp+74h] [ebp-14h]
  ULONG_PTR v47; // [esp+78h] [ebp-10h]
  unsigned int v48; // [esp+7Ch] [ebp-Ch]
  struct tagSwitchWndInfo *v49; // [esp+80h] [ebp-8h] BYREF
  int v50; // [esp+84h] [ebp-4h]

  v48 = a1;
  v38 = 0;
  v28 = 0;
  v29 = 0;
  v31 = 0;
  v39 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v40 = 0;
  v50 = 0;
  v41 = 0;
  v44[2] = 0;
  v49 = 0;
  v42 = 0;
  v43 = 0;
  result = _gptiCurrent;
  if ( gspwndAltTab )
    return result;
  result = *(_DWORD *)(_gptiCurrent + 236);
  v2 = *(unsigned int **)(result + 64);
  if ( !v2 )
    return result;
  v44[0] = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = v44;
  v44[1] = v2;
  HMLockObject(v2);
  xxxCapture(_gptiCurrent, (int)v2, 4);
  inited = 0;
  v4 = (unsigned __int16)v48;
  v30 = v48;
  v48 = v4;
  v45 = 27;
  v46 = 9;
  if ( (_WORD)v4 == 9 )
  {
    memset(v35, 0, sizeof(v35));
    KeyState = _GetKeyState(16);
    inited = InitSwitchWndInfo((int)v2, &v49, (struct tagSwitchWndInfo **)(KeyState < 0), v26, v27);
    if ( v49 )
    {
      v37[2] = 0;
      *((_DWORD *)v49 + 22) = 1;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v37[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v37;
      v37[1] = inited;
      if ( inited )
        HMLockObject(inited);
      PushW32ThreadLock((int)&v49, v35, (int)RemoveSwitchWindowInfo);
      v9 = 0;
      if ( PsGetCurrentProcessWin32Process() )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        if ( IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v9 = 1;
      }
      SmartObjStackRefBase<tagMENU>::Init(v36, 0);
      v36[2] = 0;
      xxxCreateWindowEx(385, (_DWORD *)0x8003, 32771, 0, 0x88800000, 0, 0, 10, 10, 0, (int)v36, 0, 0, 2, 0x400u, v9, 0);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v36);
      if ( gspwndAltTab )
        _PostMessage(gspwndAltTab, 16, 0, 0);
      v10 = KeGetCurrentThread();
      v11 = W32GetThreadWin32Thread(v10);
      *(_DWORD *)(v11 + 8) = v35[0];
      HMAssignmentLock(v11, v12);
      v13 = (_DWORD *)gspwndAltTab;
      if ( gspwndAltTab )
      {
        v41 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v41;
        v42 = v13;
        HMLockObject(v13);
        v14 = safe_cast_fnid_to_PSWITCHWND(v13);
        if ( v14 )
          *(_DWORD *)(v14 + 4) = v49;
        xxxShowSwitchWindow();
        ThreadUnlock1();
      }
      else
      {
        RemoveSwitchWindowInfo((int *)&v49);
      }
      inited = (struct tagWND *)ThreadUnlock1();
    }
    if ( inited )
      goto LABEL_39;
    LOWORD(v4) = v48;
  }
LABEL_21:
  if ( (_WORD)v4 == 27 )
  {
    v15 = _GetKeyState(16);
    inited = _GetNextQueueWindow((int)v2, v15 < 0, 1);
    if ( !inited )
      goto LABEL_41;
    v50 = 1;
    goto LABEL_39;
  }
  v16 = gspwndAltTab;
  v47 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v41 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v41;
    v42 = (_DWORD *)v16;
    HMLockObject(v16);
    v48 = 0;
    v17 = (struct tagEVENTHOOK *)v47;
    while ( 1 )
    {
      v49 = Getpswi(v17);
      if ( !v49 )
        goto LABEL_33;
      v18 = _GetKeyState(16);
      v19 = xxxMoveSwitchWndHilite((int)v49, v17, (struct tagWND *)(v18 < 0), v26, v27);
      if ( v48 )
      {
        if ( v48 == v19 )
        {
          inited = 0;
LABEL_33:
          ThreadUnlock1();
LABEL_39:
          v2 = (unsigned int *)inited;
          v22 = (int)inited;
LABEL_40:
          ThreadLockExchange(v22, (int)v44);
          goto LABEL_41;
        }
      }
      else
      {
        v48 = v19;
      }
      inited = (struct tagWND *)HMValidateHandleNoSecure(v19, 1);
      if ( inited )
        goto LABEL_33;
    }
  }
  v20 = _GetKeyState(16);
  NextQueueWindow = _GetNextQueueWindow((int)v2, v20 < 0, 0);
  inited = NextQueueWindow;
  if ( NextQueueWindow && NextQueueWindow != (struct tagWND *)v2 )
  {
    if ( (*(_BYTE *)(v2[5] + 16) & 8) == 0 )
    {
      v38 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v38;
      v39 = NextQueueWindow;
      HMLockObject(NextQueueWindow);
      xxxSetWindowPos((int)v2, 1, 0, 0, 0, 0, 25619);
      inited = (struct tagWND *)ThreadUnlock1();
    }
    if ( inited )
      goto LABEL_39;
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
LABEL_41:
            if ( v2 )
              goto LABEL_42;
LABEL_43:
            for ( i = xxxInternalGetMessage(&v28, 0, 0, 2u, 0); !i; i = xxxInternalGetMessage(&v28, 0, 0, 2u, 0) )
              xxxWaitMessageEx((void *)0x3CFF, 0);
            v2 = (unsigned int *)HMValidateHandleNoSecure((unsigned int)v2, 1);
            if ( !v2 )
            {
              v2 = *(unsigned int **)(*(_DWORD *)(_gptiCurrent + 236) + 64);
              ThreadLockExchange((int)v2, (int)v44);
            }
            if ( !xxxCallMsgFilter((unsigned int *)&v28, 6) )
              break;
            xxxInternalGetMessage(&v28, v29, (unsigned int)v29, 1u, 0);
          }
          if ( v29 == (struct tagMSG *)260 )
          {
            if ( !gspwndAltTab || (_WORD)v30 == (_WORD)v46 || (_WORD)v30 == (_WORD)v45 )
              goto LABEL_66;
            if ( (_WORD)v30 != 16 )
              goto LABEL_81;
          }
          if ( (unsigned int)v29 > 0x202 )
          {
            if ( (unsigned int)v29 >= 0x204
              && ((unsigned int)v29 <= 0x205
               || (unsigned int)v29 > 0x206
               && ((unsigned int)v29 <= 0x208
                || (unsigned int)v29 > 0x20A && ((unsigned int)v29 <= 0x20C || v29 == (struct tagMSG *)786))) )
            {
              goto LABEL_81;
            }
            goto LABEL_97;
          }
          if ( (unsigned int)v29 >= 0x201 || v29 == (struct tagMSG *)75 )
            goto LABEL_81;
          if ( (unsigned int)v29 <= 0xFF )
          {
LABEL_97:
            if ( v2 )
              v2 = (unsigned int *)*v2;
            xxxInternalGetMessage(&v28, v29, (unsigned int)v29, 1u, 0);
            xxxTranslateMessage((int)&v28, 0);
            xxxDispatchMessage((unsigned int *)&v28);
            v2 = (unsigned int *)HMValidateHandleNoSecure((unsigned int)v2, 1);
            if ( !v2 )
            {
              v2 = *(unsigned int **)(*(_DWORD *)(_gptiCurrent + 236) + 64);
              v22 = (int)v2;
              goto LABEL_40;
            }
LABEL_42:
            v2 = (unsigned int *)*v2;
            goto LABEL_43;
          }
          if ( (unsigned int)v29 <= 0x101 )
            goto LABEL_64;
          if ( v29 != (struct tagMSG *)260 )
            break;
LABEL_66:
          v48 = (unsigned __int16)v30;
          if ( (_WORD)v30 != 9 && (_WORD)v30 != 16 && (_WORD)v30 != 27 )
          {
            v24 = v50;
            goto LABEL_102;
          }
          if ( v2 )
            v2 = (unsigned int *)*v2;
          xxxInternalGetMessage(&v28, (struct tagMSG *)0x104, 0x104u, 1u, 0);
          v2 = (unsigned int *)HMValidateHandleNoSecure((unsigned int)v2, 1);
          if ( !v2 )
          {
            v2 = *(unsigned int **)(*(_DWORD *)(_gptiCurrent + 236) + 64);
            ThreadLockExchange((int)v2, (int)v44);
          }
          LOWORD(v4) = v48;
          if ( (_WORD)v48 == 9 )
            goto LABEL_21;
        }
        if ( (unsigned int)v29 <= 0x104 || (unsigned int)v29 > 0x106 && v29 != (struct tagMSG *)512 )
          goto LABEL_97;
LABEL_64:
        if ( v2 )
          v2 = (unsigned int *)*v2;
        xxxInternalGetMessage(&v28, v29, (unsigned int)v29, 1u, 0);
        v2 = (unsigned int *)HMValidateHandleNoSecure((unsigned int)v2, 1);
        if ( !v2 )
        {
          v2 = *(unsigned int **)(*(_DWORD *)(_gptiCurrent + 236) + 64);
          ThreadLockExchange((int)v2, (int)v44);
        }
        if ( v29 == (struct tagMSG *)257 || v29 == (struct tagMSG *)261 )
          break;
        if ( v29 == (struct tagMSG *)256 )
          goto LABEL_81;
      }
      if ( (_WORD)v30 != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_82;
    }
  }
  while ( (_WORD)v30 != 27 );
  if ( gspwndAltTab )
  {
LABEL_81:
    v2 = *(unsigned int **)(*(_DWORD *)(_gptiCurrent + 236) + 64);
    ThreadLockExchange((int)v2, (int)v44);
LABEL_82:
    v24 = 0;
  }
  else
  {
    v24 = 1;
  }
  v50 = v24;
LABEL_102:
  xxxReleaseCapture();
  v45 = gspwndAltTab != 0;
  if ( v24 == 1 )
  {
    if ( _gpqForeground )
    {
      v25 = *(_DWORD *)(_gpqForeground + 64);
      if ( v25 )
      {
        if ( (unsigned int *)v25 != v2 )
        {
          v38 = *(_DWORD *)(_gptiCurrent + 228);
          *(_DWORD *)(_gptiCurrent + 228) = &v38;
          v39 = (struct tagWND *)v25;
          HMLockObject(v25);
          xxxSetWindowPos(v25, 1, 0, 0, 0, 0, 25619);
          ThreadUnlock1();
        }
      }
    }
    v24 = v50;
  }
  if ( v2 )
  {
    xxxSetForegroundWindowWithOptions(v2, 2, 0, 0);
    if ( (*(_BYTE *)(v2[5] + 23) & 0x20) != 0 && !v24 )
    {
      if ( v45 )
        _PostMessage((int)v2, 274, 61728, 0);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1();
}
