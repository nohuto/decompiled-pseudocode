/*
 * XREFs of KIsUnlockSettingEnabled @ 0x140706908
 * Callers:
 *     ExQueryFastCacheDevLicense @ 0x1407068A0 (ExQueryFastCacheDevLicense.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x140358350 (CmIsStateSeparationEnabled.c)
 *     AppModelFreeUnicodeString @ 0x140358364 (AppModelFreeUnicodeString.c)
 *     KGetUnlockSetting @ 0x140706A18 (KGetUnlockSetting.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x140709FDC (KGetAppModelStateSeparatedRegKeyPath.c)
 */

__int64 __fastcall KIsUnlockSettingEnabled(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v8; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  v7[0] = 9830548LL;
  v6[0] = 7733364LL;
  v6[1] = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  *a2 = 0xFFFF;
  v7[1] = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock";
  v8 = 0LL;
  DestinationString = 0LL;
  v4 = KGetAppModelStateSeparatedRegKeyPath(
         L"AppxPolicies",
         L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx",
         &DestinationString);
  if ( v4 >= 0 )
  {
    v4 = KGetUnlockSetting(&DestinationString, a1, a2);
    if ( v4 >= 0 )
    {
      if ( CmIsStateSeparationEnabled() && *a2 == 0xFFFF )
        v4 = KGetUnlockSetting(v6, a1, a2);
      if ( v4 >= 0 && *a2 == 0xFFFF )
      {
        v4 = KGetAppModelStateSeparatedRegKeyPath(
               L"AppModelUnlock",
               L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock",
               &v8);
        if ( v4 >= 0 )
        {
          v4 = KGetUnlockSetting(&v8, a1, a2);
          if ( v4 >= 0 && CmIsStateSeparationEnabled() && *a2 == 0xFFFF )
            v4 = KGetUnlockSetting(v7, a1, a2);
        }
      }
    }
  }
  AppModelFreeUnicodeString((__int64)&v8);
  AppModelFreeUnicodeString((__int64)&DestinationString);
  return (unsigned int)v4;
}
