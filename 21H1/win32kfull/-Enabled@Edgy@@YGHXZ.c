/*
 * XREFs of ?Enabled@Edgy@@YGHXZ @ 0x16DFCD
 * Callers:
 *     _EditionEdgyEnabled@0 @ 0x16F0E7 (_EditionEdgyEnabled@0.c)
 * Callees:
 *     <none>
 */

BOOL Edgy::Enabled()
{
  _DWORD *v0; // ecx
  BOOL result; // eax

  v0 = *(_DWORD **)(_grpdeskRitInput + 140);
  if ( !v0 )
    return 0;
  result = 1;
  if ( v0[3] != 1 )
    return *v0 != 0;
  if ( v0[62] != _gptiCurrent )
    return 0;
  return result;
}
