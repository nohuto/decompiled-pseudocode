/*
 * XREFs of ExpCapabilityCheck @ 0x140951D64
 * Callers:
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140952C30 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140915BA0 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(UNICODE_STRING *SourceString)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  return (int)RtlCapabilityCheck(0LL, SourceString, &v2) >= 0 && v2;
}
