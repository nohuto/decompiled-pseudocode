/*
 * XREFs of _xxxDestroyWindow@4 @ 0x7239A
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _xxxCreateDefaultImeWindow@12 @ 0x1D8EA (_xxxCreateDefaultImeWindow@12.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxRemoveShadow@4 @ 0x71BB2 (_xxxRemoveShadow@4.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxDW_DestroyOwnedWindows@4 @ 0x7315A (_xxxDW_DestroyOwnedWindows@4.c)
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _NtUserDisableThreadIme@4 @ 0x801DE (_NtUserDisableThreadIme@4.c)
 *     _NtUserDestroyWindow@4 @ 0xA7102 (_NtUserDestroyWindow@4.c)
 *     _xxxDestroyThreadDDEObject@8 @ 0xD2D78 (_xxxDestroyThreadDDEObject@8.c)
 *     _xxxCleanupMotherDesktopWindow@4 @ 0xD4B02 (_xxxCleanupMotherDesktopWindow@4.c)
 *     _xxxCsDdeInitialize@20 @ 0xE3B3C (_xxxCsDdeInitialize@20.c)
 *     _xxxCancelCoolSwitch@0 @ 0x15D2FA (_xxxCancelCoolSwitch@0.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 *     _xxxEndMenu@4 @ 0x1A7B2A (_xxxEndMenu@4.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     _zzzInputFocusLostWindowEvent@8 @ 0x1768E (_zzzInputFocusLostWindowEvent@8.c)
 *     _xxxFocusSetInputContext@12 @ 0x184BE (_xxxFocusSetInputContext@12.c)
 *     _xxxEnableWindow@8 @ 0x18A3C (_xxxEnableWindow@8.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PAX@Z @ 0x1A038 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagW.c)
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _zzzImeCanDestroyDefIME@8 @ 0x1D148 (_zzzImeCanDestroyDefIME@8.c)
 *     ?WantImeWindow@@YGHPAUtagWND@@0@Z @ 0x2B47C (-WantImeWindow@@YGHPAUtagWND@@0@Z.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _xxxCallCtfHook@16 @ 0x6D91E (_xxxCallCtfHook@16.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _IsGhostWindow@4 @ 0x72B1C (_IsGhostWindow@4.c)
 *     _IsWindowGhosted@4 @ 0x72B34 (_IsWindowGhosted@4.c)
 *     _IsMotherDesktopWindow@4 @ 0x72C60 (_IsMotherDesktopWindow@4.c)
 *     _xxxDW_SendDestroyMessages@4 @ 0x72C7C (_xxxDW_SendDestroyMessages@4.c)
 *     _UnlinkWindow@8 @ 0x72E1E (_UnlinkWindow@8.c)
 *     _DWP_SetHotKey@8 @ 0x730DE (_DWP_SetHotKey@8.c)
 *     _xxxDW_DestroyOwnedWindows@4 @ 0x7315A (_xxxDW_DestroyOwnedWindows@4.c)
 *     _zzzInternalDestroyCaret@0 @ 0x7DAB2 (_zzzInternalDestroyCaret@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?PostUnownedNotification@@YGXPAUtagWND@@@Z @ 0xC545E (-PostUnownedNotification@@YGXPAUtagWND@@@Z.c)
 *     _zzzAttachThreadInput@12 @ 0xC76E4 (_zzzAttachThreadInput@12.c)
 *     _ImeCanDestroyDefIMEforChild@8 @ 0xCB942 (_ImeCanDestroyDefIMEforChild@8.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 *     _DisassociateShellFrameAppThreads2@8 @ 0x141CCF (_DisassociateShellFrameAppThreads2@8.c)
 *     _QueueShutdownData@8 @ 0x141FC0 (_QueueShutdownData@8.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z @ 0x14CAE7 (--0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z.c)
 *     _xxxDestroyCorrespondingGhostWindow@4 @ 0x170530 (_xxxDestroyCorrespondingGhostWindow@4.c)
 *     _xxxHandleDestroyGhostWindow@4 @ 0x170727 (_xxxHandleDestroyGhostWindow@4.c)
 *     ?xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z @ 0x184390 (-xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z.c)
 *     _xxxFlushPalette@4 @ 0x1962C9 (_xxxFlushPalette@4.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YGXPAUtagWND@@@Z @ 0x19F1FB (-HandleWindowDestruction@WindowGroupingWindowManagement@@YGXPAUtagWND@@@Z.c)
 *     _xxxEndMenu@4 @ 0x1A7B2A (_xxxEndMenu@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOL __stdcall xxxDestroyWindow(struct tagVWPL **a1)
{
  int v1; // edi
  int v2; // esi
  struct tagVWPL *v3; // ecx
  int v4; // eax
  _DWORD *v6; // ecx
  int v7; // esi
  struct tagVWPL *v8; // eax
  struct tagVWPL *v9; // esi
  struct tagVWPL *v10; // eax
  struct tagVWPL *v11; // ecx
  struct tagVWPL *v12; // ecx
  struct tagVWPL *v13; // esi
  struct tagHOOK *v14; // eax
  int v15; // edx
  int i; // esi
  char v17; // al
  int v18; // esi
  int v19; // eax
  struct tagVWPL *v20; // ecx
  int v21; // edx
  unsigned __int8 v22; // dl
  int v23; // ecx
  struct tagVWPL **v24; // eax
  struct tagVWPL *v25; // esi
  int j; // eax
  int v27; // ecx
  void *v28; // ecx
  char v29; // al
  char v30; // cl
  unsigned int *v31; // eax
  unsigned int *v32; // esi
  struct tagVWPL *v33; // eax
  int v34; // esi
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  bool v38; // zf
  int v39; // eax
  int CanDestroyDefIME; // esi
  struct tagVWPL *v41; // esi
  struct tagVWPL *v42; // edx
  struct tagMENUSTATE *v43; // [esp+0h] [ebp-50h]
  struct tagWND *v44; // [esp+4h] [ebp-4Ch]
  char v45; // [esp+Eh] [ebp-42h]
  char v46; // [esp+Fh] [ebp-41h]
  int v47; // [esp+10h] [ebp-40h]
  int v48; // [esp+14h] [ebp-3Ch]
  int v49; // [esp+1Ch] [ebp-34h] BYREF
  _DWORD v50[3]; // [esp+20h] [ebp-30h] BYREF
  int v51; // [esp+2Ch] [ebp-24h] BYREF
  struct tagVWPL *v52; // [esp+30h] [ebp-20h]
  int v53; // [esp+34h] [ebp-1Ch]
  int v54; // [esp+38h] [ebp-18h] BYREF
  struct tagVWPL *v55; // [esp+3Ch] [ebp-14h]
  int v56; // [esp+40h] [ebp-10h]
  int v57; // [esp+44h] [ebp-Ch] BYREF
  unsigned int *v58; // [esp+48h] [ebp-8h]
  int v59; // [esp+4Ch] [ebp-4h]

  v57 = 0;
  v50[2] = 0;
  v48 = 0;
  v58 = 0;
  v59 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v1 = _gptiCurrent;
  v50[0] = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = v50;
  v50[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v2 = *(_BYTE *)(_HMPheFromObject(a1) + 13) & 1;
  v47 = v2;
  if ( (struct tagVWPL *)_gptiCurrent != a1[2] )
  {
    if ( !v2 || (*(_BYTE *)(_HMPheFromObject(a1) + 13) & 2) == 0 )
    {
      UserSetLastError(5);
LABEL_17:
      if ( v2 )
        *(_DWORD *)(_gptiCurrent + 264) = v48 | *(_DWORD *)(_gptiCurrent + 264) & 0xEFFFFFFF;
      return ThreadUnlock1() == 0;
    }
    HMChangeOwnerThread(a1, _gptiCurrent);
  }
  if ( v2 )
  {
    v48 = *(_DWORD *)(_gptiCurrent + 264) & 0x10000000;
    *(_DWORD *)(_gptiCurrent + 264) |= 0x10000000u;
  }
  v3 = a1[5];
  v4 = *((_DWORD *)v3 + 36);
  if ( (v4 & 0x4000) != 0 )
  {
    *((_DWORD *)v3 + 36) = v4 & 0xFFFFBFFF;
    QueueShutdownData((unsigned int)*a1, 0);
  }
  if ( !v2 && (*(_BYTE *)(_gptiCurrent + 264) & 1) == 0 )
  {
    if ( WantImeWindow((int)a1[14], (int)a1) )
      xxxCallCtfHook((struct tagHOOK *)5, 4, (int)*a1, 0);
    if ( ((*(_BYTE *)(_gptiCurrent + 372) | *(_BYTE *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x40) != 0
      && xxxCallHook(*a1, 4, 0, 5u, (int)v43, (int)v44) )
    {
      goto LABEL_17;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage(a1, 0, 0);
  }
  v6 = (_DWORD *)*((_DWORD *)a1[2] + 82);
  if ( v6 )
  {
    if ( a1 == *(struct tagVWPL ***)(*v6 + 4) )
    {
      v7 = *((_DWORD *)a1[2] + 82);
      do
      {
        v6[1] &= ~4u;
        v6 = (_DWORD *)v6[8];
      }
      while ( v6 );
      if ( (*(_DWORD *)(v7 + 4) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v49,
          (struct tagMENUSTATE *)v7);
        xxxEndMenu(v7);
        if ( v49 )
          xxxUnlockMenuStateInternal(v43, (int)v44);
      }
    }
  }
  if ( (struct tagVWPL *)ghwndSwitch == *a1 )
    ghwndSwitch = 0;
  v8 = a1[5];
  v9 = v8;
  if ( (*((_BYTE *)v8 + 23) & 0x40) == 0 && !a1[16] && (*((_BYTE *)v8 + 10) & 0x20) != 0 )
  {
    xxxFlushPalette(a1);
    v9 = a1[5];
  }
  if ( **((_WORD **)a1[19] + 1) != *(_WORD *)(_gpsi + 498) && (*((_BYTE *)v9 + 23) & 0xC0) != 0x40 )
  {
    v10 = a1[16];
    if ( v10 )
    {
      if ( *((struct tagVWPL **)v10 + 2) != a1[2] )
      {
        zzzAttachThreadInput(0);
        v9 = a1[5];
      }
    }
  }
  if ( (*((_BYTE *)v9 + 23) & 0x40) != 0 && (*((_BYTE *)v9 + 16) & 4) == 0 && !_IsTopLevelWindow(a1) )
  {
    v11 = a1[14];
    if ( v11 )
    {
      v51 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v51;
      v52 = v11;
      HMLockObject(v11);
      v12 = a1[23];
      v13 = a1[14];
      v14 = *a1;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout((int)v13, 0x210u, ((unsigned __int16)v12 << 16) | 2, (int)v14, 0, 0, 0, 1u, 0);
      ThreadUnlock1();
    }
  }
  if ( !IsMotherDesktopWindow(a1) )
    SetOrClrWF(1, (int)a1, 0x480u, 1);
  if ( IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow(a1);
  }
  else if ( IsGhostWindow(a1, v15) )
  {
    xxxHandleDestroyGhostWindow();
  }
  if ( _IsTopLevelWindow(a1) )
  {
    for ( i = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1[3] + 1) + 12) + 60); i; i = *(_DWORD *)(i + 48) )
    {
      if ( *(struct tagVWPL ***)(i + 64) == a1 && _gptiCurrent != *(_DWORD *)(i + 8) )
        PostUnownedNotification(v43);
    }
  }
  v17 = *((_BYTE *)a1[5] + 23);
  if ( (v17 & 0x10) != 0 )
  {
    if ( (v17 & 0x40) != 0 )
    {
      xxxShowWindow(v43, (unsigned int)v44);
      v18 = v47;
    }
    else
    {
      v18 = v47;
      xxxSetWindowPos((int)a1, 0, 0, 0, 0, 0, (v47 << 13) + 151);
    }
    if ( (*((_BYTE *)a1[5] + 23) & 0x10) != 0 )
    {
      SetVisible(a1, 0);
      v19 = *(_DWORD *)(_gptiCurrent + 248);
      if ( v19 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(v19 + 4) + 12) )
        {
          v20 = a1[14];
          if ( v20 )
            zzzLockDisplayAreaAndInvalidateDCCache((int)v20, 16, 0);
          xxxRedrawWindow(0, (_DWORD *)a1[5] + 13, 0, 133);
        }
      }
    }
  }
  else
  {
    if ( IsTrayWindow(a1) && !IsGhostWindow(a1, v21) )
      PostShellHookMessages();
    v18 = v47;
  }
  if ( (*((_BYTE *)a1[5] + 23) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    DWP_SetHotKey(a1, 0);
  }
  if ( !v18 )
  {
    v49 = 62;
    v22 = 0;
    v54 = 0;
    v45 = 0;
    v55 = 0;
    v56 = 0;
    v1 = _gptiCurrent;
    v23 = *(_DWORD *)(_gptiCurrent + 236);
    v24 = *(struct tagVWPL ***)(v23 + 64);
    if ( a1 == v24 )
    {
      if ( *((char *)a1[5] + 23) < 0 )
      {
        v25 = a1[16];
        if ( v25 )
        {
          v22 = 1;
          v45 = 1;
          goto LABEL_84;
        }
      }
    }
    else
    {
      if ( v24 || _gpqForeground != v23 )
        goto LABEL_113;
      v49 = 63;
    }
    v25 = (struct tagVWPL *)a1;
LABEL_84:
    if ( v25 )
    {
      if ( v22 )
      {
        if ( !IsNonImmersiveBand(v25) && *(char *)(*((_DWORD *)v25 + 5) + 12) < 0 )
        {
          for ( j = *((_DWORD *)v25 + 16); j; j = *(_DWORD *)(j + 64) )
          {
            v27 = *(_DWORD *)(j + 20);
            if ( (*(_BYTE *)(v27 + 146) & 1) != 0 && *(char *)(v27 + 12) >= 0 )
            {
              v25 = (struct tagVWPL *)j;
              break;
            }
          }
        }
        v54 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v54;
        v55 = v25;
        HMLockObject(v25);
        if ( (*(_BYTE *)(*((_DWORD *)v25 + 5) + 146) & 1) != 0 )
          xxxEnableWindow(v28, (int)v25, 1);
        v22 = v45;
      }
      v29 = xxxActivateWindowWithOptions((int *)v25, v22 + 2, v49, 1);
      v30 = v45;
      v46 = v29;
      if ( v45 )
      {
        ThreadUnlock1();
        v29 = v46;
        v30 = v45;
      }
      if ( (!v29 || !v30 && a1 == *(struct tagVWPL ***)(*(_DWORD *)(_gptiCurrent + 236) + 64))
        && (!v30 || a1 == *(struct tagVWPL ***)(*(_DWORD *)(_gptiCurrent + 236) + 64)) )
      {
        HMAssignmentUnlock(*(_DWORD *)(_gptiCurrent + 236) + 64);
        v31 = (unsigned int *)HMAssignmentUnlock(*(_DWORD *)(_gptiCurrent + 236) + 60);
        v32 = v31;
        if ( (*_gpsi & 4) != 0 && v31 )
        {
          v57 = *(_DWORD *)(_gptiCurrent + 228);
          *(_DWORD *)(_gptiCurrent + 228) = &v57;
          v58 = v31;
          HMLockObject(v31);
          xxxFocusSetInputContext(0, v32, _gptiCurrent, 0);
          v32 = (unsigned int *)ThreadUnlock1();
        }
        if ( *(_DWORD *)(_gptiCurrent + 236) == _gpqForeground )
        {
          if ( v32 )
            zzzInputFocusLostWindowEvent((int)v32, 9);
          xxxWindowEvent(0x8005u, 0, 0xFFFFFFFC, 0, 0);
          xxxWindowEvent(3u, 0, 0, 0, 1);
        }
        zzzInternalDestroyCaret();
      }
    }
  }
LABEL_113:
  v33 = a1[16];
  if ( v33 )
  {
    while ( *((_DWORD *)v33 + 16) )
      v33 = (struct tagVWPL *)*((_DWORD *)v33 + 16);
    v34 = (int)v33 + 108;
    if ( a1 == *((struct tagVWPL ***)v33 + 27) )
    {
      if ( (*(_BYTE *)(_HMPheFromObject(v33) + 13) & 1) != 0 )
      {
        *(_DWORD *)(*(_DWORD *)(v34 - 88) + 112) = 0;
        HMAssignmentUnlock(v34);
      }
      else
      {
        LockPointer(v34, (int)a1[16]);
        HMAssignmentLock(v36, v35);
      }
    }
  }
  if ( !v47 )
  {
    if ( *((char *)a1[5] + 11) >= 0 )
      xxxWindowEvent(0x8001u, (struct tagEVENTHOOK *)a1, 0, 0, 0);
    xxxDW_SendDestroyMessages(a1);
  }
  if ( (*_gpsi & 4) == 0 )
    goto LABEL_137;
  if ( (*(_BYTE *)(v1 + 264) & 1) != 0 )
    goto LABEL_137;
  if ( !*(_DWORD *)(v1 + 436) )
    goto LABEL_137;
  v37 = *((_DWORD *)a1[19] + 1);
  if ( (*(_BYTE *)(v37 + 10) & 1) != 0 )
    goto LABEL_137;
  v38 = *(_WORD *)v37 == *(_WORD *)(_gpsi + 498);
  v39 = v47;
  if ( v38 || v47 )
    goto LABEL_138;
  if ( (*((_BYTE *)a1[5] + 23) & 0x40) != 0 )
  {
    if ( !a1[14] || !ImeCanDestroyDefIMEforChild(*(_DWORD *)(v1 + 436), a1) )
      goto LABEL_137;
  }
  else
  {
    ++_gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(_DWORD **)(v1 + 436), a1);
    zzzEndDeferWinEventNotify();
    if ( !CanDestroyDefIME || !*(_DWORD *)(v1 + 436) )
      goto LABEL_137;
  }
  xxxDestroyWindow(*(struct tagVWPL ***)(v1 + 436));
LABEL_137:
  v39 = v47;
LABEL_138:
  v41 = a1[14];
  if ( v41 && !v39 )
  {
    v49 = *((_DWORD *)v41 + 2);
    if ( *(struct tagVWPL ***)(v49 + 800) == a1 )
    {
      HMAssignmentUnlock(v49 + 800);
      DisassociateShellFrameAppThreads2(v49, v1);
      v41 = a1[14];
    }
    if ( (*((_BYTE *)a1[5] + 23) & 0xC0) == 0x40 && !_IsTopLevelWindow(a1) && a1[2] != *((struct tagVWPL **)v41 + 2) )
      zzzAttachThreadInput(0);
    if ( a1[45] )
      WindowGroupingWindowManagement::HandleWindowDestruction(v43, v44);
    v42 = a1[14];
    if ( v42 )
      UnlinkWindow(a1, v42);
  }
  SetOrClrWF(1, (int)a1, 0x380u, 1);
  xxxFreeWindow(a1);
  if ( v47 )
    *(_DWORD *)(v1 + 264) = v48 | *(_DWORD *)(v1 + 264) & 0xEFFFFFFF;
  return 1;
}
