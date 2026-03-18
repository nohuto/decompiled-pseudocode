/*
 * XREFs of _xxxSysCommand@12 @ 0xADD46
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     __PostThreadMessage@16 @ 0x8262A (__PostThreadMessage@16.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _GetThreadDesktopWindow@4 @ 0x9E52A (_GetThreadDesktopWindow@4.c)
 *     _xxxPlayEventSound@4 @ 0xA95E6 (_xxxPlayEventSound@4.c)
 *     __GetMessagePos@0 @ 0xA9662 (__GetMessagePos@0.c)
 *     ?xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z @ 0xAC35E (-xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z @ 0x14CAE7 (--0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     _IsWindowDestroyed@4 @ 0x16F3FE (_IsWindowDestroyed@4.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     ?HasPendingPromotion@PointerPromotion@@YGHPAUtagTHREADINFO@@@Z @ 0x17D0A0 (-HasPendingPromotion@PointerPromotion@@YGHPAUtagTHREADINFO@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z @ 0x184390 (-xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z.c)
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 *     _xxxMNStartMenuState@12 @ 0x184D3D (_xxxMNStartMenuState@12.c)
 *     ?DelegateMoveSizeToShell@@YGXPAUtagWND@@I@Z @ 0x185481 (-DelegateMoveSizeToShell@@YGXPAUtagWND@@I@Z.c)
 *     ?DragOperationFromMaximizedAllowed@@YG_NPAUtagWND@@@Z @ 0x1856D5 (-DragOperationFromMaximizedAllowed@@YG_NPAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1856F1 (-MoveWithArrangementAllowed@@YG_NPAUtagWND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YGHPAUtagWND@@H@Z @ 0x18570D (-ShouldApplyShellWindowingBehaviorToSysCommand@@YGHPAUtagWND@@H@Z.c)
 *     _StartScreenSaver@4 @ 0x1857D7 (_StartScreenSaver@4.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 *     _xxxIsDragging@16 @ 0x1A68B7 (_xxxIsDragging@16.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 *     _xxxMNKeyFilter@12 @ 0x1ACE4B (_xxxMNKeyFilter@12.c)
 */

