/*
 * XREFs of PopDirectedDripsClearDisengageReason @ 0x14037762C
 * Callers:
 *     PopDirectedDripsNotifyPnpActionQueueEvent @ 0x1403774A4 (PopDirectedDripsNotifyPnpActionQueueEvent.c)
 *     PnpRemoveDeviceActionRequests @ 0x14037E2B4 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x140508D80 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PopDirectedDripsDisengageTimerCallback @ 0x140562D10 (PopDirectedDripsDisengageTimerCallback.c)
 *     PopDirectedDripsNotify @ 0x140779328 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1408EA8F0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogNotifySessionStart @ 0x1408EADC0 (PopDripsWatchdogNotifySessionStart.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1403776F8 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsClearDisengageReason(char a1)
{
  int v1; // edx
  signed __int32 v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ett

  v1 = 1 << a1;
  _m_prefetchw(&dword_140C24CA4);
  v2 = _InterlockedAnd(&dword_140C24CA4, ~(1 << a1));
  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  do
  {
    v4 = (unsigned int)result;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) != 0 && (v2 & v1) != 0 )
    return PopQueueDirectedDripsWork(v4, 2LL);
  return result;
}
