/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x1800EE720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
