/*
 * XREFs of ??$MakeOrThrow@VApplicationViewWrapper@@AEAPEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@AEAPEAUIApplicationView@@@Z @ 0x1803185A0
 * Callers:
 *     ?UpdateItemData@AppViewDataSourceAdapter@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18031F3D0 (-UpdateItemData@AppViewDataSourceAdapter@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multita.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012B1C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmB_ea_18012B1C0.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134FD8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ApplicationViewWrapper@@QEAA@PEAUIApplicationView@@@Z @ 0x18031999C (--0ApplicationViewWrapper@@QEAA@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<ApplicationViewWrapper,IApplicationView * &>(
        __int64 *a1,
        struct IApplicationView **a2)
{
  ApplicationViewWrapper *v4; // rax
  const char *v5; // r9
  ApplicationViewWrapper *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = (ApplicationViewWrapper *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ApplicationViewWrapper::ApplicationViewWrapper(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(*a1);
    *a1 = (__int64)v6;
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
    __debugbreak();
  }
  return a1;
}
