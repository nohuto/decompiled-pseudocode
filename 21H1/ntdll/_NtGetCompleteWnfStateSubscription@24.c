/*
 * XREFs of _NtGetCompleteWnfStateSubscription@24 @ 0x4B2F3890
 * Callers:
 *     _RtlpWnfNotificationThread@16 @ 0x4B2DEA10 (_RtlpWnfNotificationThread@16.c)
 *     _RtlpWnfProcessCurrentDescriptor@8 @ 0x4B2DECC3 (_RtlpWnfProcessCurrentDescriptor@8.c)
 *     _RtlpWnfRetryTimerCallback@12 @ 0x4B33C760 (_RtlpWnfRetryTimerCallback@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtGetCompleteWnfStateSubscription(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Wow64SystemServiceCall();
}
