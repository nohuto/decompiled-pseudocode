/*
 * XREFs of ?Reset@EdgyImpl@@QEAAXXZ @ 0x18017BF58
 * Callers:
 *     ??_EEdgyProcessor@@UEAAPEAXI@Z @ 0x180177E00 (--_EEdgyProcessor@@UEAAPEAXI@Z.c)
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180178110 (-OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitial.c)
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017ABB4 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x18017B2D0 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 *     ?StaticCallback@InteractionContext@EdgyProcessorTarget@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18017B690 (-StaticCallback@InteractionContext@EdgyProcessorTarget@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@.c)
 *     ?OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z @ 0x18017BE28 (-OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ??_G?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAXI@Z @ 0x180178D14 (--_G-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAXI@Z.c)
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x180178D98 (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

void __fastcall EdgyImpl::Reset(EdgyImpl *this)
{
  CandidateIdentity *v2; // rcx

  v2 = (CandidateIdentity *)*((_QWORD *)this + 1);
  if ( v2 )
    CandidateIdentity::`scalar deleting destructor'(v2, 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( *(_QWORD *)this )
  {
    std::vector<CandidateIdentity>::`scalar deleting destructor'(*(CandidateIdentity ***)this);
    *(_QWORD *)this = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}
