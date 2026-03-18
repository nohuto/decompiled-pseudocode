/*
 * XREFs of _unsafe_cast_fnid_or_class_to_PCOMBOWND@4 @ 0x14375E
 * Callers:
 *     _xxxGetComboBoxInfo@8 @ 0x1A6E35 (_xxxGetComboBoxInfo@8.c)
 * Callees:
 *     <none>
 */

int __thiscall unsafe_cast_fnid_or_class_to_PCOMBOWND(_DWORD *this)
{
  int v1; // esi

  if ( !this )
    return 0;
  v1 = this[5];
  if ( (*(_WORD *)(v1 + 30) & 0x3FFF) != 0x2A2 && **(_WORD **)(this[19] + 4) != *(_WORD *)(_gpsi + 478) )
    return 0;
  if ( *(_DWORD *)(v1 + 160) )
    return this[41];
  return *(_DWORD *)(v1 + 192);
}
