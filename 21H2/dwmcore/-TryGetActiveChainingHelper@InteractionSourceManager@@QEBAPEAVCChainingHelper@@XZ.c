/*
 * XREFs of ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180264F84
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800716AC (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x180115BBE (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x180219F48 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x18021B724 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180254948 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x180254AB8 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180254B6C (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x1802562F0 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x180256970 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x18025F9E8 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D38B0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@1@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180263698 (--$_Find@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Umap_traits.c)
 */

struct CChainingHelper *__fastcall InteractionSourceManager::TryGetActiveChainingHelper(InteractionSourceManager *this)
{
  __int64 v1; // rbx
  __int64 appended; // rax
  __int64 v4; // r11
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( *((_QWORD *)this + 4) )
  {
    if ( *((_QWORD *)this + 14) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11)
                                 + 8 * ((*((_QWORD *)this + 12) - 1LL) & (*((_QWORD *)this + 13) >> 1)))
                     + 8 * (*((_QWORD *)this + 13) & 1LL));
      appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v7, 8uLL);
      v5 = std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::_Find<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
             (__int64)this + 16,
             v4,
             appended);
      if ( v5 != *((_QWORD *)this + 3) )
        return *(struct CChainingHelper **)(v5 + 24);
    }
  }
  return (struct CChainingHelper *)v1;
}
