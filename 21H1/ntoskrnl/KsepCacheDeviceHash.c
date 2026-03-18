/*
 * XREFs of KsepCacheDeviceHash @ 0x14075E0A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlHashUnicodeString @ 0x1406A8C20 (RtlHashUnicodeString.c)
 */

__int64 __fastcall KsepCacheDeviceHash(__int64 a1)
{
  ULONG HashValue; // [rsp+30h] [rbp+8h] BYREF

  HashValue = 0;
  RtlHashUnicodeString((PCUNICODE_STRING)(a1 + 40), 1u, 0, &HashValue);
  return HashValue;
}
