/*
 * XREFs of ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C001551C
 * Callers:
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C0015374 (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00154AC (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0076780 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000532C (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 */

void __fastcall FxIoQueue::CheckTransitionFromEmpty(FxIoQueue *this)
{
  if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    FxIoQueue::SetTransitionFromEmpty(this);
}
