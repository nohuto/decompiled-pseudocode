/*
 * XREFs of _RtlTimeFieldsToTime@8 @ 0x4B2DCF60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTimeFieldsToTime@12 @ 0x4B2DCF80 (_RtlpTimeFieldsToTime@12.c)
 */

BOOLEAN __cdecl RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  return RtlpTimeFieldsToTime(TimeFields, Time, 0);
}
