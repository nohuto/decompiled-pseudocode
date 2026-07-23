/*
 * XREFs of RtlTimeToTimeFields @ 0x18005B390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields, 0LL);
}