void __fastcall xxxSysCommand(int *BugCheckParameter2, int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  struct tagHOOK *v5; // esi
  int v6; // eax
  struct tagWND *v7; // eax
  int v8; // edx
  void *v9; // ecx
  char *v10; // esi
  char *v11; // esi
  char *v12; // esi
  unsigned int v13; // eax
  int MessagePos; // eax
  int v15; // edx
  int v16; // esi
  char v17; // al
  int v18; // eax
  char *v19; // esi
  char *v20; // esi
  char *v21; // esi
  __int16 KeyState; // ax
  char *v23; // esi
  char *v24; // esi
  char *v25; // esi
  int v26; // eax
  int v27; // edx
  int v28; // esi
  int v29; // eax
  char v30; // al
  struct tagMENUSTATE *v31; // eax
  struct tagMENUSTATE *v32; // esi
  int ThreadDesktopWindow; // edi
  PKTHREAD v34; // eax
  int v35; // eax
  unsigned int *v36; // eax
  unsigned int *v37; // esi
  unsigned int *v38; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v41; // eax
  struct tagMENUSTATE *v42; // eax
  int *v43; // edi
  int v44; // [esp-4h] [ebp-34h]
  int v45; // [esp-4h] [ebp-34h]
  _DWORD *v46; // [esp-4h] [ebp-34h]
  PointerPromotion *v47; // [esp+0h] [ebp-30h]
  struct tagWND *v48; // [esp+0h] [ebp-30h]
  struct tagTHREADINFO *v49; // [esp+4h] [ebp-2Ch]
  unsigned int v50; // [esp+4h] [ebp-2Ch]
  int v51; // [esp+10h] [ebp-20h]
  int v52; // [esp+10h] [ebp-20h]
  int v53; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v54[3]; // [esp+18h] [ebp-18h] BYREF
  int v55; // [esp+24h] [ebp-Ch] BYREF
  int v56; // [esp+28h] [ebp-8h]
  int v57; // [esp+2Ch] [ebp-4h]

  v53 = 0;
  v3 = a2 & 0xF;
  v5 = (struct tagHOOK *)(a2 - v3);
  v6 = BugCheckParameter2[2];
  v51 = a3 != (unsigned int *)0x10000 ? (unsigned int)a3 : 0;
  v54[0] = v6;
  if ( (*(_BYTE *)(v6 + 264) & 2) != 0 && v5 == (struct tagHOOK *)61728 )
    v7 = _gspwndInternalCapture;
  else
    v7 = *(struct tagWND **)(*(_DWORD *)(v6 + 236) + 56);
  if ( (v7 || (*(_BYTE *)(BugCheckParameter2[5] + 23) & 8) != 0)
    && BugCheckParameter2 != (int *)gspwndFullScreen
    && v5 != (struct tagHOOK *)61760
    && v5 != (struct tagHOOK *)61808
    && v5 != (struct tagHOOK *)61744
    || ((*(_BYTE *)(_gptiCurrent + 372) | *(_BYTE *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x40) != 0
    && xxxCallHook(v5, 8, a3 != (unsigned int *)0x10000 ? a3 : 0, 5u, (int)v47, (int)v49)
    || IsWindowDestroyed(BugCheckParameter2) )
  {
    return;
  }
  if ( (unsigned int)v5 <= 0xF090 )
  {
    if ( v5 != (struct tagHOOK *)61584 )
    {
      if ( (unsigned int)v5 > 0xF040 )
      {
        v19 = (char *)v5 - 61520;
        if ( v19 )
        {
          v20 = v19 - 16;
          if ( v20 )
          {
            v21 = v20 - 16;
            if ( !v21 || v21 == (char *)16 )
            {
              KeyState = _GetKeyState(16);
              xxxSBTrackInit(v3, KeyState < 0);
            }
          }
          else
          {
            xxxSendMessage(v9, 0, 0);
          }
          return;
        }
      }
      else if ( v5 != (struct tagHOOK *)61504 )
      {
        v10 = (char *)v5 - 61440;
        if ( v10 )
        {
          v11 = v10 - 16;
          if ( v11 )
          {
            v12 = v11 - 16;
            if ( !v12 )
            {
              if ( (*(_BYTE *)(BugCheckParameter2[5] + 23) & 0x20) != 0 )
                return;
              v44 = 11;
              goto LABEL_26;
            }
            if ( v12 == (char *)16 && (*(_BYTE *)(BugCheckParameter2[5] + 23) & 1) == 0 )
            {
              v44 = 12;
              goto LABEL_26;
            }
            return;
          }
          MessagePos = _GetMessagePos();
          v15 = BugCheckParameter2[5];
          v16 = MessagePos;
          v55 = (__int16)MessagePos;
          v52 = SHIWORD(MessagePos);
          if ( (*(_BYTE *)(v15 + 145) & 0x20) == 0
            && v3
            && !PointerPromotion::HasPendingPromotion(v47, v49)
            && !xxxIsDragging(v55, v52) )
          {
            xxxSetWindowPos((int)BugCheckParameter2, 0, 0, 0, 0, 0, 3);
            v17 = *(_BYTE *)(BugCheckParameter2[5] + 23);
            if ( (v17 & 0x20) != 0 )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout(
                (int)BugCheckParameter2,
                0x112u,
                0xF100u,
                (v17 & 0x40) != 0 ? 45 : 32,
                0,
                0,
                0,
                1u,
                0);
            }
            goto LABEL_42;
          }
          if ( !ShouldApplyShellWindowingBehaviorToSysCommand(v47, (int)v49) )
          {
            v18 = BugCheckParameter2[5];
            if ( (*(_BYTE *)(v18 + 22) & 4) == 0
              || (*(_BYTE *)(v18 + 23) & 1) == 0
              || DragOperationFromMaximizedAllowed(v48) )
            {
              xxxMoveSize(BugCheckParameter2, 10 - (v3 != 0), v16);
            }
            goto LABEL_42;
          }
        }
        else
        {
          if ( v3 > 0xA )
          {
LABEL_42:
            xxxDeliverRestoreFocusMessage(BugCheckParameter2);
            return;
          }
          if ( !ShouldApplyShellWindowingBehaviorToSysCommand(v47, (int)v49) )
          {
            v45 = _GetMessagePos();
            xxxMoveSize(BugCheckParameter2, v3, v45);
            goto LABEL_42;
          }
        }
        DelegateMoveSizeToShell(v48, v50);
        goto LABEL_42;
      }
      xxxOldNextWindow(v8);
      return;
    }
    goto LABEL_104;
  }
  if ( (unsigned int)v5 > 0xF150 )
  {
    if ( v5 == (struct tagHOOK *)61792 )
    {
LABEL_104:
      if ( *(_DWORD *)(BugCheckParameter2[2] + 236) != _gpqForeground )
        return;
      v42 = (struct tagMENUSTATE *)xxxMNStartMenuState(v8);
      v43 = (int *)v42;
      if ( !v42 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v55, v42);
      *(_DWORD *)*v43 |= 0x80000000;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v54, *v43);
      xxxMNLoop(v51, v5 == (struct tagHOOK *)61792);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v54);
      if ( (v43[1] & 0x100) == 0 )
        xxxMNEndMenuState(v43);
      goto LABEL_108;
    }
    if ( v5 == (struct tagHOOK *)61808 )
    {
      if ( v8 == -1 )
      {
        v55 = 4;
        v56 = 3;
      }
      else
      {
        if ( v8 != 2 )
          return;
        v55 = 5;
        if ( PowerIsDisplayIdleExpired(0, &v53) )
          v41 = v53;
        else
          v41 = PowerIsDisplayIdleExpired(5000, 0) != 0 ? 17 : 3;
        v56 = v41;
      }
      QueuePowerRequest(&v55, 0);
    }
    else if ( v5 == (struct tagHOOK *)61824 )
    {
      xxxHelpLoop();
    }
  }
  else
  {
    if ( v5 == (struct tagHOOK *)61776 )
    {
      v36 = (unsigned int *)ValidateHwnd(v8);
      v37 = v36;
      if ( v36 )
      {
        v38 = (unsigned int *)v36[27];
        v57 = 0;
        if ( v38 || (v38 = v37) != 0 )
          v37 = v38;
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v55 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v55;
        v56 = (int)v37;
        HMLockObject(v37);
        xxxSetForegroundWindowWithOptions(v37, 2, 0, 0);
        if ( (*(_BYTE *)(v37[5] + 23) & 0x20) != 0 )
          _PostMessage((int)v37, 274, 61728, 0);
        ThreadUnlock1();
      }
      return;
    }
    v23 = (char *)v5 - 61696;
    if ( !v23 )
    {
      v31 = (struct tagMENUSTATE *)xxxMNStartMenuState(v8);
      v32 = v31;
      if ( !v31 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v55, v31);
      **(_DWORD **)v32 |= 0x80000000;
      if ( (int *)gspwndFullScreen == BugCheckParameter2 )
      {
        v54[2] = 0;
        ThreadDesktopWindow = GetThreadDesktopWindow(0);
        v34 = KeGetCurrentThread();
        v35 = W32GetThreadWin32Thread(v34);
        v54[0] = *(_DWORD *)(v35 + 228);
        *(_DWORD *)(v35 + 228) = v54;
        v54[1] = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          HMLockObject(ThreadDesktopWindow);
        xxxMakeWindowForegroundWithState(ThreadDesktopWindow, 2);
        ThreadUnlock1();
      }
      v46 = *(_DWORD **)v32;
      *((_DWORD *)v32 + 1) |= 0x20u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v54, (int)v46);
      xxxMNKeyFilter(v51);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v54);
      if ( (*((_DWORD *)v32 + 1) & 0x100) == 0 )
        xxxMNEndMenuState(v32);
