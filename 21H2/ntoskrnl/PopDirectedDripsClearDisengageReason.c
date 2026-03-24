/*
 * XREFs of PopDirectedDripsClearDisengageReason @ 0x14037A4DC
 * Callers:
 *     PopDirectedDripsNotifyPnpActionQueueEvent @ 0x14037A354 (PopDirectedDripsNotifyPnpActionQueueEvent.c)
 *     PnpRemoveDeviceActionRequests @ 0x14037EFDC (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14050E830 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PopDirectedDripsDisengageTimerCallback @ 0x140568810 (PopDirectedDripsDisengageTimerCallback.c)
 *     PopDirectedDripsNotify @ 0x14078DB18 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1408EEF80 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogNotifySessionStart @ 0x1408EF450 (PopDripsWatchdogNotifySessionStart.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x14037A5A8 (PopQueueDirectedDripsWork.c)
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
