/*
 * XREFs of ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?HasMaximizedState@@YG_NPAUtagWND@@@Z @ 0x171595 (-HasMaximizedState@@YG_NPAUtagWND@@@Z.c)
 *     ?IsLeftOrRightArranged@@YG_NPBUtagWND@@@Z @ 0x1718C2 (-IsLeftOrRightArranged@@YG_NPBUtagWND@@@Z.c)
 *     ?MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z @ 0x171A18 (-MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x19C27B (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z @ 0x1A0652 (-xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall IsSemiMaximized(_DWORD *this)
{
  return (*(_BYTE *)(this[5] + 145) & 3) != 0;
}
