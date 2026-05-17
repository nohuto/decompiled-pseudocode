/*
 * XREFs of _RtlWriteRegistryValue@24 @ 0x4B3513B0
 * Callers:
 *     _RtlSetPortableOperatingSystem@4 @ 0x4B3510C0 (_RtlSetPortableOperatingSystem@4.c)
 *     _RtlpSetTimeZoneInformationWorker@8 @ 0x4B35147B (_RtlpSetTimeZoneInformationWorker@8.c)
 * Callees:
 *     _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1 (_RtlpGetRegistryHandle@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __stdcall RtlWriteRegistryValue(int a1, const unsigned __int16 *a2, PCWSTR SourceString, int a4, int a5, int a6)
{
  int result; // eax
  int v7; // esi
  UNICODE_STRING DestinationString; // [esp+0h] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+8h] [ebp-4h] BYREF

  result = RtlpGetRegistryHandle(a1, a2, 1, (const unsigned __int16 **)&Handle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v7 = ZwSetValueKey((int)Handle, (int)&DestinationString, 0, a4 & 0xFFFFFF, a5, a6);
    if ( (a1 & 0x40000000) == 0 )
      NtClose(Handle);
    return v7;
  }
  return result;
}
