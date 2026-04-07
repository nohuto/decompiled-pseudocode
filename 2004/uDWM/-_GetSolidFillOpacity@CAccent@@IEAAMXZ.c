/*
 * XREFs of ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180093C10
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18000215C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x18000FC64 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18002AAA0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CAccent::_GetSolidFillOpacity(CAccent *this)
{
  float result; // xmm0_4

  result = FLOAT_1_0;
  if ( (unsigned int)(*((_DWORD *)this + 70) - 2) <= 1 )
    return (float)*((unsigned __int8 *)this + 379) / 255.0;
  return result;
}
