/*
 * XREFs of ?IsOfType@CShapeVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801713F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA530 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CShapeVisual::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 168 )
    return 1;
  v2 = CVisual::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
