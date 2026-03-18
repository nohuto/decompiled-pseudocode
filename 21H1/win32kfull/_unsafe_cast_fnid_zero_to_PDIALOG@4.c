/*
 * XREFs of _unsafe_cast_fnid_zero_to_PDIALOG@4 @ 0xA768E
 * Callers:
 *     _SetDialogPointer@8 @ 0xA756E (_SetDialogPointer@8.c)
 * Callees:
 *     <none>
 */

int __thiscall unsafe_cast_fnid_zero_to_PDIALOG(_DWORD *this)
{
  int v1; // edx
  __int16 v2; // ax

  if ( !this )
    return 0;
  v1 = this[5];
  v2 = *(_WORD *)(v1 + 30) & 0x3FFF;
  if ( !v2 )
    return *(_DWORD *)(v1 + 192);
  if ( v2 != 676 )
    return 0;
  if ( !*(_DWORD *)(v1 + 160) )
    return *(_DWORD *)(v1 + 192);
  return this[41];
}
