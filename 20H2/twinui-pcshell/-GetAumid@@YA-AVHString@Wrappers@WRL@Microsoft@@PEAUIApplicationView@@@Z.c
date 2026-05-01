/*
 * XREFs of ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18026EB44
 * Callers:
 *     ?GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z @ 0x18026FD78 (-GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z.c)
 *     ?TryFindMatchingAppInGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAU2@@Z @ 0x18027DDE0 (-TryFindMatchingAppInGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180041DB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1800846E0 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall GetAumid(HSTRING *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, _WORD **); // rbx
  int v5; // eax
  void *v6; // rcx
  unsigned __int64 v7; // rax
  UINT32 v8; // r8d
  const wchar_t *v9; // rdx
  HRESULT v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _WORD *v13; // [rsp+58h] [rbp+10h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, _WORD **))(*(_QWORD *)a2 + 136LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v13,
    0LL);
  v5 = v4(a2, &v13);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      32LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\TabViewManagerHelpers.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = v13;
  if ( v13 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v13[v7] );
    if ( v7 > 0xFFFFFFFF )
    {
      v10 = -2147024362;
      goto LABEL_11;
    }
    v8 = v7;
    v9 = v13;
  }
  else
  {
    v8 = 0;
    v9 = &szAgent;
  }
  v10 = Microsoft::WRL::Wrappers::HString::Set(a1, v9, v8);
  v6 = v13;
LABEL_11:
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      33LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\inc\\TabViewManagerHelpers.h",
      (const char *)(unsigned int)v10);
  if ( v6 )
    CoTaskMemFree(v6);
  return a1;
}
