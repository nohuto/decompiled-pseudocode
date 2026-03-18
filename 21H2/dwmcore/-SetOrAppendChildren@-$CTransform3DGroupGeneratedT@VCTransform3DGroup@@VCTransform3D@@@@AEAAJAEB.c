/*
 * XREFs of ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x1801A3DDC
 * Callers:
 *     ?AppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@@Z @ 0x18019FC0C (-AppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV-$sp.c)
 *     ?SetChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@@Z @ 0x1801A25A8 (-SetChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV-$span@.c)
 *     ?ProcessLegacyTransform3DGroupUpdateCommand@@YAJPEAVCTransform3DGroup@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180205D84 (-ProcessLegacyTransform3DGroupUpdateCommand@@YAJPEAVCTransform3DGroup@@PEAVCChannelContext@@PEBU.c)
 * Callees:
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180046E80 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18019A7F4 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 *     ??$_Insert_range@PEAPEAVCTransform3D@@@?$vector@PEAVCTransform3D@@V?$allocator@PEAVCTransform3D@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCTransform3D@@@std@@@std@@@1@PEAPEAVCTransform3D@@1Uforward_iterator_tag@1@@Z @ 0x18019B7A8 (--$_Insert_range@PEAPEAVCTransform3D@@@-$vector@PEAVCTransform3D@@V-$allocator@PEAVCTransform3D@.c)
 */

__int64 __fastcall CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::SetOrAppendChildren(
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x1926u);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 20);
    std::vector<CTransform3D *>::_Insert_range<CTransform3D * *>(
      (__int64)(this + 20),
      this[21],
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[9])(this, 0LL, 0LL);
  }
  return v8;
}
