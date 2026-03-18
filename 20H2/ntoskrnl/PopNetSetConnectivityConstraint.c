/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x14078C284
 * Callers:
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1408F0990 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x1408F44D0 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1408F470C (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x140A41C60 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
 */

char __fastcall PopNetSetConnectivityConstraint(int a1)
{
  bool v1; // r8
  signed __int32 v2; // eax
  char v3; // cl

  v1 = 0;
  PopNetStandbyStateMask |= 1 << a1;
  if ( ((a1 - 2) & 0xFFFFFFFA) == 0 )
    v1 = a1 != 7;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  v3 = v1;
  if ( v2 == 2 )
    v3 = 1;
  if ( v3 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140C208C8, DelayedWorkQueue);
  return v2;
}
