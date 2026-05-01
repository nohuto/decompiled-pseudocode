/*
 * XREFs of ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x1802C997C
 * Callers:
 *     ??$MakeAndInitialize@VXamlExplorerHostShellComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802C6B10 (--$MakeAndInitialize@VXamlExplorerHostShellComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18012AF84 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802C9898 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlTaskbar@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802C9FAC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??0XamlExplorerHost@@QE$AAA@XZ @ 0x1802CB288 (--0XamlExplorerHost@@QE$AAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlExplorerHostShellComponent::RuntimeClassInitialize(XamlExplorerHostShellComponent *this)
{
  void *v2; // rcx
  __int64 v3; // rbx
  const char *v4; // r9
  CImmersiveShellComponent *v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  _OWORD v10[2]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v2 = Platform::Details::Heap::Allocate(0x70uLL, 0x88uLL);
    v3 = XamlExplorerHost::XamlExplorerHost(v2);
    __abi_winrt_ptr_assign((char *)this + 224, v3);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v10[0] = GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c;
    v10[1] = 0LL;
    v5 = (XamlExplorerHostShellComponent *)((char *)this + 48);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                           v4);
  }
  v6 = CImmersiveShellComponent::RegisterServiceInformation(
         v5,
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v10,
         1LL);
  v8 = v6;
  if ( v6 >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlTaskbar>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_XamlTaskbar>::GetImpl'::`2'::impl,
      0,
      v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v6);
    return v8;
  }
}
