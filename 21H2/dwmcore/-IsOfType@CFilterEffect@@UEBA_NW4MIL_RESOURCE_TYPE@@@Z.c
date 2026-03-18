/*
 * XREFs of ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A12A0
 * Callers:
 *     ?IsOfType@CAffineTransform2DEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A10E0 (-IsOfType@CAffineTransform2DEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CArithmeticCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A1110 (-IsOfType@CArithmeticCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CBlendEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A1150 (-IsOfType@CBlendEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CBrightnessEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A11A0 (-IsOfType@CBrightnessEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorMatrixEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A1210 (-IsOfType@CColorMatrixEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A1240 (-IsOfType@CCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CFloodEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A12D0 (-IsOfType@CFloodEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CGaussianBlurEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A1300 (-IsOfType@CGaussianBlurEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CHueRotationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A13E0 (-IsOfType@CHueRotationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSaturationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A15D0 (-IsOfType@CSaturationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CShadowEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A1620 (-IsOfType@CShadowEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLinearTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180223DA0 (-IsOfType@CLinearTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTableTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802421B0 (-IsOfType@CTableTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTurbulenceEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180242DE0 (-IsOfType@CTurbulenceEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D83E8 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 */

char __fastcall CFilterEffect::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 59 )
    return 1;
  v2 = CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
