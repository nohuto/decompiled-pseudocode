/*
 * XREFs of ExpCapabilityCheck @ 0x14094BFA4
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14094CE70 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140910060 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(UNICODE_STRING *SourceString)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  return (int)RtlCapabilityCheck(0LL, SourceString, &v2) >= 0 && v2;
}
