/*
 * XREFs of _std::vector_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____::_1_::catch$33 @ 0x1800D2321
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180058BB4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@w.c)
 *     _CxxThrowException_0 @ 0x180074B37 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____::_1_::catch_33(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>(
    *(__int64 **)(a2 + 120),
    *(__int64 **)(a2 + 112));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 136)));
  throw;
}
