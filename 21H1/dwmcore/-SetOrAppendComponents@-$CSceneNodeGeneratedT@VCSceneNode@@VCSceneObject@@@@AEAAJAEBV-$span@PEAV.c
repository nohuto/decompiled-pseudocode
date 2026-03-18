/*
 * XREFs of ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x180176210
 * Callers:
 *     ?AppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1801726FC (-AppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJAEBV-$span@PEAVCScen.c)
 *     ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1801EF8A4 (-SetComponents@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneComponent@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x1800C303C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18016D250 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 *     ??$_Insert_range@PEAPEAVCCompositionGlyphRun@@@?$vector@PEAVCCompositionGlyphRun@@V?$allocator@PEAVCCompositionGlyphRun@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionGlyphRun@@@std@@@std@@@1@PEAPEAVCCompositionGlyphRun@@1Uforward_iterator_tag@1@@Z @ 0x18016D774 (--$_Insert_range@PEAPEAVCCompositionGlyphRun@@@-$vector@PEAVCCompositionGlyphRun@@V-$allocator@P.c)
 *     ?OnComponentsChanged@CSceneNode@@QEAAXXZ @ 0x1801EF748 (-OnComponentsChanged@CSceneNode@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendComponents(
        char **this,
        __int64 a2,
        char a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi

  v6 = CResource::RegisterNNotifiersInternal((CResource *)this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC31u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, (__int64)(this + 11));
    std::vector<CCompositionGlyphRun *>::_Insert_range<CCompositionGlyphRun * *>(
      (__int64)(this + 11),
      this[12],
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    CSceneNode::OnComponentsChanged((CSceneNode *)this);
  }
  return v8;
}
