/*
 * XREFs of WdipSemDeleteValueFromRegistry @ 0x14079BE10
 * Callers:
 *     WdipSemLoadConfigInfo @ 0x14079A7C4 (WdipSemLoadConfigInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwDeleteValueKey @ 0x1403F5080 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall WdipSemDeleteValueFromRegistry(HANDLE KeyHandle)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !KeyHandle )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, L"SEMUpdate");
  return ZwDeleteValueKey(KeyHandle, &DestinationString);
}
