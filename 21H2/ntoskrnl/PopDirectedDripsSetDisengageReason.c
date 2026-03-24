/*
 * XREFs of PopDirectedDripsSetDisengageReason @ 0x14037A544
 * Callers:
 *     PnpRequestDeviceAction @ 0x140370854 (PnpRequestDeviceAction.c)
 *     PopDirectedDripsNotifyPnpActionQueueEvent @ 0x14037A354 (PopDirectedDripsNotifyPnpActionQueueEvent.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140568B4C (PopDirectedDripsStartDisengageTimer.c)
 *     PopDirectedDripsNotify @ 0x14078DB18 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1408EEF80 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x14037A5A8 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsSetDisengageReason(char a1)
{
  int v1; // edx
  signed __int32 v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ett

  v1 = 1 << a1;
  _m_prefetchw(&dword_140C24CA4);
  v2 = _InterlockedOr(&dword_140C24CA4, 1 << a1);
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
  if ( (result & 1) != 0 && (v2 & v1) == 0 )
    return PopQueueDirectedDripsWork(v4, 2LL);
  return result;
}
