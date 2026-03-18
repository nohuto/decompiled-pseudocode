/*
 * XREFs of _GetActiveTrackPwnd@4 @ 0x14E1E4
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     _xxxSystemTimerProc@16 @ 0xCA358 (_xxxSystemTimerProc@16.c)
 *     _xxxActiveWindowTracking@12 @ 0x14ECA1 (_xxxActiveWindowTracking@12.c)
 *     _zzzActiveCursorTracking@4 @ 0x14ED7B (_zzzActiveCursorTracking@4.c)
 * Callees:
 *     _IsModelessMenuNotificationWindow@4 @ 0x8F356 (_IsModelessMenuNotificationWindow@4.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072 (-CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _DWP_GetEnabledPopup@4 @ 0x1A1D7D (_DWP_GetEnabledPopup@4.c)
 */

_DWORD *__thiscall GetActiveTrackPwnd(_DWORD *this)
{
  _DWORD *EnabledPopup; // esi
  int v3; // ecx

  EnabledPopup = this;
  if ( CoreWindowProp::CompositeAppHasForeground(this) )
    return 0;
  while ( (*(_BYTE *)(EnabledPopup[5] + 23) & 0xC0) == 0x40 )
    EnabledPopup = (_DWORD *)EnabledPopup[14];
  if ( (*(_BYTE *)(EnabledPopup[5] + 23) & 8) != 0 )
    EnabledPopup = (_DWORD *)DWP_GetEnabledPopup(EnabledPopup);
  if ( !EnabledPopup )
    return 0;
  if ( (*(_BYTE *)(EnabledPopup[5] + 23) & 0x10) == 0 )
    return 0;
  v3 = *(_DWORD *)(EnabledPopup[2] + 236);
  if ( v3 == _gpqForeground && (EnabledPopup == *(_DWORD **)(v3 + 64) || IsModelessMenuNotificationWindow(EnabledPopup)) )
    return 0;
  if ( EnabledPopup == *(_DWORD **)(*(_DWORD *)(EnabledPopup[3] + 4) + 84) )
    return 0;
  else
    return EnabledPopup;
}
