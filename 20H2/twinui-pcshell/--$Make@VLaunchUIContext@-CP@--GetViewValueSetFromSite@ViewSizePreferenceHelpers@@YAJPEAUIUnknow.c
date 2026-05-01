/*
 * XREFs of ??$Make@VLaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@PEAU5678@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VLaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CD790
 * Callers:
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CE8E0 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005B020 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0LaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@QEAA@PEAU4567@@Z @ 0x1803CDD30 (--0LaunchUIContext@-CP@--GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEA.c)
 */

__int64 *__fastcall PEAU5678::Z::Make<`ViewSizePreferenceHelpers::GetViewValueSetFromSite'::`47'::LaunchUIContext,AJPEAUIUnknown,Windows::Foundation::Collections::IPropertySet * *>(
        __int64 *a1,
        _QWORD *a2)
{
  void *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rdi

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = `ViewSizePreferenceHelpers::GetViewValueSetFromSite'::`47'::LaunchUIContext::LaunchUIContext(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v5);
    *a1 = v6;
  }
  return a1;
}
