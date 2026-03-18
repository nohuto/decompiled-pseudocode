/*
 * XREFs of ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1E40
 * Callers:
 *     ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1CCC (-IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1DEC (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?IsOfType@CPropertySet@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1E10 (-IsOfType@CPropertySet@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionDistantLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C4FA0 (-IsOfType@CCompositionDistantLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C4FD0 (-IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C5000 (-IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180170A90 (-IsOfType@-$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@.c)
 *     ?IsOfType@?$CParticleBehaviorsGeneratedT@VCParticleBehaviors@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180170AC0 (-IsOfType@-$CParticleBehaviorsGeneratedT@VCParticleBehaviors@@VCPropertyChangeResource@@@@UEBA_N.c)
 *     ?IsOfType@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180170B20 (-IsOfType@-$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@UEBA_N.c)
 *     ?IsOfType@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801B7FE0 (-IsOfType@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@UEBA_NW4.c)
 *     ?IsOfType@CCompositionCubeMap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801BAAD0 (-IsOfType@CCompositionCubeMap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionMipmapSurface@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801BBAB0 (-IsOfType@CCompositionMipmapSurface@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionPointLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801BC7D0 (-IsOfType@CCompositionPointLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPropertyChangeResource::IsOfType(__int64 a1, int a2)
{
  return a2 == 112 || a2 == 133;
}
