/*
 * XREFs of ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x18002AE8C
 * Callers:
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18002B180 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800A0FF0 (-IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB7E1 (memset_0.c)
 */

bool __fastcall CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(CreativeFramework::Policy *this)
{
  rsize_t v1; // rax
  ULONG nSize[4]; // [rsp+30h] [rbp-1C8h] BYREF
  WCHAR NameBuffer[104]; // [rsp+40h] [rbp-1B8h] BYREF
  wchar_t Destination[104]; // [rsp+110h] [rbp-E8h] BYREF

  memset_0(Destination, 0, 0xC8uLL);
  memset_0(NameBuffer, 0, 0xC8uLL);
  nSize[0] = 100;
  if ( !GetUserNameExW(NameDnsDomain, NameBuffer, nSize) )
    return 0;
  v1 = wcscspn(NameBuffer, L"\\");
  wcsncpy_s(Destination, 0x64uLL, NameBuffer, v1);
  return FindStringOrdinal(0x200000u, Destination, -1, L".MICROSOFT.COM", -1, 1) >= 0;
}
