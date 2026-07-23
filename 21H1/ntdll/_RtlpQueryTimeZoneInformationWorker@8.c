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

NTSTATUS __fastcall RtlpQueryTimeZoneInformationWorker(char *a1, unsigned int Size)
{
  char *v3; // esi
  NTSTATUS result; // eax
  NTSTATUS RegistryValues; // edi
  size_t v6; // [esp-4h] [ebp-154h]
  size_t v7; // [esp-4h] [ebp-154h]
  int v8; // [esp+10h] [ebp-140h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-13Ch] BYREF
  _WORD v10[2]; // [esp+18h] [ebp-138h] BYREF
  char *v11; // [esp+1Ch] [ebp-134h]
  _WORD v12[2]; // [esp+20h] [ebp-130h] BYREF
  char *v13; // [esp+24h] [ebp-12Ch]
  _DWORD v14[2]; // [esp+28h] [ebp-128h] BYREF
  int v15[71]; // [esp+30h] [ebp-120h] BYREF

  v3 = a1;
  LOBYTE(a1) = 0;
  v8 = 0;
  result = RtlpGetTimeZoneInfoHandle(a1, &Handle);
  if ( result >= 0 )
  {
    LODWORD(v6) = Size;
    memset(v3, 0, v6);
    LODWORD(v7) = 280;
    memset(v15, 0, v7);
    v15[2] = (int)L"Bias";
    v15[3] = (int)v3;
    v11 = v3 + 4;
    v15[4] = 0x4000000;
    v10[0] = 0;
    v10[1] = 64;
    v15[18] = 0x4000000;
    v15[10] = (int)v10;
    v15[17] = (int)(v3 + 84);
    v15[24] = (int)(v3 + 68);
    *((_DWORD *)v3 + 17) = -16;
    v13 = v3 + 88;
    v12[0] = 0;
    v15[1] = 288;
    v15[8] = 288;
    v15[11] = 0x1000000;
    v15[15] = 288;
    v15[22] = 288;
    v15[32] = 0x1000000;
    v15[9] = (int)L"StandardName";
    v15[16] = (int)L"StandardBias";
    v15[23] = (int)L"StandardStart";
    v15[25] = 50331648;
    v15[29] = 288;
    v15[30] = (int)L"DaylightName";
    v15[36] = 288;
    v15[37] = (int)L"DaylightBias";
    v15[39] = 0x4000000;
    v15[43] = 288;
    v15[44] = (int)L"DaylightStart";
    v15[46] = 50331648;
    v12[1] = 64;
    v15[31] = (int)v12;
    v15[38] = (int)(v3 + 168);
    v15[45] = (int)(v3 + 152);
    *((_DWORD *)v3 + 38) = -16;
    if ( Size >= 0x1B0 )
    {
      v15[53] = 0;
      v14[1] = v3 + 172;
      v15[52] = (int)v14;
      v14[0] = 0x1000000;
      v15[49] = (int)RtlpQueryTimeZoneKeyNameRoutine;
      v15[51] = (int)L"TimeZoneKeyName";
      v15[57] = 288;
      v15[58] = (int)L"DynamicDaylightTimeDisabled";
      v15[59] = (int)&v8;
      v15[60] = 0x4000000;
    }
    RegistryValues = RtlpQueryRegistryValues(0x40000000, (const WCHAR *)Handle, (int)v15, 0, 0, 1);
    if ( RegistryValues >= 0 && Size >= 0x1B0 )
      v3[428] = v8 != 0;
    NtClose(Handle);
    return RegistryValues;
  }
  return result;
}
