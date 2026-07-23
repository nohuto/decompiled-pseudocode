/*
 * XREFs of ExpCapabilityCheck @ 0x14094F704
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409505D0 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1409134B0 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(PUNICODE_STRING CapabilityName)
{
  BOOLEAN HasCapability; // [rsp+38h] [rbp+10h] BYREF

  HasCapability = 0;
  return RtlCapabilityCheck(0LL, CapabilityName, &HasCapability) >= 0 && HasCapability;
}
