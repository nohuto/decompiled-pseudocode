/*
 * XREFs of ??1?$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x18035A3A0
 * Callers:
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$3 @ 0x18035A33B (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$3.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$4 @ 0x18035A34E (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_TabletModePositionerHandoffContext_TabletModePositionerHandoffContext_IAppLayout___&_bool_&__::_1_::dtor$1 @ 0x180405413 (_Microsoft--WRL--Details--MakeAndInitialize_TabletModePositionerHandoffContext_Tabl_ea_180405413.c)
 *     _TabletModePositionerHandoffContext_CreateInstance_::_1_::dtor$0 @ 0x1804056EC (_TabletModePositionerHandoffContext_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::ViewRectProvider>::~ComPtr<KeyboardHosting::ViewRectProvider>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(a1);
}
