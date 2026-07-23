/*
 * XREFs of _RtlSetDynamicTimeZoneInformation@4 @ 0x4B351370
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSetTimeZoneInformationWorker@8 @ 0x4B35147B (_RtlpSetTimeZoneInformationWorker@8.c)
 */

int __stdcall RtlSetDynamicTimeZoneInformation(PVOID ValueData)
{
  return RtlpSetTimeZoneInformationWorker(ValueData);
}
