/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x1800482A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0xACuLL);
}
