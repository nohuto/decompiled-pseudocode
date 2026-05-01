/*
 * XREFs of ?get_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJPEAE@Z @ 0x180284730
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800163A0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AppUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@CAJPEBGPEA_N@Z @ 0x180283B7C (-AppUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@CAJPEBGPEA_N@Z.c)
 *     ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x180283BEC (-GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z.c)
 */

__int64 __fastcall TabAppPolicySettings::get_UseCustomTabsWhenLaunchedIntoNewGroup(
        TabAppPolicySettings *this,
        bool *a2)
{
  unsigned __int16 **v3; // rdx
  int CallerAppId; // eax
  unsigned int v5; // ebx
  void *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v11; // [rsp+38h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  CallerAppId = TabAppPolicySettings::GetCallerAppId((unsigned __int16 **)&pv, v3);
  v5 = CallerAppId;
  if ( CallerAppId >= 0 )
  {
    v7 = pv;
    v8 = TabAppPolicySettings::AppUsesCustomTabsWhenLaunchedIntoNewGroup((const unsigned __int16 *)pv, &v11);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *a2 = v11;
      if ( v7 )
        CoTaskMemFree(v7);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
        (const char *)(unsigned int)v8);
      if ( v7 )
        CoTaskMemFree(v7);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)CallerAppId);
    if ( pv )
      CoTaskMemFree(pv);
    return v5;
  }
}
