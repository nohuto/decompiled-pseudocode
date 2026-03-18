/*
 * XREFs of __SetSystemTimer@20 @ 0xCA7A8
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     ?CreateCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z @ 0xBA7AE (-CreateCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z.c)
 *     ?ResetMouseHover@@YGXPAUtagDESKTOP@@UtagPOINT@@@Z @ 0xC4DB2 (-ResetMouseHover@@YGXPAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     ?RefreshMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z @ 0x14D989 (-RefreshMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z.c)
 *     _IncrementCompositedCount@4 @ 0x1537FA (_IncrementCompositedCount@4.c)
 *     _zzzStartFade@0 @ 0x153F74 (_zzzStartFade@0.c)
 *     _NtUserSetSystemTimer@12 @ 0x169D05 (_NtUserSetSystemTimer@12.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     ?SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z @ 0x1A08F8 (-SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxContScroll@@YGXPAUtagWND@@IIJ@Z @ 0x1A2DA3 (-xxxContScroll@@YGXPAUtagWND@@IIJ@Z.c)
 *     _xxxTrackBox@20 @ 0x1A48C7 (_xxxTrackBox@20.c)
 * Callees:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall _SetSystemTimer(unsigned int a1, char *a2, unsigned int a3, int a4, int a5)
{
  if ( !a1 || (*(_BYTE *)(_HMPheFromObject(a1) + 13) & 1) != 0 )
    return 0;
  if ( !a5 && PsGetCurrentProcessWin32Process() != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) )
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
  return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
}
