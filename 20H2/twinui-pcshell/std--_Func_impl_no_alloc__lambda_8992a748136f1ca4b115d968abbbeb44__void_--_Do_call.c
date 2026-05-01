/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8992a748136f1ca4b115d968abbbeb44__void_::_Do_call @ 0x1800993E0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180046AB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_8992a748136f1ca4b115d968abbbeb44__void_::_Do_call(__int64 a1)
{
  __int64 result; // rax

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)(*(_QWORD *)(a1 + 8) + 608LL),
    0LL);
  result = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(result + 568) = 0;
  return result;
}
