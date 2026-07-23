/*
 * XREFs of _RtlQueryTimeZoneInformation@4 @ 0x4B351350
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpQueryTimeZoneInformationWorker@8 @ 0x4B2F13A9 (_RtlpQueryTimeZoneInformationWorker@8.c)
 */

NTSTATUS __cdecl RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpQueryTimeZoneInformationWorker((char *)TimeZoneInformation, 0xACu);
}
