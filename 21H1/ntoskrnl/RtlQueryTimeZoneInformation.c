/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x140910A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x14067CC40 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0xACuLL);
}
