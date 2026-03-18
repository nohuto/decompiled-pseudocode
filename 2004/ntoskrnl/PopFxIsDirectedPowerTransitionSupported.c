/*
 * XREFs of PopFxIsDirectedPowerTransitionSupported @ 0x140565CE4
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x1408EB9C8 (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x1408F5700 (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFxIsDirectedPowerTransitionSupported(__int64 a1, int *a2)
{
  int v2; // r8d
  char result; // al

  v2 = 0;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x100) != 0 )
  {
    result = 0;
    v2 = 2;
  }
  else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x20) != 0 )
  {
    result = 1;
  }
  else
  {
    result = 0;
    v2 = 1;
  }
  if ( a2 )
    *a2 = v2;
  return result;
}
