/*
 * XREFs of ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x1801A3EA4
 * Callers:
 *     ?AppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@@Z @ 0x18019FC1C (-AppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV-$span@PEA.c)
 *     ?SetChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@@Z @ 0x1801A25B8 (-SetChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV-$span@PEAVCT.c)
 *     ?ProcessLegacyTransformGroupUpdateCommand@@YAJPEAVCTransformGroup@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180205EE0 (-ProcessLegacyTransformGroupUpdateCommand@@YAJPEAVCTransformGroup@@PEAVCChannelContext@@PEBUtagM.c)
 * Callees:
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180046E80 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18019A7F4 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 *     ??$_Insert_range@PEAPEAVCTransform@@@?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCTransform@@@std@@@std@@@1@PEAPEAVCTransform@@1Uforward_iterator_tag@1@@Z @ 0x18019B990 (--$_Insert_range@PEAPEAVCTransform@@@-$vector@PEAVCTransform@@V-$allocator@PEAVCTransform@@@std@.c)
 */

__int64 __fastcall CTransformGroupGeneratedT<CTransformGroup,CTransform>::SetOrAppendChildren(
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x196Fu);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 20);
    std::vector<CTransform *>::_Insert_range<CTransform * *>(
      (__int64)(this + 20),
      this[21],
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[9])(this, 0LL, 0LL);
  }
  return v8;
}
