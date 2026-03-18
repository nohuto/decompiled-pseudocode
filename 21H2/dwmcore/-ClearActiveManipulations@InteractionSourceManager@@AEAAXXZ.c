/*
 * XREFs of ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180263FFC
 * Callers:
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x180263CE4 (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x18026471C (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18026473C (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801F46CC (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
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
                                                                              * ((*((_QWORD *)this + 12) - 1LL) & (v1 >> 1)))
                                                                  + 8 * (v1 & 1)));
    ++v1;
  }
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy((_QWORD *)this + 10);
}
