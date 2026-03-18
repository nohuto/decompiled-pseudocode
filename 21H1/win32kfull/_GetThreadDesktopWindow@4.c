/*
 * XREFs of _GetThreadDesktopWindow@4 @ 0x9E52A
 * Callers:
 *     ?xxxActivateOnMinimize@@YGHPAUtagWND@@@Z @ 0x256DC (-xxxActivateOnMinimize@@YGHPAUtagWND@@@Z.c)
 *     _NtUserBuildHwndList@32 @ 0x2A632 (_NtUserBuildHwndList@32.c)
 *     __FindWindowEx@20 @ 0x2D034 (__FindWindowEx@20.c)
 *     _GetLastTopMostWindow@4 @ 0x933C8 (_GetLastTopMostWindow@4.c)
 *     __SelectPalette@12 @ 0x9AAF6 (__SelectPalette@12.c)
 *     _xxxWindowFromPoint@8 @ 0x9ADAE (_xxxWindowFromPoint@8.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _fnHkINLPCBTCREATESTRUCT@20 @ 0xC8910 (_fnHkINLPCBTCREATESTRUCT@20.c)
 *     _GetCurrentThreadDesktopWindow@0 @ 0x16F3A6 (_GetCurrentThreadDesktopWindow@0.c)
 *     ?PixieHack@@YGXPAUtagWND@@PAUtagRECT@@@Z @ 0x196427 (-PixieHack@@YGXPAUtagWND@@PAUtagRECT@@@Z.c)
 *     _xxxDrawAnimatedRects@16 @ 0x19E161 (_xxxDrawAnimatedRects@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __thiscall GetThreadDesktopWindow(void *this)
{
  int ThreadWin32Thread; // eax
  int v2; // esi
  PKTHREAD CurrentThread; // eax
  int v4; // eax

  ThreadWin32Thread = (int)this;
  v2 = 0;
  if ( this || (CurrentThread = KeGetCurrentThread(), (ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread)) != 0) )
  {
    v4 = *(_DWORD *)(ThreadWin32Thread + 252);
    if ( v4 )
      return *(_DWORD *)(v4 + 12);
  }
  return v2;
}
