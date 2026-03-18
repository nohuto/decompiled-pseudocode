/*
 * XREFs of GetActiveTrackPwnd @ 0x1C01E14FC
 * Callers:
 *     xxxSystemTimerProc @ 0x1C00190C0 (xxxSystemTimerProc.c)
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     xxxActiveWindowTracking @ 0x1C01E22BC (xxxActiveWindowTracking.c)
 *     zzzActiveCursorTracking @ 0x1C01E2428 (zzzActiveCursorTracking.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C00071C0 (DWP_GetEnabledPopup.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000796C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsModelessMenuNotificationWindow @ 0x1C0079450 (IsModelessMenuNotificationWindow.c)
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
  v2 = *(_QWORD *)(EnabledPopup[2] + 432LL);
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
