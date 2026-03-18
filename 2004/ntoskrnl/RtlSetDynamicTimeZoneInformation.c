/*
 * XREFs of RtlSetDynamicTimeZoneInformation @ 0x140911DE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x140911E1C (RtlpSetTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlSetDynamicTimeZoneInformation(void *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
