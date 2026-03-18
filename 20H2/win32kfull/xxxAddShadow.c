/*
 * XREFs of xxxAddShadow @ 0x1C0136968
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C003CBD8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013709C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcessWin32Process; // rax
  int v12; // r14d
  __int64 v13; // rax
  struct tagWND *Window; // rsi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD v26[2]; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v27[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+7h]
  _QWORD v30[3]; // [rsp+D0h] [rbp+Fh] BYREF
  _QWORD v31[4]; // [rsp+E8h] [rbp+27h] BYREF

  v29 = 0LL;
  v31[2] = 0LL;
  v28 = 0LL;
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
  PushW32ThreadLock(v2, &v28, (__int64)Win32FreePool);
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_BYTE *)(v4 + 24) & 8 | 0x800A0;
  if ( !PsGetCurrentProcessWin32Process(v4, v6, v7)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8, v10),
        v12 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v12 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v30, 0LL);
  v13 = *((_QWORD *)a1 + 5);
  v30[2] = 0LL;
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
                              (__int64)v30,
                              hModuleWin,
                              0LL,
                              *(_DWORD *)(v13 + 236),
                              2560,
                              v12,
                              0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v30);
  if ( !Window || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
  {
LABEL_20:
    PopAndFreeAlwaysW32ThreadLock((__int64)&v28);
    return 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v31[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v31;
  v31[1] = Window;
  HMLockObject(Window);
  xxxInheritWindowMonitor(Window, a1, 1);
  ++gdwDeferWinEvent;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || FindShadow(a1) || !zzzApplyShadow(v16, Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow((unsigned __int64)Window);
    ThreadUnlock1(v24, v23, v25);
    goto LABEL_20;
  }
  *(_QWORD *)(v3 + 16) = gpshadowFirst;
  gpshadowFirst = (struct tagSHADOW *)v3;
  v26[0] = v3;
  v26[1] = a1;
  HMAssignmentLock(v26);
  v27[1] = Window;
  v27[0] = v3 + 8;
  HMAssignmentLock(v27);
  if ( (unsigned int)GetWindowCloakState(a1) )
    zzzSetWindowCompositionCloak(*(_QWORD *)(v3 + 8), 0LL, 1u);
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v17 + 16) = v28;
  PushW32ThreadLock(v3, &v28, (__int64)RemoveShadow);
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos(Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v19, v18, v20);
  v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v21 + 16) = v28;
  return 1LL;
}
