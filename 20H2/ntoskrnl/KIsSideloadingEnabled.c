/*
 * XREFs of KIsSideloadingEnabled @ 0x140961724
 * Callers:
 *     SepIsLockedDown @ 0x14091E7BC (SepIsLockedDown.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x140328A68 (CmIsStateSeparationEnabled.c)
 *     AppModelFreeUnicodeString @ 0x140328A7C (AppModelFreeUnicodeString.c)
 *     KGetUnlockSetting @ 0x1406D9598 (KGetUnlockSetting.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406DC3DC (KGetAppModelStateSeparatedRegKeyPath.c)
 */

__int64 __fastcall KIsSideloadingEnabled(_BYTE *a1)
{
  int v2; // ebx
  UNICODE_STRING v4; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING v5; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v7; // [rsp+60h] [rbp+10h] BYREF

  *a1 = 0;
  *(_QWORD *)&v5.Length = 7733364LL;
  *(_QWORD *)&v4.Length = 2621478LL;
  v5.Buffer = (wchar_t *)L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  v4.Buffer = L"AllowAllTrustedApps";
  v7 = 0xFFFF;
  DestinationString = 0LL;
  v2 = KGetAppModelStateSeparatedRegKeyPath(
         L"AppxPolicies",
         L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx",
         &DestinationString);
  if ( v2 >= 0 )
  {
    v2 = KGetUnlockSetting(&DestinationString, &v4, &v7);
    if ( v2 >= 0 )
    {
      if ( CmIsStateSeparationEnabled() && v7 == 0xFFFF )
        v2 = KGetUnlockSetting(&v5, &v4, &v7);
      if ( v2 >= 0 && v7 )
        *a1 = 1;
    }
  }
  AppModelFreeUnicodeString((__int64)&DestinationString);
  return (unsigned int)v2;
}
