/*
 * XREFs of _lambda_cb81bad5b63050cc5c19426d031aefc2_::operator() @ 0x180261E2C
 * Callers:
 *     ?AppUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@CAJPEBGPEA_N@Z @ 0x180261EFC (-AppUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@CAJPEBGPEA_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x18011DD14 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z @ 0x180171D34 (-GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall lambda_cb81bad5b63050cc5c19426d031aefc2_::operator()(__int64 a1)
{
  signed int AppStateKey; // ebx
  LPCWSTR *v3; // rax
  LSTATUS ValueW; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF
  int pvData; // [rsp+58h] [rbp+10h] BYREF
  HKEY hkey; // [rsp+60h] [rbp+18h] BYREF

  hkey = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hkey,
    0LL);
  AppStateKey = GetAppStateKey(**(const unsigned __int16 ***)a1, (unsigned __int16 *)0x20019, &hkey);
  if ( AppStateKey >= 0 )
  {
    v3 = *(LPCWSTR **)a1;
    pcbData = 4;
    ValueW = RegGetValueW(hkey, *v3, L"UseCustomTabsWhenInNewGroup", 0x18u, 0LL, &pvData, &pcbData);
    AppStateKey = ValueW;
    if ( ValueW )
    {
      if ( ValueW > 0 )
        AppStateKey = (unsigned __int16)ValueW | 0x80070000;
    }
    else
    {
      AppStateKey = 0;
      ***(_BYTE ***)(a1 + 8) = pvData != 0;
    }
  }
  if ( hkey )
    RegCloseKey(hkey);
  return (unsigned int)AppStateKey;
}
