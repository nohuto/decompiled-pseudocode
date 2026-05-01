/*
 * XREFs of sub_1800773B0 @ 0x1800773B0
 * Callers:
 *     sub_1800281A4 @ 0x1800281A4 (sub_1800281A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800773B0(__int64 a1, __int64 a2)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"location");
  return RtlCapabilityCheck(a1, &DestinationString, a2);
}
