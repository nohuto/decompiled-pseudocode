/*
 * XREFs of ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C00981E0
 * Callers:
 *     ?SetVisual@CVisualReferenceControllerMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C0097EAC (-SetVisual@CVisualReferenceControllerMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0097F50 (-ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicati.c)
 *     ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00980A0 (-ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0098190 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0098810 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C009B820 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?ReleaseAllReferences@CManipulationMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01DE740 (-ReleaseAllReferences@CManipulationMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C01DEB98 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01EA840 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 *     ?SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@W4ScrollAxis@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C01EB14C (-SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChan.c)
 *     ?SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C01EB640 (-SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplica.c)
 *     ?SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C01EB6FC (-SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicatio.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?RemoveObject@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@QEAAPEAVCWeakReferenceBase@2@PEAVCResourceMarshaler@2@@Z @ 0x1C009822C (-RemoveObject@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseWeakReference(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CWeakReferenceBase *a2)
{
  bool v2; // zf
  __int64 v4; // rbx

  v2 = (*((_DWORD *)a2 + 2))-- == 1;
  v4 = *((_QWORD *)a2 + 2);
  if ( v2 )
  {
    Win32FreePool((__int64)a2);
    if ( v4 )
    {
      DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::RemoveObject((PRTL_GENERIC_TABLE)((char *)this + 264));
      *(_DWORD *)(v4 + 16) &= ~4u;
    }
  }
}
