/*
 * XREFs of ExpCapabilityCheck @ 0x14094AC04
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14094BAD0 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x14090ECC0 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(PUNICODE_STRING CapabilityName)
{
  BOOLEAN HasCapability; // [rsp+38h] [rbp+10h] BYREF

  HasCapability = 0;
  return RtlCapabilityCheck(0LL, CapabilityName, &HasCapability) >= 0 && HasCapability;
}
