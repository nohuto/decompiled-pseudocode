/*
 * XREFs of _RtlpFindRegTziForCurrentYear@12 @ 0x4B2EAD32
 * Callers:
 *     _RtlpCheckDynamicTimeZoneInformation@8 @ 0x4B2EAAF0 (_RtlpCheckDynamicTimeZoneInformation@8.c)
 * Callees:
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __itow_s @ 0x4B2FF3B0 (__itow_s.c)
 */

int __thiscall RtlpFindRegTziForCurrentYear(_DWORD *this, __int16 a2)
{
  int RegistryValues; // esi
  __int16 v4; // ax
  int v6; // [esp+10h] [ebp-88h] BYREF
  int v7; // [esp+14h] [ebp-84h] BYREF
  _DWORD v8[28]; // [esp+18h] [ebp-80h] BYREF
  wchar_t Buffer[6]; // [esp+88h] [ebp-10h] BYREF

  RegistryValues = -1073741811;
  memset(this, 0, 0x2Cu);
  if ( !_itow_s(a2, Buffer, 5u, 10) )
  {
    memset(v8, 0, sizeof(v8));
    v8[1] = 292;
    v8[2] = L"FirstEntry";
    v8[3] = &v6;
    v8[4] = 0x4000000;
    v8[10] = &v7;
    v8[16] = Buffer;
    v6 = -4;
    v8[11] = 0x4000000;
    v7 = -4;
    v8[8] = 292;
    v8[9] = L"LastEntry";
    v8[15] = 288;
    v8[17] = this;
    v8[18] = 50331648;
    *this = -44;
    RegistryValues = RtlpQueryRegistryValues(v8, 0, 0, 1);
    if ( RegistryValues >= 0 )
    {
      if ( v7 == -4 || v6 == -4 )
        RegistryValues = -1073741762;
      if ( RegistryValues >= 0 && (a2 > v7 || a2 < v6) )
      {
        v4 = v7;
        if ( a2 <= v7 )
          v4 = v6;
        if ( _itow_s(v4, Buffer, 5u, 10) )
        {
          return -1073741762;
        }
        else
        {
          v8[15] = 292;
          v8[18] = 50331648;
          *this = -44;
          return RtlpQueryRegistryValues(&v8[14], 0, 0, 1);
        }
      }
    }
  }
  return RegistryValues;
}
