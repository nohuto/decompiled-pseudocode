/*
 * XREFs of WdipSemDeleteValueFromRegistry @ 0x140786438
 * Callers:
 *     WdipSemLoadConfigInfo @ 0x140784DEC (WdipSemLoadConfigInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwDeleteValueKey @ 0x1403F3DF0 (ZwDeleteValueKey.c)
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
