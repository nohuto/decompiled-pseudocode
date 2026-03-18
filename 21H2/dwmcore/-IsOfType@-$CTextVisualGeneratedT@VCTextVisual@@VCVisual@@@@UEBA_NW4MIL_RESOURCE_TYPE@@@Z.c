/*
 * XREFs of ?IsOfType@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802429B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C5D30 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 184 )
    return 1;
  v2 = CVisual::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
