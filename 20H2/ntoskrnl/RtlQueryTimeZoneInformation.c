/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x140917900
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x140717020 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0xACuLL);
}
