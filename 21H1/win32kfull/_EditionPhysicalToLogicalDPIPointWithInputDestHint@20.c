/*
 * XREFs of _EditionPhysicalToLogicalDPIPointWithInputDestHint@20 @ 0x151021
 * Callers:
 *     <none>
 * Callees:
 *     _TransformVectorWithInputTargetPrecedence@12 @ 0x14E6DF (_TransformVectorWithInputTargetPrecedence@12.c)
 *     _PhysicalToLogicalDPIPointWithHitTest@16 @ 0x1514B5 (_PhysicalToLogicalDPIPointWithHitTest@16.c)
 */

int __stdcall EditionPhysicalToLogicalDPIPointWithInputDestHint(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int result; // eax

  v5 = *(_DWORD *)(a5 + 80);
  if ( !v5 || !TransformVectorWithInputTargetPrecedence(v5, (int)&a2, a4) )
    PhysicalToLogicalDPIPointWithHitTest(&a2, a4, v5);
  *a1 = a2;
  result = a3;
  a1[1] = a3;
  return result;
}
