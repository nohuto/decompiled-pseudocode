/*
 * XREFs of _GetAppCompatFlags2QuadWord@4 @ 0xA14BE
 * Callers:
 *     _W32kCddDisableGdiHwAcceleration@0 @ 0xA147E (_W32kCddDisableGdiHwAcceleration@0.c)
 *     ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651 (-ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z.c)
 *     ?WantDirectPromotion@@YGHABUtagPOINTER_INFO@@PAK@Z @ 0x17D7CB (-WantDirectPromotion@@YGHABUtagPOINTER_INFO@@PAK@Z.c)
 *     ?WindowArrangementApplicable@@YGHPAUtagWND@@@Z @ 0x1857B4 (-WindowArrangementApplicable@@YGHPAUtagWND@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

__int64 __stdcall GetAppCompatFlags2QuadWord(int a1)
{
  int ThreadWin32Thread; // edx
  PKTHREAD CurrentThread; // eax

  ThreadWin32Thread = a1;
  if ( !a1 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  }
  return *(_QWORD *)(ThreadWin32Thread + 352);
}
