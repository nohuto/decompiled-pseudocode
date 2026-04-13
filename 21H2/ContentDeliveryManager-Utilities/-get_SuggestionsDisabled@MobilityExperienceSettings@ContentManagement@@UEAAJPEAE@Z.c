/*
 * XREFs of ?get_SuggestionsDisabled@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x1800123A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::get_SuggestionsDisabled(
        ContentManagement::MobilityExperienceSettings *this,
        unsigned __int8 *a2)
{
  __int64 result; // rax
  DWORD v4; // [rsp+58h] [rbp+10h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0;
  v4 = 4;
  RegGetValueW(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
    L"SuggestionsEnabled",
    0x20000010u,
    0LL,
    &v5,
    &v4);
  result = 0LL;
  *a2 = 0;
  return result;
}
