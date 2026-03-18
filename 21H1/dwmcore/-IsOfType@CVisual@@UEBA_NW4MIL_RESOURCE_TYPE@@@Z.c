/*
 * XREFs of ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A57C0
 * Callers:
 *     ?IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A5790 (-IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CShapeVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173F80 (-IsOfType@CShapeVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCursorVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C28E0 (-IsOfType@CCursorVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801E4970 (-IsOfType@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@UEBA_NW4MIL_RE.c)
 *     ?IsOfType@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801EFF60 (-IsOfType@-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801F1BF0 (-IsOfType@-$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_T.c)
 *     ?IsOfType@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801F4D30 (-IsOfType@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsOfType(__int64 a1, int a2)
{
  return a2 == 195 || a2 == 112 || a2 == 133;
}
