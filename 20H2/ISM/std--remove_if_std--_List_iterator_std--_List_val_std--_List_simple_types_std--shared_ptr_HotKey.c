/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x18019E95C
 * Callers:
 *     ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x18019F670 (-CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV-$list@V-$shared_p.c)
 * Callees:
 *     std::_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_ @ 0x180049894 (std--_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008A130 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x18019F1F8 (_lambda_139f71076f5ab0ecef881a1ffc08c112_--operator().c)
 */

_QWORD *__fastcall std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *result; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v8 = *std::_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_(&v18, a4);
  while ( a2 != a3 )
  {
    v9 = a2[3];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = a2[3];
    }
    v10 = a2[2];
    v16[1] = v9;
    v16[0] = v10;
    if ( (unsigned __int8)lambda_139f71076f5ab0ecef881a1ffc08c112_::operator()(v8, v16) )
      break;
    a2 = (_QWORD *)*a2;
  }
  v11 = a2;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v12 = (_QWORD *)*a2;
      a2 = v12;
      if ( v12 == a3 )
        break;
      v13 = v12[3];
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v13 = v12[3];
      }
      v14 = v12[2];
      v17[1] = v13;
      v17[0] = v14;
      if ( !(unsigned __int8)lambda_139f71076f5ab0ecef881a1ffc08c112_::operator()(a4, v17) )
      {
        std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
          v11 + 2,
          a2 + 2);
        v11 = (_QWORD *)*v11;
      }
    }
  }
  result = a1;
  *a1 = v11;
  return result;
}
