/*
 * XREFs of KIsSideloadingEnabled @ 0x14095EFA4
 * Callers:
 *     SepIsLockedDown @ 0x14091BF9C (SepIsLockedDown.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402C9DF8 (CmIsStateSeparationEnabled.c)
 *     AppModelFreeUnicodeString @ 0x1402C9E0C (AppModelFreeUnicodeString.c)
 *     KGetUnlockSetting @ 0x1406B7CE8 (KGetUnlockSetting.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406BC0F0 (KGetAppModelStateSeparatedRegKeyPath.c)
 */

__int64 __fastcall KIsSideloadingEnabled(_BYTE *a1)
{
  int v2; // ebx
  UNICODE_STRING v4; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING v5; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v6; // [rsp+40h] [rbp-10h] BYREF
  int v7; // [rsp+60h] [rbp+10h] BYREF

  *a1 = 0;
  *(_QWORD *)&v5.Length = 7733364LL;
  *(_QWORD *)&v4.Length = 2621478LL;
  v5.Buffer = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  v4.Buffer = L"AllowAllTrustedApps";
  v7 = 0xFFFF;
  v6 = 0LL;
  v2 = KGetAppModelStateSeparatedRegKeyPath(
         L"AppxPolicies",
         L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx",
         &v6);
  if ( v2 >= 0 )
  {
    v2 = KGetUnlockSetting(&v6, &v4, &v7);
    if ( v2 >= 0 )
    {
      if ( CmIsStateSeparationEnabled() && v7 == 0xFFFF )
        v2 = KGetUnlockSetting(&v5, &v4, &v7);
      if ( v2 >= 0 && v7 )
        *a1 = 1;
    }
  }
  AppModelFreeUnicodeString((__int64)&v6);
  return (unsigned int)v2;
}
