/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___ @ 0x18019EEF4
 * Callers:
 *     _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x18019F6A8 (_lambda_139f71076f5ab0ecef881a1ffc08c112_--operator().c)
 * Callees:
 *     std::_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_ @ 0x18004A540 (std--_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008A590 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     _lambda_31ada6ebdd22db73722d2ce1394329de_::operator() @ 0x18019F93C (_lambda_31ada6ebdd22db73722d2ce1394329de_--operator().c)
 */

_QWORD *__fastcall std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *result; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v8 = *std::_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_(&v12, a4);
  while ( a2 != a3 && !(unsigned __int8)lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(v8, a2 + 2) )
    a2 = (_QWORD *)*a2;
  v9 = a2;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v10 = (_QWORD *)*a2;
      a2 = v10;
      if ( v10 == a3 )
        break;
      if ( !(unsigned __int8)lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(a4, v10 + 2) )
      {
        std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
          v9 + 2,
          a2 + 2);
        v9 = (_QWORD *)*v9;
      }
    }
  }
  result = a1;
  *a1 = v9;
  return result;
}
