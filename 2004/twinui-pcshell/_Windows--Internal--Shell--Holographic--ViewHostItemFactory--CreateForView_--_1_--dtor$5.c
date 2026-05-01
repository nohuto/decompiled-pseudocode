/*
 * XREFs of _Windows::Internal::Shell::Holographic::ViewHostItemFactory::CreateForView_::_1_::dtor$5 @ 0x180257F3A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::ViewHostItemFactory::CreateForView_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<ApplicationViewBackedViewHostItem,wil::err_failfast_policy>::~com_ptr_t<ApplicationViewBackedViewHostItem,wil::err_failfast_policy>((__int64 *)(a2 + 32));
}
