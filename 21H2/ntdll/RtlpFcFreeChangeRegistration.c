/*
 * XREFs of RtlpFcFreeChangeRegistration @ 0x18007F840
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x18007F810 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpReleaseWork @ 0x18000F180 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x18007F890 (TpWaitForWork.c)
 */

LOGICAL __fastcall RtlpFcFreeChangeRegistration(PTP_WORK *a1)
{
  _TP_WORK *v2; // rcx

  v2 = a1[5];
  if ( v2 )
  {
    TpWaitForWork(v2, 1u);
    TpReleaseWork(a1[5]);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
