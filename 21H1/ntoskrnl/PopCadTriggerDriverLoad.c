/*
 * XREFs of PopCadTriggerDriverLoad @ 0x1408F1118
 * Callers:
 *     PopBatteryAdd @ 0x1408E8760 (PopBatteryAdd.c)
 *     PopCadHpmiPnpNotification @ 0x1408F10B0 (PopCadHpmiPnpNotification.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x1403F43D0 (ZwLoadDriver.c)
 */

NTSTATUS __fastcall PopCadTriggerDriverLoad(unsigned int a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  _m_prefetchw(&PopCadLoadReason);
  result = _InterlockedOr(&PopCadLoadReason, a1);
  if ( !result )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CAD");
    return ZwLoadDriver(&DestinationString);
  }
  return result;
}
