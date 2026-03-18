/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x140910A20
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x140A70080 (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x14067CC40 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
