/*
 * XREFs of _RtlpFcFreeChangeRegistration@4 @ 0x4B2AB4C2
 * Callers:
 *     _RtlUnregisterFeatureConfigurationChangeNotification@4 @ 0x4B2AB4A0 (_RtlUnregisterFeatureConfigurationChangeNotification@4.c)
 * Callees:
 *     _TpWaitForWork@8 @ 0x4B2AB500 (_TpWaitForWork@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _TpReleaseWork@4 @ 0x4B2EC490 (_TpReleaseWork@4.c)
 */

LOGICAL __thiscall RtlpFcFreeChangeRegistration(PTP_WORK *BaseAddress)
{
  if ( BaseAddress[5] )
  {
    TpWaitForWork(BaseAddress[5], 1u);
    TpReleaseWork(BaseAddress[5]);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
