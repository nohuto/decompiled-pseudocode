/*
 * XREFs of RoundIntermediateSize @ 0x180042224
 * Callers:
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18001CB94 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180041FEC (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 * Callees:
 *     floorf_0 @ 0x1800F476F (floorf_0.c)
 */

float __fastcall RoundIntermediateSize(float a1)
{
  float v2; // xmm1_4

  if ( COERCE_FLOAT(LODWORD(a1) & _xmm) >= 8388608.0 )
    v2 = a1;
  else
    v2 = (float)(int)floorf_0(a1);
  if ( (float)(a1 - v2) <= 0.0099999998 )
    return fmaxf(1.0, v2);
  else
    return v2 + 1.0;
}
