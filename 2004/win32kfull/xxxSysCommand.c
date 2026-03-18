/*
 * XREFs of xxxSysCommand @ 0x1C005556C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020D910 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     IsWindowDestroyed @ 0x1C002933C (IsWindowDestroyed.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C003810C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _PostThreadMessage @ 0x1C00BE8A8 (_PostThreadMessage.c)
 *     GetThreadDesktopWindow @ 0x1C00FF930 (GetThreadDesktopWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _GetMessagePos @ 0x1C0106D20 (_GetMessagePos.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0114140 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     xxxPlayEventSound @ 0x1C0114880 (xxxPlayEventSound.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E0494 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0222234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C0222BF0 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C022347C (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0224110 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0224468 (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0224494 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02244C0 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     StartScreenSaver @ 0x1C02245F0 (StartScreenSaver.c)
 *     xxxMNLoop @ 0x1C0235428 (xxxMNLoop.c)
 *     xxxSBTrackInit @ 0x1C02469C0 (xxxSBTrackInit.c)
 *     xxxIsDragging @ 0x1C0249DA8 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C025120C (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C0251A9C (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // r14d
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  int v18; // esi
  unsigned int v19; // ecx
  int MessagePos; // eax
  char v21; // cl
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  struct tagMENUSTATE *v25; // rax
  struct tagMENUSTATE *v26; // rdi
  _QWORD *v27; // rdx
  __int64 v28; // rsi
  _QWORD *v29; // rax
  struct tagMENUSTATE *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rdi
  _QWORD *v33; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct tagWND *v39; // rax
  __int64 v40; // r8
  struct tagWND *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rsi
  __int64 v47; // r8
  char v48; // cl
  struct tagMENUSTATE *v49; // rax
  struct tagMENUSTATE *v50; // rsi
  _DWORD **v51; // rdx
  __int64 ThreadDesktopWindow; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rdi
  _QWORD *v59; // rax
  int v60; // [rsp+50h] [rbp-69h] BYREF
  struct tagMENUSTATE *v61; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v62[2]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v63[2]; // [rsp+70h] [rbp-49h] BYREF
  struct tagMENUSTATE *v64; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v65[3]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v66[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v68; // [rsp+C0h] [rbp+7h]
  _QWORD v69[2]; // [rsp+C8h] [rbp+Fh] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v60 = 0;
  v4 = a2 & 0xF;
  v5 = a2 - v4;
  v6 = a3;
  if ( a3 == 0x10000 )
    v6 = 0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 424) + 104LL) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0)
    && a1 != gspwndFullScreen
    && (((v5 - 61744) & 0xFFFFFFAF) != 0 || v5 == 61824)
    || (((unsigned __int8)*(_DWORD *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(8, v5, (unsigned int)v6, 5)
    || (unsigned int)IsWindowDestroyed((__int64)a1) )
  {
    return;
  }
  if ( v5 <= 0xF090 )
  {
    if ( v5 != 61584 )
    {
      v10 = v5 - 61440;
      if ( v10 )
      {
        v11 = v10 - 16;
        if ( v11 )
        {
          v12 = v11 - 16;
          if ( v12 )
          {
            v13 = v12 - 16;
            if ( v13 )
            {
              v14 = v13 - 16;
              if ( v14 && (v15 = v14 - 16) != 0 )
              {
                v16 = v15 - 16;
                if ( v16 )
                {
                  v17 = v16 - 16;
                  if ( !v17 || v17 == 16 )
                  {
                    _GetKeyState(16LL);
                    xxxSBTrackInit(a1, v6);
                  }
                }
                else
                {
                  xxxSendMessage(v9, 16LL, 0LL, 0LL);
                }
              }
              else
              {
                xxxOldNextWindow((unsigned int)v6);
              }
              return;
            }
            v18 = 3;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
              return;
            v19 = 12;
          }
          else
          {
            v18 = 6;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
              return;
            v19 = 11;
          }
LABEL_106:
          xxxPlayEventSound(v19);
          xxxShowWindow(a1, v18 | gdwPUDFlags & 0x10000);
          return;
        }
        MessagePos = GetMessagePos();
        LODWORD(v61) = (__int16)MessagePos;
        HIDWORD(v61) = SHIWORD(MessagePos);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x20) == 0
          && v4
          && (!word_1C033AB90 || qword_1C033AB98 != v3)
          && !(unsigned int)xxxIsDragging(a1, v61) )
        {
          xxxSetWindowPos(a1, 0, 0, 3);
          v21 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
          if ( (v21 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout((int)a1, 274, 61696, (v21 & 0x40) != 0 ? 45 : 32, 0, 0, 0LL, 1, 0);
          }
          goto LABEL_48;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61456) )
        {
          v22 = 10 - (v4 != 0);
LABEL_45:
          DelegateMoveSizeToShell(a1, v22);
          goto LABEL_48;
        }
        v23 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v23 + 30) & 4) != 0
          && (*(_BYTE *)(v23 + 31) & 1) != 0
          && !DragOperationFromMaximizedAllowed(a1) )
        {
          goto LABEL_48;
        }
      }
      else
      {
        if ( v4 > 0xA )
        {
LABEL_48:
          xxxDeliverRestoreFocusMessage(a1);
          return;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61440) )
        {
          v22 = v4;
          goto LABEL_45;
        }
        GetMessagePos();
      }
      xxxMoveSize(a1);
      goto LABEL_48;
    }
    goto LABEL_66;
  }
  switch ( v5 )
  {
    case 0xF100u:
      v49 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, 61696LL, v6);
      v50 = v49;
      if ( !v49 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v64, v49);
      **v51 |= 0x80000000;
      if ( gspwndFullScreen == a1 )
      {
        v66[2] = 0LL;
        ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v66[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v66;
        v66[1] = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          HMLockObject(ThreadDesktopWindow);
        xxxMakeWindowForegroundWithState(ThreadDesktopWindow, 2);
        ThreadUnlock1(v55, v54, v56);
      }
      v57 = *(_QWORD *)v50;
      *((_DWORD *)v50 + 2) |= 0x20u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v63, v57);
      xxxMNKeyFilter(v63, v50, (unsigned int)v6);
      v58 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v63[0] != gSmartObjNullRef && !--*(_DWORD *)(v63[0] + 8LL) )
      {
        if ( *(_BYTE *)(v63[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v63[0]);
      }
      v59 = *(_QWORD **)(v58 + 1464);
      if ( v59 )
        *(_QWORD *)(v58 + 1464) = *v59;
      if ( (*((_DWORD *)v50 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v50);
      v30 = v64;
LABEL_121:
      if ( v30 )
        xxxUnlockMenuStateInternal(v30, 0);
      return;
    case 0xF120u:
      v18 = 9;
      v48 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
      if ( (v48 & 0x20) != 0 || (v48 & 1) == 0 )
      {
        v19 = 9;
      }
      else
      {
        MoveWithArrangementAllowed(a1);
        v19 = 10;
      }
      goto LABEL_106;
    case 0xF130u:
      if ( (*(_DWORD *)(gpsi + 2120LL) & 8) == 0
        || (v44 = **(_QWORD **)(gptiCurrent + 456LL),
            v45 = *(_DWORD *)(gptiCurrent + 672LL),
            (((unsigned __int16)v45 | (unsigned __int16)*(_DWORD *)(v44 + 16)) & 0x800) == 0)
        && !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
      {
        if ( gptiTasklist )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, gptiTasklist, 0);
          PostThreadMessage(gptiTasklist, 274LL, 61744LL);
        }
        return;
      }
      if ( (((unsigned __int16)v45 | (unsigned __int16)*(_DWORD *)(v44 + 16)) & 0x800) != 0 )
        xxxCallHook(7, *(_QWORD *)a1, 0LL, 10);
      v46 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL);
      if ( !v46 )
        return;
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v46 + 16), 0);
      if ( v6 == 0xFFFFFFFFLL )
        v47 = -1LL;
      else
        v47 = *(_QWORD *)a1;
      v43 = v47;
      v40 = 7LL;
      v41 = (struct tagWND *)v46;
      v42 = *(unsigned int *)(gpsi + 928LL);
LABEL_88:
      PostMessage(v41, v42, v40, v43);
      return;
    case 0xF140u:
      LOBYTE(v8) = 1;
      v39 = (struct tagWND *)HMValidateHandleNoSecure(ghwndSwitch, v8);
      if ( !v39 || a1 == v39 )
      {
        StartScreenSaver(0LL);
        return;
      }
      v40 = 61760LL;
      v41 = v39;
      v42 = 274LL;
      v43 = (*gpsi >> 9) & 1;
      goto LABEL_88;
    case 0xF150u:
      v31 = ValidateHwnd(v6);
      v32 = (_QWORD *)v31;
      if ( v31 )
      {
        v33 = *(_QWORD **)(v31 + 200);
        v65[2] = 0LL;
        CurrentThread = KeGetCurrentThread();
        if ( !v33 )
          v33 = v32;
        if ( v33 )
          v32 = v33;
        v35 = W32GetThreadWin32Thread(CurrentThread);
        v65[0] = *(_QWORD *)(v35 + 408);
        *(_QWORD *)(v35 + 408) = v65;
        v65[1] = v32;
        HMLockObject(v32);
        xxxSetForegroundWindowWithOptions(v32, 2LL, 0LL, 0LL);
        if ( (*(_BYTE *)(v32[5] + 31LL) & 0x20) != 0 )
          PostMessage(v32, 274LL, 61728LL, 0LL);
        ThreadUnlock1(v37, v36, v38);
      }
      break;
    case 0xF160u:
LABEL_66:
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gpqForeground )
        return;
      v25 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, v5, v6);
      v26 = v25;
      if ( !v25 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v61, v25);
      *(_DWORD *)*v27 |= 0x80000000;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v62, *v27);
      xxxMNLoop(v62, v26, v6, v5 == 61792);
      v28 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v62[0] != gSmartObjNullRef && !--*(_DWORD *)(v62[0] + 8LL) )
      {
        if ( *(_BYTE *)(v62[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v62[0]);
      }
      v29 = *(_QWORD **)(v28 + 1464);
      if ( v29 )
        *(_QWORD *)(v28 + 1464) = *v29;
      if ( (*((_DWORD *)v26 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v26);
      v30 = v61;
      goto LABEL_121;
    case 0xF170u:
      if ( v6 == -1 )
      {
        v69[0] = 4LL;
        v24 = v69;
        v69[1] = 3LL;
      }
      else
      {
        if ( v6 != 2 )
          return;
        v67 = 5LL;
        if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v60) )
          v68 = v60;
        else
          v68 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
        v24 = &v67;
      }
      QueuePowerRequest(v24, 0LL);
      break;
    case 0xF180u:
      xxxHelpLoop(a1);
      break;
  }
}
