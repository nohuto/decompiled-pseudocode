/*
 * XREFs of _RtlDeleteRegistryValue@12 @ 0x4B351170
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1 (_RtlpGetRegistryHandle@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtDeleteValueKey@8 @ 0x4B2F36E0 (_NtDeleteValueKey@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __stdcall RtlDeleteRegistryValue(int a1, const unsigned __int16 *a2, PCWSTR SourceString)
{
  int result; // eax
  int v4; // esi
  UNICODE_STRING DestinationString; // [esp+0h] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+8h] [ebp-4h] BYREF

  result = RtlpGetRegistryHandle(a1, a2, 1, (const unsigned __int16 **)&Handle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v4 = NtDeleteValueKey((int)Handle, (int)&DestinationString);
    if ( (a1 & 0x40000000) == 0 )
      NtClose(Handle);
    return v4;
  }
  return result;
}
