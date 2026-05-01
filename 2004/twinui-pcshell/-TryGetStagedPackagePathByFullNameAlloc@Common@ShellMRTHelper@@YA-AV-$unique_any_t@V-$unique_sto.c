/*
 * XREFs of ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18047136C
 * Callers:
 *     ??R_lambda_f514b7d7a4bf1295c9808fb12a890baa_@@QEBAJPEBGPEAPEAG@Z @ 0x18046D464 (--R_lambda_f514b7d7a4bf1295c9808fb12a890baa_@@QEBAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800163A0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800163E8 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18014DE38 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180196E9C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x1804702B8 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall ShellMRTHelper::Common::TryGetStagedPackagePathByFullNameAlloc(void **a1, __int64 a2)
{
  unsigned int StagedPackagePathByFullName2; // eax
  void *v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  void **v8; // rax
  void **v9; // rdi
  unsigned int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v13 = 0;
  StagedPackagePathByFullName2 = GetStagedPackagePathByFullName2(a2, 2LL, &v13);
  if ( StagedPackagePathByFullName2 == 122 )
  {
    v8 = (void **)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                    &pv,
                    0LL,
                    (unsigned int)(v13 - 1),
                    v7);
    v9 = v8;
    if ( a1 != v8 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        a1,
        *v8);
      *v9 = 0LL;
    }
    if ( pv )
      CoTaskMemFree(pv);
    if ( *a1 )
    {
      v10 = GetStagedPackagePathByFullName2(a2, 2LL, &v13);
      if ( v10 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          221LL,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
          (const char *)v10);
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        225LL,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
        (const char *)0x8007000ELL);
    }
  }
  else if ( StagedPackagePathByFullName2 != 1168 && StagedPackagePathByFullName2 != 15701 )
  {
    wil::details::in1diag3::Log_Win32(retaddr, v5, v6, (const char *)StagedPackagePathByFullName2);
  }
  return a1;
}
