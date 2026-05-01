/*
 * XREFs of ?GetColorValue@?$consume_Windows_UI_ViewManagement_IUISettings3@UUISettings@ViewManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AUColor@UI@Windows@3@AEBW4UIColorType@ViewManagement@563@@Z @ 0x1800A6660
 * Callers:
 *     ?OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800A77B0 (-OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180096214 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C9158 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::consume_Windows_UI_ViewManagement_IUISettings3<winrt::Windows::UI::ViewManagement::UISettings>::GetColorValue(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2,
        unsigned int *a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // r9
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v5 = *a1;
  v6 = 0LL;
  if ( v5 )
  {
    v9 = 0LL;
    (**v5)(v5, &winrt::impl::guid_storage<winrt::Windows::UI::ViewManagement::IUISettings3>::value, &v9);
    v6 = v9;
  }
  v10 = v6;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 48LL))(v6, *a3, a2);
  winrt::check_hresult(v7);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v10);
  return a2;
}
