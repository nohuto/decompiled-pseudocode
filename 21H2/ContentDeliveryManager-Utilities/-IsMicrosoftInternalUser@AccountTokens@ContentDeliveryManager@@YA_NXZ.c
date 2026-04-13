/*
 * XREFs of ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800A5730
 * Callers:
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800A581C (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002A49C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x18002DC7C (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x1800A437C (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z @ 0x1800A44BC (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z.c)
 */

bool __fastcall ContentDeliveryManager::AccountTokens::IsMicrosoftInternalUser(
        ContentDeliveryManager::AccountTokens *this,
        __int64 a2,
        const wchar_t *a3)
{
  int StringSetting; // eax
  CreativeFramework::Policy *v4; // rcx
  bool IsAnyMicrosoftDomainAccount; // di
  const wchar_t *v6; // r9
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  pv = 0LL;
  StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
                    L"IdentityProvider",
                    a3,
                    &pv);
  if ( StringSetting >= 0 )
  {
    if ( pv && CompareStringOrdinal((LPCWCH)pv, -1, L"{ED4515F3-DA33-4717-9228-3D8668614BE6}", -1, 1) == 2 )
    {
      IsAnyMicrosoftDomainAccount = 0;
      goto LABEL_6;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21E,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerAccountTokenProvider.h",
      (const char *)(unsigned int)StringSetting);
  }
  IsAnyMicrosoftDomainAccount = CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v4);
  if ( !IsAnyMicrosoftDomainAccount )
  {
    v7 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
           L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
           L"IdentityProvider",
           L"{ED4515F3-DA33-4717-9228-3D8668614BE6}",
           v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x22C,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerAccountTokenProvider.h",
        (const char *)(unsigned int)v7);
  }
LABEL_6:
  if ( pv )
    CoTaskMemFree(pv);
  return IsAnyMicrosoftDomainAccount;
}
