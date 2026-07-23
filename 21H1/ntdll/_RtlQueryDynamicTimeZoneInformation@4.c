/*
 * XREFs of _RtlQueryDynamicTimeZoneInformation@4 @ 0x4B3511D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpQueryTimeZoneInformationWorker@8 @ 0x4B2F13A9 (_RtlpQueryTimeZoneInformationWorker@8.c)
 */

NTSTATUS __stdcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0u);
}
