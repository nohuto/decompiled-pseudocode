/*
 * XREFs of ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800E27C4
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800E15FC (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18013FED4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180142108 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 */

__int64 __fastcall ShellFeedsExperienceHelpers::GetShellFeedsRegKey(
        ShellFeedsExperienceHelpers *this,
        BYTE *a2,
        unsigned int *a3)
{
  LSTATUS v4; // eax
  unsigned int v5; // ebx
  bool v6; // cc
  DWORD cbData; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  v9 = HIDWORD(this);
  *(_DWORD *)a2 = 0;
  hKey = 0LL;
  cbData = 4;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL,
    a3);
  v4 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds", 0, 0x20019u, &hKey);
  v5 = v4;
  v6 = v4 <= 0;
  if ( v4 || (v4 = RegQueryValueExW(hKey, L"CTACheck", 0LL, 0LL, a2, &cbData), v5 = v4, v6 = v4 <= 0, v4) )
  {
    if ( !v6 )
      v5 = (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    v5 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  return v5;
}
