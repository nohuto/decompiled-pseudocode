/*
 * XREFs of ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0F1C
 * Callers:
 *     ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D0D0 (-IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0EF0 (-IsOfType@-$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0F70 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 54 )
    return 1;
  v2 = CPropertyChangeResource::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
