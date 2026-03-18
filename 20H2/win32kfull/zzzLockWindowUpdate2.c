/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C00BF2BC
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     xxxFullScreenCleanup @ 0x1C0111200 (xxxFullScreenCleanup.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0116BF4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     NtUserLockWindowUpdate @ 0x1C01FE1D0 (NtUserLockWindowUpdate.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetStyleWindow @ 0x1C00457D0 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     CreateSpb @ 0x1C0156560 (CreateSpb.c)
 *     FreeSpb @ 0x1C0219E94 (FreeSpb.c)
 *     SpbCheck @ 0x1C021A2DC (SpbCheck.c)
 *     SpbCheckPwnd @ 0x1C021A354 (SpbCheckPwnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rdi
  __int64 v6; // rbp
  __int64 *i; // rbx
  BOOL v8; // esi
  struct tagWND *StyleWindow; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  char v16; // [rsp+80h] [rbp+18h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  if ( (gdwPUDFlags & 0x20000000) != 0 || gptiLockUpdate && gptiLockUpdate != gptiCurrent && !a2 )
  {
    v4 = 1440LL;
    goto LABEL_9;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( a2 )
      return 0LL;
    v4 = 87LL;
LABEL_9:
    UserSetLastError(v4);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1);
    v13[1] = a1;
    v13[0] = &gspwndLockUpdate;
    HMAssignmentLock(v13);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  else
  {
    SpbCheck();
    v5 = gspwndLockUpdate;
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v5;
    if ( v5 )
      HMLockObject(v5);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v5, 1, 0LL);
    v6 = 1LL;
    for ( i = *(__int64 **)(gpDispInfo + 32LL); ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_24;
      if ( (i[6] & 2) != 0 )
        break;
    }
    if ( i[5] )
    {
      v6 = ghrgnSPB1;
      SetRectRgnIndirect(ghrgnSPB1, i + 3);
      v8 = GreCombineRgn(ghrgnSPB1, ghrgnSPB1, i[5], 4LL) != 1;
    }
    else
    {
      v8 = 0;
    }
    FreeSpb(i);
    if ( v8 )
    {
LABEL_24:
      StyleWindow = (struct tagWND *)GetStyleWindow((__int64)v5, 2568);
      if ( !StyleWindow )
        StyleWindow = (struct tagWND *)GetDesktopWindow((__int64)v5);
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
      ++gdwDeferWinEvent;
      xxxInternalInvalidate(StyleWindow, (HRGN)v6, 0x10485u);
      zzzEndDeferWinEventNotify();
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
    }
    SpbCheckPwnd(v5);
    ThreadUnlock1(v11, v10, v12);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return 1LL;
}
