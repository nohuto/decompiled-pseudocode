/*
 * XREFs of ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180012BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180005DDC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x18000CED0 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z.c)
 *     ?DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z @ 0x18000D210 (-DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z.c)
 *     ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x180012F24 (-NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800160E8 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::UnregisterPhoneNamespace(
        const WCHAR *this,
        HSTRING a2)
{
  const unsigned __int16 *StringRawBuffer; // rax
  ContentManagement::PhoneShellNamespaceHelper *v4; // rcx
  PCWSTR v5; // rax
  int v6; // eax
  void *v7; // rcx
  LPVOID v8; // rdi
  WCHAR *v9; // rcx
  LPCWSTR v10; // rbx
  PCWSTR v11; // rax
  int v12; // eax
  char *v13; // rsi
  unsigned int v14; // ebx
  LSTATUS v15; // eax
  unsigned __int64 v16; // r9
  PCWSTR v17; // rax
  int v18; // eax
  char *v19; // rdi
  LSTATUS v20; // eax
  unsigned __int64 v21; // r9
  const WCHAR *v22; // rax
  const unsigned __int16 *v23; // r8
  LPVOID pv; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h]
  __int64 v27; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  LPCWSTR lpPathName; // [rsp+70h] [rbp+20h] BYREF

  lpPathName = this;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  ContentManagement::PhoneShellNamespaceHelper::NotifyShell(v4, 16, StringRawBuffer);
  v5 = WindowsGetStringRawBuffer(a2, 0LL);
  pv = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         &pv,
         L"%ws\\%ws\\%ws\\%ws",
         L"Software\\Classes\\CLSID",
         v5,
         L"Instance",
         L"InitPropertyBag");
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x403,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
    v7 = pv;
    if ( !pv )
      goto LABEL_13;
    goto LABEL_12;
  }
  v8 = pv;
  lpPathName = 0LL;
  if ( (int)CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
              (const WCHAR *)pv,
              L"TargetFolderPath",
              0LL,
              &lpPathName) >= 0 )
  {
    v10 = lpPathName;
    RemoveDirectoryW(lpPathName);
    if ( v10 )
    {
      v9 = (WCHAR *)v10;
LABEL_9:
      CoTaskMemFree(v9);
    }
  }
  else
  {
    v9 = (WCHAR *)lpPathName;
    if ( lpPathName )
      goto LABEL_9;
  }
  if ( !v8 )
    goto LABEL_13;
  v7 = v8;
LABEL_12:
  CoTaskMemFree(v7);
LABEL_13:
  pv = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v11 = WindowsGetStringRawBuffer(a2, 0LL);
  v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          &pv,
          L"%ws\\%ws",
          L"Software\\Classes\\CLSID",
          v11);
  v13 = (char *)pv;
  v14 = v12;
  if ( v12 >= 0 )
  {
    v15 = RegDeleteTreeW(HKEY_CURRENT_USER, (LPCWSTR)pv);
    v16 = (unsigned __int16)v15 | 0x80070000;
    if ( v15 <= 0 )
      v16 = (unsigned int)v15;
    if ( (((_DWORD)v16 + 0x80000000) & 0x80000000) == 0 && (_DWORD)v16 != -2147024894 )
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x122,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
        (const char *)v16,
        (__int64)"RegKey: %ws",
        v13);
    pv = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v17 = WindowsGetStringRawBuffer(a2, 0LL);
    v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            &pv,
            L"%ws\\%ws",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Desktop\\NameSpace",
            v17);
    v19 = (char *)pv;
    v14 = v18;
    if ( v18 >= 0 )
    {
      v20 = RegDeleteKeyW(HKEY_CURRENT_USER, (LPCWSTR)pv);
      v21 = (unsigned __int16)v20 | 0x80070000;
      if ( v20 <= 0 )
        v21 = (unsigned int)v20;
      if ( (((_DWORD)v21 + 0x80000000) & 0x80000000) == 0 && (_DWORD)v21 != -2147024894 )
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x11B,
          (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
          (const char *)v21,
          (__int64)"RegKey: %ws",
          v19);
      v22 = WindowsGetStringRawBuffer(a2, 0LL);
      CreativeFramework::ContentDeliveryManagerSettings::DeleteSetting(
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
        v22,
        v23);
      v14 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x388,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v18);
    }
    if ( v19 )
      CoTaskMemFree(v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x383,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v12);
  }
  if ( v13 )
    CoTaskMemFree(v13);
  return v14;
}
