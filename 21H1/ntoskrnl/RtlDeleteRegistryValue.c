/*
 * XREFs of RtlDeleteRegistryValue @ 0x14076CCF0
 * Callers:
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14092B318 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1403F3DF0 (ZwDeleteValueKey.c)
 *     RtlpGetRegistryHandle @ 0x140617BCC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v6 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v6;
  }
  return result;
}
