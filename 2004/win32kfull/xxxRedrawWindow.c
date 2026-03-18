/*
 * XREFs of xxxRedrawWindow @ 0x1C0071544
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxDwmStopRedirection @ 0x1C000E180 (xxxDwmStopRedirection.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     xxxScrollWindowEx @ 0x1C00695EC (xxxScrollWindowEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C006A7D4 (xxxSetWindowPosAndBand.c)
 *     NtUserRedrawWindow @ 0x1C006F340 (NtUserRedrawWindow.c)
 *     NtUserInvalidateRect @ 0x1C0071290 (NtUserInvalidateRect.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserInvalidateRgn @ 0x1C010ACE0 (NtUserInvalidateRgn.c)
 *     xxxValidateRect @ 0x1C0119E38 (xxxValidateRect.c)
 *     xxxValidateRgn @ 0x1C011C7F0 (xxxValidateRgn.c)
 *     _DwmLockScreenUpdates @ 0x1C0129B40 (_DwmLockScreenUpdates.c)
 *     xxxUserResetDisplayDevice @ 0x1C0155A70 (xxxUserResetDisplayDevice.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0213BD0 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RemoteRedrawRectangle @ 0x1C021EFCC (RemoteRedrawRectangle.c)
 *     xxxInvalidateRect @ 0x1C0235D1C (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C023FFD0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     MirrorRegion @ 0x1C005BBAC (MirrorRegion.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
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
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  v8 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *((_QWORD *)v8 + 5);
      v10 = *(_BYTE *)(v9 + 31);
      if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && v8 != v7 )
        break;
      if ( (*(_WORD *)(v9 + 42) & 0x3FFF) != 0x29D )
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
          MirrorRegion((__int64)v7, ghrgnInv0, 1);
          v5 = ghrgnInv0;
        }
        if ( v7 != (struct tagWND *)GetDesktopWindow((__int64)v7) )
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
    v32[0] = *(_QWORD *)(v16 + 408);
    *(_QWORD *)(v16 + 408) = v32;
    v32[1] = v7;
    if ( v7 )
      HMLockObject(v7);
    xxxInternalInvalidate(v7, (HRGN)v5, a4 | 0x1000);
    ThreadUnlock1(v22, v21, v23);
  }
  return 1LL;
}
