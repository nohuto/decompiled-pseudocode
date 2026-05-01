/*
 * XREFs of ?erase@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UItem@AgileRegistrationList@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UItem@AgileRegistrationList@@@std@@@std@@@2@@Z @ 0x180135314
 * Callers:
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x18012FFE4 (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<AgileRegistrationList::Item>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 16;
  if ( a3 + 16 != v3 )
  {
    do
    {
      *(_DWORD *)(v4 - 16) = *(_DWORD *)v4;
      v8 = *(_QWORD *)(v4 + 8);
      *(_QWORD *)(v4 + 8) = 0LL;
      v9 = *(_QWORD *)(v4 - 8);
      *(_QWORD *)(v4 - 8) = v8;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v4 += 16LL;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(v3 - 8));
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
