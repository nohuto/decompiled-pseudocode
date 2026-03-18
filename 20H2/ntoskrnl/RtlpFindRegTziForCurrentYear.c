/*
 * XREFs of RtlpFindRegTziForCurrentYear @ 0x1403B6884
 * Callers:
 *     RtlpUpdateDynamicTimeZones @ 0x1407A009C (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407A03DC (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _itow_s @ 0x1403D6340 (_itow_s.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406DC2F0 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall RtlpFindRegTziForCurrentYear(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // esi
  int RegistryValues; // ebx
  __int16 v7; // ax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v11[28]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t DstBuf[8]; // [rsp+120h] [rbp+20h] BYREF

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  RegistryValues = -1073741811;
  if ( !itow_s(a3, DstBuf, 5uLL, 10) )
  {
    memset(v11, 0, sizeof(v11));
    v11[2] = L"FirstEntry";
    LODWORD(v11[1]) = 292;
    LODWORD(v11[4]) = 0x4000000;
    v11[3] = &v9;
    LODWORD(v11[11]) = 0x4000000;
    v11[9] = L"LastEntry";
    v9 = -4;
    v11[10] = &v10;
    LODWORD(v11[8]) = 292;
    v11[16] = DstBuf;
    v10 = -4;
    LODWORD(v11[15]) = 288;
    v11[17] = a1;
    LODWORD(v11[18]) = 50331648;
    *(_DWORD *)a1 = -44;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, a2, v11, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      v7 = v9;
      if ( v10 == -4 || v9 == -4 )
        RegistryValues = -1073741762;
      if ( RegistryValues >= 0 && (v3 > v10 || v3 < v9) )
      {
        if ( v3 > v10 )
          v7 = v10;
        if ( itow_s(v7, DstBuf, 5uLL, 10) )
        {
          return (unsigned int)-1073741762;
        }
        else
        {
          LODWORD(v11[15]) = 292;
          LODWORD(v11[18]) = 50331648;
          *(_DWORD *)a1 = -44;
          return (unsigned int)RtlQueryRegistryValuesEx(0x40000000LL, a2, &v11[14], 0LL, 0LL);
        }
      }
    }
  }
  return (unsigned int)RegistryValues;
}
