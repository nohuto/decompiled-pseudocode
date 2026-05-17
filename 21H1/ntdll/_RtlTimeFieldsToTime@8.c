/*
 * XREFs of _RtlTimeFieldsToTime@8 @ 0x4B2DCF60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTimeFieldsToTime@12 @ 0x4B2DCF80 (_RtlpTimeFieldsToTime@12.c)
 */

int __stdcall RtlTimeFieldsToTime(int a1, int a2)
{
  return RtlpTimeFieldsToTime(a1, a2, 0);
}
