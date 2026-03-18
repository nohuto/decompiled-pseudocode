/*
 * XREFs of ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18019A7F4
 * Callers:
 *     ??1?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@MEAA@XZ @ 0x18019DAA0 (--1-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@MEAA@XZ.c)
 *     ?SetOrAppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@_N@Z @ 0x1801A3B44 (-SetOrAppendAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResourc.c)
 *     ?SetOrAppendAttractors@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCParticleAttractor@@$0?0@gsl@@_N@Z @ 0x1801A3C04 (-SetOrAppendAttractors@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@A.c)
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801A3D34 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x1801A3DDC (-SetOrAppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEB.c)
 *     ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x1801A3EA4 (-SetOrAppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV-$spa.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1801A3F6C (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ?SetOrAppendGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@_N@Z @ 0x1801A4014 (-SetOrAppendGlyphRuns@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEAVCCom.c)
 *     ?SetOrAppendStrikethroughs@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x1801A40CC (-SetOrAppendStrikethroughs@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEA.c)
 *     ?SetOrAppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x1801A4180 (-SetOrAppendUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEAVCCo.c)
 *     ??1?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x180209BA0 (--1-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 *     ??1?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAA@XZ @ 0x18022D550 (--1-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAA@XZ.c)
 *     ??1?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ @ 0x18023DE40 (--1-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ.c)
 *     ??1?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ @ 0x1802427A8 (--1-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifiers<CSceneComponent>(CResource *this, struct CResource ***a2)
{
  struct CResource **v2; // rbx
  struct CResource **v4; // rsi

  v2 = *a2;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    do
      CResource::UnRegisterNotifierInternal(this, *v2++);
    while ( v2 != v4 );
    v2 = *a2;
  }
  a2[1] = v2;
}
