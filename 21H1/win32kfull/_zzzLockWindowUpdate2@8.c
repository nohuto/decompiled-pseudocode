/*
 * XREFs of _zzzLockWindowUpdate2@8 @ 0x178C6
 * Callers:
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     _xxxFullScreenCleanup@0 @ 0xA7816 (_xxxFullScreenCleanup@0.c)
 *     _NtUserLockWindowUpdate@4 @ 0x165D64 (_NtUserLockWindowUpdate@4.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     _FreeSpb@4 @ 0x17E3AE (_FreeSpb@4.c)
 *     _SpbCheck@0 @ 0x17E6A2 (_SpbCheck@0.c)
 *     _SpbCheckPwnd@4 @ 0x17E6EC (_SpbCheckPwnd@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall zzzLockWindowUpdate2(int a1, int a2)
{
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // ebx
  BOOL v8; // esi
  int *i; // edi
  int StyleWindow; // esi
  int v11; // [esp+8h] [ebp-20h]
  int v12; // [esp+10h] [ebp-18h]
  _BYTE v13[8]; // [esp+14h] [ebp-14h] BYREF
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  int v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h]

  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( (_gdwPUDFlags & 0x20000000) != 0 || _gptiLockUpdate && _gptiLockUpdate != _gptiCurrent && !a2 )
  {
    v4 = 1440;
    goto LABEL_10;
  }
  if ( (a1 != 0) == (_gptiLockUpdate != 0) )
  {
    if ( a2 )
      return 0;
    v4 = 87;
LABEL_10:
    UserSetLastError(v4);
    return 0;
  }
  ++_gdwDeferWinEvent;
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(0);
    HMAssignmentLock(v6, v5);
    _gptiLockUpdate = v11;
    zzzLockDisplayAreaAndInvalidateDCCache(0);
  }
  else
  {
    SpbCheck();
    v7 = gspwndLockUpdate;
    v14 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v14;
    v15 = v7;
    if ( v7 )
      HMLockObject(v7);
    v8 = 0;
    _gptiLockUpdate = 0;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache(0);
    v12 = 1;
    for ( i = *(int **)(_gpDispInfo + 16); ; i = (int *)*i )
    {
      if ( !i )
        goto LABEL_23;
      if ( (i[8] & 2) != 0 )
        break;
    }
    if ( i[7] )
    {
      v12 = _ghrgnSPB1;
      SetRectRgnIndirect(_ghrgnSPB1, i + 3);
      v8 = GreCombineRgn(_ghrgnSPB1, _ghrgnSPB1, i[7], 4) != 1;
    }
    FreeSpb(i);
    if ( v8 )
    {
LABEL_23:
      StyleWindow = GetStyleWindow(v7, 2568);
      if ( !StyleWindow )
        StyleWindow = _GetDesktopWindow(v7);
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
      ++_gdwDeferWinEvent;
      xxxInternalInvalidate(StyleWindow, v12, 66693);
      zzzEndDeferWinEventNotify();
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
    }
    SpbCheckPwnd(v7);
    ThreadUnlock1();
  }
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  zzzEndDeferWinEventNotify();
  return 1;
}
