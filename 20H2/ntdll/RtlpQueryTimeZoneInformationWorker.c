/*
 * XREFs of RtlpQueryTimeZoneInformationWorker @ 0x180057B00
 * Callers:
 *     EtwpGetTimeZoneInformation @ 0x180057984 (EtwpGetTimeZoneInformation.c)
 *     RtlQueryTimeZoneInformation @ 0x180057AF0 (RtlQueryTimeZoneInformation.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1800EE8D0 (RtlQueryDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180045B7C (RtlpQueryRegistryValues.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x180057D00 (RtlpGetTimeZoneInfoHandle.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall RtlpQueryTimeZoneInformationWorker(char *a1, size_t Size)
{
  unsigned int v2; // esi
  __int64 result; // rax
  int RegistryValues; // edi
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  char *v9; // [rsp+48h] [rbp-B8h]
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  char *v11; // [rsp+58h] [rbp-A8h]
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  char *v13; // [rsp+68h] [rbp-98h]
  _QWORD v14[70]; // [rsp+70h] [rbp-90h] BYREF

  v2 = Size;
  v6 = 0;
  result = RtlpGetTimeZoneInfoHandle(0LL, &Handle);
  if ( (int)result >= 0 )
  {
    memset(a1, 0, v2);
    memset(v14, 0, sizeof(v14));
    v8 = 0x400000;
    LODWORD(v14[1]) = 288;
    v14[2] = L"Bias";
    v9 = a1 + 4;
    v14[9] = L"StandardName";
    v14[10] = &v8;
    v14[3] = a1;
    v14[16] = L"StandardBias";
    v14[17] = a1 + 84;
    v14[23] = L"StandardStart";
    v14[24] = a1 + 68;
    *((_DWORD *)a1 + 17) = -16;
    v11 = a1 + 88;
    v14[30] = L"DaylightName";
    v14[31] = &v10;
    v14[37] = L"DaylightBias";
    v14[38] = a1 + 168;
    v14[44] = L"DaylightStart";
    v10 = 0x400000;
    v14[45] = a1 + 152;
    *((_DWORD *)a1 + 38) = -16;
    LODWORD(v14[4]) = 0x4000000;
    LODWORD(v14[8]) = 288;
    LODWORD(v14[11]) = 0x1000000;
    LODWORD(v14[15]) = 288;
    LODWORD(v14[18]) = 0x4000000;
    LODWORD(v14[22]) = 288;
    LODWORD(v14[25]) = 50331648;
    LODWORD(v14[29]) = 288;
    LODWORD(v14[32]) = 0x1000000;
    LODWORD(v14[36]) = 288;
    LODWORD(v14[39]) = 0x4000000;
    LODWORD(v14[43]) = 288;
    LODWORD(v14[46]) = 50331648;
    if ( v2 >= 0x1B0 )
    {
      v12 = 0x1000000;
      v13 = a1 + 172;
      v14[49] = &RtlpQueryTimeZoneKeyNameRoutine;
      v14[51] = L"TimeZoneKeyName";
      v14[52] = &v12;
      v14[58] = L"DynamicDaylightTimeDisabled";
      v14[59] = &v6;
      LODWORD(v14[53]) = 0;
      LODWORD(v14[57]) = 288;
      LODWORD(v14[60]) = 0x4000000;
    }
    RegistryValues = RtlpQueryRegistryValues(0x40000000, (const WCHAR *)Handle, (__int64)v14, 0LL, 0LL, 1);
    if ( RegistryValues >= 0 && v2 >= 0x1B0 )
      a1[428] = v6 != 0;
    NtClose(Handle);
    return (unsigned int)RegistryValues;
  }
  return result;
}
