/*
 * XREFs of xxxMNMouseMove @ 0x1C023923C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     TrackMouseEvent @ 0x1C00178E0 (TrackMouseEvent.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C023550C (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0235DB0 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C023659C (IsMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0236DBC (xxxMNButtonDown.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238210 (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B434 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0249B98 (xxxMNUpdateDraggingInfo.c)
 */

_QWORD *__fastcall xxxMNMouseMove(__int64 **a1, __int64 a2, int a3)
{
  __int64 *v4; // rdx
  unsigned __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  unsigned __int64 v18; // rax
  char v19; // al
  struct tagWND *v20; // rbx
  __int64 v21; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v29; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v31; // rax
  _QWORD *result; // rax
  __int64 *v33[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v34; // [rsp+30h] [rbp-30h] BYREF
  __int64 v35; // [rsp+40h] [rbp-20h]
  _DWORD v36[2]; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-10h]
  __int64 v38; // [rsp+58h] [rbp-8h]
  unsigned int v39; // [rsp+80h] [rbp+20h] BYREF
  int v40; // [rsp+90h] [rbp+30h]

  v40 = a3;
  v39 = 0;
  v4 = *a1;
  v34 = 0LL;
  v35 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v33, *v4);
  v6 = *v33[0];
  if ( v6 != *(_QWORD *)(v6 + 64) )
    goto LABEL_37;
  v6 = (unsigned int)(__int16)a3;
  if ( __PAIR64__(SHIWORD(v40), v6) == *(_QWORD *)(a2 + 12) )
    goto LABEL_37;
  v7 = SHIWORD(v40);
  *(_DWORD *)(a2 + 12) = v6;
  *(_DWORD *)(a2 + 16) = v7;
  v8 = (unsigned __int64 *)xxxMNFindWindowFromPoint(v33, &v39, a3);
  if ( IsMFMWFPWindow((__int64)v8) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v34 = *(_QWORD *)(ThreadWin32Thread + 416);
    v6 = (unsigned __int64)&v34;
    *(_QWORD *)(ThreadWin32Thread + 416) = &v34;
    *((_QWORD *)&v34 + 1) = v8;
    if ( v8 )
      HMLockObject(v8);
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
    xxxMNUpdateDraggingInfo(a2, v8, v39);
  if ( *(_DWORD *)(a2 + 20) == 1 )
  {
    if ( !v8 )
      goto LABEL_37;
    if ( v8 == (unsigned __int64 *)0xFFFFFFFFLL )
    {
      if ( *(_QWORD *)(*v33[0] + 8) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(*v33[0] + 8) + 40LL);
        if ( (*(_BYTE *)(v6 + 31) & 0x20) != 0 )
          goto LABEL_37;
      }
    }
    *(_DWORD *)(a2 + 20) = -1;
  }
  if ( v8 == (unsigned __int64 *)4294967291LL )
  {
    if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
    {
      xxxMNSwitchToAlternateMenu(v33, a2);
LABEL_18:
      xxxMNButtonDown((__int64 *)v33, a2, v39, 0);
      goto LABEL_37;
    }
  }
  else
  {
    if ( v8 == (unsigned __int64 *)0xFFFFFFFFLL )
      goto LABEL_18;
    if ( v8 )
    {
      v13 = safe_cast_fnid_to_PMENUWND((__int64)v8, v9, v10, v11);
      if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v8) && v13 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v33, *(_QWORD *)(v13 + 8));
        v17 = *(_DWORD *)(a2 + 8);
        if ( (v17 & 0x100) != 0 && (v17 & 0x8000) == 0 && (**(_DWORD **)v33[0] & 0x100000) == 0 )
        {
          v18 = *v8;
          v36[0] = 0;
          v38 = 0LL;
          v36[1] = 2;
          v37 = v18;
          TrackMouseEvent((__int64)v36);
          **(_DWORD **)v33[0] |= 0x100000u;
          xxxSendMessage((unsigned __int64)v8, 0x20u, *v8, (struct _LARGE_STRING *)2);
        }
        v19 = xxxSendMessage((unsigned __int64)v8, 0x1E5u, v39, 0LL);
        if ( (v19 & 0x10) != 0 && (v19 & 3) == 0 && !xxxSendMessage((unsigned __int64)v8, 0x1F0u, 0LL, 0LL) )
        {
          v15 = *v33[0];
          if ( *(_QWORD *)(v13 + 8) == *v33[0] )
            xxxMNHideNextHierarchy((__int64 *)v33);
        }
      }
      goto LABEL_35;
    }
  }
  if ( *(_QWORD *)(*v33[0] + 56) )
  {
    v20 = *(struct tagWND **)(*v33[0] + 56);
    v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v34 = *(_QWORD *)(v21 + 416);
    *(_QWORD *)(v21 + 416) = &v34;
    *((_QWORD *)&v34 + 1) = v20;
    if ( v20 )
      HMLockObject(v20);
    xxxSendMessage((unsigned __int64)v20, 0x1E5u, 0xFFFFFFFFuLL, 0LL);
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, v20);
LABEL_35:
    ThreadUnlock1(v15, v14, v16);
    goto LABEL_37;
  }
  xxxMNSelectItem(v33, a2);
LABEL_37:
  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v6)
    || (CurrentProcess = PsGetCurrentProcess(v25, v24, v26),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v29),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v31 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v31 )
      v23 = *v31;
  }
  if ( v33[0] != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v33[0] + 2) )
  {
    if ( *((_BYTE *)v33[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v33[0]);
  }
  result = *(_QWORD **)(v23 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v23 + 1472) = result;
  }
  return result;
}
