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

int __thiscall RtlpFindRegTziForCurrentYear(_DWORD *Radix, __int16 a2)
{
  int RegistryValues; // esi
  __int16 v4; // ax
  int v6; // [esp-Ch] [ebp-A4h]
  size_t v7; // [esp-4h] [ebp-9Ch]
  size_t v8; // [esp-4h] [ebp-9Ch]
  int v9; // [esp+0h] [ebp-98h]
  int v10; // [esp+10h] [ebp-88h] BYREF
  int v11; // [esp+14h] [ebp-84h] BYREF
  int v12[14]; // [esp+18h] [ebp-80h] BYREF
  int v13; // [esp+50h] [ebp-48h] BYREF
  int v14; // [esp+54h] [ebp-44h]
  wchar_t *v15; // [esp+58h] [ebp-40h]
  _DWORD *v16; // [esp+5Ch] [ebp-3Ch]
  int v17; // [esp+60h] [ebp-38h]
  wchar_t Buffer[6]; // [esp+88h] [ebp-10h] BYREF

  LODWORD(v7) = 44;
  RegistryValues = -1073741811;
  memset(Radix, 0, v7);
  if ( !_itow_s(a2, Buffer, 0xA00000005uLL, v6) )
  {
    LODWORD(v8) = 112;
    memset(v12, 0, v8);
    v12[1] = 292;
    v12[2] = (int)L"FirstEntry";
    v12[3] = (int)&v10;
    v12[4] = 0x4000000;
    v12[10] = (int)&v11;
    v15 = Buffer;
    v10 = -4;
    v12[11] = 0x4000000;
    v11 = -4;
    v12[8] = 292;
    v12[9] = (int)L"LastEntry";
    v14 = 288;
    v16 = Radix;
    v17 = 50331648;
    *Radix = -44;
    RegistryValues = RtlpQueryRegistryValues((int)v12, 0, 0, 1);
    if ( RegistryValues >= 0 )
    {
      if ( v11 == -4 || v10 == -4 )
        RegistryValues = -1073741762;
      if ( RegistryValues >= 0 && (a2 > v11 || a2 < v10) )
      {
        v4 = v11;
        if ( a2 <= v11 )
          v4 = v10;
        if ( _itow_s(v4, Buffer, 0xA00000005uLL, v9) )
        {
          return -1073741762;
        }
        else
        {
          v14 = 292;
          v17 = 50331648;
          *Radix = -44;
          return RtlpQueryRegistryValues((int)&v13, 0, 0, 1);
        }
      }
    }
  }
  return RegistryValues;
}