LABEL_108:
      if ( v55 )
        xxxUnlockMenuStateInternal(v47, (int)v49);
      return;
    }
    v24 = v23 - 32;
    if ( !v24 )
    {
      v30 = *(_BYTE *)(BugCheckParameter2[5] + 23);
      if ( (v30 & 0x20) != 0 || (v30 & 1) == 0 )
      {
        v13 = 9;
        goto LABEL_77;
      }
      if ( MoveWithArrangementAllowed(v47) )
        IsSemiMaximized(BugCheckParameter2);
      v44 = 10;
LABEL_26:
      v13 = v44;
LABEL_77:
      xxxPlayEventSound(v13);
      xxxShowWindow(v47, (unsigned int)v49);
      return;
    }
    v25 = v24 - 16;
    if ( v25 )
    {
      if ( v25 == (char *)16 )
      {
        v26 = HMValidateHandleNoSecure(ghwndSwitch, 1);
        if ( !v26 || BugCheckParameter2 == (int *)v26 )
          StartScreenSaver(0);
        else
          _PostMessage(v26, 274, 61760, (*_gpsi >> 9) & 1);
      }
    }
    else if ( (*(_BYTE *)(_gpsi + 1720) & 8) != 0
           && ((v27 = (*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x800) != 0
            || *(_DWORD *)(*(_DWORD *)(BugCheckParameter2[3] + 4) + 96)) )
    {
      if ( v27 )
        xxxCallHook((struct tagHOOK *)*BugCheckParameter2, 7, 0, 0xAu, (int)v47, (int)v49);
      v28 = *(_DWORD *)(*(_DWORD *)(BugCheckParameter2[3] + 4) + 96);
      if ( v28 )
      {
        CInputGlobals::SetPtiLastWoken(_gpInputGlobals, *(struct tagTHREADINFO **)(v28 + 8), 0);
        v29 = -1;
        if ( v51 != -1 )
          v29 = *BugCheckParameter2;
        _PostMessage(v28, *(_DWORD *)(_gpsi + 528), 7, v29);
      }
    }
    else if ( _gptiTasklist )
    {
      CInputGlobals::SetPtiLastWoken(_gpInputGlobals, _gptiTasklist, 0);
      _PostThreadMessage(_gptiTasklist, 274, 61744, 0);
    }
  }
}
