/*
 * XREFs of safe_cast_fnid_to_PSBWND @ 0x1C01D4E90
 * Callers:
 *     xxxEnableScrollBar @ 0x1C00F12C0 (xxxEnableScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0245424 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0245A1C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxDoScrollMenu @ 0x1C024648C (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C02466C4 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C02469C0 (xxxSBTrackInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PSBWND(__int64 a1)
{
  __int64 v1; // rdx

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v1 + 42) & 0x3FFF) != 0x29A )
    return 0LL;
  if ( *(_DWORD *)(v1 + 252) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v1 + 296);
}
