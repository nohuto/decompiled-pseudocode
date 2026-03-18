/*
 * XREFs of PopNetClearConnectivityConstraint @ 0x1408F4474
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408F084C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopNetCompliantNicUpdate @ 0x1408F44D0 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1408F470C (PopNetNonCompliantDeviceUpdate.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
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
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140C208C8, DelayedWorkQueue);
  return v2;
}
