/*
 * XREFs of xxxMNMouseMove @ 0x1C023A0CC
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0234958 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     TrackMouseEvent @ 0x1C005B8A0 (TrackMouseEvent.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C023639C (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0236C40 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C023742C (IsMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0237C4C (xxxMNButtonDown.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02390A0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C023B54C (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023C2C4 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C024B1A0 (xxxMNUpdateDraggingInfo.c)
 */

_QWORD *__fastcall xxxMNMouseMove(__int64 **a1, __int64 a2, int a3)
{
  __int64 *v4; // rdx
  unsigned __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  unsigned __int64 v16; // rax
  char v17; // al
  struct tagWND *v18; // rbx
  __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v27; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v29; // rax
  _QWORD *result; // rax
  __int64 *v31[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v32; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+40h] [rbp-20h]
  _DWORD v34[2]; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-10h]
  __int64 v36; // [rsp+58h] [rbp-8h]
  unsigned int v37; // [rsp+80h] [rbp+20h] BYREF
  int v38; // [rsp+90h] [rbp+30h]

  v38 = a3;
  v37 = 0;
  v4 = *a1;
  v32 = 0LL;
  v33 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v31, *v4);
  v6 = *v31[0];
  if ( v6 != *(_QWORD *)(v6 + 64) )
    goto LABEL_37;
  v6 = (unsigned int)(__int16)a3;
  if ( __PAIR64__(SHIWORD(v38), v6) == *(_QWORD *)(a2 + 12) )
    goto LABEL_37;
  v7 = SHIWORD(v38);
  *(_DWORD *)(a2 + 12) = v6;
  *(_DWORD *)(a2 + 16) = v7;
  v8 = (unsigned __int64 *)xxxMNFindWindowFromPoint(v31, &v37, a3);
  if ( IsMFMWFPWindow((__int64)v8) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v32 = *(_QWORD *)(ThreadWin32Thread + 408);
    v6 = (unsigned __int64)&v32;
    *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
    *((_QWORD *)&v32 + 1) = v8;
    if ( v8 )
      HMLockObject(v8);
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
    xxxMNUpdateDraggingInfo(a2, v8, v37);
  if ( *(_DWORD *)(a2 + 20) == 1 )
  {
    if ( !v8 )
      goto LABEL_37;
    if ( v8 == (unsigned __int64 *)0xFFFFFFFFLL )
    {
      if ( *(_QWORD *)(*v31[0] + 8) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(*v31[0] + 8) + 40LL);
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
      xxxMNSwitchToAlternateMenu(v31, a2);
LABEL_18:
      xxxMNButtonDown((__int64 *)v31, a2, v37, 0);
      goto LABEL_37;
    }
  }
  else
  {
    if ( v8 == (unsigned __int64 *)0xFFFFFFFFLL )
      goto LABEL_18;
    if ( v8 )
    {
      v10 = safe_cast_fnid_to_PMENUWND((__int64)v8);
      if ( !(unsigned int)IsWindowBeingDestroyed(v11) && v10 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v31, *(_QWORD *)(v10 + 8));
        v15 = *(_DWORD *)(a2 + 8);
        if ( (v15 & 0x100) != 0 && (v15 & 0x8000) == 0 && (**(_DWORD **)v31[0] & 0x100000) == 0 )
        {
          v16 = *v8;
          v34[0] = 0;
          v36 = 0LL;
          v34[1] = 2;
          v35 = v16;
          TrackMouseEvent((__int64)v34);
          **(_DWORD **)v31[0] |= 0x100000u;
          xxxSendMessage((unsigned __int64)v8, 0x20u, *v8, (struct _LARGE_STRING *)2);
        }
        v17 = xxxSendMessage((unsigned __int64)v8, 0x1E5u, v37, 0LL);
        if ( (v17 & 0x10) != 0 && (v17 & 3) == 0 && !xxxSendMessage((unsigned __int64)v8, 0x1F0u, 0LL, 0LL) )
        {
          v13 = *v31[0];
          if ( *(_QWORD *)(v10 + 8) == *v31[0] )
            xxxMNHideNextHierarchy((__int64 *)v31);
        }
      }
      goto LABEL_35;
    }
  }
  if ( *(_QWORD *)(*v31[0] + 56) )
  {
    v18 = *(struct tagWND **)(*v31[0] + 56);
    v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v32 = *(_QWORD *)(v19 + 408);
    *(_QWORD *)(v19 + 408) = &v32;
    *((_QWORD *)&v32 + 1) = v18;
    if ( v18 )
      HMLockObject(v18);
    xxxSendMessage((unsigned __int64)v18, 0x1E5u, 0xFFFFFFFFuLL, 0LL);
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, v18);
LABEL_35:
    ThreadUnlock1(v13, v12, v14);
    goto LABEL_37;
  }
  xxxMNSelectItem(v31, a2);
LABEL_37:
  CurrentThread = KeGetCurrentThread();
  v21 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v6)
    || (CurrentProcess = PsGetCurrentProcess(v23, v22, v24),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v27),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v29 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v29 )
      v21 = *v29;
  }
  if ( v31[0] != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v31[0] + 2) )
  {
    if ( *((_BYTE *)v31[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v31[0]);
  }
  result = *(_QWORD **)(v21 + 1464);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v21 + 1464) = result;
  }
  return result;
}
