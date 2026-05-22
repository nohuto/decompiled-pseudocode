/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___ @ 0x18019E908
 * Callers:
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801A1668 (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     std::_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_ @ 0x1800498E4 (std--_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_.c)
 *     _lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::operator() @ 0x18019F5C8 (_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_--operator().c)
 */

_QWORD *__fastcall std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *result; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v8 = *std::_Pass_fn__lambda_c6db7401cba5f9fe705df5cb0dba3b7a__0_(&v16, a4);
  while ( a2 != a3 )
  {
    v15 = a2[2];
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v15);
    if ( (unsigned __int8)lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::operator()(v8, &v15) )
      break;
    a2 = (_QWORD *)*a2;
  }
  v9 = a2;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v10 = (_QWORD *)*a2;
      a2 = v10;
      if ( v10 == a3 )
        break;
      v11 = v10 + 2;
      v15 = v10[2];
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v15);
      if ( !(unsigned __int8)lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::operator()(a4, &v15) )
      {
        if ( &v15 == v11 )
        {
          v12 = 0LL;
        }
        else
        {
          v12 = *v11;
          *v11 = 0LL;
        }
        v13 = v9[2];
        v9[2] = v12;
        v15 = v13;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
        v9 = (_QWORD *)*v9;
      }
    }
  }
  result = a1;
  *a1 = v9;
  return result;
}
