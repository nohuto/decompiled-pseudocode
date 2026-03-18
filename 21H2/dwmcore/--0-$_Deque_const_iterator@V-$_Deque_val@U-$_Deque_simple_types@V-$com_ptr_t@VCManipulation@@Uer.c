/*
 * XREFs of ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x180263C04
 * Callers:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180263AB4 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180263B5C (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipula.c)
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x180263E30 (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18026503C (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x180265718 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // r8

  v2 = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( *(_QWORD *)a2 )
  {
    v3 = **(__int64 ***)a2;
    if ( v3 )
      v2 = *v3;
    *a1 = v2;
  }
  a1[2] = *(_QWORD *)(a2 + 16);
  return a1;
}
