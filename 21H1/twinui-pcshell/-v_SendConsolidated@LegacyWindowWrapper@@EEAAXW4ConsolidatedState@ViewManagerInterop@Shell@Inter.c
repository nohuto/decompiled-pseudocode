/*
 * XREFs of ?v_SendConsolidated@LegacyWindowWrapper@@EEAAXW4ConsolidatedState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802B9340
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyWindowWrapper::v_SendConsolidated(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 216LL))(*(_QWORD *)(a1 + 288));
  v5 = *(int *)(a1 + 304);
  if ( *(_DWORD *)(a1 + 304) )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 160LL))(
                     *(_QWORD *)(a1 + 288),
                     &v7);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, bool, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, v5, 2LL, a2 == 2, 0LL);
    return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  }
  return result;
}
