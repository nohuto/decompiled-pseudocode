/*
 * XREFs of RtlSetDynamicTimeZoneInformation @ 0x140917920
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x14091795C (RtlpSetTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlSetDynamicTimeZoneInformation(void *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
