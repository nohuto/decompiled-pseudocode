/*
 * XREFs of _RtlTimeToTimeFields@8 @ 0x4B2DCCC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTimeToTimeFields@12 @ 0x4B2DCCE0 (_RtlpTimeToTimeFields@12.c)
 */

void __cdecl RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields, 0);
}
