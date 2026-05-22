/*
 * XREFs of ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x18017B90C
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017A794 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x18017AA3C (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUContextualProcessorResponse@@PEAI@Z @ 0x18017B690 (-DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUCont.c)
 * Callees:
 *     <none>
 */

char __fastcall EdgyImpl::GetCandidateEdgyDetectedInfo(EdgyImpl *this, struct CandidateEdgyDetectedInfo *a2)
{
  const struct CandidateIdentity *v3; // rdx

  v3 = (const struct CandidateIdentity *)*((_QWORD *)this + 1);
  if ( v3 )
    return EdgyConnection::GetCandidateEdgyDetectedInfo(*((EdgyConnection **)this + 3), v3, a2);
  else
    return 0;
}
