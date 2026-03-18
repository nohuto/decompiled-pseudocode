/*
 * XREFs of ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0F70
 * Callers:
 *     ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0DFC (-IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0F1C (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?IsOfType@CPropertySet@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0F40 (-IsOfType@CPropertySet@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionDistantLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C4F00 (-IsOfType@CCompositionDistantLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C4F30 (-IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C4F60 (-IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016ECB0 (-IsOfType@-$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@.c)
 *     ?IsOfType@?$CParticleBehaviorsGeneratedT@VCParticleBehaviors@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016ECE0 (-IsOfType@-$CParticleBehaviorsGeneratedT@VCParticleBehaviors@@VCPropertyChangeResource@@@@UEBA_N.c)
 *     ?IsOfType@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016ED40 (-IsOfType@-$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@UEBA_N.c)
 *     ?IsOfType@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801B60F0 (-IsOfType@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@UEBA_NW4.c)
 *     ?IsOfType@CCompositionCubeMap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801B8BE0 (-IsOfType@CCompositionCubeMap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionMipmapSurface@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801B9BC0 (-IsOfType@CCompositionMipmapSurface@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionPointLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801BA8E0 (-IsOfType@CCompositionPointLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPropertyChangeResource::IsOfType(__int64 a1, int a2)
{
  return a2 == 112 || a2 == 133;
}
