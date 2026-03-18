/*
 * XREFs of ?SetOrAppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@_N@Z @ 0x1801A3B44
 * Callers:
 *     ?AppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@@Z @ 0x18019FBCC (-AppendAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@.c)
 *     ?SetAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@@Z @ 0x1801A21CC (-SetAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEA.c)
 * Callees:
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180046E80 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18019A7F4 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 *     ??$_Insert_range@PEAPEAVCBaseExpression@@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@PEAPEAVCBaseExpression@@1Uforward_iterator_tag@1@@Z @ 0x18019AC58 (--$_Insert_range@PEAPEAVCBaseExpression@@@-$vector@PEAVCBaseExpression@@V-$allocator@PEAVCBaseEx.c)
 */

__int64 __fastcall CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::SetOrAppendAnimations(
        struct CResource ***this,
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x839u);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 11);
    std::vector<CBaseExpression *>::_Insert_range<CBaseExpression * *>(
      (__int64)(this + 11),
      this[12],
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[9])(this, 0LL, 0LL);
  }
  return v8;
}
