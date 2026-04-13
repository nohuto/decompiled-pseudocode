/*
 * XREFs of ?put_SuggestionsDisabled@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x180011AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::put_SuggestionsDisabled(
        ContentManagement::MobilityExperienceSettings *this,
        char a2)
{
  LSTATUS v2; // eax
  signed int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  BOOL Data; // [rsp+48h] [rbp+10h] BYREF

  Data = a2 == 0;
  v2 = RegSetKeyValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
         L"SuggestionsEnabled",
         4u,
         &Data,
         4u);
  v3 = (unsigned __int16)v2 | 0x80070000;
  if ( v2 <= 0 )
    v3 = v2;
  if ( v3 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
      (const char *)(unsigned int)v3);
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x297,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
