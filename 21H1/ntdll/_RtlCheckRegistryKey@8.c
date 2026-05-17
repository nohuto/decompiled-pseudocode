/*
 * XREFs of _RtlCheckRegistryKey@8 @ 0x4B3510F0
 * Callers:
 *     _RtlCheckPortableOperatingSystem@4 @ 0x4B351030 (_RtlCheckPortableOperatingSystem@4.c)
 * Callees:
 *     _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1 (_RtlpGetRegistryHandle@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

int __thiscall RtlCheckRegistryKey(void *this, int a2, const unsigned __int16 *a3)
{
  int result; // eax
  HANDLE Handle; // [esp+0h] [ebp-4h] BYREF

  Handle = this;
  result = RtlpGetRegistryHandle(a2, a3, 0, (const unsigned __int16 **)&Handle);
  if ( result >= 0 )
  {
    if ( (a2 & 0x40000000) == 0 )
      NtClose(Handle);
    return 0;
  }
  return result;
}
