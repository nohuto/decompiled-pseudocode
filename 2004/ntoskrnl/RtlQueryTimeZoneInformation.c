/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x140911DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406C9C30 (RtlpQueryTimeZoneInformationWorker.c)
 */

NTSTATUS __cdecl RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpQueryTimeZoneInformationWorker((char *)TimeZoneInformation, 0xACuLL);
}
