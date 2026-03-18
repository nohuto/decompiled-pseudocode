/*
 * XREFs of xxxAddShadow @ 0x1C0134A18
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F48C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001DE38 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     GetWindowCloakState @ 0x1C00B2AEC (GetWindowCloakState.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013514C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v8; // r14d
  __int64 v9; // rax
  struct tagWND *Window; // rsi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD v22[2]; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v23[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v24; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+7h]
  _QWORD v26[3]; // [rsp+D0h] [rbp+Fh] BYREF
  _QWORD v27[4]; // [rsp+E8h] [rbp+27h] BYREF

  v25 = 0LL;
  v27[2] = 0LL;
  v24 = 0LL;
  if ( gbDisableAlpha )
    return 0LL;
  if ( gcOverlays )
    return 0LL;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80040000) != 0x80040000 )
    return 0LL;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    return 0LL;
  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == gatomShadow )
    return 0LL;
  v2 = Win32AllocPoolZInit(24LL, 1685287765LL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  PushW32ThreadLock(v2, &v24, (__int64)Win32FreePool);
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_BYTE *)(v4 + 24) & 8 | 0x800A0;
  if ( !PsGetCurrentProcessWin32Process(v4)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6),
        v8 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v26, 0LL);
  v9 = *((_QWORD *)a1 + 5);
  v26[2] = 0LL;
  Window = (struct tagWND *)xxxCreateWindowEx(
                              v5,
                              (wchar_t *)(unsigned __int16)gatomShadow,
                              (unsigned __int16)gatomShadow,
                              0LL,
                              0x80000000,
                              0,
                              0,
                              0,
                              0,
                              0LL,
                              (__int64)v26,
                              hModuleWin,
                              0LL,
                              *(_DWORD *)(v9 + 236),
                              2560,
                              v8,
                              0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v26);
  if ( !Window || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
  {
LABEL_20:
    PopAndFreeAlwaysW32ThreadLock((__int64)&v24);
    return 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v27[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v27;
  v27[1] = Window;
  HMLockObject(Window);
  xxxInheritWindowMonitor(Window, (__int64 *)a1, 1);
  ++gdwDeferWinEvent;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || FindShadow(a1) || !(unsigned int)zzzApplyShadow(v12, Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow((__int64 *)Window);
    ThreadUnlock1(v20, v19, v21);
    goto LABEL_20;
  }
  *(_QWORD *)(v3 + 16) = gpshadowFirst;
  gpshadowFirst = (struct tagSHADOW *)v3;
  v22[0] = v3;
  v22[1] = a1;
  HMAssignmentLock(v22);
  v23[1] = Window;
  v23[0] = v3 + 8;
  HMAssignmentLock(v23);
  if ( (unsigned int)GetWindowCloakState(a1) )
    zzzSetWindowCompositionCloak(*(_QWORD *)(v3 + 8), 0LL, 1u);
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v13 + 16) = v24;
  PushW32ThreadLock(v3, &v24, (__int64)RemoveShadow);
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos(Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v15, v14, v16);
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v17 + 16) = v24;
  return 1LL;
}
