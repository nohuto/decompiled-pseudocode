/*
 * XREFs of _cshell::make_agile_vector_view_Windows::Internal::ComposableShell::ITreeNode___std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__wil::com_ptr_t_Windows::Internal::ComposableShell::ITreeNode_wil::err_exception_policy__________cshell::select_from_tuple_1____::_1_::dtor$1 @ 0x180228E6D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall cshell::make_agile_vector_view_Windows::Internal::ComposableShell::ITreeNode___std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__wil::com_ptr_t_Windows::Internal::ComposableShell::ITreeNode_wil::err_exception_policy__________cshell::select_from_tuple_1____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(*(__int64 **)(a2 + 64));
  }
  return result;
}
