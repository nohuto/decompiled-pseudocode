/*
 * XREFs of ??1?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180259478
 * Callers:
 *     _ApplicationViewBackedViewHostItem::RaiseFrameworkViewTypeSet_::_1_::dtor$0 @ 0x18025A792 (_ApplicationViewBackedViewHostItem--RaiseFrameworkViewTypeSet_--_1_--dtor$0.c)
 *     _ViewWrapperBase::OperationRequestComplete_::_1_::dtor$3 @ 0x1802D02FA (_ViewWrapperBase--OperationRequestComplete_--_1_--dtor$3.c)
 *     _wil::MakeOrThrow_ViewHandledEventArgs_bool_&__::_1_::dtor$0 @ 0x1802DC9D2 (_wil--MakeOrThrow_ViewHandledEventArgs_bool_-__--_1_--dtor$0.c)
 *     _WindowWrapperBase::OnBackComplete_::_1_::dtor$3 @ 0x1802DF524 (_WindowWrapperBase--OnBackComplete_--_1_--dtor$3.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor$0 @ 0x180341E87 (_wil--MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__--_1_--dtor$0.c)
 *     _AppViewSwitchItemZOrderSort_CreateInstance_::_1_::dtor$0 @ 0x180342B5F (_AppViewSwitchItemZOrderSort_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<FrameworkViewTypeSetEventArgs>::~ComPtr<FrameworkViewTypeSetEventArgs>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(a1);
}
