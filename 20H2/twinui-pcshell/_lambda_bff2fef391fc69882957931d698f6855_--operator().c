/*
 * XREFs of _lambda_bff2fef391fc69882957931d698f6855_::operator() @ 0x1802830E4
 * Callers:
 *     ?ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z @ 0x180283E04 (-ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180041DB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?AppUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@CAJPEBGPEA_N@Z @ 0x18028328C (-AppUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@CAJPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bff2fef391fc69882957931d698f6855_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, LPCWCH *); // rbx
  int v4; // ebx
  LPCWCH lpString1; // [rsp+40h] [rbp+8h] BYREF

  lpString1 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, LPCWCH *))(*(_QWORD *)v2 + 136LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpString1,
    0LL);
  v4 = v3(v2, &lpString1);
  if ( v4 >= 0 )
  {
    v4 = TabAppPolicySettings::AppUsesCustomTabsWhenLaunchedIntoNewGroup(lpString1, (bool *)a1[1]);
    if ( v4 >= 0 )
    {
      if ( !*(_BYTE *)a1[1]
        && CompareStringOrdinal(lpString1, -1, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge", -1, 1) == 2 )
      {
        *(_BYTE *)a1[1] = 1;
      }
      v4 = 0;
    }
  }
  if ( lpString1 )
    CoTaskMemFree((LPVOID)lpString1);
  return (unsigned int)v4;
}
