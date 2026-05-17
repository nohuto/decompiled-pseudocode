/*
 * XREFs of RtlDeleteRegistryValue @ 0x18008BF30
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpGetRegistryHandle @ 0x18004595C (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwDeleteValueKey @ 0x18009EB60 (ZwDeleteValueKey.c)
 */

__int64 __fastcall RtlDeleteRegistryValue(int a1, _WORD *a2, const WCHAR *a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  result = RtlpGetRegistryHandle(a1, a2, 1, &Handle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v6 = ZwDeleteValueKey(Handle, &DestinationString);
    if ( (a1 & 0x40000000) == 0 )
      NtClose(Handle);
    return v6;
  }
  return result;
}
