/*
 * XREFs of ?bIsCMYKColor@EBRUSHOBJ@@QBEHXZ @ 0x1CC7E1
 * Callers:
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall EBRUSHOBJ::bIsCMYKColor(EBRUSHOBJ *this)
{
  int v1; // edx
  BOOL result; // eax

  v1 = *((_DWORD *)this + 12);
  result = 0;
  if ( (v1 & 1) != 0 )
  {
    if ( *((_DWORD *)this + 11) )
      return (v1 & 0x10000000) != 0;
  }
  return result;
}
