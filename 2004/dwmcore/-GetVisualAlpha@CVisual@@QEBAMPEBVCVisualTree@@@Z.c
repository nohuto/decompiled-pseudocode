/*
 * XREFs of ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x180006584
 * Callers:
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800064C4 (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180040320 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 */

float __fastcall CVisual::GetVisualAlpha(CVisual *this, CVisual **a2)
{
  if ( this == a2[7] )
    return *(float *)&FLOAT_1_0;
  else
    return fminf(1.0, fmaxf(CVisual::GetOpacityInternal(this), 0.0));
}
