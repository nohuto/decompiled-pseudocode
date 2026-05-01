/*
 * XREFs of ??$GetActivationFactory@UIIconFactoryStatics@Multitasking@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIIconFactoryStatics@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180338C5C
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@5PEAUITabViewManager@@@Z @ 0x18033F7EC (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicatio.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
const WCHAR *__fastcall wil::GetActivationFactory<Windows::Internal::ComposableShell::Multitasking::IIconFactoryStatics>(
        const WCHAR *a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rdi
  __int64 v5; // rcx
  int ActivationFactory; // eax
  const WCHAR *v8[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v9; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8[2] = a1;
  v8[0] = L"Windows.Internal.ComposableShell.Multitasking.IconFactory";
  *(_QWORD *)a1 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, v8, a3);
  v5 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  ActivationFactory = RoGetActivationFactory(v4[1].Reserved.Reserved1, &GUID_1a4c7021_3fe4_548a_b661_d8f542b0ffdd, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1633LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
  return a1;
}
