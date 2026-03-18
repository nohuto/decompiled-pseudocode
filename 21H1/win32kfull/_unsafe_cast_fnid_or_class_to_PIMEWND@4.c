/*
 * XREFs of _unsafe_cast_fnid_or_class_to_PIMEWND@4 @ 0x1DB34
 * Callers:
 *     _zzzImeCanDestroyDefIME@8 @ 0x1D148 (_zzzImeCanDestroyDefIME@8.c)
 *     _xxxCreateDefaultImeWindow@12 @ 0x1D8EA (_xxxCreateDefaultImeWindow@12.c)
 *     ?xxxNotifyImeShowStatus@@YGXPAUtagWND@@@Z @ 0xC38A2 (-xxxNotifyImeShowStatus@@YGXPAUtagWND@@@Z.c)
 *     _ImeCanDestroyDefIMEforChild@8 @ 0xCB942 (_ImeCanDestroyDefIMEforChild@8.c)
 * Callees:
 *     <none>
 */

int __thiscall unsafe_cast_fnid_or_class_to_PIMEWND(_DWORD *this)
{
  int v1; // esi

  if ( !this )
    return 0;
  v1 = this[5];
  if ( (*(_WORD *)(v1 + 30) & 0x3FFF) != 0x2A9 && **(_WORD **)(this[19] + 4) != *(_WORD *)(_gpsi + 498) )
    return 0;
  if ( *(_DWORD *)(v1 + 160) )
    return this[41];
  return *(_DWORD *)(v1 + 192);
}
