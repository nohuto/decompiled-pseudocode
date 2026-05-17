/*
 * XREFs of _RtlpQueryTimeZoneInformationWorker@8 @ 0x4B2F13A9
 * Callers:
 *     _EtwpGetTimeZoneInformation@4 @ 0x4B2F12B5 (_EtwpGetTimeZoneInformation@4.c)
 *     _RtlQueryDynamicTimeZoneInformation@4 @ 0x4B3511D0 (_RtlQueryDynamicTimeZoneInformation@4.c)
 *     _RtlQueryTimeZoneInformation@4 @ 0x4B351350 (_RtlQueryTimeZoneInformation@4.c)
 * Callees:
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 *     _RtlpGetTimeZoneInfoHandle@8 @ 0x4B2F1584 (_RtlpGetTimeZoneInfoHandle@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpQueryTimeZoneInformationWorker(char *a1, size_t Size)
{
  char *v3; // esi
  int result; // eax
  int RegistryValues; // edi
  int v6; // [esp+10h] [ebp-140h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-13Ch] BYREF
  _WORD v8[2]; // [esp+18h] [ebp-138h] BYREF
  char *v9; // [esp+1Ch] [ebp-134h]
  _WORD v10[2]; // [esp+20h] [ebp-130h] BYREF
  char *v11; // [esp+24h] [ebp-12Ch]
  _DWORD v12[2]; // [esp+28h] [ebp-128h] BYREF
  _DWORD v13[71]; // [esp+30h] [ebp-120h] BYREF

  v3 = a1;
  LOBYTE(a1) = 0;
  v6 = 0;
  result = RtlpGetTimeZoneInfoHandle(a1, &Handle);
  if ( result >= 0 )
  {
    memset(v3, 0, Size);
    memset(v13, 0, 0x118u);
    v13[2] = L"Bias";
    v13[3] = v3;
    v9 = v3 + 4;
    v13[4] = 0x4000000;
    v8[0] = 0;
    v8[1] = 64;
    v13[18] = 0x4000000;
    v13[10] = v8;
    v13[17] = v3 + 84;
    v13[24] = v3 + 68;
    *((_DWORD *)v3 + 17) = -16;
    v11 = v3 + 88;
    v10[0] = 0;
    v13[1] = 288;
    v13[8] = 288;
    v13[11] = 0x1000000;
    v13[15] = 288;
    v13[22] = 288;
    v13[32] = 0x1000000;
    v13[9] = L"StandardName";
    v13[16] = L"StandardBias";
    v13[23] = L"StandardStart";
    v13[25] = 50331648;
    v13[29] = 288;
    v13[30] = L"DaylightName";
    v13[36] = 288;
    v13[37] = L"DaylightBias";
    v13[39] = 0x4000000;
    v13[43] = 288;
    v13[44] = L"DaylightStart";
    v13[46] = 50331648;
    v10[1] = 64;
    v13[31] = v10;
    v13[38] = v3 + 168;
    v13[45] = v3 + 152;
    *((_DWORD *)v3 + 38) = -16;
    if ( Size >= 0x1B0 )
    {
      v13[53] = 0;
      v12[1] = v3 + 172;
      v13[52] = v12;
      v12[0] = 0x1000000;
      v13[49] = RtlpQueryTimeZoneKeyNameRoutine;
      v13[51] = L"TimeZoneKeyName";
      v13[57] = 288;
      v13[58] = L"DynamicDaylightTimeDisabled";
      v13[59] = &v6;
      v13[60] = 0x4000000;
    }
    RegistryValues = RtlpQueryRegistryValues(0x40000000, (const WCHAR *)Handle, (int)v13, 0, 0, 1);
    if ( RegistryValues >= 0 && Size >= 0x1B0 )
      v3[428] = v6 != 0;
    NtClose(Handle);
    return RegistryValues;
  }
  return result;
}
