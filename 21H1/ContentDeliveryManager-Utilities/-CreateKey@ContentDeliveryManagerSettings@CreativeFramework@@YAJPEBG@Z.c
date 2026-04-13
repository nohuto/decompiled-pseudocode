/*
 * XREFs of ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18000D2B8
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180011E00 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x1800129C0 (-EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180029984 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180005E2C (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::CreateKey(
        const WCHAR *this,
        const unsigned __int16 *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+68h] [rbp+10h] BYREF

  hKey = 0LL;
  v3 = RegCreateKeyExW(HKEY_CURRENT_USER, this, 0, 0LL, 0, 0x20019u, 0LL, &hKey, 0LL);
  if ( v3 )
    v4 = wil::details::in1diag3::Return_Win32Msg(
           retaddr,
           (void *)0x10E,
           (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
           (const char *)v3,
           (__int64)"RegKey: %ws",
           (const char *)this);
  else
    v4 = 0;
  if ( hKey )
    RegCloseKey(hKey);
  return v4;
}
