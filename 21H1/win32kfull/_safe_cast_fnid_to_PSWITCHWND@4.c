/*
 * XREFs of _safe_cast_fnid_to_PSWITCHWND@4 @ 0x143725
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z @ 0x15C2D1 (-Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 * Callees:
 *     <none>
 */

int __thiscall safe_cast_fnid_to_PSWITCHWND(_DWORD *this)
{
  int v1; // edx

  if ( !this )
    return 0;
  v1 = this[5];
  if ( (*(_WORD *)(v1 + 30) & 0x3FFF) != 0x2A0 )
    return 0;
  if ( *(_DWORD *)(v1 + 160) )
    return this[41];
  return *(_DWORD *)(v1 + 192);
}
