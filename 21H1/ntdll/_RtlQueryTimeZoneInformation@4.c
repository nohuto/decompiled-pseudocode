/*
 * XREFs of _RtlQueryTimeZoneInformation@4 @ 0x4B351350
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpQueryTimeZoneInformationWorker@8 @ 0x4B2F13A9 (_RtlpQueryTimeZoneInformationWorker@8.c)
 */

int __stdcall RtlQueryTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0xACu);
}
