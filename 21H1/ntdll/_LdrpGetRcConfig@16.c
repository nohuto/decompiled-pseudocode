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

int __thiscall LdrpGetRcConfig(PVOID BaseOfImage, char a2, char a3)
{
  int v3; // ebx
  int v5; // eax
  int v6; // esi
  int v8; // eax
  int v9; // [esp+Ch] [ebp-1Ch] BYREF
  int v10; // [esp+10h] [ebp-18h] BYREF
  int v11[4]; // [esp+14h] [ebp-14h] BYREF

  v11[0] = 0;
  v3 = -1;
  if ( !a3 )
    goto LABEL_5;
  v5 = LdrpGetFromMUIMemCache(0, 8);
  v6 = v5;
  v11[0] = v5;
  if ( v5 != -1 )
  {
    if ( v5 )
      return v6;
LABEL_5:
    v11[3] = 0;
    v11[1] = (int)L"MUI";
    v11[2] = 1;
    v8 = LdrpSearchResourceSection_U(BaseOfImage, 3, 0x2000030u, (int)&v10);
    if ( v8 >= 0 )
    {
      v8 = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage, (int)v11, (int)&v9);
      if ( v8 >= 0 )
      {
        v6 = v11[0];
        if ( *(_DWORD *)v11[0] == -20054323 )
          goto LABEL_8;
        v8 = -1073741701;
      }
    }
    v6 = 0;
LABEL_8:
    if ( a2 )
    {
      if ( v6 )
        v3 = v6;
      LdrpSetAlternateResourceModuleHandle(0, v3, 0, 2, v8, 0);
    }
    return v6;
  }
  return 0;
}
