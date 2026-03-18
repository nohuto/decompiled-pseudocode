/*
 * XREFs of ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C0013F1C
 * Callers:
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0013CE0 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0075EC4 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIoQueue::IsPowerStateNotifyingDriver(FxIoQueue *this)
{
  FxIoQueuePowerState m_PowerState; // eax
  int v2; // ecx
  bool result; // al

  m_PowerState = this->m_PowerState;
  result = 0;
  if ( (unsigned int)m_PowerState <= FxIoQueuePowerRestartingNotifyingDriver )
  {
    v2 = 2336;
    if ( _bittest(&v2, m_PowerState) )
      return 1;
  }
  return result;
}
