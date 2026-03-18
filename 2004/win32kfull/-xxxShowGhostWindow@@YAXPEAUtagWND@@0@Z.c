/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003E7C
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C0003B90 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C020AD30 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0004968 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C00049D8 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1C0004AF0 (DwmAsyncGhostChange.c)
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00510B4 (xxxEnableChildWindowDpiMessageX.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C005B2F4 (DwmAsyncNotifyAnimationChange.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  BOOL v2; // r15d
  __int64 v5; // rcx
  int v6; // r14d
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r12d
  __int64 v11; // rcx
  unsigned int v12; // r13d
  unsigned __int64 v13; // rdx
  int v14; // r12d
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  void *v18; // rax
  int v19; // [rsp+40h] [rbp-30h]
  __int64 v20; // [rsp+48h] [rbp-28h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF

  v19 = 0;
  v2 = 0;
  v5 = *((_QWORD *)a2 + 5);
  v6 = 99;
  v7 = *(_BYTE *)(v5 + 31);
  if ( (v7 & 0x20) != 0 )
    v19 = 1;
  else
    v2 = (v7 & 1) != 0;
  v8 = *((_QWORD *)a2 + 2);
  if ( v8 && (v9 = *(_QWORD *)(v8 + 424), v9 == gpqForeground) && *(struct tagWND **)(v9 + 120) == a2 )
  {
    v10 = 96;
    *(_DWORD *)(*((_QWORD *)a1 + 2) + 480LL) |= 0x20u;
    v5 = *((_QWORD *)a2 + 5);
  }
  else
  {
    v6 = 115;
    v10 = 112;
  }
  if ( *(char *)(v5 + 26) < 0 )
  {
    SetOrClrWF(1LL, a1, 2688LL, 1LL);
    v5 = *((_QWORD *)a2 + 5);
  }
  v21 = *(_OWORD *)(v5 + 88);
  xxxEnableChildWindowDpiMessageX(a1);
  v11 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)(v11 + 288) & 0xF) != 2 )
  {
    v20 = ValidateHmonitor(*(_QWORD *)(v11 + 256));
    LogicalToPhysicalDPIRect(&v21, &v21, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL), &v20);
    if ( v2 )
      xxxSetWindowPos(a1, DWORD2(v21) - v21, HIDWORD(v21) - DWORD1(v21), 20);
    else
      v6 = v10;
  }
  v12 = 3;
  if ( v19 )
  {
    v13 = 7LL;
  }
  else
  {
    if ( !v2 )
      goto LABEL_16;
    v13 = 3LL;
  }
  xxxMinMaximizeEx(a1, v13, 0LL, 0LL);
  _CopyWindowCheckpoint(a2, a1);
  v6 |= 2u;
LABEL_16:
  v14 = IsWindowDesktopComposed(a2);
  if ( v14 )
  {
    v15 = (void *)ReferenceDwmApiPort();
    DwmAsyncGhostChange(v15);
    v16 = (void *)ReferenceDwmApiPort();
    DwmAsyncNotifyAnimationChange(v16);
    v17 = (void *)ReferenceDwmApiPort();
    DwmAsyncNotifyAnimationChange(v17);
  }
  SetOrClrWF(0LL, a1, 3585LL, 1LL);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x20) != 0 )
  {
    SetOrClrWF(0LL, a2, 1056LL, 1LL);
    SetOrClrWF(1LL, a1, 1056LL, 1LL);
  }
  SetVisible(a2);
  if ( !gdwDeferWinEvent )
    v12 = 1;
  xxxWindowEvent(0x8003u, v12);
  xxxSetWindowPos(a1, DWORD2(v21) - v21, HIDWORD(v21) - DWORD1(v21), v6);
  xxxNotifyShellOfWindowSwap(a2, a1);
  if ( v14 )
  {
    v18 = (void *)ReferenceDwmApiPort();
    DwmAsyncNotifyAnimationChange(v18);
  }
}
