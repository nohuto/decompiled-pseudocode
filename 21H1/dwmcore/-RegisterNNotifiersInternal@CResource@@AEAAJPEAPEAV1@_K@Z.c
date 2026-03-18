/*
 * XREFs of ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x1800C303C
 * Callers:
 *     ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x18001D638 (-SetOrAppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV-$spa.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800922F4 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEB.c)
 *     ?SetOrAppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@_N@Z @ 0x180175EDC (-SetOrAppendAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResourc.c)
 *     ?SetOrAppendAttractors@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCParticleAttractor@@$0?0@gsl@@_N@Z @ 0x180175F90 (-SetOrAppendAttractors@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@A.c)
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801760AC (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x180176154 (-SetOrAppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEB.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x180176210 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ?SetOrAppendGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@_N@Z @ 0x1801762B8 (-SetOrAppendGlyphRuns@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEAVCCom.c)
 *     ?SetOrAppendStrikethroughs@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x180176370 (-SetOrAppendStrikethroughs@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEA.c)
 *     ?SetOrAppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x180176424 (-SetOrAppendUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEAVCCo.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801B6F84 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x1801B7A18 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801B7B10 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801C2580 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x18008BFA4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 */

__int64 __fastcall CResource::RegisterNNotifiersInternal(CResource *this, struct CResource **a2, unsigned __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rbx
  int v8; // eax
  __int64 v9; // rcx

  v3 = 0;
  v4 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = CResource::RegisterNotifier(this, a2[v4]);
      v3 = v8;
      if ( v8 < 0 )
        break;
      if ( ++v4 >= a3 )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x104u, 0LL);
    CResource::UnRegisterNNotifiersInternal(this, a2, v4);
  }
  return v3;
}
