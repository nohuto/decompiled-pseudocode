/*
 * XREFs of ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180015D34
 * Callers:
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIUnknown@@PEAUIWin32ApplicationView@@_N@Z @ 0x180015A3C (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ?_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUIWin32ApplicationView@@@Z @ 0x180254528 (-_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA-AV-$basic_.c)
 * Callees:
 *     ?GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180015FCC (-GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180016018 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800163A0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x1800877C4 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093890 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall Win32ApplicationViewHelpers::GetAppViewFileName(void **a1)
{
  const unsigned __int16 *v2; // rdx
  void *v3; // rcx
  const unsigned __int16 *last_path_segment; // rax
  const char *v5; // r9
  void *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  void *v9; // [rsp+50h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF

  *a1 = 0LL;
  Win32ApplicationViewHelpers::GetApplicationViewImageName(&pv);
  v3 = pv;
  if ( pv )
  {
    last_path_segment = wil::find_last_path_segment((LPCWSTR)pv, v2);
    wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v9,
      last_path_segment,
      -1LL);
    if ( a1 == &v9 )
    {
      v6 = v9;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        a1,
        v9);
      v6 = 0LL;
      v9 = 0LL;
    }
    if ( v6 )
      CoTaskMemFree(v6);
    if ( !*a1 )
    {
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x34,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32ApplicationViewHelpers.h",
        v5);
      __debugbreak();
    }
    v3 = pv;
  }
  if ( v3 )
    CoTaskMemFree(v3);
  return a1;
}
