/*
 * XREFs of ExpCapabilityCheck @ 0x14094BFA4
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14094CE70 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140910060 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(PUNICODE_STRING CapabilityName)
{
  BOOLEAN HasCapability; // [rsp+38h] [rbp+10h] BYREF

  HasCapability = 0;
  return RtlCapabilityCheck(0LL, CapabilityName, &HasCapability) >= 0 && HasCapability;
}
