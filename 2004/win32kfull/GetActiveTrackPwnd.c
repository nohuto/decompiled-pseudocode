/*
 * XREFs of GetActiveTrackPwnd @ 0x1C01E21BC
 * Callers:
 *     xxxTrackMouseMove @ 0x1C0057D90 (xxxTrackMouseMove.c)
 *     xxxSystemTimerProc @ 0x1C01137F0 (xxxSystemTimerProc.c)
 *     xxxActiveWindowTracking @ 0x1C01E2F7C (xxxActiveWindowTracking.c)
 *     zzzActiveCursorTracking @ 0x1C01E30E8 (zzzActiveCursorTracking.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C0007320 (DWP_GetEnabledPopup.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0007CEC (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsModelessMenuNotificationWindow @ 0x1C005E640 (IsModelessMenuNotificationWindow.c)
 */

_QWORD *__fastcall GetActiveTrackPwnd(const struct tagWND *a1)
{
  _QWORD *EnabledPopup; // rbx
  __int64 v2; // rcx

  EnabledPopup = a1;
  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    return 0LL;
  for ( ; (*(_BYTE *)(EnabledPopup[5] + 31LL) & 0xC0) == 0x40; EnabledPopup = (_QWORD *)EnabledPopup[13] )
    ;
  if ( (*(_BYTE *)(EnabledPopup[5] + 31LL) & 8) != 0 )
    EnabledPopup = DWP_GetEnabledPopup(EnabledPopup);
  if ( !EnabledPopup )
    return 0LL;
  if ( (*(_BYTE *)(EnabledPopup[5] + 31LL) & 0x10) == 0 )
    return 0LL;
  v2 = *(_QWORD *)(EnabledPopup[2] + 424LL);
  if ( v2 == gpqForeground
    && (EnabledPopup == *(_QWORD **)(v2 + 120) || (unsigned int)IsModelessMenuNotificationWindow((__int64)EnabledPopup)) )
  {
    return 0LL;
  }
  if ( EnabledPopup == *(_QWORD **)(*(_QWORD *)(EnabledPopup[3] + 8LL) + 168LL) )
    return 0LL;
  else
    return EnabledPopup;
}
