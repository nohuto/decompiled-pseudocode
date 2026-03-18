/*
 * XREFs of _SetSystemTimer @ 0x1C0017B98
 * Callers:
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0017A1C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0017AA8 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxFlashWindow @ 0x1C0019218 (xxxFlashWindow.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C001B5B4 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E0914 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     IncrementCompositedCount @ 0x1C01E76E0 (IncrementCompositedCount.c)
 *     zzzStartFade @ 0x1C01E7F8C (zzzStartFade.c)
 *     NtUserSetSystemTimer @ 0x1C0202720 (NtUserSetSystemTimer.c)
 *     xxxDrawDragRectEx @ 0x1C02110D4 (xxxDrawDragRectEx.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C02444B0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C02465A0 (xxxTrackBox.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00CCA00 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall SetSystemTimer(__int64 a1, int a2, int a3, int a4, int a5)
{
  if ( !a1 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  if ( !a5 && PsGetCurrentProcessWin32Process() != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
  {
    UserSetLastError((unsigned int)(a5 + 5));
    return 0LL;
  }
  return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
}
