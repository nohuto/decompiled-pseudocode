/*
 * XREFs of xxxRedrawWindow @ 0x1C00429A4
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxScrollWindowEx @ 0x1C0040D0C (xxxScrollWindowEx.c)
 *     NtUserRedrawWindow @ 0x1C0041AD0 (NtUserRedrawWindow.c)
 *     NtUserInvalidateRect @ 0x1C00426F0 (NtUserInvalidateRect.c)
 *     xxxSetWindowPosAndBand @ 0x1C004B0D8 (xxxSetWindowPosAndBand.c)
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxDwmStopRedirection @ 0x1C0081030 (xxxDwmStopRedirection.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     NtUserInvalidateRgn @ 0x1C010CC80 (NtUserInvalidateRgn.c)
 *     xxxValidateRect @ 0x1C011AFC8 (xxxValidateRect.c)
 *     xxxValidateRgn @ 0x1C011D860 (xxxValidateRgn.c)
 *     _DwmLockScreenUpdates @ 0x1C012BBD0 (_DwmLockScreenUpdates.c)
 *     xxxUserResetDisplayDevice @ 0x1C01583D0 (xxxUserResetDisplayDevice.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0212D50 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RemoteRedrawRectangle @ 0x1C021E13C (RemoteRedrawRectangle.c)
 *     xxxInvalidateRect @ 0x1C0234E8C (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C023ED30 (xxxMinimizeHungWindow.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     MirrorRegion @ 0x1C010608C (MirrorRegion.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, int *a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  struct tagWND *v7; // rdi
  struct tagWND *v8; // rcx
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct tagWND *v13; // rax
  __int64 v14; // rdx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // edx
  int v26; // eax
  int v27; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  _QWORD v32[4]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a3;
  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  v8 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *((_QWORD *)v8 + 5);
      v10 = *(_BYTE *)(v9 + 31);
      if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && v8 != v7 )
        break;
      if ( (*(_WORD *)(v9 + 42) & 0x2FFF) != 0x29D )
      {
        v8 = (struct tagWND *)*((_QWORD *)v8 + 13);
        if ( v8 )
          continue;
      }
      goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v32[2] = 0LL;
    if ( (a4 & 9) != 0 )
    {
      if ( a3 )
      {
        if ( a3 != 1 )
        {
          GreCombineRgn(ghrgnInv0, a3, 0LL, 5LL);
          MirrorRegion(v7, ghrgnInv0, 1LL);
          v5 = ghrgnInv0;
        }
        if ( v7 != (struct tagWND *)GetDesktopWindow(v7) )
          GreOffsetRgn(
            v5,
            *(unsigned int *)(*((_QWORD *)v7 + 5) + 104LL),
            *(unsigned int *)(*((_QWORD *)v7 + 5) + 108LL));
      }
      else if ( a2 )
      {
        v11 = *((_QWORD *)v7 + 5);
        v5 = ghrgnInv0;
        if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
        {
          v25 = *(_DWORD *)(v11 + 112) - *(_DWORD *)(v11 + 104);
          v26 = v25 - a2[2];
          v27 = v25 - *a2;
          *a2 = v26;
          a2[2] = v27;
        }
        v12 = *((_QWORD *)v7 + 3);
        v13 = 0LL;
        if ( v12 )
        {
          v14 = *(_QWORD *)(v12 + 8);
          if ( v14 )
            v13 = *(struct tagWND **)(v14 + 24);
        }
        if ( v7 == v13 )
          SetRectRgnIndirect(ghrgnInv0, a2);
        else
          GreSetRectRgn(
            ghrgnInv0,
            (unsigned int)(*a2 + *(_DWORD *)(*((_QWORD *)v7 + 5) + 104LL)),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v7 + 5) + 108LL) + a2[1]),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v7 + 5) + 104LL) + a2[2]),
            *(_DWORD *)(*((_QWORD *)v7 + 5) + 108LL) + a2[3]);
      }
      else
      {
        v5 = 1LL;
      }
    }
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v8)
      || (CurrentProcess = PsGetCurrentProcess(v18, v17, v19),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v30),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    v32[0] = *(_QWORD *)(v16 + 416);
    *(_QWORD *)(v16 + 416) = v32;
    v32[1] = v7;
    if ( v7 )
      HMLockObject(v7);
    xxxInternalInvalidate(v7, (HRGN)v5, a4 | 0x1000);
    ThreadUnlock1(v22, v21, v23);
  }
  return 1LL;
}
