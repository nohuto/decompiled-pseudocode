/*
 * XREFs of ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180214634
 * Callers:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x1802147D4 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

_OWORD *__fastcall std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  unsigned __int64 i; // rbx
  __int64 v9; // r10
  unsigned __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a3 + 8);
  for ( i = a2[1]; i != v4; a2[1] = i )
  {
    v9 = i & 1;
    v10 = a4[1];
    v11 = *(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((i >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL)));
    v12 = *(_QWORD *)(*(_QWORD *)(*a4 + 8LL) + 8 * ((v10 >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL)));
    v13 = *(_QWORD *)(v11 + 8 * v9);
    *(_QWORD *)(v11 + 8 * v9) = 0LL;
    v14 = *(_QWORD *)(v12 + 8 * (v10 & 1));
    *(_QWORD *)(v12 + 8 * (v10 & 1)) = v13;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    ++i;
    a4[1] = v10 + 1;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
