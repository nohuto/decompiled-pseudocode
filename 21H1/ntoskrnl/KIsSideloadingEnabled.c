/*
 * XREFs of KIsSideloadingEnabled @ 0x14095A5C4
 * Callers:
 *     SepIsLockedDown @ 0x14091791C (SepIsLockedDown.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x14031A8A0 (CmIsStateSeparationEnabled.c)
 *     AppModelFreeUnicodeString @ 0x14031A8B4 (AppModelFreeUnicodeString.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x140680AC4 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     KGetUnlockSetting @ 0x1406E3058 (KGetUnlockSetting.c)
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
