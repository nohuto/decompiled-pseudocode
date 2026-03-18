/*
 * XREFs of ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180212304
 * Callers:
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x180211F4C (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x180212A2C (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180212A50 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801D5F44 (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 */

void __fastcall InteractionSourceManager::ClearActiveManipulations(InteractionSourceManager *this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rbp

  v1 = *((_QWORD *)this + 13);
  v3 = v1 + *((_QWORD *)this + 14);
  while ( v1 != v3 )
  {
    CManipulation::SetCaptureState_RenderThread(*(CManipulation **)(*(_QWORD *)(*((_QWORD *)this + 11)
                                                                              + 8
                                                                              * ((v1 >> 1) & (*((_QWORD *)this + 12)
                                                                                            - 1LL)))
                                                                  + 8 * (v1 & 1)));
    ++v1;
  }
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy((_QWORD *)this + 10);
}
