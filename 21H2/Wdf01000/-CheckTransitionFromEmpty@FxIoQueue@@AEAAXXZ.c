/*
 * XREFs of ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000E194
 * Callers:
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000DF58 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000E05C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 * Callees:
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000A508 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 */

void __fastcall FxIoQueue::CheckTransitionFromEmpty(FxIoQueue *this)
{
  if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    FxIoQueue::SetTransitionFromEmpty(this);
}
