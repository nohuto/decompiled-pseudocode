/*
 * XREFs of ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x18001D638
 * Callers:
 *     ?ProcessLegacyTransformGroupUpdateCommand@@YAJPEAVCTransformGroup@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180020754 (-ProcessLegacyTransformGroupUpdateCommand@@YAJPEAVCTransformGroup@@PEAVCChannelContext@@PEBUtagM.c)
 *     ?AppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@@Z @ 0x1801726EC (-AppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV-$span@PEA.c)
 *     ?SetChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@@Z @ 0x180174C6C (-SetChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV-$span@PEAVCT.c)
 * Callees:
 *     ??$_Insert_range@PEAPEAVCTransform@@@?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCTransform@@@std@@@std@@@1@PEAPEAVCTransform@@1Uforward_iterator_tag@1@@Z @ 0x18001D6DC (--$_Insert_range@PEAPEAVCTransform@@@-$vector@PEAVCTransform@@V-$allocator@PEAVCTransform@@@std@.c)
 *     ??$UnRegisterNotifiers@VCTransform@@@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18001D848 (--$UnRegisterNotifiers@VCTransform@@@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocator@P.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x1800C303C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransformGroupGeneratedT<CTransformGroup,CTransform>::SetOrAppendChildren(
        CResource *this,
        __int64 a2,
        char a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi

  v6 = CResource::RegisterNNotifiersInternal(this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x18F7u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CTransform>(this);
    std::vector<CTransform *>::_Insert_range<CTransform * *>(
      (char *)this + 152,
      *((_QWORD *)this + 20),
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    (*(void (__fastcall **)(CResource *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
  return v8;
}
