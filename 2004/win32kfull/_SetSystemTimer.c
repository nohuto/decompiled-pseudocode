/*
 * XREFs of _SetSystemTimer @ 0x1C006024C
 * Callers:
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0056670 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxTrackMouseMove @ 0x1C0057D90 (xxxTrackMouseMove.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C005CE5C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C006015C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxFlashWindow @ 0x1C0113948 (xxxFlashWindow.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E15D4 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     IncrementCompositedCount @ 0x1C01E83A0 (IncrementCompositedCount.c)
 *     zzzStartFade @ 0x1C01E8C4C (zzzStartFade.c)
 *     NtUserSetSystemTimer @ 0x1C0203590 (NtUserSetSystemTimer.c)
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0245750 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C0247B50 (xxxTrackBox.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0089420 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall SetSystemTimer(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // rcx

  if ( !a1 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  if ( !a5 && PsGetCurrentProcessWin32Process(v9) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
}
