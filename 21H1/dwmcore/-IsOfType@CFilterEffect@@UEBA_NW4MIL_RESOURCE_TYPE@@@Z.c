/*
 * XREFs of ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001DFD0
 * Callers:
 *     ?IsOfType@CGaussianBlurEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001DFA0 (-IsOfType@CGaussianBlurEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CAffineTransform2DEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173A10 (-IsOfType@CAffineTransform2DEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CArithmeticCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173A40 (-IsOfType@CArithmeticCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CBlendEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173A80 (-IsOfType@CBlendEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CBrightnessEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173AB0 (-IsOfType@CBrightnessEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorMatrixEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173B10 (-IsOfType@CColorMatrixEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173B70 (-IsOfType@CCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CFloodEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173C10 (-IsOfType@CFloodEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CHueRotationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173CE0 (-IsOfType@CHueRotationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSaturationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173F00 (-IsOfType@CSaturationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CShadowEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173F50 (-IsOfType@CShadowEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLinearTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801D6D70 (-IsOfType@CLinearTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTableTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801F45B0 (-IsOfType@CTableTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTurbulenceEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801F4E00 (-IsOfType@CTurbulenceEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BBE7C (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 */

char __fastcall CFilterEffect::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 59 )
    return 1;
  v2 = CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
