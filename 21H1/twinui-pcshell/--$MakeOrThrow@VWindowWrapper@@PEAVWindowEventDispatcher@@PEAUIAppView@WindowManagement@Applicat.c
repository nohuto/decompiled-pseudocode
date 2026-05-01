/*
 * XREFs of ??$MakeOrThrow@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@AEAPEAUIWindow@4567@AEAUWindowId@4567@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@wil@@YA?AV?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@AEAPEAUIWindow@6789@AEAUWindowId@6789@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Z @ 0x180084CB4
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180025C70 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     ??$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@AEAPEAUIWindow@4567@AEAUWindowId@4567@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowWrapper@@@12@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@AEAPEAUIWindow@6789@AEAUWindowId@6789@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Z @ 0x180084D38 (--$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@Ap_ea_180084D38.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134FD8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<WindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow * &,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const (&)[53],enum WindowCreatedType &>(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  Microsoft::WRL::Details::Make<WindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow * &,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const (&)[53],enum WindowCreatedType &>(
    (_DWORD)a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    (__int64)L"Windows.Internal.ShellExperience.TopLevelApplication",
    a10);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x38,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v11);
    JUMPOUT(0x18010FDD0LL);
  }
  return a1;
}
