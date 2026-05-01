/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ @ 0x18023E838
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[18]__::_1_::dtor$0 @ 0x1800AD502 (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(-)[18]__--_.c)
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$14 @ 0x180102F70 (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$14.c)
 *     _HolographicPositioner::_RaiseFrameworkViewTypeChanged_::_1_::dtor$1 @ 0x18024544F (_HolographicPositioner--_RaiseFrameworkViewTypeChanged_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$14 @ 0x1802A9FB7 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$14.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[12]__::_1_::dtor$0 @ 0x1802AF272 (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(-)[12]__--_.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_&__::_1_::dtor$0 @ 0x1802AF302 (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_-__-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::~ComPtr<ViewEventArgsForSelectTargetView>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease(a1);
}
