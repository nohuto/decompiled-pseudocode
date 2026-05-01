/*
 * XREFs of ??1?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x18035A3AC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_KeyboardHosting::TabTipAdapterPolicy_KeyboardHosting::TabTipAdapterPolicy__::_1_::dtor$2 @ 0x1803577C1 (_Microsoft--WRL--Details--MakeAndInitialize_KeyboardHosting--TabTipAdapterPolicy_Ke_ea_1803577C1.c)
 *     _KeyboardHosting::TabTipAdapter::TabTipAdapter_::_1_::dtor$10 @ 0x18035A01C (_KeyboardHosting--TabTipAdapter--TabTipAdapter_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::~ComPtr<KeyboardHosting::TabTipAdapterPolicy>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease(a1);
}
