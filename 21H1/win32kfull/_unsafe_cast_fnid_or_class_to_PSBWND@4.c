/*
 * XREFs of _unsafe_cast_fnid_or_class_to_PSBWND@4 @ 0x6D726
 * Callers:
 *     _xxxGetScrollBarInfo@12 @ 0x6D508 (_xxxGetScrollBarInfo@12.c)
 * Callees:
 *     <none>
 */

int __thiscall unsafe_cast_fnid_or_class_to_PSBWND(_DWORD *this)
{
  int v1; // esi

  if ( !this )
    return 0;
  v1 = this[5];
  if ( (*(_WORD *)(v1 + 30) & 0x3FFF) != 0x29A && **(_WORD **)(this[19] + 4) != *(_WORD *)(_gpsi + 476) )
    return 0;
  if ( *(_DWORD *)(v1 + 160) )
    return this[41];
  return *(_DWORD *)(v1 + 192);
}
