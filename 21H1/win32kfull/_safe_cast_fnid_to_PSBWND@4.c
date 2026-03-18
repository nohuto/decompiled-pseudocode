/*
 * XREFs of _safe_cast_fnid_to_PSBWND@4 @ 0x1436EC
 * Callers:
 *     _xxxEnableScrollBar@12 @ 0x8E0EE (_xxxEnableScrollBar@12.c)
 *     ?HitTestScrollBar@@YGHPAUtagWND@@HUtagPOINT@@@Z @ 0x1A2A4A (-HitTestScrollBar@@YGHPAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxEnableSBCtlArrows@@YGHPAUtagWND@@I@Z @ 0x1A2F8E (-xxxEnableSBCtlArrows@@YGHPAUtagWND@@I@Z.c)
 *     _xxxDoScrollMenu@16 @ 0x1A370F (_xxxDoScrollMenu@16.c)
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 * Callees:
 *     <none>
 */

int __thiscall safe_cast_fnid_to_PSBWND(_DWORD *this)
{
  int v1; // edx

  if ( !this )
    return 0;
  v1 = this[5];
  if ( (*(_WORD *)(v1 + 30) & 0x3FFF) != 0x29A )
    return 0;
  if ( *(_DWORD *)(v1 + 160) )
    return this[41];
  return *(_DWORD *)(v1 + 192);
}
