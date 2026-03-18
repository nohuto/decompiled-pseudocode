/*
 * XREFs of RtlSetTimeZoneInformation @ 0x140911E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x140911E1C (RtlpSetTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlSetTimeZoneInformation(void *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
