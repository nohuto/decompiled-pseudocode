/*
 * XREFs of ?GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z @ 0x180171D34
 * Callers:
 *     _lambda_cb81bad5b63050cc5c19426d031aefc2_::operator() @ 0x180261E2C (_lambda_cb81bad5b63050cc5c19426d031aefc2_--operator().c)
 *     ?put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z @ 0x180262BA0 (-put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015DD0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1800473CC (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x180047728 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x18011DD14 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x180446F88 (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 */

__int64 __fastcall GetAppStateKey(const unsigned __int16 *a1, unsigned __int16 *a2, PHKEY phkResult)
{
  REGSAM samDesired; // esi
  int v6; // ebx
  void **v7; // r8
  void *v9; // rbx
  int StateHandle; // eax
  unsigned int v11; // edi
  CallerIdentity *v12; // rdi
  int StateRegKey; // r14d
  LSTATUS Key; // eax
  unsigned int v15; // esi
  CallerIdentity *v16; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  HKEY hKey; // [rsp+A0h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp+48h] BYREF

  samDesired = (unsigned int)a2;
  *phkResult = 0LL;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v6 = ParseAppUserModelId(a1, &pv, 0LL);
  if ( v6 >= 0 )
  {
    v16 = 0LL;
    v9 = pv;
    StateHandle = CallerIdentity::GetStateHandle((CallerIdentity *)pv, (const unsigned __int16 *)&v16, v7);
    v11 = StateHandle;
    if ( StateHandle >= 0 )
    {
      hKey = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        &hKey,
        0LL);
      v12 = v16;
      StateRegKey = CallerIdentity::GetStateRegKey(v16, 0LL, (const unsigned __int16 *)samDesired, &hKey);
      if ( StateRegKey >= 0 )
      {
        if ( (samDesired & 4) != 0 )
          Key = RegCreateKeyExW(hKey, L"PersistedTabData", 0, 0LL, 0, samDesired, 0LL, phkResult, 0LL);
        else
          Key = RegOpenKeyExW(hKey, L"PersistedTabData", 0, samDesired, phkResult);
        v15 = Key;
        if ( Key )
        {
          if ( Key > 0 )
            v15 = (unsigned __int16)Key | 0x80070000;
          if ( hKey )
            RegCloseKey(hKey);
          if ( v12 )
            CloseState(v12);
          if ( v9 )
            CoTaskMemFree(v9);
          return v15;
        }
        else
        {
          if ( hKey )
            RegCloseKey(hKey);
          if ( v12 )
            CloseState(v12);
          if ( v9 )
            CoTaskMemFree(v9);
          return 0LL;
        }
      }
      else
      {
        if ( hKey )
          RegCloseKey(hKey);
        if ( v12 )
          CloseState(v12);
        if ( v9 )
          CoTaskMemFree(v9);
        return (unsigned int)StateRegKey;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"onecoreuap\\internal\\shell\\inc\\TabShellAppSettingsHelpers.h",
        (const char *)(unsigned int)StateHandle);
      if ( v16 )
        CloseState(v16);
      if ( v9 )
        CoTaskMemFree(v9);
      return v11;
    }
  }
  else
  {
    if ( pv )
      CoTaskMemFree(pv);
    return (unsigned int)v6;
  }
}
