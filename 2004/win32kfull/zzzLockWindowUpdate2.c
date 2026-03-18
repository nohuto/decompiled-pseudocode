/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C0031334
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxFullScreenCleanup @ 0x1C0110080 (xxxFullScreenCleanup.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     NtUserLockWindowUpdate @ 0x1C01FF040 (NtUserLockWindowUpdate.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     CreateSpb @ 0x1C0153C30 (CreateSpb.c)
 *     FreeSpb @ 0x1C021AD24 (FreeSpb.c)
 *     SpbCheck @ 0x1C021B16C (SpbCheck.c)
 *     SpbCheckPwnd @ 0x1C021B1E4 (SpbCheckPwnd.c)
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
  _QWORD v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]
  char v13; // [rsp+80h] [rbp+18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
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
    v10[1] = a1;
    v10[0] = &gspwndLockUpdate;
    HMAssignmentLock(v10);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL);
  }
  else
  {
    SpbCheck();
    v5 = gspwndLockUpdate;
    *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v11;
    *((_QWORD *)&v11 + 1) = v5;
    if ( v5 )
      HMLockObject(v5);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache(v5, 1LL);
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
      StyleWindow = (struct tagWND *)GetStyleWindow(v5, 2568LL);
      if ( !StyleWindow )
        StyleWindow = (struct tagWND *)GetDesktopWindow(v5);
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
      ++gdwDeferWinEvent;
      xxxInternalInvalidate(StyleWindow, (HRGN)v6, 0x10485u);
      zzzEndDeferWinEventNotify();
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
    }
    SpbCheckPwnd(v5);
    ThreadUnlock1();
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return 1LL;
}
