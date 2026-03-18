/*
 * XREFs of ??A?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1802101A4
 * Callers:
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x1802102AC (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180211520 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??D?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEBAAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802101E4 (--D-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x180210220 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uerr_retu.c)
 */

__int64 __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::operator[](
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h] BYREF

  v2 = a1[3];
  v5[1] = 0LL;
  v5[2] = v2;
  v5[0] = *a1;
  v3 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::operator+(
         v5,
         &v6,
         a2);
  return std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::operator*(v3);
}
