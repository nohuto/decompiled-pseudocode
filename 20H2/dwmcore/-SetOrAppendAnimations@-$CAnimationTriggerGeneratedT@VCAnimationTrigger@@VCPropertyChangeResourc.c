/*
 * XREFs of ?SetOrAppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@_N@Z @ 0x1801715FC
 * Callers:
 *     ?AppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@@Z @ 0x18016DD2C (-AppendAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@.c)
 *     ?SetAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@@Z @ 0x18016FFB8 (-SetAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x1800C933C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x180168914 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 *     ??$_Insert_range@PEAPEAVCCompositionGlyphRun@@@?$vector@PEAVCCompositionGlyphRun@@V?$allocator@PEAVCCompositionGlyphRun@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionGlyphRun@@@std@@@std@@@1@PEAPEAVCCompositionGlyphRun@@1Uforward_iterator_tag@1@@Z @ 0x180168E38 (--$_Insert_range@PEAPEAVCCompositionGlyphRun@@@-$vector@PEAVCCompositionGlyphRun@@V-$allocator@P.c)
 */

__int64 __fastcall CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::SetOrAppendAnimations(
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x788u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, (__int64)(this + 10));
    std::vector<CCompositionGlyphRun *>::_Insert_range<CCompositionGlyphRun * *>(
      (__int64)(this + 10),
      this[11],
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    (*((void (__fastcall **)(char **, _QWORD, _QWORD))*this + 9))(this, 0LL, 0LL);
  }
  return v8;
}
