/*
 * XREFs of ??1?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x18029FF40
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ViewEventDispatcher_IUnknown__::_1_::dtor$2 @ 0x18029E485 (_Microsoft--WRL--Details--MakeAndInitialize_ViewEventDispatcher_IUnknown__--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventDispatcher>::~ComPtr<ViewEventDispatcher>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(a1);
}
