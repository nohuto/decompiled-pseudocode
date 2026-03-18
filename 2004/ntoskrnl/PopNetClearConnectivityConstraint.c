/*
 * XREFs of PopNetClearConnectivityConstraint @ 0x1408EE864
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EAC3C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopNetCompliantNicUpdate @ 0x1408EE8C0 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1408EEAFC (PopNetNonCompliantDeviceUpdate.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 */

char __fastcall PopNetClearConnectivityConstraint(int a1)
{
  char v1; // dl
  signed __int32 v2; // eax
  char v3; // cl

  v1 = 0;
  PopNetStandbyStateMask &= ~(1 << a1);
  if ( a1 == 3 || a1 == 6 )
    v1 = 1;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  v3 = v1;
  if ( v2 == 2 )
    v3 = 1;
  if ( v3 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140C207A8, DelayedWorkQueue);
  return v2;
}
