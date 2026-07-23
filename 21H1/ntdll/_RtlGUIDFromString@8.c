/*
 * XREFs of _RtlGUIDFromString@8 @ 0x4B362640
 * Callers:
 *     _RtlQueryPackageClaims@32 @ 0x4B2E4E70 (_RtlQueryPackageClaims@32.c)
 *     _RtlRaiseCustomSystemEventTrigger@4 @ 0x4B369C20 (_RtlRaiseCustomSystemEventTrigger@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     ScanHexFormat @ 0x4B3626D0 (ScanHexFormat.c)
 */

NTSTATUS __cdecl RtlGUIDFromString(PUNICODE_STRING GuidString, PGUID Guid)
{
  unsigned int i; // ecx
  int v4; // [esp+8h] [ebp-14h] BYREF
  int v5; // [esp+Ch] [ebp-10h] BYREF
  int v6; // [esp+10h] [ebp-Ch] BYREF
  int v7; // [esp+14h] [ebp-8h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( ScanHexFormat(
         GuidString->Buffer,
         GuidString->Length >> 1,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         Guid,
         &Guid->Data2,
         &Guid->Data3,
         &v4,
         (char *)&v4 + 2,
         &v5,
         (char *)&v5 + 2,
         &v6,
         (char *)&v6 + 2,
         &v7,
         (char *)&v7 + 2) == -1 )
    return -1073741811;
  for ( i = 0; i < 8; ++i )
    Guid->Data4[i] = *((_BYTE *)&v4 + 2 * i);
  return 0;
}
