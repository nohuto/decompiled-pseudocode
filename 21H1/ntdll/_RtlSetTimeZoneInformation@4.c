/*
 * XREFs of _RtlSetTimeZoneInformation@4 @ 0x4B351390
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSetTimeZoneInformationWorker@8 @ 0x4B35147B (_RtlpSetTimeZoneInformationWorker@8.c)
 */

int __stdcall RtlSetTimeZoneInformation(int a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
