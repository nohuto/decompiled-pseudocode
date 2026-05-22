/*
 * XREFs of std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_e6b13cfb47d3ffa5cec02fcc449cf4aa___ @ 0x18019ECE4
 * Callers:
 *     _lambda_2e17bef57c72db371333aa9a3de53833_::operator() @ 0x18019F800 (_lambda_2e17bef57c72db371333aa9a3de53833_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_e6b13cfb47d3ffa5cec02fcc449cf4aa___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  volatile signed __int32 *v8; // rcx
  __int64 v9; // rdx
  bool v10; // bp
  _QWORD *result; // rax

  while ( a2 != a3 )
  {
    v8 = (volatile signed __int32 *)a2[3];
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v8 = (volatile signed __int32 *)a2[3];
    }
    v9 = a2[2];
    v10 = *(_QWORD *)a4 == *(_QWORD *)v9 && *(_DWORD *)(a4 + 8) == *(_DWORD *)(v9 + 8);
    if ( v8 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
    if ( v10 )
      break;
    a2 = (_QWORD *)*a2;
  }
  result = a1;
  *a1 = a2;
  return result;
}
