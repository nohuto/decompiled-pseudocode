/*
 * XREFs of _RtlpSetTimeZoneInformationWorker@8 @ 0x4B35147B
 * Callers:
 *     _RtlSetDynamicTimeZoneInformation@4 @ 0x4B351370 (_RtlSetDynamicTimeZoneInformation@4.c)
 *     _RtlSetTimeZoneInformation@4 @ 0x4B351390 (_RtlSetTimeZoneInformation@4.c)
 * Callees:
 *     _RtlpGetTimeZoneInfoHandle@8 @ 0x4B2F1584 (_RtlpGetTimeZoneInfoHandle@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _wcsnlen @ 0x4B2FA870 (_wcsnlen.c)
 *     _RtlWriteRegistryValue@24 @ 0x4B3513B0 (_RtlWriteRegistryValue@24.c)
 */

int __fastcall RtlpSetTimeZoneInformationWorker(int a1, unsigned int a2)
{
  int v4; // ebx
  size_t v5; // edi
  int result; // eax
  int v7; // eax
  int v8; // edi
  int v9; // [esp+Ch] [ebp-10h] BYREF
  size_t v10; // [esp+10h] [ebp-Ch]
  HANDLE Handle; // [esp+14h] [ebp-8h] BYREF
  size_t v12; // [esp+18h] [ebp-4h] BYREF

  v4 = a1 + 4;
  v9 = a2;
  v12 = wcsnlen((const wchar_t *)(a1 + 4), 0x20u);
  if ( v12 >= 0x20 )
    return -1073741811;
  v10 = wcsnlen((const wchar_t *)(a1 + 88), 0x20u);
  if ( v10 >= 0x20 )
    return -1073741811;
  if ( a2 < 0x1B0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = wcsnlen((const wchar_t *)(a1 + 172), 0x80u);
    if ( v5 >= 0x80 )
      return -1073741811;
  }
  result = RtlpGetTimeZoneInfoHandle(1, (const unsigned __int16 **)&Handle);
  if ( result >= 0 )
  {
    if ( RtlWriteRegistryValue(0x40000000, (const unsigned __int16 *)Handle, L"Bias", 4, a1, 4) < 0
      || RtlWriteRegistryValue(0x40000000, (const unsigned __int16 *)Handle, L"StandardName", 1, v4, 2 * v12 + 2) < 0
      || RtlWriteRegistryValue(0x40000000, (const unsigned __int16 *)Handle, L"StandardBias", 4, a1 + 84, 4) < 0
      || RtlWriteRegistryValue(0x40000000, (const unsigned __int16 *)Handle, L"StandardStart", 3, a1 + 68, 16) < 0
      || RtlWriteRegistryValue(0x40000000, (const unsigned __int16 *)Handle, L"DaylightName", 1, a1 + 88, 2 * v10 + 2) < 0
      || RtlWriteRegistryValue(0x40000000, (const unsigned __int16 *)Handle, L"DaylightBias", 4, a1 + 168, 4) < 0
      || RtlWriteRegistryValue(0x40000000, (const unsigned __int16 *)Handle, L"DaylightStart", 3, a1 + 152, 16) < 0
      || (unsigned int)v9 < 0x1B0 )
    {
      LOWORD(v12) = 0;
      v7 = RtlWriteRegistryValue(0x40000000, (const unsigned __int16 *)Handle, L"TimeZoneKeyName", 1, (int)&v12, 2);
    }
    else
    {
      v7 = RtlWriteRegistryValue(
             0x40000000,
             (const unsigned __int16 *)Handle,
             L"TimeZoneKeyName",
             1,
             a1 + 172,
             2 * v5 + 2);
    }
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = *(unsigned __int8 *)(a1 + 428);
      v8 = RtlWriteRegistryValue(
             0x40000000,
             (const unsigned __int16 *)Handle,
             L"DynamicDaylightTimeDisabled",
             4,
             (int)&v9,
             4);
    }
    NtClose(Handle);
    return v8;
  }
  return result;
}
