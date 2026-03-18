/*
 * XREFs of xxxDestroyWindow @ 0x1C00CEED0
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00BC098 (xxxCreateDefaultImeWindow.c)
 *     NtUserDestroyWindow @ 0x1C00CC0B0 (NtUserDestroyWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00CC1B0 (xxxDW_DestroyOwnedWindows.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     xxxRemoveShadow @ 0x1C00D3F2C (xxxRemoveShadow.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     xxxCancelCoolSwitch @ 0x1C011D004 (xxxCancelCoolSwitch.c)
 *     NtUserDisableThreadIme @ 0x1C011D780 (NtUserDisableThreadIme.c)
 *     xxxCsDdeInitialize @ 0x1C011F460 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C012BDB0 (xxxDestroyThreadDDEObject.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C012D6C0 (xxxCleanupMotherDesktopWindow.c)
 *     xxxAddShadow @ 0x1C0136968 (xxxAddShadow.c)
 *     xxxMNCancel @ 0x1C0236FD4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxEndMenu @ 0x1C0249E54 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0003638 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C0008A84 (xxxHandleDestroyGhostWindow.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxCallCtfHook @ 0x1C004D454 (xxxCallCtfHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0091398 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C00BC434 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00BC4F8 (zzzImeCanDestroyDefIME.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00BCC2C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     zzzAttachThreadInput @ 0x1C00BF544 (zzzAttachThreadInput.c)
 *     xxxFocusSetInputContext @ 0x1C00C1FBC (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00C2554 (zzzInputFocusLostWindowEvent.c)
 *     xxxEnableWindow @ 0x1C00C9A30 (xxxEnableWindow.c)
 *     IsNonImmersiveBand @ 0x1C00C9C04 (IsNonImmersiveBand.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00CC1B0 (xxxDW_DestroyOwnedWindows.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C00CC324 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     UnlinkWindow @ 0x1C00CEAA8 (UnlinkWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C00CEC6C (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     IsWindowGhosted @ 0x1C00CF8CC (IsWindowGhosted.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     zzzInternalDestroyCaret @ 0x1C010A9B0 (zzzInternalDestroyCaret.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C012D4F0 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C015CD78 (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01D26E4 (DisassociateShellFrameAppThreads2.c)
 *     QueueShutdownData @ 0x1C01D2B5C (QueueShutdownData.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DF7D4 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C02213A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxFlushPalette @ 0x1C0234DA0 (xxxFlushPalette.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C0240140 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenu @ 0x1C0249E54 (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(unsigned __int64 a1)
{
  unsigned int v1; // esi
  int v2; // ebx
  int v4; // r13d
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  struct _LARGE_STRING *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 i; // rbx
  char v27; // cl
  __int64 v28; // rax
  __int64 v29; // rcx
  struct tagHOTKEYSTRUCT **v30; // rax
  struct tagHOTKEYSTRUCT *v31; // rbx
  struct tagHOTKEYSTRUCT *v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // r12d
  unsigned __int8 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 j; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // bl
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rbx
  struct tagWND *v51; // rdx
  __int64 v52; // rcx
  int CanDestroyDefIME; // ebx
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // rbx
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 *v59; // rdx
  __int128 v60; // [rsp+50h] [rbp-59h] BYREF
  __int64 v61; // [rsp+60h] [rbp-49h]
  __int128 v62; // [rsp+68h] [rbp-41h] BYREF
  __int64 v63; // [rsp+78h] [rbp-31h]
  __int128 v64; // [rsp+80h] [rbp-29h] BYREF
  __int64 v65; // [rsp+90h] [rbp-19h]
  _QWORD v66[3]; // [rsp+98h] [rbp-11h] BYREF
  __int128 v67; // [rsp+B0h] [rbp+7h] BYREF
  _QWORD v68[8]; // [rsp+C0h] [rbp+17h] BYREF
  int v69; // [rsp+110h] [rbp+67h]
  struct tagMENUSTATE *v70; // [rsp+118h] [rbp+6Fh] BYREF

  v1 = 0;
  v66[2] = 0LL;
  v64 = 0LL;
  v2 = 0;
  v69 = 0;
  v65 = 0LL;
  v61 = 0LL;
  v60 = 0LL;
  v66[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v66;
  v66[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v4 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  if ( gptiCurrent != *(_QWORD *)(a1 + 16) )
  {
    if ( !v4 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 2) == 0 )
    {
      UserSetLastError(5LL);
LABEL_20:
      if ( v4 )
      {
        v8 = v2 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 488LL) = v8;
      }
      LOBYTE(v1) = ThreadUnlock1(v8, v7, v9) == 0;
      return v1;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
  }
  if ( v4 )
  {
    v2 = *(_DWORD *)(gptiCurrent + 488LL) & 0x10000000;
    v69 = v2;
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x10000000u;
  }
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_DWORD *)(v5 + 232);
  if ( (v6 & 0x4000) != 0 )
  {
    *(_DWORD *)(v5 + 232) = v6 & 0xFFFFBFFF;
    QueueShutdownData(*(_QWORD *)a1, 0LL);
  }
  if ( !v4 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
  {
    if ( (*gpsi & 4) != 0 && a1 == *(_QWORD *)(gptiCurrent + 784LL)
      || (unsigned __int8)tagWND::HasState(a1) && *(_DWORD *)(gptiCurrent + 904LL) == 1 )
    {
      xxxCallCtfHook(5, 4, *(_QWORD *)a1, 0LL);
    }
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4, *(_QWORD *)a1, 0LL, 5) )
    {
      goto LABEL_20;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage(a1, 0x90u, 0LL, 0LL);
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL);
  if ( v11 )
  {
    if ( a1 == *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL);
      do
      {
        *(_DWORD *)(v11 + 8) &= ~4u;
        v11 = *(_QWORD *)(v11 + 48);
      }
      while ( v11 );
      if ( (*(_DWORD *)(v12 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v70,
          (struct tagMENUSTATE *)v12);
        xxxEndMenu(v13);
        if ( v70 )
          xxxUnlockMenuStateInternal(v70, 0);
      }
    }
  }
  if ( ghwndSwitch == *(_QWORD *)a1 )
    ghwndSwitch = 0LL;
  v14 = *(_QWORD *)(a1 + 40);
  v15 = v14;
  if ( (*(_BYTE *)(v14 + 31) & 0x40) == 0 && !*(_QWORD *)(a1 + 120) && (*(_BYTE *)(v14 + 18) & 0x20) != 0 )
  {
    xxxFlushPalette(a1, v11, v14);
    v15 = *(_QWORD *)(a1 + 40);
  }
  if ( **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v15 + 31) & 0xC0) != 0x40 )
  {
    v16 = *(_QWORD *)(a1 + 120);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      v18 = *(_QWORD *)(a1 + 16);
      if ( v17 != v18 )
      {
        zzzAttachThreadInput(v18, v17, 0);
        v15 = *(_QWORD *)(a1 + 40);
      }
    }
  }
  if ( (*(_BYTE *)(v15 + 31) & 0x40) != 0 && (*(_BYTE *)(v15 + 24) & 4) == 0 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v19 = *(_QWORD *)(a1 + 104);
    if ( v19 )
    {
      *(_QWORD *)&v60 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v60;
      *((_QWORD *)&v60 + 1) = v19;
      HMLockObject(v19);
      v20 = *(_QWORD *)(a1 + 168);
      v21 = *(_QWORD *)(a1 + 104);
      v22 = *(struct _LARGE_STRING **)a1;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v21, 0x210u, ((unsigned __int16)v20 << 16) | 2, v22, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v24, v23, v25);
    }
  }
  if ( a1 != gTermIO[1] && a1 != qword_1C0339008 )
    SetOrClrWF(1, a1, 0x480u, 1);
  if ( (unsigned int)IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
  }
  else if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow((struct tagWND *)a1);
  }
  if ( (unsigned int)IsTopLevelWindow(a1) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 24LL) + 112LL); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(_QWORD *)(i + 120) == a1 && gptiCurrent != *(_QWORD *)(i + 16) )
        PostUnownedNotification((struct tagWND *)i);
    }
  }
  v27 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  if ( (v27 & 0x10) != 0 )
  {
    if ( (v27 & 0x40) != 0 )
      xxxShowWindow((struct tagWND *)a1, gdwPUDFlags & 0x10000);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, (v4 << 13) + 151);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    {
      SetVisible((struct tagWND *)a1, 0);
      v28 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v28 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v28 + 8) + 24LL) )
        {
          v29 = *(_QWORD *)(a1 + 104);
          if ( v29 )
            zzzLockDisplayAreaAndInvalidateDCCache(v29, 16, 0LL);
          xxxRedrawWindow(0LL, (int *)(*(_QWORD *)(a1 + 40) + 88LL), 0LL, 133);
        }
      }
    }
  }
  else if ( (unsigned int)IsTrayWindow((_QWORD *)a1) && (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) != 0x2AA )
  {
    PostShellHookMessages(2uLL, *(_QWORD *)a1);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) == 0 )
    {
      v30 = HotKeyHelper((struct tagWND *)a1);
      v31 = *v30;
      if ( *v30 )
      {
        v32 = *v30;
        *v30 = (struct tagHOTKEYSTRUCT *)*((_QWORD *)v31 + 2);
        HMAssignmentUnlock(v32);
        Win32FreePool(v31);
        --gcHotKey;
      }
    }
  }
  if ( !v4 )
  {
    v33 = *(_QWORD *)(gptiCurrent + 432LL);
    v34 = 62;
    v62 = 0LL;
    v63 = 0LL;
    v35 = 0;
    v36 = *(_QWORD *)(v33 + 120);
    if ( a1 == v36 )
    {
      if ( *(char *)(*(_QWORD *)(a1 + 40) + 31LL) < 0 )
      {
        v37 = *(_QWORD *)(a1 + 120);
        if ( v37 )
        {
          v35 = 1;
          goto LABEL_89;
        }
      }
    }
    else
    {
      if ( v36 || gpqForeground != v33 )
        goto LABEL_116;
      v34 = 63;
    }
    v37 = a1;
LABEL_89:
    if ( v37 )
    {
      if ( v35 )
      {
        if ( !IsNonImmersiveBand(v37) && *(char *)(*(_QWORD *)(v37 + 40) + 20LL) < 0 )
        {
          for ( j = *(_QWORD *)(v37 + 120); j; j = *(_QWORD *)(j + 120) )
          {
            v39 = *(_QWORD *)(j + 40);
            if ( (*(_BYTE *)(v39 + 234) & 1) != 0 && *(char *)(v39 + 20) >= 0 )
            {
              v37 = j;
              break;
            }
          }
        }
        *(_QWORD *)&v62 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v62;
        *((_QWORD *)&v62 + 1) = v37;
        HMLockObject(v37);
        if ( (*(_BYTE *)(*(_QWORD *)(v37 + 40) + 234LL) & 1) != 0 )
          xxxEnableWindow((struct tagWND *)v37, 1);
      }
      v42 = xxxActivateWindowWithOptions(v37, (unsigned int)v35 + 2, v34, 1LL);
      if ( v35 )
        ThreadUnlock1(v41, v40, v43);
      if ( (!v42 || !v35 && a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL))
        && (!v35 || a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)) )
      {
        HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        v44 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
        v45 = v44;
        if ( (*gpsi & 4) != 0 && v44 )
        {
          *(_QWORD *)&v64 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v64;
          *((_QWORD *)&v64 + 1) = v44;
          HMLockObject(v44);
          xxxFocusSetInputContext(v45, 0, 0);
          v45 = ThreadUnlock1(v47, v46, v48);
        }
        if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground )
        {
          if ( v45 )
            zzzInputFocusLostWindowEvent(v45);
          xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
          xxxWindowEvent(3u, 0LL, 0, 0, 1u);
        }
        zzzInternalDestroyCaret();
      }
    }
  }
LABEL_116:
  v49 = *(_QWORD *)(a1 + 120);
  if ( v49 )
  {
    while ( *(_QWORD *)(v49 + 120) )
      v49 = *(_QWORD *)(v49 + 120);
    v50 = v49 + 200;
    if ( a1 == *(_QWORD *)(v49 + 200) )
    {
      if ( (*(_BYTE *)(_HMPheFromObject(v49) + 25) & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v50 - 160) + 176LL) = 0LL;
        HMAssignmentUnlock(v50);
      }
      else
      {
        v67 = *(_OWORD *)LockPointer(v68, v50, *(_QWORD *)(a1 + 120));
        HMAssignmentLock(&v67);
      }
    }
  }
  if ( !v4 )
  {
    if ( *(char *)(*(_QWORD *)(a1 + 40) + 19LL) >= 0 )
      xxxWindowEvent(0x8001u, (struct tagWND *)a1, 0, 0, 0);
    xxxDW_SendDestroyMessages(a1);
  }
  v51 = (struct tagWND *)gpsi;
  if ( (*gpsi & 4) == 0 )
    goto LABEL_145;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    goto LABEL_145;
  if ( !*(_QWORD *)(gptiCurrent + 784LL) )
    goto LABEL_145;
  v52 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL);
  if ( (*(_BYTE *)(v52 + 10) & 1) != 0 || *(_WORD *)v52 == *(_WORD *)(gpsi + 898LL) || v4 )
    goto LABEL_145;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 104) && (unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 784LL), a1) )
    {
      v54 = *(_QWORD *)(gptiCurrent + 784LL);
LABEL_140:
      xxxDestroyWindow(v54);
    }
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(_QWORD *)(gptiCurrent + 784LL), (struct tagWND *)a1);
    zzzEndDeferWinEventNotify();
    if ( CanDestroyDefIME )
    {
      v54 = *(_QWORD *)(gptiCurrent + 784LL);
      if ( v54 )
        goto LABEL_140;
    }
  }
  v51 = *(struct tagWND **)(gptiCurrent + 784LL);
  if ( v51 && *(_DWORD *)(gptiCurrent + 904LL) == 1 && (unsigned __int8)tagWND::HasState(a1) )
    xxxDestroyWindow(v51);
LABEL_145:
  v55 = *(_QWORD *)(a1 + 104);
  if ( v55 && !v4 )
  {
    v56 = *(_QWORD *)(v55 + 16);
    if ( *(_QWORD *)(v56 + 1400) == a1 )
    {
      HMAssignmentUnlock(v56 + 1400);
      DisassociateShellFrameAppThreads2(v56, gptiCurrent);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
    {
      v58 = *(_QWORD *)(a1 + 16);
      v51 = *(struct tagWND **)(v57 + 16);
      if ( (struct tagWND *)v58 != v51 )
        zzzAttachThreadInput(v58, (__int64)v51, 0);
    }
    if ( *(_DWORD *)(a1 + 308) )
      WindowGroupingWindowManagement::HandleWindowDestruction((WindowGroupingWindowManagement *)a1, v51);
    v59 = *(__int64 **)(a1 + 104);
    if ( v59 )
      UnlinkWindow(a1, v59);
  }
  SetOrClrWF(1, a1, 0x380u, 1);
  xxxFreeWindow((struct tagWND *)a1);
  if ( v4 )
    *(_DWORD *)(gptiCurrent + 488LL) = v69 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
  return 1LL;
}
