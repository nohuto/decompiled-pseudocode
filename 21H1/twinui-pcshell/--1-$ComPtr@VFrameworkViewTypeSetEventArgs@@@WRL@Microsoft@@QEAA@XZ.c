/*
 * XREFs of ??1?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180237620
 * Callers:
 *     _ApplicationViewBackedViewHostItem::RaiseFrameworkViewTypeSet_::_1_::dtor$0 @ 0x1802389A2 (_ApplicationViewBackedViewHostItem--RaiseFrameworkViewTypeSet_--_1_--dtor$0.c)
 *     _ViewWrapperBase::OperationRequestComplete_::_1_::dtor$3 @ 0x1802AE75A (_ViewWrapperBase--OperationRequestComplete_--_1_--dtor$3.c)
 *     _wil::MakeOrThrow_ViewHandledEventArgs_bool_&__::_1_::dtor$0 @ 0x1802BAE32 (_wil--MakeOrThrow_ViewHandledEventArgs_bool_-__--_1_--dtor$0.c)
 *     _WindowWrapperBase::OnBackComplete_::_1_::dtor$3 @ 0x1802BD984 (_WindowWrapperBase--OnBackComplete_--_1_--dtor$3.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor$0 @ 0x1803202B7 (_wil--MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__--_1_--dtor$0.c)
 *     _AppViewSwitchItemZOrderSort_CreateInstance_::_1_::dtor$0 @ 0x180320F8F (_AppViewSwitchItemZOrderSort_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<FrameworkViewTypeSetEventArgs>::~ComPtr<FrameworkViewTypeSetEventArgs>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(a1);
}
