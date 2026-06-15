/*
 * XREFs of _lambda_a1b7f4c1e370eee7ceb304e65e8c3eda_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800719F0
 * Callers:
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_a1b7f4c1e370eee7ceb304e65e8c3eda___ @ 0x180071AB8 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CAp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall lambda_a1b7f4c1e370eee7ceb304e65e8c3eda_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // r14
  char v5; // di
  __int64 v6; // rbx

  v3 = *a2;
  if ( **(_DWORD **)a1 != 4 )
    return *(_DWORD *)(v3 + 16) == (*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 48LL))(**(_QWORD **)(a1 + 16))
        && *(_DWORD *)(*a2 + 8) == **(_DWORD **)(a1 + 24)
        && *(_DWORD *)(*a2 + 12) == **(_DWORD **)a1;
  v5 = 1;
  if ( CompareStringOrdinal(*(LPCWCH *)v3, -1, **(LPCWCH **)(a1 + 8), -1, 1) != 2 )
    return 0;
  v6 = *a2;
  if ( *(_DWORD *)(v6 + 16) != (*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 48LL))(**(_QWORD **)(a1 + 16)) )
    return 0;
  return v5;
}
