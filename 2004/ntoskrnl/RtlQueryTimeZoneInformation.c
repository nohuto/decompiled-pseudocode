/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x140911DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406C9C30 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0xACuLL);
}
