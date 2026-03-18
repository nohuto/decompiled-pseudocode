/*
 * XREFs of xxxDestroyWindow @ 0x1C008A700
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C00313C8 (xxxCreateDefaultImeWindow.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxRemoveShadow @ 0x1C008EB8C (xxxRemoveShadow.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00BA988 (xxxCleanupMotherDesktopWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00E77E0 (xxxDW_DestroyOwnedWindows.c)
 *     NtUserDestroyWindow @ 0x1C01047E0 (NtUserDestroyWindow.c)
 *     xxxCancelCoolSwitch @ 0x1C011C044 (xxxCancelCoolSwitch.c)
 *     NtUserDisableThreadIme @ 0x1C011C710 (NtUserDisableThreadIme.c)
 *     xxxCsDdeInitialize @ 0x1C011DD40 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0129D20 (xxxDestroyThreadDDEObject.c)
 *     xxxAddShadow @ 0x1C0134A18 (xxxAddShadow.c)
 *     xxxMNCancel @ 0x1C0237E64 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C02386F0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxEndMenu @ 0x1C024B45C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0003798 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C0008A94 (xxxHandleDestroyGhostWindow.c)
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     xxxEnableWindow @ 0x1C0021E90 (xxxEnableWindow.c)
 *     IsNonImmersiveBand @ 0x1C0022AB4 (IsNonImmersiveBand.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002F1C8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C0031764 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C0031828 (zzzImeCanDestroyDefIME.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0032AA8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     PostShellHookMessages @ 0x1C0033A70 (PostShellHookMessages.c)
 *     xxxFocusSetInputContext @ 0x1C0034B4C (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00350E4 (zzzInputFocusLostWindowEvent.c)
 *     zzzAttachThreadInput @ 0x1C00381C0 (zzzAttachThreadInput.c)
 *     zzzInternalDestroyCaret @ 0x1C005FD5C (zzzInternalDestroyCaret.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     UnlinkWindow @ 0x1C008A2D8 (UnlinkWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C008A49C (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     IsWindowGhosted @ 0x1C008B128 (IsWindowGhosted.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxCallCtfHook @ 0x1C0091874 (xxxCallCtfHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00E77E0 (xxxDW_DestroyOwnedWindows.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00FB5C0 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C01084D8 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0114140 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C012B600 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C0159410 (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     Feature_Servicing_2109c_34956946__private_IsEnabled @ 0x1C0159424 (Feature_Servicing_2109c_34956946__private_IsEnabled.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01D34F4 (DisassociateShellFrameAppThreads2.c)
 *     QueueShutdownData @ 0x1C01D396C (QueueShutdownData.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E0494 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0222234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxFlushPalette @ 0x1C0235C30 (xxxFlushPalette.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C02413E0 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenu @ 0x1C024B45C (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(__int64 *a1)
{
  unsigned int v1; // esi
  int v3; // r15d
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
  __int64 v21; // rcx
  __int64 v22; // r9
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
  __int64 *v36; // rax
  __int64 v37; // rbx
  __int64 j; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // bl
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 *v45; // rbx
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
  __int64 v68[8]; // [rsp+C0h] [rbp+17h] BYREF
  int v69; // [rsp+110h] [rbp+67h]
  struct tagMENUSTATE *v70; // [rsp+118h] [rbp+6Fh] BYREF

  v1 = 0;
  v66[2] = 0LL;
  v64 = 0LL;
  v69 = 0;
  v3 = 0;
  v65 = 0LL;
  v61 = 0LL;
  v60 = 0LL;
  v66[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v66;
  v66[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v4 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  if ( gptiCurrent != a1[2] )
  {
    if ( !v4 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 2) == 0 )
    {
      UserSetLastError(5LL);
      goto LABEL_24;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
  }
  if ( v4 )
  {
    v3 = *(_DWORD *)(gptiCurrent + 480LL) & 0x10000000;
    v69 = v3;
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x10000000u;
  }
  v5 = a1[5];
  v6 = *(_DWORD *)(v5 + 232);
  if ( (v6 & 0x4000) != 0 )
  {
    *(_DWORD *)(v5 + 232) = v6 & 0xFFFFBFFF;
    QueueShutdownData(*a1, 0LL);
  }
  if ( !v4 && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
  {
    if ( (unsigned int)Feature_Servicing_2109c_34956946__private_IsEnabled() )
    {
      if ( ((*gpsi & 4) == 0 || a1 != *(__int64 **)(gptiCurrent + 776LL))
        && (!(unsigned __int8)tagWND::HasState(a1) || *(_DWORD *)(gptiCurrent + 896LL) != 1) )
      {
        goto LABEL_22;
      }
    }
    else if ( !(unsigned int)WantImeWindow((struct tagWND *)a1[13], (struct tagWND *)a1) )
    {
      goto LABEL_22;
    }
    xxxCallCtfHook(5LL, 4LL, *a1, 0LL);
LABEL_22:
    if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4, *a1, 0LL, 5) )
    {
LABEL_24:
      if ( v4 )
      {
        v8 = v3 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 480LL) = v8;
      }
      LOBYTE(v1) = ThreadUnlock1(v8, v7, v9) == 0;
      return v1;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage(a1, 144LL, 0LL, 0LL);
  }
  v11 = *(_QWORD *)(a1[2] + 600);
  if ( v11 )
  {
    if ( a1 == *(__int64 **)(*(_QWORD *)v11 + 8LL) )
    {
      v12 = *(_QWORD *)(a1[2] + 600);
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
  if ( ghwndSwitch == *a1 )
    ghwndSwitch = 0LL;
  v14 = a1[5];
  v15 = v14;
  if ( (*(_BYTE *)(v14 + 31) & 0x40) == 0 && !a1[15] && (*(_BYTE *)(v14 + 18) & 0x20) != 0 )
  {
    xxxFlushPalette(a1, v11, v14);
    v15 = a1[5];
  }
  if ( **(_WORD **)(a1[17] + 8) != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v15 + 31) & 0xC0) != 0x40 )
  {
    v16 = a1[15];
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      v18 = a1[2];
      if ( v17 != v18 )
      {
        zzzAttachThreadInput(v18, v17, 0);
        v15 = a1[5];
      }
    }
  }
  if ( (*(_BYTE *)(v15 + 31) & 0x40) != 0
    && (*(_BYTE *)(v15 + 24) & 4) == 0
    && !(unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    v19 = a1[13];
    if ( v19 )
    {
      *(_QWORD *)&v60 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v60;
      *((_QWORD *)&v60 + 1) = v19;
      HMLockObject(v19);
      v20 = a1[21];
      v21 = a1[13];
      v22 = *a1;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v21, 528, ((unsigned __int16)v20 << 16) | 2, v22, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v24, v23, v25);
    }
  }
  if ( a1 != (__int64 *)gTermIO[1] && a1 != (__int64 *)qword_1C0339FD8 )
    SetOrClrWF(1LL, a1, 1152LL, 1LL);
  if ( (unsigned int)IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
  }
  else if ( (*(_WORD *)(a1[5] + 42) & 0x3FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow((struct tagWND *)a1);
  }
  if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[3] + 8) + 24LL) + 112LL); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(__int64 **)(i + 120) == a1 && gptiCurrent != *(_QWORD *)(i + 16) )
        PostUnownedNotification((struct tagWND *)i);
    }
  }
  v27 = *(_BYTE *)(a1[5] + 31);
  if ( (v27 & 0x10) != 0 )
  {
    if ( (v27 & 0x40) != 0 )
      xxxShowWindow((struct tagWND *)a1, gdwPUDFlags & 0x10000);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, (v4 << 13) + 151);
    if ( (*(_BYTE *)(a1[5] + 31) & 0x10) != 0 )
    {
      SetVisible((struct tagWND *)a1, 0);
      v28 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v28 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v28 + 8) + 24LL) )
        {
          v29 = a1[13];
          if ( v29 )
            zzzLockDisplayAreaAndInvalidateDCCache(v29, 16, 0LL);
          xxxRedrawWindow(0LL, (int *)(a1[5] + 88), 0LL, 133);
        }
      }
    }
  }
  else if ( (unsigned int)IsTrayWindow(a1) && (*(_WORD *)(a1[5] + 42) & 0x3FFF) != 0x2AA )
  {
    PostShellHookMessages(2uLL, *a1);
  }
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    if ( (*(_BYTE *)(a1[5] + 31) & 0x40) == 0 )
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
  if ( v4 )
    goto LABEL_119;
  v33 = *(_QWORD *)(gptiCurrent + 424LL);
  v34 = 62;
  v62 = 0LL;
  v63 = 0LL;
  v35 = 0;
  v36 = *(__int64 **)(v33 + 120);
  if ( a1 == v36 )
  {
    if ( *(char *)(a1[5] + 31) < 0 )
    {
      v37 = a1[15];
      if ( v37 )
      {
        v35 = 1;
        goto LABEL_92;
      }
    }
  }
  else
  {
    if ( v36 || gpqForeground != v33 )
      goto LABEL_119;
    v34 = 63;
  }
  v37 = (__int64)a1;
LABEL_92:
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
      *(_QWORD *)&v62 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v62;
      *((_QWORD *)&v62 + 1) = v37;
      HMLockObject(v37);
      if ( (*(_BYTE *)(*(_QWORD *)(v37 + 40) + 234LL) & 1) != 0 )
        xxxEnableWindow((struct tagWND *)v37, 1);
    }
    v42 = xxxActivateWindowWithOptions(v37, (unsigned int)v35 + 2, v34, 1);
    if ( v35 )
      ThreadUnlock1(v41, v40, v43);
    if ( (!v42 || !v35 && a1 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL))
      && (!v35 || a1 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL)) )
    {
      HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
      v44 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 424LL) + 112LL);
      v45 = (__int64 *)v44;
      if ( (*gpsi & 4) != 0 && v44 )
      {
        *(_QWORD *)&v64 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v64;
        *((_QWORD *)&v64 + 1) = v44;
        HMLockObject(v44);
        xxxFocusSetInputContext(v45, 0, 0);
        v45 = (__int64 *)ThreadUnlock1(v47, v46, v48);
      }
      if ( *(_QWORD *)(gptiCurrent + 424LL) == gpqForeground )
      {
        if ( v45 )
          zzzInputFocusLostWindowEvent((__int64)v45);
        xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
        xxxWindowEvent(3u, 0LL, 0, 0, 1u);
      }
      zzzInternalDestroyCaret();
    }
  }
LABEL_119:
  v49 = a1[15];
  if ( v49 )
  {
    while ( *(_QWORD *)(v49 + 120) )
      v49 = *(_QWORD *)(v49 + 120);
    v50 = v49 + 200;
    if ( a1 == *(__int64 **)(v49 + 200) )
    {
      if ( (*(_BYTE *)(_HMPheFromObject(v49) + 25) & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v50 - 160) + 176LL) = 0LL;
        HMAssignmentUnlock(v50);
      }
      else
      {
        v67 = *(_OWORD *)LockPointer(v68, v50, a1[15]);
        HMAssignmentLock(&v67);
      }
    }
  }
  if ( !v4 )
  {
    if ( *(char *)(a1[5] + 19) >= 0 )
      xxxWindowEvent(0x8001u, (struct tagWND *)a1, 0, 0, 0);
    xxxDW_SendDestroyMessages((__int64)a1);
  }
  v51 = (struct tagWND *)gpsi;
  if ( (*gpsi & 4) == 0 )
    goto LABEL_149;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
    goto LABEL_149;
  if ( !*(_QWORD *)(gptiCurrent + 776LL) )
    goto LABEL_149;
  v52 = *(_QWORD *)(a1[17] + 8);
  if ( (*(_BYTE *)(v52 + 10) & 1) != 0 || *(_WORD *)v52 == *(_WORD *)(gpsi + 898LL) || v4 )
    goto LABEL_149;
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) != 0 )
  {
    if ( a1[13] && (unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 776LL), (__int64)a1) )
    {
      v54 = *(_QWORD *)(gptiCurrent + 776LL);
LABEL_143:
      xxxDestroyWindow(v54);
    }
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(struct tagWND **)(gptiCurrent + 776LL), (struct tagWND *)a1);
    zzzEndDeferWinEventNotify();
    if ( CanDestroyDefIME )
    {
      v54 = *(_QWORD *)(gptiCurrent + 776LL);
      if ( v54 )
        goto LABEL_143;
    }
  }
  if ( (unsigned int)Feature_Servicing_2109c_34956946__private_IsEnabled() )
  {
    v51 = *(struct tagWND **)(gptiCurrent + 776LL);
    if ( v51 )
    {
      if ( *(_DWORD *)(gptiCurrent + 896LL) == 1 && (unsigned __int8)tagWND::HasState(a1) )
        xxxDestroyWindow(v51);
    }
  }
LABEL_149:
  v55 = a1[13];
  if ( v55 && !v4 )
  {
    v56 = *(_QWORD *)(v55 + 16);
    if ( *(__int64 **)(v56 + 1392) == a1 )
    {
      HMAssignmentUnlock(v56 + 1392);
      DisassociateShellFrameAppThreads2(v56, gptiCurrent);
    }
    if ( (*(_BYTE *)(a1[5] + 31) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow((__int64)a1) )
    {
      v58 = a1[2];
      v51 = *(struct tagWND **)(v57 + 16);
      if ( (struct tagWND *)v58 != v51 )
        zzzAttachThreadInput(v58, (__int64)v51, 0);
    }
    if ( *((_DWORD *)a1 + 77) )
      WindowGroupingWindowManagement::HandleWindowDestruction((WindowGroupingWindowManagement *)a1, v51);
    v59 = (__int64 *)a1[13];
    if ( v59 )
      UnlinkWindow(a1, v59);
  }
  SetOrClrWF(1LL, a1, 896LL, 1LL);
  xxxFreeWindow((NotifyShell *)a1);
  if ( v4 )
    *(_DWORD *)(gptiCurrent + 480LL) = v69 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
  return 1LL;
}
