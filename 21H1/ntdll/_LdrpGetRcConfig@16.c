/*
 * XREFs of _LdrpGetRcConfig@16 @ 0x4B2B8818
 * Callers:
 *     _LdrLoadAlternateResourceModule@16 @ 0x4B2AA250 (_LdrLoadAlternateResourceModule@16.c)
 *     _LdrpCompareServiceChecksum@8 @ 0x4B2AA440 (_LdrpCompareServiceChecksum@8.c)
 *     _LdrpResReportResourceAccessInternal@16 @ 0x4B2B0BD2 (_LdrpResReportResourceAccessInternal@16.c)
 *     _LdrIsResItemExist@16 @ 0x4B2B8120 (_LdrIsResItemExist@16.c)
 *     _LdrpVerifyAlternateResourceModuleEx@24 @ 0x4B2B874D (_LdrpVerifyAlternateResourceModuleEx@24.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 * Callees:
 *     _LdrpSetAlternateResourceModuleHandle@32 @ 0x4B2B9366 (_LdrpSetAlternateResourceModuleHandle@32.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0 (_LdrpGetFromMUIMemCache@16.c)
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall LdrpGetRcConfig(char a1, char a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // esi
  int v6; // eax
  char v7[4]; // [esp+Ch] [ebp-1Ch] BYREF
  int v8; // [esp+10h] [ebp-18h] BYREF
  _DWORD v9[4]; // [esp+14h] [ebp-14h] BYREF

  v9[0] = 0;
  v2 = -1;
  if ( !a2 )
    goto LABEL_5;
  v3 = LdrpGetFromMUIMemCache(0, 8);
  v4 = v3;
  v9[0] = v3;
  if ( v3 != -1 )
  {
    if ( v3 )
      return v4;
LABEL_5:
    v9[3] = 0;
    v9[1] = L"MUI";
    v9[2] = 1;
    v6 = LdrpSearchResourceSection_U(3, 33554480, &v8);
    if ( v6 >= 0 )
    {
      v6 = LdrpAccessResourceDataNoMultipleLanguage(v9, v7);
      if ( v6 >= 0 )
      {
        v4 = v9[0];
        if ( *(_DWORD *)v9[0] == -20054323 )
          goto LABEL_8;
        v6 = -1073741701;
      }
    }
    v4 = 0;
LABEL_8:
    if ( a1 )
    {
      if ( v4 )
        v2 = v4;
      LdrpSetAlternateResourceModuleHandle(0, v2, 0, 2, v6, 0);
    }
    return v4;
  }
  return 0;
}
