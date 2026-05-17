/*
 * XREFs of _RtlpGetDynamicTimeZoneInfoHandle@8 @ 0x4B2EAC1B
 * Callers:
 *     _RtlpCheckDynamicTimeZoneInformation@8 @ 0x4B2EAAF0 (_RtlpCheckDynamicTimeZoneInformation@8.c)
 * Callees:
 *     _RtlStringCbCatW@12 @ 0x4B2EACE3 (_RtlStringCbCatW@12.c)
 *     _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1 (_RtlpGetRegistryHandle@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpGetDynamicTimeZoneInfoHandle(_WORD *a1, int a2)
{
  _WORD *v3; // edx
  int v4; // esi
  __int16 v5; // ax
  int result; // eax
  _BYTE v7[512]; // [esp+Ch] [ebp-204h] BYREF

  if ( !*a1 )
    return -1073741811;
  v3 = v7;
  v4 = 256;
  do
  {
    if ( v4 == -2147483390 )
      break;
    v5 = *(_WORD *)((char *)v3 + (char *)L"Time Zones\\" - v7);
    if ( !v5 )
      break;
    *v3++ = v5;
    --v4;
  }
  while ( v4 );
  if ( !v4 )
    --v3;
  *v3 = 0;
  result = v4 != 0 ? 0 : -2147483643;
  if ( v4 )
  {
    result = RtlStringCbCatW(a1);
    if ( result >= 0 )
    {
      result = RtlStringCbCatW(L"\\Dynamic DST");
      if ( result >= 0 )
        return RtlpGetRegistryHandle(0, a2);
    }
  }
  return result;
}
