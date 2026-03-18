/*
 * XREFs of ?RequestModernAppClose@@YGHXZ @ 0x155E98
 * Callers:
 *     ?HandleIAMHotKey@@YGHQBUtagHOTKEY@@@Z @ 0x155E40 (-HandleIAMHotKey@@YGHQBUtagHOTKEY@@@Z.c)
 * Callees:
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     ?GetTopLevelWindowFromInputForVisualWindowOrSelf@@YGPAUtagWND@@PAU1@@Z @ 0x155D29 (-GetTopLevelWindowFromInputForVisualWindowOrSelf@@YGPAUtagWND@@PAU1@@Z.c)
 */

BOOL __stdcall RequestModernAppClose()
{
  _DWORD *v0; // ecx
  int *v2; // esi
  struct tagWND *TopLevelWindowFromInputForVisualWindowOrSelf; // eax
  int v4; // eax
  struct tagTHREADINFO *v5; // eax

  if ( !_gpqForeground )
    return 0;
  v0 = *(_DWORD **)(_gpqForeground + 64);
  if ( !v0 )
    return 0;
  if ( _gbLockScreenActive )
    return *(_DWORD *)(v0[5] + 148) == 17;
  v2 = 0;
  TopLevelWindowFromInputForVisualWindowOrSelf = GetTopLevelWindowFromInputForVisualWindowOrSelf(v0);
  if ( !TopLevelWindowFromInputForVisualWindowOrSelf )
    return 0;
  do
  {
    if ( (*(_BYTE *)(*((_DWORD *)TopLevelWindowFromInputForVisualWindowOrSelf + 5) + 146) & 0x40) != 0 )
      v2 = (int *)TopLevelWindowFromInputForVisualWindowOrSelf;
    TopLevelWindowFromInputForVisualWindowOrSelf = (struct tagWND *)*((_DWORD *)TopLevelWindowFromInputForVisualWindowOrSelf
                                                                    + 16);
  }
  while ( TopLevelWindowFromInputForVisualWindowOrSelf );
  if ( !v2 )
    return 0;
  PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 32, *v2);
  v4 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 200);
  if ( v4 )
    v5 = *(struct tagTHREADINFO **)(v4 + 8);
  else
    v5 = 0;
  CInputGlobals::SetPtiLastWoken(_gpInputGlobals, v5, 0);
  return 1;
}
