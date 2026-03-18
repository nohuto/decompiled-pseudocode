/*
 * XREFs of WdipSemDeleteValueFromRegistry @ 0x1407AB140
 * Callers:
 *     WdipSemLoadConfigInfo @ 0x1407A9AF4 (WdipSemLoadConfigInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwDeleteValueKey @ 0x1403F9C50 (ZwDeleteValueKey.c)
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
