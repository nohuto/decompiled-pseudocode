/*
 * XREFs of ??1?$_Tidy_guard@V?$deque@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x1800C7820
 * Callers:
 *     _std::deque_unsigned___int64_std::allocator_unsigned___int64___::deque_unsigned___int64_std::allocator_unsigned___int64____::_1_::dtor$4 @ 0x1800C6D12 (_std--deque_unsigned___int64_std--allocator_unsigned___int64___--deque_unsigned___i_ea_1800C6D12.c)
 * Callees:
 *     ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x1800CD654 (-_Tidy@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Tidy_guard<std::deque<unsigned __int64>>::~_Tidy_guard<std::deque<unsigned __int64>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::deque<unsigned __int64>::_Tidy();
  return result;
}
