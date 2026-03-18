/*
 * XREFs of RtlSetTimeZoneInformation @ 0x140910A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x140910A9C (RtlpSetTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlSetTimeZoneInformation(void *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
