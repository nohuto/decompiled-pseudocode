/*
 * XREFs of ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z @ 0x43794 (-xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z.c)
 *     _NtUserSetCursor@4 @ 0x788D6 (_NtUserSetCursor@4.c)
 *     ?zzzHideCursorNoCapture@@YGKXZ @ 0x143231 (-zzzHideCursorNoCapture@@YGKXZ.c)
 *     _xxxSwitchWndProc@16 @ 0x15DF4B (_xxxSwitchWndProc@16.c)
 *     ?xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z @ 0x176158 (-xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AAEXPAUtagWND@@@Z @ 0x19FDC6 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AAEXPAUtagWND@@@Z.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     _LockQCursor@8 @ 0x9C34C (_LockQCursor@8.c)
 */

struct tagCURSOR *__thiscall zzzSetCursor(void *this)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  int v4; // esi
  int v5; // edx
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  if ( (ThreadWin32Thread[172] & 0x8000000) != 0 )
    ThreadWin32Thread = (_DWORD *)ThreadWin32Thread[212];
  v4 = ThreadWin32Thread[59];
  v5 = *(_DWORD *)(v4 + 276);
  if ( (void *)v5 != this )
  {
    v5 = LockQCursor(v4, this);
    if ( !_gpqCursor )
      MEMORY[0] = v4;
    if ( v4 == _gpqCursor )
    {
      v7[2] = 0;
      v7[0] = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = v7;
      v7[1] = v5;
      if ( v5 )
        HMLockObject(v5);
      zzzUpdateCursorImage();
      return (struct tagCURSOR *)ThreadUnlock1();
    }
  }
  return (struct tagCURSOR *)v5;
}
