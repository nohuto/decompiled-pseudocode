/*
 * XREFs of _FixedPointSubPixel@8 @ 0x151063
 * Callers:
 *     _DCEInverseTransform@16 @ 0x150822 (_DCEInverseTransform@16.c)
 *     _PhysicalToLogicalInPlacePointWithParent@12 @ 0x15156E (_PhysicalToLogicalInPlacePointWithParent@12.c)
 *     _TransformVector@20 @ 0x17BC83 (_TransformVector@20.c)
 * Callees:
 *     <none>
 */

double __stdcall FixedPointSubPixel(__int64 a1)
{
  __int64 v2; // [esp+8h] [ebp+8h]
  float v3; // [esp+Ch] [ebp+Ch]

  if ( a1 < 0 )
    v2 = a1 + __PAIR64__((unsigned __int64)-a1 >> 32, -(int)a1 & 0xFFFF0000);
  else
    v2 = (unsigned __int16)a1;
  v3 = (float)v2;
  return (float)(v3 * 0.0000152587890625);
}
