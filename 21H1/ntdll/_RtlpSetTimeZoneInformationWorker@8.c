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

NTSTATUS __fastcall RtlpSetTimeZoneInformationWorker(wchar_t *ValueData, unsigned int a2)
{
  char *v4; // ebx
  unsigned int v5; // edi
  NTSTATUS result; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // edi
  size_t v9; // [esp-4h] [ebp-20h]
  size_t v10; // [esp-4h] [ebp-20h]
  size_t v11; // [esp-4h] [ebp-20h]
  unsigned int ValueDataa; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v13; // [esp+10h] [ebp-Ch]
  PCWSTR Path; // [esp+14h] [ebp-8h] BYREF
  unsigned int v15; // [esp+18h] [ebp-4h] BYREF

  LODWORD(v9) = 32;
  v4 = (char *)(ValueData + 2);
  ValueDataa = a2;
  v15 = wcsnlen(ValueData + 2, v9);
  if ( v15 >= 0x20 )
    return -1073741811;
  LODWORD(v10) = 32;
  v13 = wcsnlen(ValueData + 44, v10);
  if ( v13 >= 0x20 )
    return -1073741811;
  if ( a2 < 0x1B0 )
  {
    v5 = 0;
  }
  else
  {
    LODWORD(v11) = 128;
    v5 = wcsnlen(ValueData + 86, v11);
    if ( v5 >= 0x80 )
      return -1073741811;
  }
  result = RtlpGetTimeZoneInfoHandle(1, (HANDLE *)&Path);
  if ( result >= 0 )
  {
    if ( RtlWriteRegistryValue(0x40000000u, Path, L"Bias", 4u, ValueData, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardName", 1u, v4, 2 * v15 + 2) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardBias", 4u, ValueData + 42, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"StandardStart", 3u, ValueData + 34, 0x10u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightName", 1u, ValueData + 44, 2 * v13 + 2) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightBias", 4u, ValueData + 84, 4u) < 0
      || RtlWriteRegistryValue(0x40000000u, Path, L"DaylightStart", 3u, ValueData + 76, 0x10u) < 0
      || ValueDataa < 0x1B0 )
    {
      LOWORD(v15) = 0;
      v7 = RtlWriteRegistryValue(0x40000000u, Path, L"TimeZoneKeyName", 1u, &v15, 2u);
    }
    else
    {
      v7 = RtlWriteRegistryValue(0x40000000u, Path, L"TimeZoneKeyName", 1u, ValueData + 86, 2 * v5 + 2);
    }
    v8 = v7;
    if ( v7 >= 0 )
    {
      ValueDataa = *((unsigned __int8 *)ValueData + 428);
      v8 = RtlWriteRegistryValue(0x40000000u, Path, L"DynamicDaylightTimeDisabled", 4u, &ValueDataa, 4u);
    }
    NtClose((HANDLE)Path);
    return v8;
  }
  return result;
}
